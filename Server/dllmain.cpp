#include "dllmain.h"

#ifdef v34
#include "SDK.h"
#endif

#ifdef v45
#include "SDKv45.hpp"
#include "SDKv45/GameplayAbilities_parameters.hpp"
#endif

#include "UnrealContainers.h"

#include <thread>
#include <iostream>
#include <format>
#include <algorithm>

#include "MinHook/include/MinHook.h"
#include <execution>

#pragma comment(lib, "MinHook/lib/libMinHook-x64-v141-mt.lib")

#ifdef v34
    using namespace CG;
#endif

#ifdef v45
    using namespace SDK;
#endif

namespace Settings {
    const int NUM_PLAYERS_TO_START = 10;
}

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

    //Damage Calculation Offsets
    static const uintptr_t GET_DAMAGE_STATICS = 0x3E6C60;
    static const uintptr_t CALCULATE_CAPTURED_ATTRIBUTE_MAGNITUDE = 0x299C2F0;
    static const uintptr_t GET_INSTIGATOR_ASC = 0x265A00;

    //GameplayAbilities Offsets
    static const uintptr_t FIND_ABILITY_SPEC_FROM_HANDLE = 0x2962DD0;
    static const uintptr_t CLIENT_ACTIVATE_ABILITY_FAILED = 0x29572C0;
    static const uintptr_t CONSUME_REPLICATED_TARGET_DATA = 0x2958F90;
    static const uintptr_t CONSTRUCT_SCOPED_PREDICTION_WINDOW = 0x29C7A40;
    static const uintptr_t INTERNAL_TRY_ACTIVATE_ABILITY = 0x296E2B0;
    static const uintptr_t MARK_ABILITY_SPEC_DIRTY = 0x29718E0;

    //Card System Offsets
    static const uintptr_t GET_AVAILABLE_CARDS = 0x479C60;
    static const uintptr_t ADD_ARRAY_OF_CARDS_TO_DECK = 0x665EE0;

    //Networking Offsets
    static const uintptr_t CREATE_NAMED_NET_DRIVER = 0x22981c0;
    static const uintptr_t INIT_LISTEN = 0x3290920;
    static const uintptr_t SET_WORLD = 0x1FFA320;
    static const uintptr_t CALL_PRE_REPLICATION = 0x1b743d0;
    static const uintptr_t IS_NET_RELEVANT = 0x1B8B980;
    static const uintptr_t CREATE_CHANNEL = 0x1FDD9E0;
    static const uintptr_t SET_CHANNEL_ACTOR = 0x1E12C70;
    static const uintptr_t IS_NET_READY = 0x1FEBA80;
    static const uintptr_t REPLICATE_ACTOR = 0x1E0C1D0;
    static const uintptr_t FORCE_NET_UPDATE = 0x1B7E250;
    static const uintptr_t IS_PENDING_KILL_PENDING = 0x2AFBB0;
    static const uintptr_t SEND_CLIENT_ADJUSTMENT = 0x212FD50;

    //Hooking offsets
    static const uintptr_t PROCESSEVENT = 0xFB3420;
    static const uintptr_t AACTOR_NETMODE = 0x1B8B180;
    static const uintptr_t UWORLD_NETMODE = 0x2313470;
    static const uintptr_t UENGINE_NETMODE = 0x22A4920;
    static const uintptr_t STATMANAGER_CRASH = 0x37BF70;
    static const uintptr_t NETDRIVER_TICKFLUSH = 0x1ffc780;
    static const uintptr_t GAMEMODE_MOBA_POSTLOGIN = 0x48F1E0;
    static const uintptr_t NOTIFY_ACCEPTING_CONNECTION = 0x2314B80;
    static const uintptr_t NOTIFY_ACCEPTED_CONNECTION = 0x2314710;
    static const uintptr_t NOTIFY_ACCEPTING_CHANNEL = 0x2314890;
    static const uintptr_t NOTIFY_CONTROL_MESSAGE = 0x23156C0;
    static const uintptr_t CHECK_ABANDON_MATCH_TIMER = 0x471800;
    static const uintptr_t CAN_RESTART_PLAYER = 0x62F310;
    static const uintptr_t COLLECT_GARBAGE = 0xF39050;
    static const uintptr_t CONSUME_CLIENT_DATA = 0x2958F90;
    static const uintptr_t TARGET_DATA_REPLICATED = 0x296EA0;
    static const uintptr_t GAME_ENGINE_TICK = 0x1E775B0;
    static const uintptr_t APPROVE_LOGIN = 0x1E8FA00;
    static const uintptr_t STOP_DEMO = 0x1E158F0;
    static const uintptr_t DEMO_TICK_FLUSH = 0x1E19D80;
    static const uintptr_t NEW_OBJECT_START_TARGETING = 0x2BAD40;
    static const uintptr_t LOGIN = 0x488FB0;
    static const uintptr_t IS_CARD_IN_DECK = 0x4B8060;
    static const uintptr_t REMOVE_CARD = 0x687230;
    static const uintptr_t IS_CARD_IN_DECK_2 = 0x4B81B0;
    static const uintptr_t FILL_ACCOUNT_DATA = 0x2B82C70;
    static const uintptr_t RETURN_MAIN_MENU_STRING = 0x5FEF80;
    static const uintptr_t SET_END_SEQUENCE = 0x498FF0;
    static const uintptr_t UCHANNEL_CLEANUP = 0x1DE59D0;
#endif

#ifdef v45
    //Core Engine Offsets
    static const uintptr_t MALLOC = 0xBD2AE0;
    static const uintptr_t FREE = 0xBC7030;

    //Core Game Offsets
    static const uintptr_t SET_UI_STATE = 0x9D2030;

    //Damage Calculation Offsets
    static const uintptr_t GET_DAMAGE_STATICS = 0x56BF00;
    static const uintptr_t CALCULATE_CAPTURED_ATTRIBUTE_MAGNITUDE = 0x3134DE0;
    static const uintptr_t GET_INSTIGATOR_ASC = 0x392290;

    //GameplayAbilities Offsets
    static const uintptr_t FIND_ABILITY_SPEC_FROM_HANDLE = 0x316CBA0;
    static const uintptr_t CLIENT_ACTIVATE_ABILITY_FAILED = 0x3160650;
    static const uintptr_t CONSUME_REPLICATED_TARGET_DATA = 0x3162420;
    static const uintptr_t CONSTRUCT_SCOPED_PREDICTION_WINDOW = 0x3133EF0;
    static const uintptr_t INTERNAL_TRY_ACTIVATE_ABILITY = 0x3177E80;
    static const uintptr_t MARK_ABILITY_SPEC_DIRTY = 0x317B660;

    //Networking Offsets
    static const uintptr_t CREATE_NAMED_NET_DRIVER = 0x232D220;
    static const uintptr_t INIT_LISTEN = 0x2E80770;
    static const uintptr_t SET_WORLD = 0x202F360;
    static const uintptr_t CALL_PRE_REPLICATION = 0x1B551E0;
    static const uintptr_t IS_NET_RELEVANT = 0x1B6DEF0;
    static const uintptr_t CREATE_CHANNEL = 0x2017E30;
    static const uintptr_t SET_CHANNEL_ACTOR = 0x1E15640;
    static const uintptr_t REPLICATE_ACTOR = 0x1E0F390;
    static const uintptr_t FORCE_NET_UPDATE = 0x1B5FF80;
    static const uintptr_t IS_PENDING_KILL_PENDING = 0x3E9290;
    static const uintptr_t SEND_CLIENT_ADJUSTMENT = 0x21854F0;
    static const uintptr_t IS_NET_READY_PTR_PTR = 0x4463848;

    //Hooking Offsets
    static const uintptr_t PROCESSEVENT = 0xEA1BD0;
    static const uintptr_t STATMANAGER_CRASH = 0x4B5410;
    static const uintptr_t NETDRIVER_TICKFLUSH = 0x2030DF0;
    static const uintptr_t GAMEMODE_MOBA_POSTLOGIN = 0x67A8A0;
    static const uintptr_t NOTIFY_ACCEPTING_CONNECTION = 0x238D5F0;
    static const uintptr_t NOTIFY_ACCEPTED_CONNECTION = 0x238D180;
    static const uintptr_t NOTIFY_ACCEPTING_CHANNEL = 0x238D300;
    static const uintptr_t NOTIFY_CONTROL_MESSAGE = 0x238DBD0;
    static const uintptr_t CAN_RESTART_PLAYER = 0x8FA1F0;//0x2169440;
    static const uintptr_t COLLECT_GARBAGE = 0xE19000;
    static const uintptr_t CONSUME_CLIENT_DATA = 0x3162420;
    static const uintptr_t GAME_ENGINE_TICK = 0x1E7F340;
    static const uintptr_t APPROVE_LOGIN = 0x1E8ED90;
    static const uintptr_t STOP_DEMO = 0x1E4CB00;
    static const uintptr_t DEMO_TICK_FLUSH = 0x1E50F80;
    static const uintptr_t NEW_OBJECT_START_TARGETING = 0x3F4C60;
    static const uintptr_t LOGIN = 0x672430;
    static const uintptr_t UCHANNEL_CLEANUP = 0x1DEA6A0;
    static const uintptr_t GAME_MODE_CAN_RESTART_PLAYER = 0x23F82B0;
    static const uintptr_t OBJECT_CRASH_FUNC = 0x1E2B6C0;
    static const uintptr_t AISYSTEM_SPAWN_BOT = 0x496DB0;
    static const uintptr_t UWORLD_SPAWN_ACTOR = 0x1F813B0;
    static const uintptr_t GAME_MODE_MOBA_HANDLE_WAITING_TO_START = 0x66A480;
    static const uintptr_t HAS_TEAM_BUILDER_INFO = 0x6AF5C0;
#endif
}

namespace Globals {
    bool gameInit = false;

    bool overrideTeamBuilderInfoCheck = false;

    static bool shouldStartMatch = false;

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

        engine->GameViewport->ViewportConsole = reinterpret_cast<UConsole * >(NewObject);
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

    void LoadMap(const wchar_t* map, const wchar_t* options) {
        static UGameplayStatics* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UGameplayStatics>();
        }

        static UKismetStringLibrary* kismetStringLibrary = nullptr;

        if (!kismetStringLibrary) {
            kismetStringLibrary = UObject::FindObject<UKismetStringLibrary>();
        }

#ifdef v34
        systemLibrary->STATIC_OpenLevel(Globals::GetGWorld(), kismetStringLibrary->STATIC_Conv_StringToName(map), true, options);
#endif

#ifdef v45
        systemLibrary->OpenLevel(Globals::GetGWorld(), kismetStringLibrary->Conv_StringToName(map), true, options);
#endif
    }

    void* Malloc(__int64 size, unsigned int alignment) {
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + PLOffsets::MALLOC)(size, alignment);
    }

    __int64 Free(void* ptr) {
        return reinterpret_cast<__int64 (__thiscall*)(void*)>(Globals::ModuleBase + PLOffsets::FREE)(ptr);
    }

    void LimitFramerateForServer() {
#ifdef v34
        ExecuteConsoleCommand(L"t.maxfps 30");
#endif

#ifdef v45
        ExecuteConsoleCommand(L"t.maxfps 60");
#endif
    }
}

namespace GameLogic {
    void SetupTeams() {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        

#ifdef v34
        gameState->Teams._data = reinterpret_cast<AOrionTeamInfo**>(EngineLogic::Malloc(sizeof(AOrionTeamInfo*) * 4, 0));
        gameState->Teams._count = 4;
        gameState->Teams._max = 4;

        AOrionTeamInfo* redTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));
        AOrionTeamInfo* blueTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));
        AOrionTeamInfo* noTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));
        AOrionTeamInfo* teamCreepInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        redTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");
        blueTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"BlueTeam");
        noTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");
        teamCreepInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");

        redTeamInfo->TeamMembers._data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        redTeamInfo->TeamMembers._count = 0;
        redTeamInfo->TeamMembers._max = 5;

        blueTeamInfo->TeamMembers._data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        blueTeamInfo->TeamMembers._count = 0;
        blueTeamInfo->TeamMembers._max = 5;
#endif

