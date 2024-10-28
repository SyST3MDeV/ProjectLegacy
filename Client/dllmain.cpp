#ifdef v34
#include "SDK.h"
#endif

#ifdef v45
#include "SDKv45.hpp"
#include "SDKv45/GameplayAbilities_parameters.hpp"
#endif

#include <thread>
#include <iostream>
#include <format>
#include <fstream>

#include "MinHook/include/MinHook.h"
#include "json/json.h"

#pragma comment(lib, "MinHook/lib/libMinHook-x64-v141-mt.lib")

#ifdef v34
using namespace CG;
#endif

#ifdef v45
using namespace SDK;
#endif

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

namespace PLOffsets {
#ifdef v34
    //Core Engine Offsets
    static const uintptr_t MALLOC = 0xDFB9F0;
    static const uintptr_t FREE = 0xDEEA90;

    //Core Game Offsets
    static const uintptr_t SET_UI_STATE = 0x7DDBC0;
    static const uintptr_t ROUTE_GAMEPLAY_CUE = 0x4C7F70;
    
    //Card System Offsets
    static const uintptr_t SET_AUTOBUY_CHECKBOX = 0x73E740;

    //Hooking Offsets
    static const uintptr_t PROCESSEVENT = 0xFB3420;
    static const uintptr_t INIT_MCP_PROFILE = 0x63F780;
    static const uintptr_t RETURN_TO_MENU = 0x6319C0;
    static const uintptr_t IS_CARD_IN_DECK = 0x4B8060;
    static const uintptr_t IS_CARD_IN_DECK_2 = 0x4B81B0;
    static const uintptr_t AUTOBUY_TOGGLED = 0x7184F0;
    static const uintptr_t AUTOBUY_TOGGLED_2 = 0x7181C0;
    static const uintptr_t SET_CONTROLLER_CONFIG_INDEX = 0x441B00;
    static const uintptr_t FILL_ACCOUNT_DATA = 0x2B82C70;
    static const uintptr_t CARD_CRASH = 0x412370;
    static const uintptr_t HANDLE_AUTO_OPEN_CLICKED = 0x718820;
#endif

#ifdef v45
    //Core Engine Offsets
    static const uintptr_t MALLOC = 0xBD2AE0;

    //Core Game Offsets
    static const uintptr_t SET_UI_STATE = 0x9D2030;
    static const uintptr_t ROUTE_GAMEPLAY_CUE = 0x6BF710;

    //Hooking Offsets
    static const uintptr_t PROCESSEVENT = 0xEA1BD0;
    static const uintptr_t INIT_MCP_PROFILE = 0x8D35C0;
    static const uintptr_t RETURN_TO_MENU = 0x8C4130;
    static const uintptr_t BROWSE = 0x2328790;
    static const uintptr_t UI_STATE_HOOK = 0x9d2030;
#endif
}

namespace Globals {
    __int64 UIManager = 0;

    uintptr_t ModuleBase = 0;

    UWorld* GetGWorld() {
#ifdef v34
        return *UWorld::GWorld;
#endif

#ifdef v45
        return UWorld::GetWorld();
#endif
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
        UKismetStringLibrary* stringLibrary = UObject::FindObjects<UKismetStringLibrary>().back();
        UEngine* engine = UObject::FindObjects<UEngine>().back();
        UInputSettings* inputSettings = UObject::FindObjects<UInputSettings>().back();
        UGameplayStatics* gameplayStatics = UObject::FindObjects<UGameplayStatics>().back();

#ifdef v34
        inputSettings->ConsoleKeys[0].KeyName = stringLibrary->STATIC_Conv_StringToName(L"F2");

        UObject* NewObject = gameplayStatics->STATIC_SpawnObject(engine->ConsoleClass, engine->GameViewport);
#endif

#ifdef v45
        inputSettings->ConsoleKeys[0].KeyName = stringLibrary->Conv_StringToName(L"F2");

        UObject* NewObject = gameplayStatics->SpawnObject(engine->ConsoleClass, engine->GameViewport);
#endif

        engine->GameViewport->ViewportConsole = reinterpret_cast<UConsole*>(NewObject);
    }

