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

namespace Offsets {
#ifdef v34
    //Core Engine Offsets
    static const uintptr_t MALLOC = 0xDFB9F0;
    static const uintptr_t FREE = 0xDEEA90;

    //Core Game Offsets
    static const uintptr_t SET_UI_STATE = 0x7DDBC0;
    
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
    static const uintptr_t QUERY_UNREDEEMED_FRIEND_CODES = 0x2B97490;
    static const uintptr_t IS_LOGGED_IN = 0x640A80;
    static const uintptr_t UPDATE_COMPLETE = 0x434660;
    static const uintptr_t SET_PLAYER_VETERANCY = 0x918EA0;
    static const uintptr_t PLAYROOT_UPDATE = 0x8293C0;
    static const uintptr_t SHOULD_SHOW_NEW_USER_VIDEO = 0x8909B0;
    static const uintptr_t SHOW_VETERANCY_SURVEY = 0x891860;
#endif
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
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + Offsets::MALLOC)(size, alignment);
    }
}

namespace GameLogic {
    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + Offsets::SET_UI_STATE)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
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

        static UFunction* gameplayCueFunc = nullptr;

        if(!gameplayCueFunc)
            gameplayCueFunc = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");

        //if (object->GetFullName().find("Targeting") != std::string::npos || function->GetFullName().find("Targeting") != std::string::npos) {
            //std::cout << object->GetFullName() << " - " << function->GetFullName() << std::endl;
        //}

        if (function == gameplayCueFunc) {
            UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params* castParams = reinterpret_cast<UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params*>(params);

            if (castParams->PredictionKey.Current == INT16_MAX || castParams->PredictionKey.Base == INT16_MAX) {
                static UGameplayCueManager* gcManager = nullptr;

                if (!gcManager)
                    gcManager = SDKUtils::GetLastOfType<UGameplayCueManager>();

                AActor* targetActor = ((UOrionAbilitySystemComponent*)object)->AvatarActor;

                FGameplayTag tag = FGameplayTag();

                tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");

                castParams->GameplayCueParameters.OriginalTag = tag;
                castParams->GameplayCueParameters.MatchedTagName = tag;

                if (targetActor && gcManager) {
                    reinterpret_cast<void(*)(UGameplayCueManager*, AActor*, FGameplayTag, EGameplayCueEvent, FGameplayCueParameters*)>(Globals::ModuleBase + 0x4C7F70)(gcManager, targetActor, tag, EGameplayCueEvent::Executed, &castParams->GameplayCueParameters);
                }
            }
            else if (castParams->PredictionKey.Current == INT16_MAX - 1|| castParams->PredictionKey.Base == INT16_MAX - 1) {
                static UGameplayCueManager* gcManager = nullptr;

                if (!gcManager)
                    gcManager = SDKUtils::GetLastOfType<UGameplayCueManager>();

                AActor* targetActor = ((UOrionAbilitySystemComponent*)object)->AvatarActor;

                FGameplayTag tag = FGameplayTag();

                tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");

                castParams->GameplayCueParameters.OriginalTag = tag;
                castParams->GameplayCueParameters.MatchedTagName = tag;
                
                if (targetActor && gcManager) {
                    reinterpret_cast<void(*)(UGameplayCueManager*, AActor*, FGameplayTag, EGameplayCueEvent, FGameplayCueParameters*)>(Globals::ModuleBase + 0x4C7F70)(gcManager, targetActor, tag, EGameplayCueEvent::Executed, &castParams->GameplayCueParameters);
                }
            }
        }

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
        reinterpret_cast<void(*)(UOrionCardShopWidget*, bool)>(Globals::ModuleBase + Offsets::SET_AUTOBUY_CHECKBOX)(widget, 1);
    }

    void* origAutobuyToggled2 = nullptr;
    void AutobuyToggled2Hook(UOrionCardShopWidget* widget) {
        reinterpret_cast<void(*)(UOrionCardShopWidget*, bool)>(Globals::ModuleBase + Offsets::SET_AUTOBUY_CHECKBOX)(widget, 0);
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

    void* origQueryUnredeemedFriendCodes = nullptr;
    __int8* QueryUnredeemedFriendCodes(UMcpContext* ctx) {
        return nullptr;
    }

    void* origIsLoggedIn = nullptr;
    bool IsLoggedIn(UOrionLocalPlayer* a1) {
        return true;
    }

    void* origUpdateInProgress = nullptr;
    bool UpdateInProgress(UOrionGameInstance* a1) {
        *((__int64*)a1 + 0x30) = 0x0;
        return false;
    }

    void* origSetPlayerVeterancy = nullptr;
    __int64 SetPlayerVeterancy(UOrionMcpProfileAccount* a1,
        const enum EOrionVeterancy* a2,
        struct FClientUrlContext* a3) {
        SDKUtils::GetLastOfType< UWelcomeScreen_C>()->HandleVeterancySet(true, FText());
        return 0; 
    }//

    void* origPlayRootUpdateSelections = nullptr;
    __int64 PlayRootUpdateSelections(UOrionBaseButton_Group* a1) {
        return 0;
    }

    void* origShouldShowNewUserVideo = nullptr;
    bool ShouldShowNewUserVideo(UOrionStateWidget_FrontEnd* a1) {
        return false;
    }

    void* origShowVeterancySurvey = nullptr;
    void ShowVeterancySurvey(UOrionStateWidget_FrontEnd* a1) {
        return;
    }

    //

    void* origThingImNotSupposedToDo = nullptr;
    void ThingImNotSupposedToDo() {
        return;
    }

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + Offsets::PROCESSEVENT);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);

        void* initMCPProfile = (void*)(Globals::ModuleBase + Offsets::INIT_MCP_PROFILE);

        MH_CreateHook(initMCPProfile, reinterpret_cast<void*>(InitializeMCPProfileHook), &origInitializeMCPProfile);

        MH_EnableHook(initMCPProfile);

        void* returnToMainMenu = (void*)(Globals::ModuleBase + Offsets::RETURN_TO_MENU);

        MH_CreateHook(returnToMainMenu, reinterpret_cast<void*>(ReturnToMainMenuHook), &origReturnToMainMenu);

        MH_EnableHook(returnToMainMenu);

        void* isCardInDeck = (void*)(Globals::ModuleBase + Offsets::IS_CARD_IN_DECK);

        MH_CreateHook(isCardInDeck, reinterpret_cast<void*>(IsCardInDeckHook), &origIsCardInDeck);

        MH_EnableHook(isCardInDeck);

        void* isCardInDeck2 = (void*)(Globals::ModuleBase + Offsets::IS_CARD_IN_DECK_2);

        MH_CreateHook(isCardInDeck2, reinterpret_cast<void*>(IsCardInDeck2Hook), &origIsCardInDeck2);

        MH_EnableHook(isCardInDeck2);

        void* autobuyToggled = (void*)(Globals::ModuleBase + Offsets::AUTOBUY_TOGGLED);

        MH_CreateHook(autobuyToggled, reinterpret_cast<void*>(AutobuyToggledHook), &origAutobuyToggled);

        MH_EnableHook(autobuyToggled);

        void* autobuyToggled2 = (void*)(Globals::ModuleBase + Offsets::AUTOBUY_TOGGLED_2);

        MH_CreateHook(autobuyToggled2, reinterpret_cast<void*>(AutobuyToggled2Hook), &origAutobuyToggled2);

        MH_EnableHook(autobuyToggled2);

        void* setControllerConfigIndex = (void*)(Globals::ModuleBase + Offsets::SET_CONTROLLER_CONFIG_INDEX);

        MH_CreateHook(setControllerConfigIndex, reinterpret_cast<void*>(SetControllerConfigIndexHook), &origSetControllerConfigIndex);

        MH_EnableHook(setControllerConfigIndex);

        void* fillAccountData = (void*)(Globals::ModuleBase + Offsets::CARD_CRASH);

        MH_CreateHook(fillAccountData, reinterpret_cast<void*>(FillAccountDataHook), &origFillAccountLevelData);

        MH_EnableHook(fillAccountData);

        void* cardCrashyThingy = (void*)(Globals::ModuleBase + Offsets::CARD_CRASH);

        MH_CreateHook(cardCrashyThingy, reinterpret_cast<void*>(CardCrashyThingyHook), &origCardCrashyThingy);

        MH_EnableHook(cardCrashyThingy);

        void* autoOpenClicked = (void*)(Globals::ModuleBase + Offsets::HANDLE_AUTO_OPEN_CLICKED);

        MH_CreateHook(autoOpenClicked, reinterpret_cast<void*>(HandleAutoOpenClicked), &origAutoOpenClicked);

        MH_EnableHook(autoOpenClicked);

        void* queryUnredeemedFriendCodes = (void*)(Globals::ModuleBase + Offsets::QUERY_UNREDEEMED_FRIEND_CODES);

        MH_CreateHook(queryUnredeemedFriendCodes, reinterpret_cast<void*>(QueryUnredeemedFriendCodes), &origQueryUnredeemedFriendCodes);

        MH_EnableHook(queryUnredeemedFriendCodes);

        void* isLoggedIn = (void*)(Globals::ModuleBase + Offsets::IS_LOGGED_IN);

        MH_CreateHook(isLoggedIn, reinterpret_cast<void*>(IsLoggedIn), &origIsLoggedIn);

        MH_EnableHook(isLoggedIn);

        void* updateInProgress = (void*)(Globals::ModuleBase + Offsets::UPDATE_COMPLETE);

        MH_CreateHook(updateInProgress, reinterpret_cast<void*>(UpdateInProgress), &origUpdateInProgress);

        MH_EnableHook(updateInProgress);

        void* setPlayerVeterancy = (void*)(Globals::ModuleBase + Offsets::SET_PLAYER_VETERANCY);

        MH_CreateHook(setPlayerVeterancy, reinterpret_cast<void*>(SetPlayerVeterancy), &origSetPlayerVeterancy);

        MH_EnableHook(setPlayerVeterancy);

        void* playRootUpdate = (void*)(Globals::ModuleBase + Offsets::PLAYROOT_UPDATE);

        MH_CreateHook(playRootUpdate, reinterpret_cast<void*>(PlayRootUpdateSelections), &origPlayRootUpdateSelections);

        MH_EnableHook(playRootUpdate);

        void* shouldShowVideo = (void*)(Globals::ModuleBase + Offsets::SHOULD_SHOW_NEW_USER_VIDEO);

        MH_CreateHook(shouldShowVideo, reinterpret_cast<void*>(ShouldShowNewUserVideo), &origShouldShowNewUserVideo);

        MH_EnableHook(shouldShowVideo);

        void* showVeterancy = (void*)(Globals::ModuleBase + Offsets::SHOW_VETERANCY_SURVEY);

        MH_CreateHook(showVeterancy, reinterpret_cast<void*>(ShowVeterancySurvey), &origShowVeterancySurvey);

        MH_EnableHook(showVeterancy);

        void* ohno = (void*)(Globals::ModuleBase + 0xE4FB70);

        MH_CreateHook(ohno, reinterpret_cast<void*>(ThingImNotSupposedToDo), &origThingImNotSupposedToDo);

        MH_EnableHook(ohno);

        //891860

        //8909B0

        //8293C0

        //918EA0

        //7CC3E0

        //2B97490

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
    EngineLogic::EnableGameConsole();
    Hooking::ProcInGameThread(ConnectToMatch);
}

