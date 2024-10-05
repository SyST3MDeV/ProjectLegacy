#include "SDK.h"

#include <thread>
#include <iostream>
#include <format>
#include <fstream>

#include "MinHook/include/MinHook.h"
#include "json/json.h"

#pragma comment(lib, "MinHook/lib/libMinHook-x64-v141-mt.lib")

using namespace CG;

namespace SDKUtils {
    template <typename T>
    std::vector<T*> GetAllObjectsOfType() {
        return UObject::FindObjects<T>();
    }

    template <typename T>
    T* GetLastOfType() {
        return UObject::FindObjects<T>().back();
    }

    template <typename T>
    void ListAllObjectsOfType() {
        for (T* obj : GetAllObjectsOfType<T>()) {
            UObject* castObj = reinterpret_cast<UObject*>(obj);

            std::cout << castObj->GetFullName() << std::endl;
        }
    }
}

namespace Globals {
    uintptr_t ModuleBase = 0;

    UWorld* GetGWorld() {
        return *UWorld::GWorld;
    }

    UGameplayStatics* GetGameplayStatics() {
        static UGameplayStatics* gameplayStatics = nullptr;

        if (!gameplayStatics) {
            gameplayStatics = UObject::FindObject<UGameplayStatics>();
        }

        return gameplayStatics;
    }

    UKismetStringLibrary* GetKismetStringLibrary() {
        static UKismetStringLibrary* kismetStringLibrary = nullptr;

        if (!kismetStringLibrary) {
            kismetStringLibrary = UObject::FindObject<UKismetStringLibrary>();
        }

        return kismetStringLibrary;
    }

    UEngine* GetEngine() {
        static UEngine* engine = nullptr;

        if (!engine) {
            engine = SDKUtils::GetLastOfType<UEngine>();
        }

        return engine;
    }

    template <typename T>
    T* GetLocalPlayerController() {
        return reinterpret_cast<T*>(GetGWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController);
    }

    template <typename T>
    T* GetLocalPlayerState() {
        return reinterpret_cast<T*>(GetGWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerState);
    }

    template <typename T>
    T* GetGameMode() {
        return reinterpret_cast<T*>(GetGWorld()->AuthorityGameMode);
    }

    template <typename T>
    T* GetGameState() {
        return reinterpret_cast<T*>(GetGWorld()->AuthorityGameMode->GameState);
    }
}

namespace EngineLogic {
    void EnableGameConsole() {
        CG::UKismetStringLibrary* stringLibrary = UObject::FindObjects<CG::UKismetStringLibrary>().back();
        CG::UEngine* engine = UObject::FindObjects<CG::UEngine>().back();
        CG::UInputSettings* inputSettings = UObject::FindObjects<CG::UInputSettings>().back();
        CG::UGameplayStatics* gameplayStatics = UObject::FindObjects<CG::UGameplayStatics>().back();

        inputSettings->ConsoleKeys[0].KeyName = stringLibrary->STATIC_Conv_StringToName(L"F2");

        CG::UObject* NewObject = gameplayStatics->STATIC_SpawnObject(engine->ConsoleClass, engine->GameViewport);

        engine->GameViewport->ViewportConsole = reinterpret_cast<CG::UConsole*>(NewObject);
    }

    void ExecuteConsoleCommand(const wchar_t* cmd) {
        static UKismetSystemLibrary* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UKismetSystemLibrary>();
        }

        systemLibrary->STATIC_ExecuteConsoleCommand(Globals::GetGWorld(), cmd, Globals::GetLocalPlayerController<APlayerController>());
    }

    void ConnectToMatch(const wchar_t* ip) {
        static UGameplayStatics* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UGameplayStatics>();
        }

        static UKismetStringLibrary* kismetStringLibrary = nullptr;

        if (!kismetStringLibrary) {
            kismetStringLibrary = UObject::FindObject<UKismetStringLibrary>();
        }

        systemLibrary->STATIC_OpenLevel(Globals::GetGWorld(), kismetStringLibrary->STATIC_Conv_StringToName(ip), true, FString());
    }

    void* Malloc(__int64 size, unsigned int alignment) {
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + 0xDFB9F0)(size, alignment);
    }
}

namespace GameLogic {
    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + 0x7DDBC0)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
    }

    void HideLoadingScreen() {
        EngineLogic::ExecuteConsoleCommand(L"hideloadingscreen");
    }
}

namespace Hooking {
    bool procingCurrentFuncPtrs = false;

    std::vector<void*> FuncPtrsToProcInGameThread = std::vector<void*>();

    void ProcInGameThread(void* ptr) {
        FuncPtrsToProcInGameThread.push_back(ptr);
    }

    void* origProcessEvent = nullptr;

