#include "SDK.h"

#include <thread>
#include <iostream>
#include <format>

#include "MinHook/include/MinHook.h"

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

        engine->GameViewport->ViewportConsole = reinterpret_cast<CG::UConsole * >(NewObject);
    }

    void ExecuteConsoleCommand(const wchar_t* cmd) {
        static UKismetSystemLibrary* systemLibrary = nullptr;

        if (!systemLibrary) {
            systemLibrary = UObject::FindObject<UKismetSystemLibrary>();
        }

        systemLibrary->STATIC_ExecuteConsoleCommand(Globals::GetGWorld(), cmd, Globals::GetLocalPlayerController<APlayerController>());
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

        systemLibrary->STATIC_OpenLevel(Globals::GetGWorld(), kismetStringLibrary->STATIC_Conv_StringToName(map), true, options);
    }

    void* Malloc(__int64 size, unsigned int alignment) {
        return reinterpret_cast<void* (__thiscall*)(__int64 size, unsigned int alignment)>(Globals::ModuleBase + 0xDFB9F0)(size, alignment);
    }

    void LimitFramerateForServer() {
        ExecuteConsoleCommand(L"t.maxfps 20");
    }
}

namespace GameLogic {
    void SetupTeams() {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        gameState->Teams._data = reinterpret_cast<AOrionTeamInfo**>(EngineLogic::Malloc(sizeof(AOrionTeamInfo*) * 3, 0));
        gameState->Teams._count = 4;
        gameState->Teams._max = 4;

        AOrionTeamInfo* redTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        redTeamInfo->TeamIndex = EOrionTeam::TeamRed;
        redTeamInfo->bPlayerTeam = true;
        redTeamInfo->MaxPlayers = 5;
        redTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");

        redTeamInfo->TeamMembers._data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        redTeamInfo->TeamMembers._count = 0;
        redTeamInfo->TeamMembers._max = 5;

        AOrionTeamInfo* blueTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        blueTeamInfo->TeamIndex = EOrionTeam::TeamBlue;
        blueTeamInfo->bPlayerTeam = true;
        blueTeamInfo->MaxPlayers = 5;
        blueTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"BlueTeam");

        blueTeamInfo->TeamMembers._data = reinterpret_cast<AController**>(EngineLogic::Malloc(sizeof(AController*) * 5, 0));
        blueTeamInfo->TeamMembers._count = 0;
        blueTeamInfo->TeamMembers._max = 5;

        AOrionTeamInfo* noTeamInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        noTeamInfo->TeamIndex = EOrionTeam::NoTeam;
        noTeamInfo->bPlayerTeam = true;
        noTeamInfo->MaxPlayers = 0;
        noTeamInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");

        AOrionTeamInfo* teamCreepInfo = reinterpret_cast<AOrionTeamInfo*>(Globals::GetGameplayStatics()->STATIC_BeginSpawningActorFromClass(Globals::GetGWorld(), AOrionTeamInfo::StaticClass(), FTransform(), true, gameState));

        teamCreepInfo->TeamIndex = EOrionTeam::TeamCreep;
        teamCreepInfo->bPlayerTeam = true;
        teamCreepInfo->MaxPlayers = 0;
        teamCreepInfo->TeamName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"RedTeam");

        gameState->Teams[0] = redTeamInfo;
        gameState->Teams[1] = blueTeamInfo;
        gameState->Teams[2] = noTeamInfo;
        gameState->Teams[3] = teamCreepInfo;
    }

    bool AddControllerToTeam(AOrionPlayerController_Game* controller, EOrionTeam team) {
        AOrionGameState_MOBA* gameState = Globals::GetGameState<AOrionGameState_MOBA>();

        for (int i = 0; i < gameState->Teams.Count(); i++) {
            AOrionTeamInfo* teamInfo = gameState->Teams[i];

            if (teamInfo->TeamIndex == team) {
                if (teamInfo->TeamMembers.Count() < 5) {
                    teamInfo->TeamMembers[teamInfo->TeamMembers.Count()] = controller;
                    teamInfo->TeamMembers._count = teamInfo->TeamMembers._count + 1;
                    controller->ServerChangeTeam(team);
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->TeamInfo = teamInfo;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bReadyToStartMatch = true;
                    return true;
                }
            }
        }

        return false;
    }

    void StartMatch() {
        Globals::GetLocalPlayerController<AOrionPlayerController_Game>()->ServerForceStartGame();
    }

    void SetControllerHeroData(AOrionPlayerController_Game* controller, UOrionHeroData* heroData, UOrionSkinItemDefinition* skin) {
        FOrionHeroDataSpec spec = FOrionHeroDataSpec();

        spec.HeroData = heroData;
        spec.Skin = skin;

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->ServerSetPlayerHeroDataSpec(spec);

        controller->HeroData = heroData;
        controller->HeroName = L"Kwang";

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->HeroDataSpec = spec;
    }

    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + 0x7DDBC0)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
    }

    void RestartPlayer(AOrionPlayerController_Game* pc) {
        pc->ServerRestartPlayer();
    }

    void HideLoadingScreen() {
        EngineLogic::ExecuteConsoleCommand(L"hideloadingscreen");
    }
}