#ifdef v45
        gameState->Teams.Data = reinterpret_cast<AOrionTeamInfo**>(EngineLogic::Malloc(sizeof(AOrionTeamInfo*) * 4, 0));
        gameState->Teams.NumElements = 4;
        gameState->Teams.MaxElements = 4;

        AOrionTeamInfo* redTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));
        AOrionTeamInfo* blueTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));
        AOrionTeamInfo* noTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));
        AOrionTeamInfo* teamCreepInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        redTeamInfo->TeamName = Globals::GetKismetStringLibrary()->Conv_StringToName(L"RedTeam");
        blueTeamInfo->TeamName = Globals::GetKismetStringLibrary()->Conv_StringToName(L"BlueTeam");
        noTeamInfo->TeamName = Globals::GetKismetStringLibrary()->Conv_StringToName(L"RedTeam");
        teamCreepInfo->TeamName = Globals::GetKismetStringLibrary()->Conv_StringToName(L"RedTeam");

        redTeamInfo->TeamMembers.Data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        redTeamInfo->TeamMembers.NumElements = 0;
        redTeamInfo->TeamMembers.MaxElements = 5;

        blueTeamInfo->TeamMembers.Data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        blueTeamInfo->TeamMembers.NumElements = 0;
        blueTeamInfo->TeamMembers.MaxElements = 5;
#endif

        redTeamInfo->TeamIndex = EOrionTeam::TeamRed;
        redTeamInfo->bPlayerTeam = true;
        redTeamInfo->MaxPlayers = 5;

        

        blueTeamInfo->TeamIndex = EOrionTeam::TeamBlue;
        blueTeamInfo->bPlayerTeam = true;
        blueTeamInfo->MaxPlayers = 5;

        

        noTeamInfo->TeamIndex = EOrionTeam::NoTeam;
        noTeamInfo->bPlayerTeam = true;
        noTeamInfo->MaxPlayers = 0;

        teamCreepInfo->TeamIndex = EOrionTeam::TeamCreep;
        teamCreepInfo->bPlayerTeam = true;
        teamCreepInfo->MaxPlayers = 0;

        gameState->Teams[0] = redTeamInfo;
        gameState->Teams[1] = blueTeamInfo;
        gameState->Teams[2] = noTeamInfo;
        gameState->Teams[3] = teamCreepInfo;
    }

    void SetupBots() {
        AOrionGameState_MOBA* gs = Globals::GetGameState< AOrionGameState_MOBA>();

        FOrionTBMemberInfo* redTeamTBMembers = reinterpret_cast<FOrionTBMemberInfo * >(EngineLogic::Malloc(sizeof(FOrionTBMemberInfo) * 5, 0));

        for (int i = 0; i < 5; i++) {
            redTeamTBMembers[i] = FOrionTBMemberInfo();
            redTeamTBMembers[i].bValidPlayer = true;
            redTeamTBMembers[i].bIsBot = true;
            redTeamTBMembers[i].bFromSocialParty = false;
            redTeamTBMembers[i].BotDifficulty = EAIBotDifficulty::Veteran;
            redTeamTBMembers[i].UniqueId = FUniqueNetIdRepl();
            redTeamTBMembers[i].UniqueId.Pad_0[0] = 0x1;
            redTeamTBMembers[i].PartyLeaderId = FUniqueNetIdRepl();
            redTeamTBMembers[i].PartyLeaderId.Pad_0[0] = 0x1;
            redTeamTBMembers[i].PlayerData = FOrionTBPlayerChoices();
            redTeamTBMembers[i].SlotIdx = i;
            redTeamTBMembers[i].State = EOrionTBMemberState::Joined;
        }

        FOrionTBTeamInfo redTeamTBInfo = gs->Teams[0]->TeamBuilderInfo;
        
        redTeamTBInfo.Captain = redTeamTBMembers[0];
        redTeamTBInfo.SocialPartySize = 0;
        redTeamTBInfo.ChatRoomId = FOrionTeamChatRoomId();
        redTeamTBInfo.Members = TArray<FOrionTBMemberInfo>();
        redTeamTBInfo.Members.Data = redTeamTBMembers;
        redTeamTBInfo.Members.NumElements = 5;
        redTeamTBInfo.Members.MaxElements = 5;

        FOrionTBMemberInfo* blueTeamTBMembers = reinterpret_cast<FOrionTBMemberInfo*>(EngineLogic::Malloc(sizeof(FOrionTBMemberInfo) * 4, 0));

        for (int i = 0; i < 5; i++) {
            blueTeamTBMembers[i] = FOrionTBMemberInfo();
            blueTeamTBMembers[i].bValidPlayer = true;
            blueTeamTBMembers[i].bIsBot = true;
            blueTeamTBMembers[i].bFromSocialParty = false;
            blueTeamTBMembers[i].BotDifficulty = EAIBotDifficulty::Veteran;
            blueTeamTBMembers[i].UniqueId = FUniqueNetIdRepl();
            blueTeamTBMembers[i].UniqueId.Pad_0[0] = 0x1;
            blueTeamTBMembers[i].PartyLeaderId = FUniqueNetIdRepl();
            blueTeamTBMembers[i].PartyLeaderId.Pad_0[0] = 0x1;
            blueTeamTBMembers[i].PlayerData = FOrionTBPlayerChoices();
            blueTeamTBMembers[i].SlotIdx = i;
            blueTeamTBMembers[i].State = EOrionTBMemberState::Joined;
        }

        FOrionTBTeamInfo blueTeamTBInfo = gs->Teams[0]->TeamBuilderInfo;

        blueTeamTBInfo.Captain = blueTeamTBMembers[0];
        blueTeamTBInfo.SocialPartySize = 0;
        blueTeamTBInfo.ChatRoomId = FOrionTeamChatRoomId();
        blueTeamTBInfo.Members = TArray<FOrionTBMemberInfo>();
        blueTeamTBInfo.Members.Data = blueTeamTBMembers;
        blueTeamTBInfo.Members.NumElements = 4;
        blueTeamTBInfo.Members.MaxElements = 4;

        Globals::overrideTeamBuilderInfoCheck = true;

        reinterpret_cast<void(*)(AOrionGameMode_MOBA*)>(Globals::ModuleBase + PLOffsets::GAME_MODE_MOBA_HANDLE_WAITING_TO_START)(Globals::GetGameMode<AOrionGameMode_MOBA>());
    }

    void SetupHUDForController(AOrionPlayerController_Game* controller) {
        controller->ClientSetHUD(UObject::FindClass("Class OrionGame.OrionUI_Game"));
    }

    bool AddBotControllerToTeam(AOrionAIBot* controller, EOrionTeam team, bool noFail = true) {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        for (int i = 0; i < gameState->Teams.Count(); i++) {
            AOrionTeamInfo* teamInfo = gameState->Teams[i];

            if (teamInfo->TeamIndex == team) {
                if (teamInfo->TeamMembers.Count() < 5) {
                    teamInfo->TeamMembers[teamInfo->TeamMembers.Count()] = controller;
#ifdef v34
                    teamInfo->TeamMembers._count = teamInfo->TeamMembers._count + 1;
#endif

#ifdef v45
                    teamInfo->TeamMembers.NumElements = teamInfo->TeamMembers.NumElements + 1;
#endif
                    //controller->ServerChangeTeam(team);
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->TeamInfo = teamInfo;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_Team(nullptr);

                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bReadyToStartMatch = true;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_bReadyToStartMatch();

                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bIsSpectator = false;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bOnlySpectator = false;

#ifdef v45
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->TeamNum = team;
                    Globals::GetGameMode<AOrionGameMode_Base>()->ChangeTeam(controller, team);
#endif

                    return true;
                }
                else if (noFail) {
                    if (team == EOrionTeam::TeamRed) {
                        AddBotControllerToTeam(controller, EOrionTeam::TeamBlue, false);
                    }
                    else {
                        AddBotControllerToTeam(controller, EOrionTeam::TeamRed, false);
                    }
                }
            }
        }

        return false;
    }

    bool AddControllerToTeam(AOrionPlayerController_Game* controller, EOrionTeam team, bool noFail = true) {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        for (int i = 0; i < gameState->Teams.Count(); i++) {
            AOrionTeamInfo* teamInfo = gameState->Teams[i];

            if (teamInfo->TeamIndex == team) {
                if (teamInfo->TeamMembers.Count() < 5) {
                    teamInfo->TeamMembers[teamInfo->TeamMembers.Count()] = controller;
#ifdef v34
                    teamInfo->TeamMembers._count = teamInfo->TeamMembers._count + 1;
#endif

#ifdef v45
                    teamInfo->TeamMembers.NumElements = teamInfo->TeamMembers.NumElements + 1;
#endif
                    controller->ServerChangeTeam(team);
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->TeamInfo = teamInfo;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_Team(nullptr);

                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bReadyToStartMatch = true;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_bReadyToStartMatch();

                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bIsSpectator = false;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bOnlySpectator = false;

#ifdef v45
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->TeamNum = team;
#endif

                    return true;
                }
                else if(noFail) {
                    if (team == EOrionTeam::TeamRed) {
                        AddControllerToTeam(controller, EOrionTeam::TeamBlue, false);
                    }
                    else {
                        AddControllerToTeam(controller, EOrionTeam::TeamRed, false);
                    }
                }
            }
        }

        return false;
    }

#ifdef v34
    void AddAllCardsToControllersDeck(AOrionPlayerController_Game* controller) {
        AOrionPlayerState_Game* ps = reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState);

        __int64 cardArray = reinterpret_cast<__int64(*)(AOrionGameMode_MOBA*)>(Globals::ModuleBase + PLOffsets::GET_AVAILABLE_CARDS)(Globals::GetGameMode< AOrionGameMode_MOBA>());

        reinterpret_cast<void(*)(AOrionPlayerState_Game*, __int64)>(Globals::ModuleBase + PLOffsets::ADD_ARRAY_OF_CARDS_TO_DECK)(ps, cardArray);
    }
#endif

    void PostMatchStartCallback() {
        EngineLogic::ExecuteConsoleCommand(L"forceendgame 0 1");
        EngineLogic::ExecuteConsoleCommand(L"forceendgame 1 1");
        EngineLogic::ExecuteConsoleCommand(L"removerespawntimeall 1");
        EngineLogic::ExecuteConsoleCommand(L"forcespawnprimehelix");
    }

    void PostPostMatchStartCallback() {
        SDKUtils::GetLastOfType< ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C>()->HealthSet->Health = 1.0f;
        SDKUtils::GetLastOfType< ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C>()->HealthSet->MaxHealth = 1.0f;
    }

    void PostStartMatchDelayCallback() {
        Sleep(10 * 1000);
        Hooking::ProcInGameThread(PostMatchStartCallback);
        Sleep(10 * 1000);
        Hooking::ProcInGameThread(PostPostMatchStartCallback);
    }

    void StartMatch() {   
        Globals::GetLocalPlayerController<AOrionPlayerController_Game>()->ServerForceStartGame();
        //std::thread t(PostStartMatchDelayCallback);
        //t.detach();
    }

    void SetControllerHeroData(AOrionPlayerController_Game* controller, UOrionHeroData* heroData) {
        FOrionHeroDataSpec spec = FOrionHeroDataSpec();

        spec.HeroData = heroData;
        spec.Skin = heroData->DefaultSkin;

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->ServerSetPlayerHeroDataSpec(spec);

#ifdef v34
        controller->HeroData = heroData;
#endif

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->HeroDataSpec = spec;

#ifdef v34
        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_HeroDataSpec(FOrionHeroDataSpec());
#endif

#ifdef v45
        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_HeroDataSpec();
#endif
    }

    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + PLOffsets::SET_UI_STATE)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
    }

    void RestartPlayer(AOrionPlayerController_Game* pc) {
        pc->ServerRestartPlayer();
    }

    void RestartClient(AOrionPlayerController_Game* pc) {
        pc->Possess(pc->Pawn);
    }

    void HideLoadingScreen() {
        EngineLogic::ExecuteConsoleCommand(L"hideloadingscreen");
    }
}

namespace DamageCalculations {
    struct FAggregatorEvaluateParameters
    {
        FAggregatorEvaluateParameters()
            : SourceTags(nullptr)
            , TargetTags(nullptr)
            , IncludePredictiveMods(false)
        {}

        const FGameplayTagContainer* SourceTags;
        const FGameplayTagContainer* TargetTags;