    void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
        if (!procingCurrentFuncPtrs && FuncPtrsToProcInGameThread.size() > 0) {
            procingCurrentFuncPtrs = true;

            while (FuncPtrsToProcInGameThread.size() > 0) {
                void* funcPtr = FuncPtrsToProcInGameThread.back();

                reinterpret_cast<void(*)()>(funcPtr)();

                FuncPtrsToProcInGameThread.pop_back();
            }

            procingCurrentFuncPtrs = false;
        }

        //if (object->GetFullName().find("Targeting") != std::string::npos || function->GetFullName().find("Targeting") != std::string::npos) {
            //std::cout << object->GetFullName() << " - " << function->GetFullName() << std::endl;
        //}

        if ((object->GetFullName().find("Targeting") != std::string::npos || function->GetFullName().find("Targeting") != std::string::npos) && function->GetFullName().find("Confirm") != std::string::npos) {
            if (Globals::GetLocalPlayerState<AOrionPlayerState_Game>()->IsA(AOrionPlayerState_Game::StaticClass())) {
                if (Globals::GetLocalPlayerState<AOrionPlayerState_Game>()->AbilitySystemComponent) {
                    AOrionTargetingMode* castObj = (AOrionTargetingMode*)object;

                    //void* ret = reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);

                    //reinterpret_cast<void(*)(UOrionAbilityTask_StartTargeting*)>(Globals::ModuleBase + 0x2975F0)(SDKUtils::GetLastOfType< UOrionAbilityTask_StartTargeting>());

                    /*
                    for (UOrionAbilityTask_StartTargeting* target : UObject::FindObjects< UOrionAbilityTask_StartTargeting>()) {
                        if(target->GetFullName().find("Default") == std::string::npos)
                            reinterpret_cast<void(*)(UOrionAbilityTask_StartTargeting*)>(Globals::ModuleBase + 0x2975F0)(target);
                    }
                    */

                    castObj->OnTargetingModeActivate();

                    Globals::GetLocalPlayerState<AOrionPlayerState_Game>()->AbilitySystemComponent->ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle(), false, FPredictionKey(), FGameplayEventData());

                    //return ret;
                }
            }
        }

        return reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);
    }

    void* origInitializeMCPProfile = nullptr;

    bool initUI = false;

    bool InitializeMCPProfileHook(APlayerControllerCommon* playercontroller) {
        if (!initUI) {
            initUI = true;
            GameLogic::SetUIState(EOrionUIState::Match);
        }
        return true;
    }

    void* origReturnToMainMenu = nullptr;

    void ReturnToMainMenuHook() {
        return;
    }
    
    void* origIsPakAllowed = nullptr;

    bool IsPakAllowedHook() {
        return true;
    }

    void* origIsTargetingValid = nullptr;

    bool TargetingValidHook(void* a1) {
        return true;
    }

    void* origIsCardInDeck = nullptr;
    bool IsCardInDeckHook(FOrionLinkedCardsArray* a1, FOrionCardInstance* a2) {
        return true;
    }

    void* origIsCardInDeck2 = nullptr;
    bool IsCardInDeck2Hook(FOrionLinkedCards* a1, FOrionCardInstance* a2) {
        return true;
    }

    void* origAutobuyToggled = nullptr;
    void AutobuyToggledHook(UOrionCardShopWidget* widget) {
        reinterpret_cast<void(*)(UOrionCardShopWidget*, bool)>(Globals::ModuleBase + 0x73E740)(widget, 1);
    }

    void* origAutobuyToggled2 = nullptr;
    void AutobuyToggled2Hook(UOrionCardShopWidget* widget) {
        reinterpret_cast<void(*)(UOrionCardShopWidget*, bool)>(Globals::ModuleBase + 0x73E740)(widget, 0);
    }

    void* origSetControllerConfigIndex = nullptr;
    void SetControllerConfigIndexHook(UClientSettingsRecord* settings, APlayerController* pc, int index) {
        if (index == 0) {
            EngineLogic::ExecuteConsoleCommand(L"gpad.ConfigIndex 0");
        }
        else if (index == 1) {
            EngineLogic::ExecuteConsoleCommand(L"gpad.ConfigIndex 1");
        }
        else if (index == 2) {
            EngineLogic::ExecuteConsoleCommand(L"gpad.ConfigIndex 2");
        }
    }

    void* origFillAccountLevelData = nullptr;
    void FillAccountDataHook(UPostGameContext* a1) {

    }

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + 0xFB3420);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);

        void* initMCPProfile = (void*)(Globals::ModuleBase + 0x63F780);

        MH_CreateHook(initMCPProfile, reinterpret_cast<void*>(InitializeMCPProfileHook), &origInitializeMCPProfile);

        MH_EnableHook(initMCPProfile);

        void* returnToMainMenu = (void*)(Globals::ModuleBase + 0x6319C0);

        MH_CreateHook(returnToMainMenu, reinterpret_cast<void*>(ReturnToMainMenuHook), &origReturnToMainMenu);

        MH_EnableHook(returnToMainMenu);

        void* isPakAllowed = (void*)(Globals::ModuleBase + 0x22B1290);

        MH_CreateHook(isPakAllowed, reinterpret_cast<void*>(IsPakAllowedHook), &origIsPakAllowed);

        //MH_EnableHook(isPakAllowed);

        void* targetingValid = (void*)(Globals::ModuleBase + 0x26DE70);

        MH_CreateHook(targetingValid, reinterpret_cast<void*>(TargetingValidHook), &origIsTargetingValid);

        //MH_EnableHook(targetingValid);

        void* isCardInDeck = (void*)(Globals::ModuleBase + 0x4B8060);

        MH_CreateHook(isCardInDeck, reinterpret_cast<void*>(IsCardInDeckHook), &origIsCardInDeck);

        MH_EnableHook(isCardInDeck);

        void* isCardInDeck2 = (void*)(Globals::ModuleBase + 0x4B81B0);

        MH_CreateHook(isCardInDeck2, reinterpret_cast<void*>(IsCardInDeck2Hook), &origIsCardInDeck2);

        MH_EnableHook(isCardInDeck2);

        void* autobuyToggled = (void*)(Globals::ModuleBase + 0x7184F0);

        MH_CreateHook(autobuyToggled, reinterpret_cast<void*>(AutobuyToggledHook), &origAutobuyToggled);

        MH_EnableHook(autobuyToggled);

        void* autobuyToggled2 = (void*)(Globals::ModuleBase + 0x7181C0);

        MH_CreateHook(autobuyToggled2, reinterpret_cast<void*>(AutobuyToggled2Hook), &origAutobuyToggled2);

        MH_EnableHook(autobuyToggled2);

        void* setControllerConfigIndex = (void*)(Globals::ModuleBase + 0x441B00);

        MH_CreateHook(setControllerConfigIndex, reinterpret_cast<void*>(SetControllerConfigIndexHook), &origSetControllerConfigIndex);

        MH_EnableHook(setControllerConfigIndex);

        void* fillAccountData = (void*)(Globals::ModuleBase + 0x2B82C70);

        MH_CreateHook(fillAccountData, reinterpret_cast<void*>(FillAccountDataHook), &origFillAccountLevelData);

        MH_EnableHook(fillAccountData);

        //441B00

        //7181C0

        //7184F0
    }
}