namespace DamageCalculations {
    float CalculateDamage() { //TODO: Actual damage calculations
        return 100.0;
    }

    void ApplyDamage(UOrionDamage* damageObject, UGameplayEffectExecutionCalculation_Execute_Params* params, float damage) { //TODO: Deal damage to shield instead of health if shielded
        params->OutExecutionOutput.OutputModifiers = TArray<FGameplayModifierEvaluatedData>();

        FGameplayModifierEvaluatedData* evaluatedData = reinterpret_cast<FGameplayModifierEvaluatedData*>(EngineLogic::Malloc(sizeof(FGameplayModifierEvaluatedData), 0));

        FGameplayEffectAttributeCaptureDefinition toCapture = FGameplayEffectAttributeCaptureDefinition();

        toCapture = damageObject->RelevantAttributesToCapture[0];

        if (toCapture.AttributeToCapture.Attribute && (uintptr_t)toCapture.AttributeToCapture.Attribute != 0xffffffff) {
            CG::FGameplayAttribute newAttr = CG::FGameplayAttribute();

            newAttr.Attribute = toCapture.AttributeToCapture.Attribute;
            newAttr.AttributeName = FString();
            void* str = EngineLogic::Malloc(sizeof(L"Health"), 0);
            const wchar_t* my_str = L"Health";
            memcpy_s(str, sizeof(L"Health"), my_str, sizeof(L"Health"));
            newAttr.AttributeName._data = (wchar_t*)str;
            newAttr.AttributeName._count = 6;
            newAttr.AttributeName._max = 6;
            newAttr.AttributeOwner = toCapture.AttributeToCapture.AttributeOwner;

            evaluatedData->Attribute = newAttr;

            evaluatedData->IsValid = true;

            evaluatedData->Handle = *(reinterpret_cast<FActiveGameplayEffectHandle*>(EngineLogic::Malloc(sizeof(FActiveGameplayEffectHandle), 0)));
            evaluatedData->Magnitude = CalculateDamage() * -1.0;
            evaluatedData->ModifierOp = EGameplayModOp::Additive;

            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.OutputModifiers._data = evaluatedData;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.OutputModifiers._count = 1;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.OutputModifiers._max = 1;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.bHandledGameplayCuesManually = false;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.bHandledStackCountManually = false;
            ((UGameplayEffectExecutionCalculation_Execute_Params*)params)->OutExecutionOutput.bTriggerConditionalGameplayEffects = true;
        }
    }

    void ProcDamageSFX(UGameplayEffectExecutionCalculation_Execute_Params* params, float damage) {
        if (params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor->IsA(AOrionDamageableActor::StaticClass())) {
            reinterpret_cast<AOrionDamageableActor*>(params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor)->OnDamageTaken(damage, nullptr);
        }

        static UOrionGameplayCueManager* manager = nullptr;

        if (!manager) {
            manager = SDKUtils::GetLastOfType<UOrionGameplayCueManager>();
        }

        FGameplayTag tag = FGameplayTag();
        FGameplayCueParameters cueParams = FGameplayCueParameters();

        cueParams.NormalizedMagnitude = 100.0;
        cueParams.RawMagnitude = 100.0;
        cueParams.AbilityLevel = ((CG::UGameplayEffectExecutionCalculation_Execute_Params*)params)->ExecutionParams.OwningSpec->Level;

        if (params->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor->IsA(AOrionCharHero::StaticClass())) {
            tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage_Hero");
        }
        else {
            tag.TagName = Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameplayCue_Damage");
        }

        reinterpret_cast<void (*) (UOrionGameplayCueManager*, AActor*, FGameplayTag, EGameplayCueEvent, FGameplayCueParameters)>(Globals::ModuleBase + 0x4C7F70)(manager, ((CG::UGameplayEffectExecutionCalculation_Execute_Params*)params)->ExecutionParams.TargetAbilitySystemComponent.Get()->AvatarActor, tag, EGameplayCueEvent::Executed, cueParams);
    }