        /** Any mods with one of these handles will be ignored during evaluation */
        TArray<FActiveGameplayEffectHandle> IgnoreHandles;

        /** If any tags are specified in the filter, a mod's owning active gameplay effect's source tags must match ALL of them in order for the mod to count during evaluation */
        FGameplayTagContainer AppliedSourceTagFilter;

        /** If any tags are specified in the filter, a mod's owning active gameplay effect's target tags must match ALL of them in order for the mod to count during evaluation */
        FGameplayTagContainer AppliedTargetTagFilter;

        bool IncludePredictiveMods;
    };

    __int64 GetDamageStatics() {
        return (reinterpret_cast<__int64 (*)()>(Globals::ModuleBase + PLOffsets::GET_DAMAGE_STATICS)());
    }

    float GetDamageCalcInput(__int64 offset, FGameplayEffectCustomExecutionParameters* params) {
        float out = 0.0f;
        FAggregatorEvaluateParameters secondParams = FAggregatorEvaluateParameters();
        bool calcSucceeded = reinterpret_cast<bool(*)(FGameplayEffectCustomExecutionParameters*, FGameplayEffectAttributeCaptureDefinition*, FAggregatorEvaluateParameters*, float*)>(Globals::ModuleBase + PLOffsets::CALCULATE_CAPTURED_ATTRIBUTE_MAGNITUDE)(params, (FGameplayEffectAttributeCaptureDefinition*)(GetDamageStatics() + offset), &secondParams, &out);
        return out;
    }

#ifdef v34
    float CalculateDamage(UOrionDamage* damageObject, UGameplayEffectExecutionCalculation_Execute_Params* params) { //TODO: Actual damage calculations
        if (params->ExecutionParams.ScopedModifierAggregators.Data.Count() > 0) {
#endif

#ifdef v45
        float CalculateDamage(UOrionDamage * damageObject, SDK::Params::GameplayEffectExecutionCalculation_Execute * params) {
            //if (params->ExecutionParams.ScopedModifierAggregators.Num() > 0) {
#endif
        
            float total = 0.0f;
            
            float BasePower = GetDamageCalcInput(0x38, &params->ExecutionParams);

            float AttackRating = GetDamageCalcInput(0x68, &params->ExecutionParams);

            float AoERating = GetDamageCalcInput(0x2D8, &params->ExecutionParams);

            total = BasePower + AttackRating + AoERating;

            return total;
        //}

        return 0;
    }

#ifdef v34
    void ApplyDamage(UOrionDamage* damageObject, UGameplayEffectExecutionCalculation_Execute_Params* params, float damage) { //TODO: Deal damage to shield instead of health if shielded
#endif

#ifdef v45
    void ApplyDamage(UOrionDamage * damageObject, SDK::Params::GameplayEffectExecutionCalculation_Execute * params, float damage) { //TODO: Deal damage to shield instead of health if shielded
#endif
        params->OutExecutionOutput.OutputModifiers = *(reinterpret_cast<TArray<FGameplayModifierEvaluatedData>*>(EngineLogic::Malloc(sizeof(TArray<FGameplayModifierEvaluatedData>), 0)));//TArray<FGameplayModifierEvaluatedData>();

        FGameplayModifierEvaluatedData* evaluatedData = reinterpret_cast<FGameplayModifierEvaluatedData*>(EngineLogic::Malloc(sizeof(FGameplayModifierEvaluatedData), 0));

        FGameplayEffectAttributeCaptureDefinition toCapture = FGameplayEffectAttributeCaptureDefinition();

        toCapture = damageObject->RelevantAttributesToCapture[0];

        if (toCapture.AttributeToCapture.Attribute && (uintptr_t)toCapture.AttributeToCapture.Attribute != 0xffffffff) {
            FGameplayAttribute newAttr = *(reinterpret_cast<FGameplayAttribute*>(EngineLogic::Malloc(sizeof(FGameplayAttribute*), 0)));;

            newAttr.Attribute = toCapture.AttributeToCapture.Attribute;
            newAttr.AttributeName = FString();
            void* str = EngineLogic::Malloc(sizeof(L"Health"), 0);
            const wchar_t* my_str = L"Health";
            memcpy_s(str, sizeof(L"Health"), my_str, sizeof(L"Health"));
            
            newAttr.AttributeOwner = toCapture.AttributeToCapture.AttributeOwner;

            evaluatedData->Attribute = newAttr;

            evaluatedData->IsValid = true;

            evaluatedData->Handle = *(reinterpret_cast<FActiveGameplayEffectHandle*>(EngineLogic::Malloc(sizeof(FActiveGameplayEffectHandle), 0)));
            evaluatedData->Magnitude = damage * -1.0;
            evaluatedData->ModifierOp = EGameplayModOp::Additive;

#ifdef v34
            newAttr.AttributeName._data = (wchar_t*)str;
            newAttr.AttributeName._count = 6;
            newAttr.AttributeName._max = 6;

            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.OutputModifiers._data = evaluatedData;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.OutputModifiers._count = 1;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.OutputModifiers._max = 1;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.bHandledGameplayCuesManually = false;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.bHandledStackCountManually = false;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.bTriggerConditionalGameplayEffects = true;
#endif

#ifdef v45
            newAttr.AttributeName.Data = (wchar_t*)str;
            newAttr.AttributeName.NumElements = 6;
            newAttr.AttributeName.MaxElements = 6;

            ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->OutExecutionOutput.OutputModifiers.Data = evaluatedData;
            ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->OutExecutionOutput.OutputModifiers.NumElements = 1;
            ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->OutExecutionOutput.OutputModifiers.MaxElements = 1;
            ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->OutExecutionOutput.bHandledGameplayCuesManually = false;
            ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->OutExecutionOutput.bHandledStackCountManually = false;
            ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->OutExecutionOutput.bTriggerConditionalGameplayEffects = true;
#endif
        }
    }

#ifdef v34
    void ProcDamageSFX(UGameplayEffectExecutionCalculation_Execute_Params* params, float damage) {
#endif

#ifdef v45
        void ProcDamageSFX(SDK::Params::GameplayEffectExecutionCalculation_Execute * params, float damage) {
#endif

        /*
        if (params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor->IsA(AOrionDamageableActor::StaticClass())) {
            reinterpret_cast<AOrionDamageableActor*>(params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor)->OnDamageTaken(damage, nullptr);
        }
        */

        UGameplayCueNotify_Static* gc = nullptr;
        FGameplayCueParameters cueParams = FGameplayCueParameters();

        cueParams.NormalizedMagnitude = damage;
        cueParams.RawMagnitude = damage;
#ifdef v34
        cueParams.AbilityLevel = ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->ExecutionParams.OwningSpec->Level;
#endif

#ifdef v45
        cueParams.AbilityLevel = ((SDK::Params::GameplayEffectExecutionCalculation_Execute*)params)->ExecutionParams.OwningSpec->Level;
#endif
        cueParams.EffectContext = params->ExecutionParams.OwningSpec->EffectContext;

        UOrionAbilitySystemComponent* instigatorASC = reinterpret_cast<UOrionAbilitySystemComponent * (*)(FGameplayEffectContextHandle*)>(Globals::ModuleBase + PLOffsets::GET_INSTIGATOR_ASC)(&params->ExecutionParams.OwningSpec->EffectContext);

        FGameplayTag tag = FGameplayTag();

        FPredictionKey key = FPredictionKey();

        if (instigatorASC) {
            if (instigatorASC->AvatarActor && instigatorASC->AvatarActor->IsA(AOrionCharHero::StaticClass())) {
                key.Base = INT16_MAX;
                key.Current = INT16_MAX;
                //tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage_Hero");
            }
            else {
                key.Base = INT16_MAX - 1;
                key.Current = INT16_MAX - 1;
                //tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");
            }
        }

        //std::cout << "Proccing damage SFX" << std::endl;

        params->ExecutionParams.TargetAbilitySystemComponent.Get()->NetMulticast_InvokeGameplayCueExecuted_WithParams(tag, key, cueParams);

        //if (params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor->IsA(AOrionCharHero::StaticClass())) {
            //static UGameplayCueNotify_Static* heroDamage = nullptr;

            //if (!heroDamage)
                //heroDamage = UObject::FindObject<UGameplayEffect>("Standard_Damage_Basic_C Standard_Damage_Basic.Default__Standard_Damage_Basic_C");

            //gc = heroDamage;
            //tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage_Hero");
        //}
        /*
        else {
            static UGameplayCueNotify_Static* genericDamage = nullptr;

            if (!genericDamage)
                genericDamage = UObject::FindObject<UGameplayCueNotify_Static>("GC_Damage_Hero_C GC_Damage_Hero.Default__GC_Damage_Hero_C");

            gc = genericDamage;
            //tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");
        }
        */

            /*
        static UOrionGameplayCueManager* gameplayCueManager = nullptr;

        if (!gameplayCueManager) {
            gameplayCueManager = SDKUtils::GetLastOfType< UOrionGameplayCueManager>();
        }

        gc->K2_HandleGameplayCue(params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor, EGameplayCueEvent::Executed, cueParams);
        */
    }

#ifdef v34
    void DoDamagePipeline(UOrionDamage* damageObject, UGameplayEffectExecutionCalculation_Execute_Params* params) {
#endif

#ifdef v45
    void DoDamagePipeline(UOrionDamage * damageObject, SDK::Params::GameplayEffectExecutionCalculation_Execute * params) {
#endif
        float damage = CalculateDamage(damageObject, params);

        ApplyDamage(damageObject, params, damage);

        ProcDamageSFX(params, damage);
    }
}

namespace GameplayAbilities {
    static std::vector<UOrionAbilityTask_StartTargeting*> targetingTasks = std::vector<UOrionAbilityTask_StartTargeting*>();
    static std::vector<UOrionAbilityTask_StartTargeting*> instantConfirmTasks = std::vector<UOrionAbilityTask_StartTargeting*>();

    struct AbilityProcInfo {
        UOrionAbilitySystemComponent* asc;
        int numTimesTicked;

        AbilityProcInfo(UOrionAbilitySystemComponent* asc) {
            this->asc = asc;
            this->numTimesTicked = 0;
        }
    };

    static std::vector<AbilityProcInfo> abilitiesToProc = std::vector<AbilityProcInfo>();

    /*
    void UAbilitySystemComponent::InternalServerTryActiveAbility(FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
{
#if WITH_SERVER_CODE
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if (DenyClientActivation > 0)
	{
		DenyClientActivation--;
		ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		return;
	}
#endif

	FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(Handle);
	if (!Spec)
	{
		// Can potentially happen in race conditions where client tries to activate ability that is removed server side before it is received.
		ABILITY_LOG(Display, TEXT("InternalServerTryActiveAbility. Rejecting ClientActivation of ability with invalid SpecHandle!"));
		ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		return;
	}

	// Consume any pending target info, to clear out cancels from old executions
	ConsumeAllReplicatedData(Handle, PredictionKey);

	FScopedPredictionWindow ScopedPredictionWindow(this, PredictionKey);

	const UGameplayAbility* AbilityToActivate = Spec->Ability;

	ensure(AbilityToActivate);
	ensure(AbilityActorInfo.IsValid());

	UGameplayAbility* InstancedAbility = nullptr;
	Spec->InputPressed = true;

	// Attempt to activate the ability (server side) and tell the client if it succeeded or failed.
	if (InternalTryActivateAbility(Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
	{
		// TryActivateAbility handles notifying the client of success
	}
	else
	{
		ABILITY_LOG(Display, TEXT("InternalServerTryActiveAbility. Rejecting ClientActivation of %s. InternalTryActivateAbility failed"), *GetNameSafe(Spec->Ability) );
		ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		Spec->InputPressed = false;
	}
	MarkAbilitySpecDirty(*Spec);
#endif
}*/
    void InternalServerTryActiveAbility(UAbilitySystemComponent* component, FGameplayAbilitySpecHandle Handle, bool inputPressed, FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData) {
        std::cout << Handle.Handle << std::endl;

        FGameplayAbilitySpec* spec = reinterpret_cast<FGameplayAbilitySpec * (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle)>(Globals::ModuleBase + PLOffsets::FIND_ABILITY_SPEC_FROM_HANDLE)(component, Handle);

        if (!spec) {
            //std::cout << "Bailed, no ability!" << std::endl;
            //29572C0 virtual void __cdecl UAbilitySystemComponent::ClientActivateAbilityFailed_Implementation(struct FGameplayAbilitySpecHandle,short) __ptr64
            reinterpret_cast<FGameplayAbilitySpec* (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, uint16_t)>(Globals::ModuleBase + PLOffsets::CLIENT_ACTIVATE_ABILITY_FAILED)(component, Handle, PredictionKey.Current);
            return;
        }

        reinterpret_cast<void(*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey*)>(Globals::ModuleBase + PLOffsets::CONSUME_REPLICATED_TARGET_DATA)(component, Handle, &PredictionKey);
        
        
        //0x297CF40 - Reset



        void* ScopedPredictionWindow = EngineLogic::Malloc(0x100, 0);

        ScopedPredictionWindow = reinterpret_cast<void* (*)(void*, UAbilitySystemComponent*, FPredictionKey*, bool)>(Globals::ModuleBase + PLOffsets::CONSTRUCT_SCOPED_PREDICTION_WINDOW)(ScopedPredictionWindow, component, &PredictionKey, true);

        UGameplayAbility* abilityToActivate = spec->Ability;

        UGameplayAbility* InstancedAbility = nullptr;
        spec->InputPressed = true;

        //296E2B0 BOOL __cdecl UAbilitySystemComponent::InternalTryActivateAbility(struct FGameplayAbilitySpecHandle,struct FPredictionKey,class UGameplayAbility * __ptr64 * __ptr64,class TBaseDelegate<void,class UGameplayAbility * __ptr64> * __ptr64,struct FGameplayEventData const * __ptr64) __ptr64

        if (reinterpret_cast<bool (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey*, UGameplayAbility**, void*, FGameplayEventData*)>(Globals::ModuleBase + PLOffsets::INTERNAL_TRY_ACTIVATE_ABILITY)(component, Handle, &PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
            //std::cout << "Cast succeeded!" << std::endl;
        }
        else {
            //std::cout << "Bailed, cast failed!" << std::endl;
            reinterpret_cast<FGameplayAbilitySpec* (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, uint16_t)>(Globals::ModuleBase + PLOffsets::CLIENT_ACTIVATE_ABILITY_FAILED)(component, Handle, PredictionKey.Current);
            spec->InputPressed = false;
            
        }

        reinterpret_cast<void(*)(UAbilitySystemComponent*, FGameplayAbilitySpec*)>(Globals::ModuleBase + PLOffsets::MARK_ABILITY_SPEC_DIRTY)(component, spec);
    }
}

namespace Networking {
    void Listen() {
        EngineLogic::LimitFramerateForServer();

#ifdef v34
        reinterpret_cast<void(__thiscall*)(UEngine*, UWorld*, FName, FName)>(Globals::ModuleBase + PLOffsets::CREATE_NAMED_NET_DRIVER)(Globals::GetEngine(), Globals::GetGWorld(), Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameNetDriver"), Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameNetDriver"));
#endif

#ifdef v45
        reinterpret_cast<void(__thiscall*)(UEngine*, UWorld*, FName, FName)>(Globals::ModuleBase + PLOffsets::CREATE_NAMED_NET_DRIVER)(Globals::GetEngine(), Globals::GetGWorld(), Globals::GetKismetStringLibrary()->Conv_StringToName(L"GameNetDriver"), Globals::GetKismetStringLibrary()->Conv_StringToName(L"GameNetDriver"));
#endif


        UIpNetDriver* NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();

        Globals::GetGWorld()->NetDriver = NetDriver;

        FURL* url = (FURL*)EngineLogic::Malloc(sizeof(FURL), 0);

        url->Port = 7777;
        url->Valid = 1;

        FString* err = (FString*)EngineLogic::Malloc(sizeof(FString), 0);

        for (int i = 0; i < Globals::GetGWorld()->LevelCollections.Count(); i++) {
            Globals::GetGWorld()->LevelCollections[i].NetDriver = NetDriver;
        }

        reinterpret_cast<void(__thiscall*)(UIpNetDriver*, __int64, FURL*, bool, FString*)>(Globals::ModuleBase + PLOffsets::INIT_LISTEN)(NetDriver, reinterpret_cast<__int64>(Globals::GetGWorld()) + 0x28, url, false, err);

        reinterpret_cast<void(__thiscall*)(UNetDriver*, UWorld*)>(Globals::ModuleBase + PLOffsets::SET_WORLD)(NetDriver, Globals::GetGWorld());
    }

    UNetDriver* GetNetDriver() {
        if (!Globals::GetGWorld()->NetDriver)
            Globals::GetGWorld()->NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();
        return Globals::GetGWorld()->NetDriver;
    }

    std::vector<AActor*> GetActorConsiderList() {
        std::vector<AActor*> allActors = SDKUtils::GetAllObjectsOfType<AActor>();

        std::vector<AActor*> actorsToConsider = std::vector<AActor*>();

        for (AActor* actor : allActors) {
            if (actor->RemoteRole == ENetRole::ROLE_None || actor->GetFullName().find("Default") != std::string::npos || !actor->bReplicates) //
                continue;

            reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + PLOffsets::CALL_PRE_REPLICATION)(actor, GetNetDriver());

            actorsToConsider.push_back(actor);
        }

        return actorsToConsider;
    }

    UActorChannel* GetChannelForConnectionAndActor(UNetConnection* connection, AActor* actor) {
        for (int i = 0; i < connection->OpenChannels.Count(); i++) {
            UActorChannel* channel = reinterpret_cast<UActorChannel*>(connection->OpenChannels[i]);

            if (channel && (!channel->IsA(UActorChannel::StaticClass())))
                continue;

            if (channel && channel->Connection == connection && channel->Actor == actor) {
                return channel;
            }
        }

        return nullptr;
    }

    enum EChannelType
    {
        CHTYPE_None = 0,  // Invalid type.
        CHTYPE_Control = 1,  // Connection control.
        CHTYPE_Actor = 2,  // Actor-update channel.
        CHTYPE_File = 3,  // Binary file transfer.
        CHTYPE_Voice = 4,  // VoIP data channel
        CHTYPE_MAX = 8,  // Maximum.
    };

    enum EConnectionState
    {
        USOCK_Invalid = 0, // Connection is invalid, possibly uninitialized.
        USOCK_Closed = 1, // Connection permanently closed.
        USOCK_Pending = 2, // Connection is awaiting connection.
        USOCK_Open = 3, // Connection is open.
    };

    struct FNetworkObjectInfo {
        AActor* actor;
        double NextUpdateTime;
        double LastNetReplicateTime;
        float OptimalNetUpdateDelta;
    };

    bool ServerReplicateActors_PrepConnections() {
        bool bFoundReadyConnection = false;

        for (int32_t ConnIdx = 0; ConnIdx < GetNetDriver()->ClientConnections.Count(); ConnIdx++) {
            UNetConnection* Connection = GetNetDriver()->ClientConnections[ConnIdx];

            AActor* OwningActor = Connection->OwningActor;

#ifdef v34
            if (OwningActor != nullptr && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f) && (*(EConnectionState*)((__int64)Connection + 0x124)) == USOCK_Open) { //
                bFoundReadyConnection = true;

                Connection->ViewTarget = Connection->PlayerController ? Connection->PlayerController->GetViewTarget() : OwningActor;
            }
            else {
                Connection->ViewTarget = nullptr;
            }
#endif

#ifdef v45
            if (OwningActor != nullptr && (*(EConnectionState*)((__int64)Connection + 0x12C)) == USOCK_Open) { //&& (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f)
                bFoundReadyConnection = true;

                Connection->ViewTarget = Connection->PlayerController ? Connection->PlayerController->GetViewTarget() : OwningActor;
            }
            else {
                Connection->ViewTarget = nullptr;
            }
#endif
        }

        return bFoundReadyConnection;
    }

    struct FSharedPtr {
        FNetworkObjectInfo* ptr;
        void* pad;
    };

    struct FNetworkObjectList {
        UC::TSet<FSharedPtr> FNetworkObjectSet;
    };

    FNetworkObjectList GetNetworkObjectList(UNetDriver* NetDriver) {
        return *(FNetworkObjectList*)((__int64)NetDriver + 0x3A0);
    }

    float GetWorldTimeSeconds(UWorld* world) {
        return *(float*)((__int64)world + 0x8E0);
    }

    /*
    void ServerReplicateActors_BuildConsiderList(std::vector<FNetworkObjectInfo*>& ConsiderList, float ServerTickTime) {
        int32_t NumInitiallyDormant = 0;

        std::cout << GetNetworkObjectList(GetNetDriver()).FNetworkObjectSet.Num() << std::endl;

        for (int i = 0; i < GetNetworkObjectList(GetNetDriver()).FNetworkObjectSet.Num(); i++) {
            if (!GetNetworkObjectList(GetNetDriver()).FNetworkObjectSet.IsValidIndex(i))
                continue;

            FNetworkObjectInfo* ActorInfo = (FNetworkObjectInfo*)EngineLogic::Malloc(sizeof(FNetworkObjectInfo), 0);

            ActorInfo = GetNetworkObjectList(GetNetDriver()).FNetworkObjectSet[i].ptr;

            if (ActorInfo) {
                std::cout << "Valid ActorInfo!" << std::endl;
                AActor* actor = ActorInfo->actor;

                if (actor->GetRemoteRole() == ENetRole::ROLE_None || actor->GetFullName().find("SpawnPad_Agent") != std::string::npos) {
                    continue;
                }

                if (ActorInfo->LastNetReplicateTime == 0) {
                    ActorInfo->LastNetReplicateTime = GetWorldTimeSeconds(Globals::GetGWorld());
                    ActorInfo->OptimalNetUpdateDelta = 1.0f / actor->NetUpdateFrequency;
                }

                const float ScaleDownStartTime = 2.0f;
                const float ScaleDownTimeRange = 5.0f;

                const float LastReplicateDelta = GetWorldTimeSeconds(Globals::GetGWorld()) - ActorInfo->LastNetReplicateTime;

                if (LastReplicateDelta > ScaleDownStartTime) {
                    if (actor->MinNetUpdateFrequency == 0.0f) {
                        actor->MinNetUpdateFrequency = 2.0f;
                    }

                    const float MinOptimalDelta = 1.0f / actor->NetUpdateFrequency;
                    const float MaxOptimalDelta = fmaxf(1.0f / actor->MinNetUpdateFrequency, MinOptimalDelta);

                    const float Alpha = std::clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f);
                    ActorInfo->OptimalNetUpdateDelta = std::lerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
                }

                if (!actor->bPendingNetUpdate) {
                    const float NextUpdateDelta = ActorInfo->OptimalNetUpdateDelta;

                    actor->NetUpdateTime = GetWorldTimeSeconds(Globals::GetGWorld()) + std::rand() * ServerTickTime + NextUpdateDelta;

                    actor->LastNetUpdateTime = GetNetDriver()->Time;
                }

                actor->bPendingNetUpdate = false;

                ConsiderList.push_back(ActorInfo);

                reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + PLOffsets::CALL_PRE_REPLICATION)(actor, GetNetDriver()); //CallPreReplication
            }
            else {
                std::cout << "Invalid ActorInfo!" << std::endl;
            }
        }
    }
    */

    struct FActorPriority {
        int Priority;

        FNetworkObjectInfo* ActorInfo;
        UActorChannel* Channel;
    };

    int* GetTickCountPtr(UNetConnection* connection) {
#ifdef v34
        return (int*)((__int64)connection + 0x7F);
#endif 

#ifdef v45
        return (int*)((__int64)connection + 0x204);
#endif
    }

    //static std::vector<UActorChannel*> actorChannels = std::vector<UActorChannel*>();

    struct ActorInfo {
        AActor* actor;
        UActorChannel* channel;
    };

    struct ConnectionChannels {
        UNetConnection* connection;
        std::vector<UActorChannel*>* channels;
    };

    static std::vector<ConnectionChannels> connectionChannels = std::vector<ConnectionChannels>();

    std::vector<ActorInfo> ServerReplicateActors_PrioritizeActors(UNetConnection* connection, std::vector<FNetworkObjectInfo*> ConsiderList) {
        std::vector<ActorInfo> out = std::vector<ActorInfo>();

        static int NetTag = 0;

        NetTag++;
        (*GetTickCountPtr(connection))++;

        int FinalSortedCount = 0;
        int DeletedCount = 0;

        const int MaxSortedActors = ConsiderList.size();

        if (MaxSortedActors > 0) {

            for (FNetworkObjectInfo* actorInfo : ConsiderList) {
                AActor* Actor = actorInfo->actor;

                UActorChannel* Channel = nullptr;

                /*
                for (UActorChannel* cmpChannel : actorChannels) {
                    if (cmpChannel->Actor != Actor)
                        continue;

                    if (cmpChannel->Connection != connection)
                        continue;

                    Channel = cmpChannel;
                    break;
                }
                */

                for (ConnectionChannels ccs : connectionChannels) {
                    if (ccs.connection == connection) {
                        for (UActorChannel* ch : *ccs.channels) {
                            if (ch->Actor == Actor) {
                                Channel = ch;
                                break;
                            }
                        }
                        break;
                    }
                }
                

                if (Actor->NetTag != NetTag) {
                    Actor->NetTag = NetTag;
                }


                ActorInfo newActorInfo = ActorInfo();

                newActorInfo.actor = Actor;
                newActorInfo.channel = Channel;

                out.push_back(newActorInfo);
            }
        }

        return out;
    }

    static std::vector<AActor*> actorsToDelete = std::vector<AActor*>();

    int ServerReplicateActors_ProcessPrioritizedActors(UNetConnection* Connection, std::vector<ActorInfo> PriorityActors, int& OutUpdated) {
        /*
        if (!reinterpret_cast<bool(*)(UNetConnection*, int)>(Globals::ModuleBase + 0x1feba80)(Connection, 0)) { //TODO: This is both blatantly incorrect (Offset for UChildConnection, not UNetConnection), and somehow fucked up on top of that (+0x20 of the actual function). I don't wanna touch it rn, but TODO for the netcode refactor
            return 0;
        }
        */

        int ActorUpdatesThisConnection = 0;
        int ActorUpdatesThisConnectionSent = 0;
        int FinalRelevantCount = 0;

        bool pcFound = false;

        for (int j = 0; j < PriorityActors.size(); j++) {
            UActorChannel* Channel = PriorityActors[j].channel;

            if (!Channel || Channel->Actor) {
                AActor* Actor = PriorityActors[j].actor;

#ifdef v34
                if (Connection->ViewTarget) {
                    FVector loc = Connection->ViewTarget->K2_GetActorLocation();

                    if (!reinterpret_cast<bool(*)(AActor*, AActor*, AActor*, FVector*)>(Globals::ModuleBase + PLOffsets::IS_NET_RELEVANT)(Actor, Connection->PlayerController, Connection->ViewTarget, &loc) && !Actor->IsA(APawn::StaticClass()))
                        continue;
                }
#endif

                static UClass* gamePC = nullptr;

                if (!gamePC)
                    gamePC = AOrionPlayerController_Game::StaticClass();

                if (Actor != Connection->PlayerController && Actor->Class == gamePC) {
                    continue;
                }
                
                FinalRelevantCount++;

                if (Channel == nullptr && Actor) {
                    Channel = reinterpret_cast<UActorChannel * (*)(UNetConnection*, EChannelType, bool, int)>(Globals::ModuleBase + PLOffsets::CREATE_CHANNEL)(Connection, EChannelType::CHTYPE_Actor, true, -1); //CreateChannel

                    if (Channel) {
                        reinterpret_cast<void(*)(UActorChannel*, AActor*)>(Globals::ModuleBase + PLOffsets::SET_CHANNEL_ACTOR)(Channel, Actor); //SetChannelActor

                        bool found = false;
                        for (ConnectionChannels ccs : connectionChannels) {
                            if (ccs.connection == Connection) {
                                found = true;
                                ccs.channels->push_back(Channel);
                            }
                        }

                        if (!found) {
                            connectionChannels.push_back(ConnectionChannels());
                            connectionChannels.back().channels = new std::vector<UActorChannel*>();
                            connectionChannels.back().channels->push_back(Channel);
                            connectionChannels.back().connection = Connection;
                        }

                        //actorChannels.push_back(Channel);
                    }
                }

                if (Channel && Channel->Actor) {
#ifdef v34
                   if (reinterpret_cast<bool(*)(UNetConnection*, int)>(Globals::ModuleBase + PLOffsets::IS_NET_READY)(Connection, 0)) { //IsNetReady
#endif

#ifdef v45
                       if ((*reinterpret_cast<bool(**)(UNetConnection*, int)>(Globals::ModuleBase + PLOffsets::IS_NET_READY_PTR_PTR))(Connection, 0)){
#endif
                        if (reinterpret_cast<bool(*)(UActorChannel*)>(Globals::ModuleBase + PLOffsets::REPLICATE_ACTOR)(Channel)) { //ReplicateActor
                            //std::cout << "Replicated Actor " << Actor->GetFullName() << std::endl;
                            
                            ActorUpdatesThisConnectionSent++;

                            /*
                            const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
                            const float MaxOptimalDelta = std::fmaxf(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
                            const float DeltaBetweenReplications = (GetWorldTimeSeconds(Globals::GetGWorld()) - PriorityActors[j].ActorInfo->LastNetReplicateTime);

                            PriorityActors[j].ActorInfo->OptimalNetUpdateDelta = std::clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
                            PriorityActors[j].ActorInfo->LastNetReplicateTime = GetWorldTimeSeconds(Globals::GetGWorld());
                            */
                        }
                        else {
                            /*
                            if (Channel->Actor)
                                std::cout << "Replication Failed for " << Channel->Actor->GetFullName() << std::endl;
                            else
                                std::cout << "Replication Failed for nonexistent actor!" << std::endl;
                                */
                        }

                        ActorUpdatesThisConnection++;
                        OutUpdated++;
                    }
                    else {
                        //std::cout << "Replication Failed, Forcing Net Update!" << std::endl;
                        reinterpret_cast<void(*)(AActor*)>(Globals::ModuleBase + PLOffsets::FORCE_NET_UPDATE)(Actor); //AActor::ForceNetUpdate
                    }

#ifdef v34
                    if (!reinterpret_cast<bool(*)(UNetConnection*, int)>(Globals::ModuleBase + PLOffsets::IS_NET_READY)(Connection, 0)) {
                        std::cout << "Bailing on processing actors..." << std::endl;
                        return j;
                    }
#endif

#ifdef v45
                    if (!(*reinterpret_cast<bool(**)(UNetConnection*, int)>(Globals::ModuleBase + PLOffsets::IS_NET_READY_PTR_PTR))(Connection, 0)) {
                        std::cout << "Bailing on processing actors..." << std::endl;
                        return j;
                    }
#endif
                }
            }
        }
    }

    void ServerReplicateActors() {
        if (!GetNetDriver()) {
            Globals::GetGWorld()->NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();
        }

        if (GetNetDriver()->ClientConnections.Count() == 0) {
            return;
        }

#ifdef v34
        (*(__int64*)((__int64)GetNetDriver() + 0x280))++; //Bump ReplicationFrame
#endif

#ifdef v45
        (*(__int64*)((__int64)GetNetDriver() + 0x2D8))++; //Bump ReplicationFrame
#endif

        bool shouldTick = ServerReplicateActors_PrepConnections();

        if (!shouldTick) {
            return;
        }

#ifdef v34
        float ServerTickTime = 30.0f; //Hardcoded 30 tickrate, changeme if want higher tickrate
#endif

#ifdef v45
        float ServerTickTime = 60.0f;
#endif

        ServerTickTime = 1.0f / ServerTickTime;

        std::vector<FNetworkObjectInfo*> ConsiderList = std::vector<FNetworkObjectInfo*>();

        TArray<AActor*>* actors = (TArray<AActor*>*)EngineLogic::Malloc(sizeof(TArray<AActor*>), 0);
#ifdef v34
        Globals::GetGameplayStatics()->STATIC_GetAllActorsOfClass(Globals::GetGWorld(), AActor::StaticClass(), actors);
#endif

#ifdef v45
        Globals::GetGameplayStatics()->GetAllActorsOfClass(Globals::GetGWorld(), AActor::StaticClass(), actors);
#endif

        for (int i = 0; i < actors->Count(); i++) { //UObject::GObjects->Count()
            //UObject* obj = //UObject::GObjects->GetByIndex(i);

            //if (!obj)
                //continue;

            //if (!obj->IsA(AActor::StaticClass()))
                //continue;
#ifdef v34
            AActor* actor = actors->_data[i];//(AActor*)obj;
#endif

#ifdef v45
            AActor* actor = actors->Data[i];
#endif

            if (!actor)
                continue;

            if (actor->RemoteRole == ENetRole::ROLE_None) {
                continue;
            }

            //if (reinterpret_cast<UWorld * (*)(AActor*)>(Globals::ModuleBase + 0x1B89A60)(actor) != Globals::GetGWorld())
                //continue;

            if (reinterpret_cast<bool(*)(AActor*)>(Globals::ModuleBase + PLOffsets::IS_PENDING_KILL_PENDING)(actor))
                continue;

            FNetworkObjectInfo* newConsider = (FNetworkObjectInfo*)EngineLogic::Malloc(sizeof(FNetworkObjectInfo), 0);
            newConsider->actor = actor;
            newConsider->LastNetReplicateTime = 0;
            newConsider->NextUpdateTime = 0;
            newConsider->OptimalNetUpdateDelta = 1.0f;

            reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + PLOffsets::CALL_PRE_REPLICATION)(actor, GetNetDriver());

            ConsiderList.push_back(newConsider);
        }

        //std::vector<std::vector<ActorInfo>> actorInfos = std::vector<std::vector<ActorInfo>>();
        
        /*
        for (int i = 0; i < GetNetDriver()->ClientConnections.Count(); i++) {
            actorInfos.push_back(std::vector<ActorInfo>());
        }
        
        std::for_each(std::execution::par, GetNetDriver()->ClientConnections.begin(), GetNetDriver()->ClientConnections.end(), [&actorInfos, &ConsiderList](auto&& connection) {
            (*GetTickCountPtr(connection))++;

            for (int i = 0; i < GetNetDriver()->ClientConnections.Count(); i++) {
                if (GetNetDriver()->ClientConnections[i] == connection) {
                    for (FNetworkObjectInfo* objInfo : ConsiderList) {
                        ActorInfo aInfo = ActorInfo();

                        aInfo.actor = objInfo->actor;

                        UActorChannel * Channel = nullptr;

                        for (ConnectionChannels ccs : connectionChannels) {
                            if (ccs.connection == connection) {
                                for (UActorChannel* ch : *ccs.channels) {
                                    if (ch->Actor == objInfo->actor) {
                                        Channel = ch;
                                        break;
                                    }
                                }
                                break;
                            }
                        }

                        aInfo.channel = Channel;
                        actorInfos[i].push_back(aInfo);
                    }
                    break;
                }
            }
            });
            */

        for (int i = 0; i < GetNetDriver()->ClientConnections.Count(); i++) {
            UNetConnection* Connection = GetNetDriver()->ClientConnections[i];
            
            //actorInfos[i];

            AActor* OwningActor = Connection->OwningActor;

#ifdef v34
            if (!(OwningActor != nullptr && (*(EConnectionState*)((__int64)Connection + 0x124)) == USOCK_Open && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))) { //
                continue;
            }
#endif

#ifdef v45
            if (!(OwningActor != nullptr && (*(EConnectionState*)((__int64)Connection + 0x12C)) == USOCK_Open && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))) { //
                continue;
            }
#endif

            if (Connection->PlayerController) {
                reinterpret_cast<void(*)(APlayerController*)>(Globals::ModuleBase + PLOffsets::SEND_CLIENT_ADJUSTMENT)(Connection->PlayerController);
            }

            

            std::vector<ActorInfo> aInfos = ServerReplicateActors_PrioritizeActors(Connection, ConsiderList);

            int Updated = 0;

            int LastProcessedActor = ServerReplicateActors_ProcessPrioritizedActors(Connection, aInfos, Updated);

            for (int k = LastProcessedActor; k < aInfos.size(); k++) {
                if (!aInfos[i].actor) {
                    continue;
                }

                AActor* Actor = aInfos[i].actor;

                //Actor->bPendingNetUpdate = true;
            }
        }
    }
}

namespace Hooking {
    bool procingCurrentFuncPtrs = false;