void InitConsole() {
    AllocConsole();
    FILE* f = new FILE();
    freopen_s(&f, "CONOUT$", "w", stdout);
}

void ConnectToMatch() {
    std::ifstream config("config.json");
    std::stringstream sstream;
    std::string configString;

    sstream << config.rdbuf();

    configString = sstream.str();

    Json::Value configValue = Json::Value();

    Json::Reader reader = Json::Reader();

    reader.parse(configString, configValue);

    std::string nwIp(configValue["ip"].asString());

    std::wstring ip(nwIp.begin(), nwIp.end());

    std::string nwDisplayName(configValue["displayname"].asString());

    std::wstring displayname(nwDisplayName.begin(), nwDisplayName.end());

    std::string nwHero(configValue["hero"].asString());

    std::wstring hero(nwHero.begin(), nwHero.end());

    std::string nwTeam(configValue["team"].asString());

    std::wstring team(nwTeam.begin(), nwTeam.end());

    std::wstring baseCmd(L"open ");
    std::wstring finalCmd = baseCmd.append(ip).append(L"?displayname=").append(displayname).append(L"?hero=").append(hero).append(L"?team=").append(team);

    EngineLogic::ExecuteConsoleCommand(finalCmd.c_str());
}

void OnGameInit() {
    //std::cout << "Enabling game console..." << std::endl;
    //EngineLogic::EnableGameConsole();
    Hooking::ProcInGameThread(ConnectToMatch);
}

void FixAbilities() {
    //reinterpret_cast<void(*)(UOrionAbilitySystemGlobals*)>(Globals::ModuleBase + 0x26C720)(SDKUtils::GetLastOfType< UOrionAbilitySystemGlobals>());

    SDKUtils::ListAllObjectsOfType< UGameplayEffect>();
}

void MainLoop() {
    while (!GetAsyncKeyState(VK_F7)) {

    }

    Hooking::ProcInGameThread(FixAbilities);

    while (GetAsyncKeyState(VK_F7)) {

    }
}

void Main() {
    CG::InitSdk();

    InitConsole();

    Globals::ModuleBase = (uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe");

    Hooking::InitHooking();

    OnGameInit();

    while (true) {
        //MainLoop();
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(Main);

        t.detach();
    }
}