void SetUIToFrontend() {
    //std::cout << ((UObject*)(Globals::GetGWorld()->OwningGameInstance) + 0x30)->GetFullName() << std::endl;

    Globals::GetLocalPlayerController<AOrionPlayerController_Base>()->SetName(L"gwog :3");

    for (UOrionPlayRoot* root : SDKUtils::GetAllObjectsOfType< UOrionPlayRoot>()) {
        if (root->Button_MatchmakingSettings) {
            root->Button_MatchmakingSettings->SetVisibility(ESlateVisibility::Hidden);
            root->Button_MatchmakingSettings->SetIsEnabled(false);
        }

        if (root->Button_PvP) {
            root->Button_PvP->SetVisibility(ESlateVisibility::Hidden);
            root->Button_PvP->SetIsEnabled(false);
        }

        if (root->Button_Coop) {
            root->Button_Coop->SetVisibility(ESlateVisibility::Hidden);
            root->Button_Coop->SetIsEnabled(false);
        }

        if (root->Button_Tutorial_1v1) {
            root->Button_Tutorial_1v1->SetVisibility(ESlateVisibility::Hidden);
            root->Button_Tutorial_1v1->SetIsEnabled(false);
        }

        if (root->Button_Ready) {
            root->Button_Ready->EnableButton();
        }
    }

    //GameLogic::SetUIState(EOrionUIState::FrontEnd);
}

void MainLoop() {
    while (!GetAsyncKeyState(VK_F10)) {

    }

    Hooking::ProcInGameThread(SetUIToFrontend);

    while (GetAsyncKeyState(VK_F10)) {

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