    static std::vector<void*> FuncPtrsToProcInGameThread = std::vector<void*>();

    void ProcInGameThread(void* ptr) {
        FuncPtrsToProcInGameThread.push_back(ptr);
    }

    static bool triggerAbilityFailed = false;

    bool TriggerAbilities(UAbilitySystemComponent* asc){
        bool procdAnAbility = false;

        for (UOrionAbilityTask_StartTargeting* target : GameplayAbilities::targetingTasks) {
            static std::vector< UOrionAbilityTask_StartTargeting*> alreadyProcdTasks = std::vector<UOrionAbilityTask_StartTargeting*>();

            if (target->GetFullName().find("Default") == std::string::npos) {
                bool alreadyProcd = false;

                for (UOrionAbilityTask_StartTargeting* cmp : alreadyProcdTasks) {
                    if (cmp == target) {
                        alreadyProcd = true;
                        break;
                    }
                }

                if (!alreadyProcd && asc == target->AbilitySystemComponent) {
                    alreadyProcdTasks.push_back(target);
                    procdAnAbility = true;
                    std::cout << target->GetFullName() << std::endl;
                    target->ConfirmOrCancel();
                }
            }
        }

        return procdAnAbility;
    }

    //void ProcTriggerAbilityInDelay() {
        //Sleep(10);
        //ProcInGameThread(TriggerAbilities);
    //}