    void ExecuteConsoleCommand(const wchar_t* cmd) {
        static UKismetSystemLibrary* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UKismetSystemLibrary>();
        }

#ifdef v34
        systemLibrary->STATIC_ExecuteConsoleCommand(Globals::GetGWorld(), cmd, Globals::GetLocalPlayerController<APlayerController>());
#endif

#ifdef v45
        systemLibrary->ExecuteConsoleCommand(Globals::GetGWorld(), cmd, Globals::GetLocalPlayerController<APlayerController>());
#endif
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

#ifdef v34
        systemLibrary->STATIC_OpenLevel(Globals::GetGWorld(), kismetStringLibrary->STATIC_Conv_StringToName(ip), true, FString());
#endif

#ifdef v45
        systemLibrary->OpenLevel(Globals::GetGWorld(), kismetStringLibrary->Conv_StringToName(ip), true, FString());
#endif
    }

    void* Malloc(__int64 size, unsigned int alignment) {
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + PLOffsets::MALLOC)(size, alignment);
    }
}

namespace GameLogic {
    void SetUIState(EOrionUIState state) {
#ifdef v45
        //SDKUtils::ListAllObjectsOfType<UOrionUIStateManager>();
        //
        std::cout << Globals::UIManager << std::endl;
        reinterpret_cast<void(__thiscall*)(__int64, EOrionUIState)>(Globals::ModuleBase + PLOffsets::UI_STATE_HOOK)(Globals::UIManager, state);
        //reinterpret_cast<void(__thiscall*)(UOrionUIStateManager*, EOrionUIState)>(Globals::ModuleBase + PLOffsets::SET_UI_STATE)(SDKUtils::GetLastOfType<UOrionUIStateManager>(), state); //reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager->StateManager
#endif

#ifdef v34
#endif
    }