    void DoDamagePipeline(UOrionDamage* damageObject, UGameplayEffectExecutionCalculation_Execute_Params* params) {
        float damage = CalculateDamage();

        ApplyDamage(damageObject, params, damage);

        ProcDamageSFX(params, damage);
    }
}

namespace Networking {
    void Listen() {
        EngineLogic::LimitFramerateForServer();

        reinterpret_cast<void(__thiscall*)(UEngine*, UWorld*, FName, FName)>(Globals::ModuleBase + 0x22981c0)(Globals::GetEngine(), Globals::GetGWorld(), Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameNetDriver"), Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameNetDriver"));

        CG::UIpNetDriver* NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();

        Globals::GetGWorld()->NetDriver = NetDriver;

        FURL* url = (FURL*)EngineLogic::Malloc(sizeof(FURL), 0);

        url->Port = 7777;
        url->Valid = 1;

        FString* err = (FString*)EngineLogic::Malloc(sizeof(FString), 0);

        reinterpret_cast<void(__thiscall*)(UIpNetDriver*, __int64, FURL*, bool, FString*)>(Globals::ModuleBase + 0x3290920)(NetDriver, reinterpret_cast<__int64>(Globals::GetGWorld()) + 0x28, url, false, err);

        reinterpret_cast<void(__thiscall*)(CG::UNetDriver*, CG::UWorld*)>(Globals::ModuleBase + 0x1FFA320)(NetDriver, Globals::GetGWorld());
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
            if (actor->RemoteRole == ENetRole::ROLE_None || actor->GetFullName().find("Default") != std::string::npos)
                continue;

            reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + 0x1b743d0)(actor, GetNetDriver());

            actorsToConsider.push_back(actor);
        }

        return actorsToConsider;
    }

    static std::vector<UActorChannel*> channels = std::vector<UActorChannel*>();

    UActorChannel* GetChannelForConnectionAndActor(UNetConnection* connection, AActor* actor) {
        for (UActorChannel* channel : channels) {
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

    void Replicate() {
        if (!GetNetDriver()) {
            Globals::GetGWorld()->NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();
        }

        std::vector<AActor*> considerList = GetActorConsiderList();

        for (int i = 0; i < GetNetDriver()->ClientConnections.Count(); i++) {
            UNetConnection* connection = GetNetDriver()->ClientConnections[i];

            if (connection->OwningActor == nullptr)
                continue;

            if (connection->PlayerController)
                reinterpret_cast<void(*)(APlayerController*)>(Globals::ModuleBase + 0x212FD50)(connection->PlayerController);

            for (AActor* actor : considerList) {
                if (!actor)
                    continue;

                if (actor->IsA(APlayerController::StaticClass()) && actor != connection->PlayerController)
                    continue;

                UActorChannel* channel = GetChannelForConnectionAndActor(connection, actor);

                if (!channel) {
                    std::cout << "Opening channel for: " << actor->GetFullName() << std::endl;
                    channel = reinterpret_cast<UActorChannel * (*)(UNetConnection*, EChannelType, bool, int)>(Globals::ModuleBase + 0x1FDD9E0)(connection, EChannelType::CHTYPE_Actor, true, -1);

                    if (channel) {
                        reinterpret_cast<void(*)(UActorChannel*, AActor*)>(Globals::ModuleBase + 0x1E12C70)(channel, actor);

                        channels.push_back(channel);
                    }
                }
            }
        }

        for (UActorChannel* channel : channels) {
            if (channel && channel->Actor && !channel->closing) {
                reinterpret_cast<bool(*)(UActorChannel*)>(Globals::ModuleBase + 0x1E0C1D0)(channel); //ReplicateActor
                reinterpret_cast<void(*)(UActorChannel*)>(Globals::ModuleBase + 0x1E169F0)(channel); //Tick
            }
        }

        for (int i = 0; i < GetNetDriver()->ClientConnections.Count(); i++) {
            UNetConnection* connection = GetNetDriver()->ClientConnections[i];

        }
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
        }

        if (object->IsA(UOrionDamage::StaticClass())) {
            UOrionDamage* dmg = reinterpret_cast<UOrionDamage*>(object);

            UGameplayEffectExecutionCalculation_Execute_Params* dmgParams = reinterpret_cast<UGameplayEffectExecutionCalculation_Execute_Params*>(params);

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

    void NetDriverTickFlushHook(float DeltaTime) {
        reinterpret_cast<void(*)(float)>(origNetDriverTickFlush)(DeltaTime);

        Networking::Replicate();
    }

    void* origGameModeMOBAPostLogin = nullptr;

    void GameModeMOBAPostLogin(AOrionGameMode_MOBA* gamemode, AOrionPlayerController_Game* controller) {
        if (controller != Globals::GetLocalPlayerController< AOrionPlayerController_Game>()) {
            GameLogic::AddControllerToTeam(controller, EOrionTeam::TeamBlue);
            GameLogic::SetControllerHeroData(controller, UObject::FindObject<UOrionHeroData>("OrionHeroData HeroData_Kwang.HeroData_Kwang"), UObject::FindObject<UOrionSkinItemDefinition>("OrionSkinItemDefinition MasterSkin_Kwang.MasterSkin_Kwang"));
            GameLogic::StartMatch();
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

    void GameModeMOBAPreLoginHook() {
        return;
    }

    void* origUNetConnectionClose = nullptr;

    void UNetConnectionCloseHook(UNetConnection* connection) {
        return;
    }

    void* origCheckAbandonMatchTimer = nullptr;

    bool CheckAbandonMatchTimerHook(AOrionGameMode_MOBA* gamemode) {
        return false;
    }

    void InitHooking() {
        MH_Initialize();

        void* ProcessEventHookLocal = (void*)(Globals::ModuleBase + 0xFB3420);

        MH_CreateHook(ProcessEventHookLocal, reinterpret_cast<void*>(ProcessEventHook), &origProcessEvent);

        MH_EnableHook(ProcessEventHookLocal);

        void* aactorGetNetModeHook = (void*)(Globals::ModuleBase + 0x1B8B180);

        MH_CreateHook(aactorGetNetModeHook, reinterpret_cast<void*>(GetNetModeHook), &aactorGetNetMode);

        MH_EnableHook(aactorGetNetModeHook);

        void* uworldGetNetModeHook = (void*)(Globals::ModuleBase + 0x2313470);

        MH_CreateHook(uworldGetNetModeHook, reinterpret_cast<void*>(GetNetModeHook), &uworldGetNetMode);

        MH_EnableHook(uworldGetNetModeHook);

        void* uengineGetNetModeHook = (void*)(Globals::ModuleBase + 0x22A4920);

        MH_CreateHook(uengineGetNetModeHook, reinterpret_cast<void*>(GetNetModeHook), &uengineGetNetMode);

        MH_EnableHook(uengineGetNetModeHook);

        void* statManagerCrashHook = (void*)(Globals::ModuleBase + 0x37BF70);

        MH_CreateHook(statManagerCrashHook, reinterpret_cast<void*>(StatManagerCrashHook), &origStatManagerCrash);

        MH_EnableHook(statManagerCrashHook);

        void* tickFlushHook = (void*)(Globals::ModuleBase + 0x1ffc780);

        MH_CreateHook(tickFlushHook, reinterpret_cast<void*>(NetDriverTickFlushHook), &origNetDriverTickFlush);

        MH_EnableHook(tickFlushHook);

        void* postLoginHook = (void*)(Globals::ModuleBase + 0x48F1E0);

        MH_CreateHook(postLoginHook, reinterpret_cast<void*>(GameModeMOBAPostLogin), &origGameModeMOBAPostLogin);

        MH_EnableHook(postLoginHook);

        void* notifyAcceptingConnection = (void*)(Globals::ModuleBase + 0x2314B80);

        MH_CreateHook(notifyAcceptingConnection, reinterpret_cast<void*>(NotifyAcceptingConnectionHook), &origNotifyAcceptingConnection);

        MH_EnableHook(notifyAcceptingConnection);

        void* notifyAcceptedConnection = (void*)(Globals::ModuleBase + 0x2314710);

        MH_CreateHook(notifyAcceptedConnection, reinterpret_cast<void*>(NotifyAcceptedConnectionHook), &origNotifyAcceptedConnection);

        MH_EnableHook(notifyAcceptedConnection);

        void* notifyAcceptingChannel = (void*)(Globals::ModuleBase + 0x2314890);

        MH_CreateHook(notifyAcceptingChannel, reinterpret_cast<void*>(NotifyAcceptingChannelHook), &origNotifyAcceptingChannel);

        MH_EnableHook(notifyAcceptingChannel);

        void* notifyControlMessage = (void*)(Globals::ModuleBase + 0x23156C0);

        MH_CreateHook(notifyControlMessage, reinterpret_cast<void*>(NotifyControlMessage), &origNotifyControlMessage);

        MH_EnableHook(notifyControlMessage);

        void* unetConnectionClose = (void*)(Globals::ModuleBase + 0x1FDD5A0);

        MH_CreateHook(unetConnectionClose, reinterpret_cast<void*>(UNetConnectionCloseHook), &origUNetConnectionClose);

        MH_EnableHook(unetConnectionClose);

        void* checkAbandonMatchTimer = (void*)(Globals::ModuleBase + 0x471800);

        MH_CreateHook(checkAbandonMatchTimer, reinterpret_cast<void*>(CheckAbandonMatchTimerHook), &origCheckAbandonMatchTimer);

        MH_EnableHook(checkAbandonMatchTimer);

        //

        //void* gameModeMOBAPreLoginHook = (void*)(Globals::ModuleBase + 0x4903A0);

        //MH_CreateHook(gameModeMOBAPreLoginHook, reinterpret_cast<void*>(GameModeMOBAPreLoginHook), &origGameModeMOBAPreLogin);

        //MH_EnableHook(gameModeMOBAPreLoginHook);
    }
}

void InitConsole() {
    AllocConsole();
    FILE* f = new FILE();
    freopen_s(&f, "CONOUT$", "w", stdout);
}

void OnMatchInit() {
    std::cout << "Setting UI state..." << std::endl;
    GameLogic::SetUIState(EOrionUIState::Match);

    std::cout << "Setting up teams..." << std::endl;
    GameLogic::SetupTeams();

    /*
    std::cout << "Adding local player to team blue..." << std::endl;
    GameLogic::AddControllerToTeam(Globals::GetLocalPlayerController<AOrionPlayerController_Game>(), EOrionTeam::TeamBlue);

    std::cout << "Setting local player hero data..." << std::endl;
    GameLogic::SetControllerHeroData(Globals::GetLocalPlayerController<AOrionPlayerController_Game>(), UObject::FindObject<UOrionHeroData>("OrionHeroData HeroData_Kwang.HeroData_Kwang"), UObject::FindObject<UOrionSkinItemDefinition>("OrionSkinItemDefinition MasterSkin_Kwang.MasterSkin_Kwang"));

    std::cout << "Starting the match..." << std::endl;
    GameLogic::StartMatch();
    */

    std::cout << "Hiding loading screen..." << std::endl;
    GameLogic::HideLoadingScreen();

    std::cout << "Listening for connections..." << std::endl;
    Networking::Listen();
}

void OnGameInit() {
    std::cout << "Enabling game console..." << std::endl;
    EngineLogic::EnableGameConsole();

    std::cout << "Loading map..." << std::endl;
    EngineLogic::LoadMap(L"Origin", L"game=/Game/GameTypes/BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C");

    Sleep(20 * 1000);

    Hooking::ProcInGameThread(OnMatchInit);
}

void MainLoop() {

}

void Main() {
    CG::InitSdk();

    InitConsole();

    Globals::ModuleBase = (uintptr_t)GetModuleHandleA("OrionClient-Win64-Shipping.exe");

    Hooking::InitHooking();

    Sleep(25 * 1000);

    OnGameInit();

    while (true) {
        MainLoop();
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