    /*
    void MakePrimeBuffLastForever() {
        for (AOrionCarriedObjective* carriedObjective: SDKUtils::GetAllObjectsOfType< AOrionCarriedObjective>()) {
            carriedObjective->MaxLifespanTimer.Value = 10000.0f;
            carriedObjective->ObjectiveLifespanTimer.Value = 10000.0f;
        }
    }

    void MakePrimeBuffLastForeverDelay() {
        Sleep(10 * 1000);
        Hooking::ProcInGameThread(MakePrimeBuffLastForever);
    }
    */

    void* origProcessEvent = nullptr;

    void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
        static UFunction* internalServerTryActiveAbilityFunction = nullptr;

        static UFunction* internalServerTryActiveAbilityFunctionWithEventData = nullptr;

        static UFunction* waitNotifyNameFunction = nullptr;

        static UFunction* primeKilledFunction = nullptr;

        static UFunction* primeDeliveredFunction = nullptr;

        if (!internalServerTryActiveAbilityFunction)
            internalServerTryActiveAbilityFunction = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");

        if (!internalServerTryActiveAbilityFunctionWithEventData)
            internalServerTryActiveAbilityFunctionWithEventData = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");

        /*
        if(!primeKilledFunction)
            primeKilledFunction = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.OnDeath_Event_1");

        if(!primeDeliveredFunction)
            primeDeliveredFunction = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnScoredObjective");
            */