    void HideLoadingScreen() {
#ifdef v34
        EngineLogic::ExecuteConsoleCommand(L"hideloadingscreen");
#endif

#ifdef v45
        for (UOrionUIManagerWidget* uiManager: SDKUtils::GetAllObjectsOfType< UOrionUIManagerWidget>()) {
            uiManager->HideLoadingScreen(Globals::GetGWorld());
        }
        //SDKUtils::ListAllObjectsOfType< UOrionUIManagerWidget>();
        //SDKUtils::GetLastOfType< UOrionUIManagerWidget>()->HideLoadingScreen(Globals::GetGWorld());
#endif
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

        static UFunction* gameplayCueFunc = nullptr;

        if(!gameplayCueFunc)
            gameplayCueFunc = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");

        //if (object->GetFullName().find("Targeting") != std::string::npos || function->GetFullName().find("Targeting") != std::string::npos) {
            //std::cout << object->GetFullName() << " - " << function->GetFullName() << std::endl;
        //}

        if (function == gameplayCueFunc) {
#ifdef v34
            UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params* castParams = reinterpret_cast<UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params*>(params);
#endif

#ifdef v45
            
            Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams* castParams = reinterpret_cast<Params::AbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams*>(params);
#endif

            if (castParams->PredictionKey.Current == INT16_MAX || castParams->PredictionKey.Base == INT16_MAX) {
                static UGameplayCueManager* gcManager = nullptr;

                if (!gcManager)
                    gcManager = SDKUtils::GetLastOfType<UGameplayCueManager>();

                AActor* targetActor = ((UOrionAbilitySystemComponent*)object)->AvatarActor;

                FGameplayTag tag = FGameplayTag();

#ifdef v34
                tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");
#endif

#ifdef v45
                tag.TagName = Globals::GetKismetStringLibrary()->Conv_StringToName(L"GameplayCue_Damage");
#endif

                castParams->GameplayCueParameters.OriginalTag = tag;
                castParams->GameplayCueParameters.MatchedTagName = tag;

                if (targetActor && gcManager) {
                    reinterpret_cast<void(*)(UGameplayCueManager*, AActor*, FGameplayTag, EGameplayCueEvent, FGameplayCueParameters*)>(Globals::ModuleBase + PLOffsets::ROUTE_GAMEPLAY_CUE)(gcManager, targetActor, tag, EGameplayCueEvent::Executed, &castParams->GameplayCueParameters);
                }
            }
            else if (castParams->PredictionKey.Current == INT16_MAX - 1|| castParams->PredictionKey.Base == INT16_MAX - 1) {
                static UGameplayCueManager* gcManager = nullptr;

                if (!gcManager)
                    gcManager = SDKUtils::GetLastOfType<UGameplayCueManager>();

                AActor* targetActor = ((UOrionAbilitySystemComponent*)object)->AvatarActor;

                FGameplayTag tag = FGameplayTag();

#ifdef v34
                tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");
#endif

#ifdef v45
                tag.TagName = Globals::GetKismetStringLibrary()->Conv_StringToName(L"GameplayCue_Damage");
#endif

                castParams->GameplayCueParameters.OriginalTag = tag;
                castParams->GameplayCueParameters.MatchedTagName = tag;
                
                if (targetActor && gcManager) {
                    reinterpret_cast<void(*)(UGameplayCueManager*, AActor*, FGameplayTag, EGameplayCueEvent, FGameplayCueParameters*)>(Globals::ModuleBase + PLOffsets::ROUTE_GAMEPLAY_CUE)(gcManager, targetActor, tag, EGameplayCueEvent::Executed, &castParams->GameplayCueParameters);
                }
            }
        }

        if (function->GetFullName().find("ReturnToMainMenu") != std::string::npos) {
            for (int i = 0; i < 20; i++) {
                std::cout << "STUBBED RETURN TO MAIN MENU" << std::endl;
            }
            return nullptr;
        }

        if ((object->GetFullName().find("Targeting") != std::string::npos || function->GetFullName().find("Targeting") != std::string::npos) && function->GetFullName().find("Confirm") != std::string::npos) {
            if (Globals::GetLocalPlayerState<AOrionPlayerState_Game>()->IsA(AOrionPlayerState_Game::StaticClass())) {
                if (Globals::GetLocalPlayerState<AOrionPlayerState_Game>()->AbilitySystemComponent) {
#ifdef v34
                    AOrionTargetingMode* castObj = (AOrionTargetingMode*)object;
#endif

#ifdef v45
                    AOrionTargetingMode_Base* castObj = (AOrionTargetingMode_Base*)object;
#endif
                    //void* ret = reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);

                    //reinterpret_cast<void(*)(UOrionAbilityTask_StartTargeting*)>(Globals::ModuleBase + 0x2975F0)(SDKUtils::GetLastOfType< UOrionAbilityTask_StartTargeting>());

                    /*
                    for (UOrionAbilityTask_StartTargeting* target : UObject::FindObjects< UOrionAbilityTask_StartTargeting>()) {
                        if(target->GetFullName().find("Default") == std::string::npos)
                            reinterpret_cast<void(*)(UOrionAbilityTask_StartTargeting*)>(Globals::ModuleBase + 0x2975F0)(target);
                    }
                    */

                    //castObj->OnTargetingModeActivate();

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
            //GameLogic::SetUIState(EOrionUIState::Match);
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

#ifdef v34
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
        reinterpret_cast<void(*)(UOrionCardShopWidget*, bool)>(Globals::ModuleBase + PLOffsets::SET_AUTOBUY_CHECKBOX)(widget, 1);
    }

    void* origAutobuyToggled2 = nullptr;
    void AutobuyToggled2Hook(UOrionCardShopWidget* widget) {
        reinterpret_cast<void(*)(UOrionCardShopWidget*, bool)>(Globals::ModuleBase + PLOffsets::SET_AUTOBUY_CHECKBOX)(widget, 0);
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

    void* origCardCrashyThingy = nullptr;
    bool CardCrashyThingyHook(UOrionAttributeView* a1,
        UOrionAbilitySystemComponent* a2,
        const FOrionPlayerHandArray* a3,
        int a4,
        const FOrionCardInstance* a5) {
        return true;
    }

    void* origAutoOpenClicked = nullptr;
    __int64 HandleAutoOpenClicked(UOrionCardShopWidget* a1) {
        return 0;
    }
#endif

#ifdef v45
    //EBrowseReturnVal::Type UEngine::Browse( FWorldContext& WorldContext, FURL URL, FString& Error )
    void* origBrowse = nullptr;
    __int64 UEngineBrowseHook(void* UEngine, void* WorldContext, FURL& URL, FString& Error) {
        for (FString op: URL.Op) {
            if (op.ToString().find("closed") != std::string::npos) {
                //std::cout << "Prevented Browse!" << std::endl;
                return 0;
            }
        }

        return reinterpret_cast<__int64(*)(void*, void*, FURL&, FString&)>(origBrowse)(UEngine, WorldContext, URL, Error);
    }

    void* origSetUIState = 0;

    bool SetUIStateHook(__int64 manager, EOrionUIState state) {
        Globals::UIManager = manager;

        std::cout << "CHANGING UI STATE" << std::endl;

        std::cout << (int)state << std::endl;

        std::cout << "CHANGED UI STATE" << std::endl;
        if (state == EOrionUIState::Invalid) {
            static int numTimesChanged = 0;

            if (numTimesChanged == 0) {
                state = EOrionUIState::InitialPreload;
            }
            else {
                return true;
            }

            numTimesChanged++;
        }

        /*
        static int numZeroStateChanges = 0;

        if (state == EOrionUIState::Invalid) {
            numZeroStateChanges++;
        }

        if (numZeroStateChanges == 20) {
            std::cout << "SWITCHING UI STATE NOW" << std::endl;
            state = EOrionUIState::Match;
        }

        if (numZeroStateChanges > 20) {
            return true;
        }
        */

        return reinterpret_cast<bool(*)(__int64, EOrionUIState)>(origSetUIState)(manager, state);
    }

#endif

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + PLOffsets::PROCESSEVENT);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);

        void* initMCPProfile = (void*)(Globals::ModuleBase + PLOffsets::INIT_MCP_PROFILE);

        MH_CreateHook(initMCPProfile, reinterpret_cast<void*>(InitializeMCPProfileHook), &origInitializeMCPProfile);

        MH_EnableHook(initMCPProfile);

        void* returnToMainMenu = (void*)(Globals::ModuleBase + PLOffsets::RETURN_TO_MENU);

        MH_CreateHook(returnToMainMenu, reinterpret_cast<void*>(ReturnToMainMenuHook), &origReturnToMainMenu);

        MH_EnableHook(returnToMainMenu);

        //

#ifdef v45
        void* browseHook = (void*)(Globals::ModuleBase + PLOffsets::BROWSE);

        MH_CreateHook(browseHook, reinterpret_cast<void*>(UEngineBrowseHook), &origBrowse);

        //MH_EnableHook(browseHook);

        void* setUIState = (void*)(Globals::ModuleBase + PLOffsets::UI_STATE_HOOK);

        MH_CreateHook(setUIState, reinterpret_cast<void*>(SetUIStateHook), &origSetUIState);

        MH_EnableHook(setUIState);
#endif

#ifdef v34
        void* isCardInDeck = (void*)(Globals::ModuleBase + PLOffsets::IS_CARD_IN_DECK);

        MH_CreateHook(isCardInDeck, reinterpret_cast<void*>(IsCardInDeckHook), &origIsCardInDeck);

        MH_EnableHook(isCardInDeck);

        void* isCardInDeck2 = (void*)(Globals::ModuleBase + PLOffsets::IS_CARD_IN_DECK_2);

        MH_CreateHook(isCardInDeck2, reinterpret_cast<void*>(IsCardInDeck2Hook), &origIsCardInDeck2);

        MH_EnableHook(isCardInDeck2);

        void* autobuyToggled = (void*)(Globals::ModuleBase + PLOffsets::AUTOBUY_TOGGLED);

        MH_CreateHook(autobuyToggled, reinterpret_cast<void*>(AutobuyToggledHook), &origAutobuyToggled);

        MH_EnableHook(autobuyToggled);

        void* autobuyToggled2 = (void*)(Globals::ModuleBase + PLOffsets::AUTOBUY_TOGGLED_2);

        MH_CreateHook(autobuyToggled2, reinterpret_cast<void*>(AutobuyToggled2Hook), &origAutobuyToggled2);

        MH_EnableHook(autobuyToggled2);

        void* setControllerConfigIndex = (void*)(Globals::ModuleBase + PLOffsets::SET_CONTROLLER_CONFIG_INDEX);

        MH_CreateHook(setControllerConfigIndex, reinterpret_cast<void*>(SetControllerConfigIndexHook), &origSetControllerConfigIndex);

        MH_EnableHook(setControllerConfigIndex);

        void* fillAccountData = (void*)(Globals::ModuleBase + PLOffsets::CARD_CRASH);

        MH_CreateHook(fillAccountData, reinterpret_cast<void*>(FillAccountDataHook), &origFillAccountLevelData);

        MH_EnableHook(fillAccountData);

        void* cardCrashyThingy = (void*)(Globals::ModuleBase + PLOffsets::CARD_CRASH);

        MH_CreateHook(cardCrashyThingy, reinterpret_cast<void*>(CardCrashyThingyHook), &origCardCrashyThingy);

        MH_EnableHook(cardCrashyThingy);

        void* autoOpenClicked = (void*)(Globals::ModuleBase + PLOffsets::HANDLE_AUTO_OPEN_CLICKED);

        MH_CreateHook(autoOpenClicked, reinterpret_cast<void*>(HandleAutoOpenClicked), &origAutoOpenClicked);

        MH_EnableHook(autoOpenClicked);
#endif

        //718820

        //0x412370

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

void SetUIToInGame() {
    GameLogic::SetUIState(EOrionUIState::Match);
}

void MainLoop() {
    while (!GetAsyncKeyState(VK_F6)) {

    }

    Hooking::ProcInGameThread(SetUIToInGame);

    while (GetAsyncKeyState(VK_F6)) {

    }
}

void Main() {
#ifdef v34
    CG::InitSdk();
#endif

    InitConsole();

    Globals::ModuleBase = (uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe");

    Hooking::InitHooking();

    OnGameInit();

    while (true) {
        MainLoop();
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