        /*
        if (function == primeDeliveredFunction) {
            ABP_PrimeHelix_v2_C* theBuff = reinterpret_cast<ABP_PrimeHelix_v2_C*>(object);

            EOrionTeam team = reinterpret_cast<AOrionPlayerController_Game*>(theBuff->Carrier->Controller)->GetTeamNum();

            if (team == EOrionTeam::TeamRed) {
                EngineLogic::ExecuteConsoleCommand(L"forcewinmatch 0");
            }
            else {
                EngineLogic::ExecuteConsoleCommand(L"forcewinmatch 1");
            }

            return nullptr;
        }

        if (primeKilledFunction && function == primeKilledFunction) {
            //32DF70

            ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C* theHelix = reinterpret_cast<ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C*>(object);

            FGameplayTagContainer tags1 = FGameplayTagContainer();
            FGameplayTagContainer tags2 = FGameplayTagContainer();
            FGameplayTagContainer tags3 = FGameplayTagContainer();

            reinterpret_cast<void(*)(AOrionPickupManager*, UClass*, int, AActor*, AController*, AActor*, AActor*, int, FVector, FGameplayTagContainer*, FGameplayTagContainer*, FGameplayTagContainer*, float)>(Globals::ModuleBase + 0x5324B0)(SDKUtils::GetLastOfType<AOrionPickupManager>(), ABP_PrimeHelix_v2_C::StaticClass(), 1, theHelix, theHelix->Controller, theHelix, theHelix->CachedBestTarget, 2, theHelix->K2_GetActorLocation(), &tags1, &tags2, &tags3, 1.0f);

            //std::thread t(MakePrimeBuffLastForeverDelay);
           // t.detach();

            return nullptr;
        }
        */

        if (function == internalServerTryActiveAbilityFunction) {
#ifdef v34
            UAbilitySystemComponent_ServerTryActivateAbility_Params* castParams = reinterpret_cast<UAbilitySystemComponent_ServerTryActivateAbility_Params*>(params);
#endif

#ifdef v45
            Params::AbilitySystemComponent_ServerTryActivateAbility* castParams = reinterpret_cast<Params::AbilitySystemComponent_ServerTryActivateAbility*>(params);
#endif

            GameplayAbilities::InternalServerTryActiveAbility(reinterpret_cast<UAbilitySystemComponent*>(object), castParams->AbilityToActivate, castParams->InputPressed, castParams->PredictionKey, nullptr);

            return reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);
        }

        if (function == internalServerTryActiveAbilityFunctionWithEventData) {
            //std::cout << "DUMMY FUNCTION CALLED" << std::endl;

            UOrionAbilitySystemComponent* castObj = (UOrionAbilitySystemComponent*)object;

            GameplayAbilities::abilitiesToProc.push_back(GameplayAbilities::AbilityProcInfo(castObj));

            TriggerAbilities(castObj);
        }

        if (object->IsA(UOrionDamage::StaticClass())) {
            UOrionDamage* dmg = reinterpret_cast<UOrionDamage*>(object);

#ifdef v34
            UGameplayEffectExecutionCalculation_Execute_Params* dmgParams = reinterpret_cast<UGameplayEffectExecutionCalculation_Execute_Params*>(params);
#endif

#ifdef v45
            Params::GameplayEffectExecutionCalculation_Execute* dmgParams = reinterpret_cast<Params::GameplayEffectExecutionCalculation_Execute*>(params);
#endif

            DamageCalculations::DoDamagePipeline(dmg, dmgParams);

            return nullptr;
        }

        return reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);
    }

    void* aactorGetNetMode = nullptr;
    void* uworldGetNetMode = nullptr;
    void* uengineGetNetMode = nullptr;

    __int64 GetNetModeHook() {
        return 2;
    }

    void* origStatManagerCrash = nullptr;

    void StatManagerCrashHook() {
        return;
    }

    void* origNetDriverTickFlush = nullptr;

    void NetDriverTickFlushHook(__int64 NetDriver, float DeltaTime) {
        reinterpret_cast<void(*)(__int64, float)>(origNetDriverTickFlush)(NetDriver, DeltaTime);

        Networking::ServerReplicateActors();
    }

    void DelayedPCSetup(AOrionPlayerController_Game* pc) {
        Sleep(25 * 1000);

        std::cout << "Setting up new player..." << std::endl;
        GameLogic::RestartClient(pc);
    }

    struct PlayerInfo {
        std::string hero;
        std::string team;
        std::string name;
    };

    std::vector<std::pair<APlayerController*, PlayerInfo>> playerInfoArray = std::vector<std::pair<APlayerController*, PlayerInfo>>();

    void* origGameModeMOBAPostLogin = nullptr;

    void GameModeMOBAPostLogin(AOrionGameMode_MOBA* gamemode, AOrionPlayerController_Game* controller) {
        if (controller != Globals::GetLocalPlayerController< AOrionPlayerController_Game>()) {
            PlayerInfo info;

            for (auto pair : playerInfoArray) {
                if (pair.first == controller) {
                    info = pair.second;
                    break;
                }
            }

            controller->ClientHandlePostLogin();
            controller->ClientHandleMatchIsWaitingToStart();

            GameLogic::AddControllerToTeam(controller, info.team.find("1") != std::string::npos ? EOrionTeam::TeamRed : EOrionTeam::TeamBlue);

            UOrionHeroData* heroData = new UOrionHeroData();
            UOrionSkinItemDefinition* skin = new UOrionSkinItemDefinition();

#ifdef v34
            for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
            {
                auto object = UObject::GetGlobalObjects().GetByIndex(i);
#endif

#ifdef v45
                for (int32_t i = 0; i < UObject::GObjects->Num(); ++i)
                {
                    auto object = UObject::GObjects->GetByIndex(i);
#endif

                if (!object)
                    continue;

                if (!object->IsA(UOrionHeroData::StaticClass()))
                    continue;

                if (object->GetFullName().find("AnimTest") != std::string::npos)
                    continue;

                if (object->GetFullName().find(info.hero) != std::string::npos)
                    heroData = reinterpret_cast<UOrionHeroData*>(object);
            }
#ifdef v34
                for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
                {
                    auto object = UObject::GetGlobalObjects().GetByIndex(i);
#endif

#ifdef v45
                    for (int32_t i = 0; i < UObject::GObjects->Num(); ++i)
                    {
                        auto object = UObject::GObjects->GetByIndex(i);
#endif

                if (!object)
                    continue;

                if (!object->IsA(UOrionSkinItemDefinition::StaticClass()))
                    continue;

                if (object->GetFullName().find(info.hero) != std::string::npos)
                    skin = reinterpret_cast<UOrionSkinItemDefinition*>(object);
            }

            std::wstring wname(info.name.begin(), info.name.end());

            FString nameString = FString(wname.c_str());

            controller->SetName(nameString);

            GameLogic::SetControllerHeroData(controller, heroData);
#ifdef v34
            GameLogic::AddAllCardsToControllersDeck(controller);
#endif
            GameLogic::SetupHUDForController(controller);
            
            static int numPlayers = 0;

            numPlayers++;

            if (numPlayers >= Settings::NUM_PLAYERS_TO_START)
                Globals::shouldStartMatch = true;
        }
        else {
            reinterpret_cast<void(*)(AOrionGameMode_MOBA * gamemode, AOrionPlayerController_Game * controller)>(origGameModeMOBAPostLogin)(gamemode, controller);
        }
    }

    enum EAcceptConnection
    {
        /** Reject the connection */
        Reject,
        /** Accept the connection */
        Accept,
        /** Ignore the connection, sending no reply, while server traveling */
        Ignore
    };

    void* origNotifyAcceptingConnection = nullptr;

    EAcceptConnection NotifyAcceptingConnectionHook(UWorld* world) {
        return EAcceptConnection::Accept;
    }

    void* origNotifyAcceptedConnection = nullptr;

    EAcceptConnection NotifyAcceptedConnectionHook(UWorld* world, UNetConnection* connection) {
        return EAcceptConnection::Accept;
    }

    void* origNotifyAcceptingChannel = nullptr;

    bool NotifyAcceptingChannelHook(UWorld* world, UChannel* channel) {
        return true;
    }

    void* origNotifyControlMessage = nullptr;

    void NotifyControlMessage(UWorld* world, UNetConnection* connection, __int8 a3, void* a4) {
        if (!Globals::GetGWorld()->NetDriver) {
            Globals::GetGWorld()->NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();
        }
        return reinterpret_cast<void(*)(__int64, UNetConnection * connection, __int8 a3, void* a4)>(origNotifyControlMessage)(reinterpret_cast<__int64>(Globals::GetGWorld()) + 0x28, connection, a3, a4);
    }

    void* origGameModeMOBAPreLogin = nullptr;

    void GameModeMOBAPreLoginHook(AOrionGameMode_MOBA* moba, FString* Options, FString* Address, FUniqueNetIdRepl* UniqueId, FString* ErrorMessage) {
        return;
    }

    void* origCheckAbandonMatchTimer = nullptr;

    bool CheckAbandonMatchTimerHook(AOrionGameMode_MOBA* gamemode) {
        return false;
    }

    void* origHasClientLoadedCurrentWorld = nullptr;

    bool HasClientLoadedCurrentWorldHook(AGameMode* a1, APlayerController* a2) {
        return !(a2 == Globals::GetLocalPlayerController<APlayerController>());
    }

    void* origCanRestartPlayer = nullptr;

    bool CanRestartPlayerHook(AOrionPlayerController_Game* a1) {
        return a1 != Globals::GetLocalPlayerController<AOrionPlayerController_Base>();
    }

#ifdef v45
    void* origGameModeCanRestartPlayer = nullptr;

    bool GameModeCanRestartPlayer(AGameMode* a1, APlayerController* a2) {
        return a2 != Globals::GetLocalPlayerController<AOrionPlayerController_Base>();
    }
#endif

    void* origCollectGarbage = nullptr;

    void CollectGarbageHook() {

    }

    void* origConsumeClientTargetData = nullptr;

    void ConsumeClientTargetDataHook() {

    }

    void* origCloseConnection = nullptr;

    void CloseConnection() {

    }

    void* origTargetDataReplicated = nullptr;

    void TargetDataReplicatedHook(UAbilityTask_WaitTargetData* targetData, void* a2) {
        std::cout << "Target Data Replicated!" << std::endl;
        return reinterpret_cast<void(*)(UAbilityTask_WaitTargetData*, void* a2)>(origTargetDataReplicated)(targetData, a2);
    }

    void* origGameEngineTick = nullptr;

    static int numTicksAbilitiesTriggered = 0;

    const int maxNumTicksAbilitiesTriggered = 10;

    static int numTicksWaitedToStartMatch = 0;

    const int maxNumTicksWaitedToStartMatch = 100;

    int GameEngineTickHook(UGameEngine* gameengine, float deltatime, char a3) {
        if (!procingCurrentFuncPtrs && FuncPtrsToProcInGameThread.size() > 0) {
            procingCurrentFuncPtrs = true;

            while (!FuncPtrsToProcInGameThread.empty()) {
                void* funcPtr = FuncPtrsToProcInGameThread.back();

                reinterpret_cast<void(*)()>(funcPtr)();

                if(!FuncPtrsToProcInGameThread.empty())
                    FuncPtrsToProcInGameThread.pop_back();
            }

            procingCurrentFuncPtrs = false;
        }

        static bool matchStarted = false;
        if(GetAsyncKeyState(VK_F7) && !matchStarted) {
            matchStarted = true;
            GameLogic::StartMatch();
        }

        static bool mapLoaded = false;
        if (GetAsyncKeyState(VK_F8) && !mapLoaded) {
            mapLoaded = true;
            OnGameInit();
        }

        static bool mapInit = false;
        if (GetAsyncKeyState(VK_F9) && !mapInit) {
            mapInit = true;
            OnMatchInit();
        }

        if (GetAsyncKeyState(VK_F1)) {
            UOrionAISettings* aiSettings = SDKUtils::GetLastOfType< UOrionAISettings>();
            for (int i = 0; i < aiSettings->NamedBotHeroLists.Count(); i++) {
                std::cout << aiSettings->NamedBotHeroLists[i].HeroSetName.ToString() << std::endl;
            }
        }

        while (GameplayAbilities::instantConfirmTasks.size() > 0) {
            GameplayAbilities::instantConfirmTasks.back()->ConfirmOrWait();
            GameplayAbilities::instantConfirmTasks.pop_back();
        }

        if (Globals::shouldStartMatch) {
            numTicksWaitedToStartMatch++;

            if (numTicksWaitedToStartMatch >= maxNumTicksWaitedToStartMatch) {
                Globals::shouldStartMatch = false;
                GameLogic::StartMatch();
            }
        }
        

        return reinterpret_cast<int(*)(UGameEngine * gameengine, float deltatime, char a3)>(origGameEngineTick)(gameengine, deltatime, a3);
    }

    void* origApproveLogin = nullptr;
    __int64 ApproveLoginHook(FString* options) {
        std::cout << "Approved Login!" << std::endl;
        return 0;
    }

    void* origStopDemo = nullptr;
    void StopDemoHook(UDemoNetDriver* a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6) {
        return;
    }

    void* origDemoTickFlush = nullptr;
    __int64 DemoTickFlushHook(UDemoNetDriver* a1, float a2) {
        return 0;
    }

    void* origNewObjectStartTargeting = nullptr;
    UOrionAbilityTask_StartTargeting* NewObjectStartTargetingHook(UObject* obj, FName* name, EGameplayTargetingConfirmation targetingType, int32_t idk) { //__int64 a1, __int64 a2
        UOrionAbilityTask_StartTargeting* target = reinterpret_cast<UOrionAbilityTask_StartTargeting * (*)(UObject*, FName*, EGameplayTargetingConfirmation, int32_t)>(origNewObjectStartTargeting)(obj, name, targetingType, idk);

        if (target) {
            if (target->Ability && target->Ability->GetFullName().find("Primary") != std::string::npos) {
                GameplayAbilities::instantConfirmTasks.push_back(target);
            }
            else {
                GameplayAbilities::targetingTasks.push_back(target);
            }
        }

        return target;
    }

    //virtual class APlayerController * __ptr64 __cdecl AOrionGameMode_MOBA::Login(class UPlayer * __ptr64,enum ENetRole,class FString const & __ptr64,class FString const & __ptr64,struct FUniqueNetIdRepl const & __ptr64,class FString & __ptr64)

    void* origLogin = nullptr;
    APlayerController* LoginHook(AOrionGameMode_MOBA* GameMode, UPlayer* player, ENetRole role, FString* portal, FString* options, FUniqueNetIdRepl* NetID, FString* err) {
        APlayerController* ret = reinterpret_cast<APlayerController* (*)(AOrionGameMode_MOBA * GameMode, UPlayer * player, ENetRole role, FString * portal, FString * options, FUniqueNetIdRepl * NetID, FString * err)>(origLogin)(GameMode, player, role, portal, options, NetID, err);

#ifdef v34
        std::wstring optionsWString(options->_data);
#endif

#ifdef v45
        std::wstring optionsWString(options->Data);
#endif

        std::string optionsString(optionsWString.begin(), optionsWString.end());

        PlayerInfo info = PlayerInfo();

        info.hero = optionsString.substr(optionsString.find("?hero=") + std::string("?hero=").size());
        info.hero = info.hero.substr(0, info.hero.find("?"));

        info.name = optionsString.substr(optionsString.find("?displayname=") + std::string("?displayname=").size());
        info.name = info.name.substr(0, info.name.find("?"));

        info.team = optionsString.substr(optionsString.find("?team=") + std::string("?team=").size());
        info.team = info.team.substr(0, info.team.find("?"));

        std::cout << info.hero << std::endl;
        std::cout << info.name << std::endl;
        std::cout << info.team << std::endl;

        playerInfoArray.push_back(std::pair<APlayerController*, PlayerInfo>(ret, info));

        return ret;
    }

#ifdef v34
    void* origIsCardInDeck = nullptr;
    bool IsCardInDeckHook(FOrionLinkedCardsArray* a1, FOrionCardInstance* a2) {
        return true;
    }

    void* origRemoveCard = nullptr;
    void RemoveCardHook(AOrionPlayerState_Base* a1, FOrionCardInstance* a2) {
        return;
    }

    void* origIsCardInDeck2 = nullptr;
    bool IsCardInDeck2Hook(FOrionLinkedCards* a1, FOrionCardInstance* a2) {
        return true;
    }

    void* origFillAccountLevelData = nullptr;
    void FillAccountDataHook(UPostGameContext* a1) {

    }
#endif

    void* origReturnToMainMenuToString = nullptr;
    void ReturnToMainMenuToString(__int64 a1) {
        static bool gameInit = false;

        if (!gameInit) {
            gameInit = true;
            OnGameInit();
        }

        return reinterpret_cast<void(*)(__int64)>(origReturnToMainMenuToString)(a1);
    }

    void* origSetEndSequence = nullptr;
    //void __fastcall AOrionGameState_MOBA::SetEndMatchSequence(AOrionGameState_MOBA *this, struct ULevelSequencePlayer *a2)
    void SetEndSequenceHook(AOrionGameState_MOBA* a1, ULevelSequencePlayer* a2) {
        static bool matchInit = false;

        if (!matchInit) {
            matchInit = true;
            ProcInGameThread(OnMatchInit);
        }

        return reinterpret_cast<void(*)(AOrionGameState_MOBA*, ULevelSequencePlayer*)>(origSetEndSequence)(a1, a2);
    }

    void* origTArrayRemoveSound = nullptr;
    bool TArrayRemoveSoundHook(__int64 a1, __int64 a2) {
        return 1;
    }

    void* origCanAddCard = nullptr;
    bool CanAddCardHook(__int64 a1, int a2, __int64 a3) {
        return true;
    }

    void* origBannerSocket = nullptr;
    __int64 BannerSocketHook(__int64 PlayerState, __int64 a2, __int64 a3, __int64 a4, char a5) {
        std::cout << "STUBBED BANNER SOCKET FUNC" << std::endl;
        return 0;
    }

    static UOrionHeroData* botHeroDataOverride = nullptr;

    void* origSpawnActor = nullptr;
    AActor* SpawnActorHook(UWorld* a1, UClass* a2, FVector* a3, FRotator* a4) {
        AActor* ret = reinterpret_cast<AActor * (*)(UWorld * a1, UClass * a2, FVector * a3, FRotator * a4)>(origSpawnActor)(a1, a2, a3, a4);

        if (botHeroDataOverride) { //TODO: This can be more efficient by finding out EXACTLY what class is being spawned and just comparing the top level class instead of IsA            
            std::cout << "Bot Hero Data Override Proc'd, setting hero data spec!" << std::endl;
            
            std::cout << a2->GetFullName() << std::endl;

            FOrionHeroDataSpec spec = FOrionHeroDataSpec();

            spec.HeroData = botHeroDataOverride;
            spec.Skin = botHeroDataOverride->DefaultSkin;

            reinterpret_cast<AOrionPlayerState_Base*>(ret)->HeroDataSpec = spec;

            botHeroDataOverride = nullptr;
        }

        return ret;
    }

    void* origSpawnBot = nullptr;
    AOrionAIBot* SpawnBotHook(UOrionAISystem* a1, UOrionHeroData* a2, EOrionTeam a3, EAIBotDifficulty a4, FVector a5, FRotator a6) {
        std::cout << "Bot spawned, procing override!" << std::endl;

        botHeroDataOverride = a2;

        AOrionAIBot* ret = reinterpret_cast<AOrionAIBot * (*)(UOrionAISystem * a1, UOrionHeroData * a2, EOrionTeam a3, EAIBotDifficulty a4, FVector a5, FRotator a6)>(origSpawnBot)(a1, a2, a3, a4, a5, a6);

        
        //Globals::GetGameMode<AOrionGameMode_Base>()->ChangeTeam(ret, EOrionTeam::TeamRed);
        GameLogic::AddBotControllerToTeam(ret, EOrionTeam::TeamRed);

        return ret;
    }

    //class AOrionAIBot * __ptr64 __cdecl UOrionAISystem::SpawnBot(class UOrionHeroData const & __ptr64,enum EOrionTeam::Type,enum EAIBotDifficulty,struct FVector,struct FRotator)const __ptr64

    //AActor* UWorld::SpawnActor( UClass* Class, FVector const* Location, FRotator const* Rotation, const FActorSpawnParameters& SpawnParameters )

#ifdef v45
    void* origObjectCrash = nullptr;
    bool ObjectCrashHook(__int64 a1) {
        return 0;
    }
#endif

    void* origTeamBuilderInfo = nullptr;
    bool TeamBuilderInfoCheck(AOrionTeamInfo* a1) {
        std::cout << "Overriding team builder info check!" << std::endl;

        std::cout << (int)(Globals::overrideTeamBuilderInfoCheck && (a1->TeamIndex == EOrionTeam::TeamRed || a1->TeamIndex == EOrionTeam::TeamBlue)) << std::endl;

        return Globals::overrideTeamBuilderInfoCheck && (a1->TeamIndex == EOrionTeam::TeamRed || a1->TeamIndex == EOrionTeam::TeamBlue);
    }

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + PLOffsets::PROCESSEVENT);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);

#ifdef v34
        void* aactorGetNetModeHook = (void*)(Globals::ModuleBase + PLOffsets::AACTOR_NETMODE);

        MH_CreateHook(aactorGetNetModeHook, reinterpret_cast<void*>(GetNetModeHook), &aactorGetNetMode);

        MH_EnableHook(aactorGetNetModeHook);

        void* uworldGetNetModeHook = (void*)(Globals::ModuleBase + PLOffsets::UWORLD_NETMODE);

        MH_CreateHook(uworldGetNetModeHook, reinterpret_cast<void*>(GetNetModeHook), &uworldGetNetMode);

        MH_EnableHook(uworldGetNetModeHook);

        void* uengineGetNetModeHook = (void*)(Globals::ModuleBase + PLOffsets::UENGINE_NETMODE);

        MH_CreateHook(uengineGetNetModeHook, reinterpret_cast<void*>(GetNetModeHook), &uengineGetNetMode);

        MH_EnableHook(uengineGetNetModeHook);

        void* checkAbandonMatchTimer = (void*)(Globals::ModuleBase + PLOffsets::CHECK_ABANDON_MATCH_TIMER);

        MH_CreateHook(checkAbandonMatchTimer, reinterpret_cast<void*>(CheckAbandonMatchTimerHook), &origCheckAbandonMatchTimer);

        MH_EnableHook(checkAbandonMatchTimer);

        void* targetDataReplicated = (void*)(Globals::ModuleBase + PLOffsets::TARGET_DATA_REPLICATED);

        MH_CreateHook(targetDataReplicated, reinterpret_cast<void*>(TargetDataReplicatedHook), &origTargetDataReplicated);

        MH_EnableHook(targetDataReplicated);
#endif

        void* statManagerCrashHook = (void*)(Globals::ModuleBase + PLOffsets::STATMANAGER_CRASH);

        MH_CreateHook(statManagerCrashHook, reinterpret_cast<void*>(StatManagerCrashHook), &origStatManagerCrash);

        MH_EnableHook(statManagerCrashHook);


        void* tickFlushHook = (void*)(Globals::ModuleBase + PLOffsets::NETDRIVER_TICKFLUSH);

        MH_CreateHook(tickFlushHook, reinterpret_cast<void*>(NetDriverTickFlushHook), &origNetDriverTickFlush);

        MH_EnableHook(tickFlushHook);

        void* postLoginHook = (void*)(Globals::ModuleBase + PLOffsets::GAMEMODE_MOBA_POSTLOGIN);

        MH_CreateHook(postLoginHook, reinterpret_cast<void*>(GameModeMOBAPostLogin), &origGameModeMOBAPostLogin);

        MH_EnableHook(postLoginHook);

        void* notifyAcceptingConnection = (void*)(Globals::ModuleBase + PLOffsets::NOTIFY_ACCEPTING_CONNECTION);

        MH_CreateHook(notifyAcceptingConnection, reinterpret_cast<void*>(NotifyAcceptingConnectionHook), &origNotifyAcceptingConnection);

        MH_EnableHook(notifyAcceptingConnection);

        void* notifyAcceptedConnection = (void*)(Globals::ModuleBase + PLOffsets::NOTIFY_ACCEPTED_CONNECTION);

        MH_CreateHook(notifyAcceptedConnection, reinterpret_cast<void*>(NotifyAcceptedConnectionHook), &origNotifyAcceptedConnection);

        MH_EnableHook(notifyAcceptedConnection);

        void* notifyAcceptingChannel = (void*)(Globals::ModuleBase + PLOffsets::NOTIFY_ACCEPTING_CHANNEL);

        MH_CreateHook(notifyAcceptingChannel, reinterpret_cast<void*>(NotifyAcceptingChannelHook), &origNotifyAcceptingChannel);

        MH_EnableHook(notifyAcceptingChannel);

        void* notifyControlMessage = (void*)(Globals::ModuleBase + PLOffsets::NOTIFY_CONTROL_MESSAGE);

        MH_CreateHook(notifyControlMessage, reinterpret_cast<void*>(NotifyControlMessage), &origNotifyControlMessage);

        MH_EnableHook(notifyControlMessage);

        //void* unetConnectionClose = (void*)(Globals::ModuleBase + 0x1FDD5A0);

        //MH_CreateHook(unetConnectionClose, reinterpret_cast<void*>(CloseConnection), &origCloseConnection);

        //MH_EnableHook(unetConnectionClose);

        void* canRestartPlayer = (void*)(Globals::ModuleBase + PLOffsets::CAN_RESTART_PLAYER);

        MH_CreateHook(canRestartPlayer, reinterpret_cast<void*>(CanRestartPlayerHook), &origCanRestartPlayer);

        MH_EnableHook(canRestartPlayer);

        void* collectGarbage = (void*)(Globals::ModuleBase + PLOffsets::COLLECT_GARBAGE);

        MH_CreateHook(collectGarbage, reinterpret_cast<void*>(CollectGarbageHook), &origCollectGarbage);

        MH_EnableHook(collectGarbage);

        void* consumeClientTargetData = (void*)(Globals::ModuleBase + PLOffsets::CONSUME_CLIENT_DATA);

        MH_CreateHook(consumeClientTargetData, reinterpret_cast<void*>(ConsumeClientTargetDataHook), &origConsumeClientTargetData);

        void* gameEngineTick = (void*)(Globals::ModuleBase + PLOffsets::GAME_ENGINE_TICK);

        MH_CreateHook(gameEngineTick, reinterpret_cast<void*>(GameEngineTickHook), &origGameEngineTick);

        MH_EnableHook(gameEngineTick);

        void* approveLogin = (void*)(Globals::ModuleBase + PLOffsets::APPROVE_LOGIN);

        MH_CreateHook(approveLogin, reinterpret_cast<void*>(ApproveLoginHook), &origApproveLogin);

        MH_EnableHook(approveLogin);

        void* stopDemo = (void*)(Globals::ModuleBase + PLOffsets::STOP_DEMO);

        MH_CreateHook(stopDemo, reinterpret_cast<void*>(StopDemoHook), &origStopDemo);

        MH_EnableHook(stopDemo);

        void* demoTickFlush = (void*)(Globals::ModuleBase + PLOffsets::DEMO_TICK_FLUSH);

        MH_CreateHook(demoTickFlush, reinterpret_cast<void*>(DemoTickFlushHook), &origDemoTickFlush);

        MH_EnableHook(demoTickFlush);

        void* startTargeting = (void*)(Globals::ModuleBase + PLOffsets::NEW_OBJECT_START_TARGETING);

        MH_CreateHook(startTargeting, reinterpret_cast<void*>(NewObjectStartTargetingHook), &origNewObjectStartTargeting);

        MH_EnableHook(startTargeting);

        void* loginHook = (void*)(Globals::ModuleBase + PLOffsets::LOGIN);

        MH_CreateHook(loginHook, reinterpret_cast<void*>(LoginHook), &origLogin);

        MH_EnableHook(loginHook);

#ifdef v34

        void* isCardInDeck = (void*)(Globals::ModuleBase + PLOffsets::IS_CARD_IN_DECK);

        MH_CreateHook(isCardInDeck, reinterpret_cast<void*>(IsCardInDeckHook), &origIsCardInDeck);

        MH_EnableHook(isCardInDeck);

        void* removeCard = (void*)(Globals::ModuleBase + PLOffsets::REMOVE_CARD);

        MH_CreateHook(removeCard, reinterpret_cast<void*>(RemoveCardHook), &origRemoveCard);

        MH_EnableHook(removeCard);

        void* isCardInDeck2 = (void*)(Globals::ModuleBase + PLOffsets::IS_CARD_IN_DECK_2);

        MH_CreateHook(isCardInDeck2, reinterpret_cast<void*>(IsCardInDeck2Hook), &origIsCardInDeck2);

        MH_EnableHook(isCardInDeck2);

        void* fillAccountData = (void*)(Globals::ModuleBase + PLOffsets::FILL_ACCOUNT_DATA);

        MH_CreateHook(fillAccountData, reinterpret_cast<void*>(FillAccountDataHook), &origFillAccountLevelData);

        MH_EnableHook(fillAccountData);

        void* returnToMainMenuToString = (void*)(Globals::ModuleBase + PLOffsets::RETURN_MAIN_MENU_STRING);

        MH_CreateHook(returnToMainMenuToString, reinterpret_cast<void*>(ReturnToMainMenuToString), &origReturnToMainMenuToString);

        MH_EnableHook(returnToMainMenuToString);

        void* setMatchEndSequence = (void*)(Globals::ModuleBase + PLOffsets::SET_END_SEQUENCE);

        MH_CreateHook(setMatchEndSequence, reinterpret_cast<void*>(SetEndSequenceHook), &origSetEndSequence);

        MH_EnableHook(setMatchEndSequence);
#endif

        void* uchannelCleanup = (void*)(Globals::ModuleBase + PLOffsets::UCHANNEL_CLEANUP);

        MH_CreateHook(uchannelCleanup, reinterpret_cast<void*>(TArrayRemoveSoundHook), &origTArrayRemoveSound);

        MH_EnableHook(uchannelCleanup);

#ifdef v45
        void* gameModeCanRestartPlayer = (void*)(Globals::ModuleBase + PLOffsets::GAME_MODE_CAN_RESTART_PLAYER);

        MH_CreateHook(gameModeCanRestartPlayer, reinterpret_cast<void*>(GameModeCanRestartPlayer), &origGameModeCanRestartPlayer);

        MH_EnableHook(gameModeCanRestartPlayer);

        void* objectCrash = (void*)(Globals::ModuleBase + PLOffsets::OBJECT_CRASH_FUNC);
        
        MH_CreateHook(objectCrash, reinterpret_cast<void*>(ObjectCrashHook), &origObjectCrash);

        //MH_EnableHook(objectCrash);
        //
#endif

        void* uworldSpawnActor = (void*)(Globals::ModuleBase + PLOffsets::UWORLD_SPAWN_ACTOR);

        MH_CreateHook(uworldSpawnActor, reinterpret_cast<void*>(SpawnActorHook), &origSpawnActor);

        //MH_EnableHook(uworldSpawnActor);

        void* spawnBot = (void*)(Globals::ModuleBase + PLOffsets::AISYSTEM_SPAWN_BOT);

        MH_CreateHook(spawnBot, reinterpret_cast<void*>(SpawnBotHook), &origSpawnBot);

        //MH_EnableHook(spawnBot);

        void* teamBuilderInfo = (void*)(Globals::ModuleBase + PLOffsets::HAS_TEAM_BUILDER_INFO);

        MH_CreateHook(teamBuilderInfo, reinterpret_cast<void*>(TeamBuilderInfoCheck), &origTeamBuilderInfo);

        MH_EnableHook(teamBuilderInfo);
    }
}

void InitConsole() {
    AllocConsole();
    FILE* f = new FILE();
    freopen_s(&f, "CONOUT$", "w", stdout);
}

void OnMatchInit() {
    std::cout << "Setting up teams..." << std::endl;
    GameLogic::SetupTeams();

    std::cout << "Setting up bots..." << std::endl;
    GameLogic::SetupBots();

    std::cout << "Hiding loading screen..." << std::endl;
    GameLogic::HideLoadingScreen();

    std::cout << "Listening for connections..." << std::endl;
    Networking::Listen();
}

void OnGameInit() {
    //std::cout << "Enabling game console..." << std::endl;
    EngineLogic::EnableGameConsole();

    std::cout << "Loading map..." << std::endl;
    EngineLogic::LoadMap(L"Monolith02", L"game=/Game/GameTypes/PvE/MonolithMap/BP_GMM_Monolith_SoloVsAI.BP_GMM_Monolith_SoloVsAI_C?playlistid=6"); //L"game=/Game/GameTypes/BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C"
    ///Game/GameTypes/PvE/MonolithMap/BP_GMM_Monolith_SoloVsAI.uasset

    /*
#if SLOW
    Sleep(100 * 1000);
#else
    Sleep(30 * 1000);
#endif

    Hooking::ProcInGameThread(OnMatchInit);
    */
}

void ForceStartMatch() {
    GameLogic::StartMatch();
}

void Main() {
#ifdef v34
    CG::InitSdk();
#endif

    InitConsole();

    Globals::ModuleBase = (uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe");

    Hooking::InitHooking();

    //OnGameInit();

    Sleep(1 * 1000 * 1000 * 1000);

    while (true) {

    }
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(Main);

        t.detach();
    }
}