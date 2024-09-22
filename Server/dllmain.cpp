#include "SDK.h"
#include "UnrealContainers.h"

#include <thread>
#include <iostream>
#include <format>
#include <algorithm>

#include "MinHook/include/MinHook.h"

#pragma comment(lib, "MinHook/lib/libMinHook-x64-v141-mt.lib")

using namespace CG;

namespace Settings {
    struct Player {
        std::string key;
        std::string name;
        std::string heroDataName;
        std::string skinName;
        EOrionTeam team;

        Player(std::string key, std::string name, std::string heroDataName, std::string skinName, EOrionTeam team) {
            this->key = key;
            this->name = name;
            this->heroDataName = heroDataName;
            this->skinName = skinName;
            this->team = team;
        }
    };

    const int NUM_PLAYERS_TO_START = 2;
    const std::string SERVER_KEY = "pg";
    const Player PLAYER_ARRAY[] = {Player("gwog", "gwog :3", "OrionHeroData HeroData_Vamp.HeroData_Vamp", "OrionSkinItemDefinition MasterSkin_Vamp.MasterSkin_Vamp", EOrionTeam::TeamBlue), Player("notgwog", "not gwog :/", "OrionHeroData HeroData_Kurohane.HeroData_Kurohane", "OrionSkinItemDefinition MasterSkin_Kurohane.MasterSkin_Kurohane", EOrionTeam::TeamRed)};
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

namespace Globals {
    static bool shouldStartMatch = false;

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

    __int64 Free(void* ptr) {
        return reinterpret_cast<__int64 (__thiscall*)(void*)>(Globals::ModuleBase + 0xDEEA90)(ptr);
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

    void SetupHUDForController(AOrionPlayerController_Game* controller) {
        controller->ClientSetHUD(CG::UObject::FindClass("Class OrionGame.OrionUI_Game"));
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
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_Team(nullptr);

                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bReadyToStartMatch = true;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_bReadyToStartMatch();

                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bIsSpectator = false;
                    reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->bOnlySpectator = false;
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

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->HeroDataSpec = spec;

        reinterpret_cast<AOrionPlayerState_Game*>(controller->PlayerState)->OnRep_HeroDataSpec(FOrionHeroDataSpec());
    }

    void SetUIState(EOrionUIState state) {
        reinterpret_cast<void(__thiscall*)(UOrionUIManagerWidget*, EOrionUIState)>(Globals::ModuleBase + 0x7DDBC0)(reinterpret_cast<UOrionGameInstance*>(Globals::GetGWorld()->OwningGameInstance)->UIManager, state);
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
    float CalculateDamage() { //TODO: Actual damage calculations
        return 100.0;
    }

    void ApplyDamage(UOrionDamage* damageObject, UGameplayEffectExecutionCalculation_Execute_Params* params, float damage) { //TODO: Deal damage to shield instead of health if shielded
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

namespace GameplayAbilities {
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

        FGameplayAbilitySpec* spec = reinterpret_cast<FGameplayAbilitySpec * (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle)>(Globals::ModuleBase + 0x2962DD0)(component, Handle);

        if (!spec) {
            std::cout << "Bailed, no ability!" << std::endl;
            //29572C0 virtual void __cdecl UAbilitySystemComponent::ClientActivateAbilityFailed_Implementation(struct FGameplayAbilitySpecHandle,short) __ptr64
            reinterpret_cast<FGameplayAbilitySpec* (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, uint16_t)>(Globals::ModuleBase + 0x29572C0)(component, Handle, PredictionKey.Current);
            return;
        }

        reinterpret_cast<void(*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey*)>(Globals::ModuleBase + 0x2958F90)(component, Handle, &PredictionKey);
        
        
        //0x297CF40 - Reset



        void* ScopedPredictionWindow = EngineLogic::Malloc(0x100, 0);

        ScopedPredictionWindow = reinterpret_cast<void* (*)(void*, UAbilitySystemComponent*, FPredictionKey*, bool)>(Globals::ModuleBase + 0x29C7A40)(ScopedPredictionWindow, component, &PredictionKey, true);

        UGameplayAbility* abilityToActivate = spec->Ability;

        UGameplayAbility* InstancedAbility = nullptr;
        spec->InputPressed = true;

        //296E2B0 BOOL __cdecl UAbilitySystemComponent::InternalTryActivateAbility(struct FGameplayAbilitySpecHandle,struct FPredictionKey,class UGameplayAbility * __ptr64 * __ptr64,class TBaseDelegate<void,class UGameplayAbility * __ptr64> * __ptr64,struct FGameplayEventData const * __ptr64) __ptr64

        if (reinterpret_cast<bool (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey*, UGameplayAbility**, void*, FGameplayEventData*)>(Globals::ModuleBase + 0x296E2B0)(component, Handle, &PredictionKey, &InstancedAbility, nullptr, TriggerEventData)) {
            std::cout << "Cast succeeded!" << std::endl;
        }
        else {
            std::cout << "Bailed, cast failed!" << std::endl;
            reinterpret_cast<FGameplayAbilitySpec* (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, uint16_t)>(Globals::ModuleBase + 0x29572C0)(component, Handle, PredictionKey.Current);
            spec->InputPressed = false;
            
        }

        reinterpret_cast<void(*)(UAbilitySystemComponent*, FGameplayAbilitySpec*)>(Globals::ModuleBase + 0x29718E0)(component, spec);
    }
}

namespace Networking {
    void Listen() {
        EngineLogic::LimitFramerateForServer();

        reinterpret_cast<void(__thiscall*)(UEngine*, UWorld*, FName, FName)>(Globals::ModuleBase + 0x22981c0)(Globals::GetEngine(), Globals::GetGWorld(), Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameNetDriver"), Globals::GetKismetStringLibrary()->STATIC_Conv_StringToName(L"GameNetDriver"));

        CG::UIpNetDriver* NetDriver = SDKUtils::GetLastOfType<UIpNetDriver>();

        NetDriver->MaxClientRate = 999999999;
        NetDriver->MaxInternetClientRate = 999999999;

        Globals::GetGWorld()->NetDriver = NetDriver;

        FURL* url = (FURL*)EngineLogic::Malloc(sizeof(FURL), 0);

        url->Port = 7777;
        url->Valid = 1;

        FString* err = (FString*)EngineLogic::Malloc(sizeof(FString), 0);

        for (int i = 0; i < Globals::GetGWorld()->LevelCollections.Count(); i++) {
            Globals::GetGWorld()->LevelCollections[i].NetDriver = NetDriver;
        }

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
            if (actor->RemoteRole == ENetRole::ROLE_None || actor->GetFullName().find("Default") != std::string::npos) //
                continue;

            reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + 0x1b743d0)(actor, GetNetDriver());

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

            if (OwningActor != nullptr && (*(EConnectionState*)((__int64)Connection + 0x124)) == USOCK_Open && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f)) {
                bFoundReadyConnection = true;

                Connection->ViewTarget = Connection->PlayerController ? Connection->PlayerController->GetViewTarget() : OwningActor;
            }
            else {
                Connection->ViewTarget = nullptr;
            }
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

                if (actor->GetRemoteRole() == ENetRole::ROLE_None) {
                    continue;
                }

                if ((actor->bPendingNetUpdate || GetWorldTimeSeconds(Globals::GetGWorld()) > actor->NetUpdateTime)) {
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

                    reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + 0x1b743d0)(actor, GetNetDriver()); //CallPreReplication
                }
            }
            else {
                std::cout << "Invalid ActorInfo!" << std::endl;
            }
        }
    }

    struct FActorPriority {
        int Priority;

        FNetworkObjectInfo* ActorInfo;
        UActorChannel* Channel;
    };

    int* GetTickCountPtr(UNetConnection* connection) {
        return (int*)((__int64)connection + 0x7F);
    }

    void ServerReplicateActors_PrioritizeActors(UNetConnection* connection, std::vector<FNetworkObjectInfo*> ConsiderList, std::vector<FActorPriority>& OutPriorityList, std::vector<FActorPriority>& OutPriorityActors) {
        static int NetTag = 0;

        NetTag++;
        (*GetTickCountPtr(connection))++;

        int FinalSortedCount = 0;
        int DeletedCount = 0;

        const int MaxSortedActors = ConsiderList.size();

        if (MaxSortedActors > 0) {
            OutPriorityList = std::vector<FActorPriority>();
            OutPriorityActors = std::vector<FActorPriority>();

            for (FNetworkObjectInfo* ActorInfo : ConsiderList) {
                AActor* Actor = ActorInfo->actor;

                UActorChannel* Channel = nullptr;

                for (int i = 0; i < connection->OpenChannels.Count(); i++) {
                    if (connection->OpenChannels[i]->IsA(UActorChannel::StaticClass()) && ((UActorChannel*)(connection->OpenChannels[i]))->Actor == Actor) {
                        Channel = (UActorChannel*)(connection->OpenChannels[i]);
                    }
                }

                if (Actor->NetTag != NetTag) {
                    Actor->NetTag = NetTag;

                    FActorPriority actorPrio = FActorPriority();

                    actorPrio.ActorInfo = ActorInfo;
                    actorPrio.Channel = Channel;
                    actorPrio.Priority = 100;

                    OutPriorityList.push_back(actorPrio);
                    OutPriorityActors.push_back(actorPrio);
                }
            }
        }
    }

    int ServerReplicateActors_ProcessPrioritizedActors(UNetConnection* Connection, std::vector<FActorPriority> PriorityActors, int& OutUpdated) {
        if (!reinterpret_cast<bool(*)(UNetConnection*, int)>(Globals::ModuleBase + 0x1feba80)(Connection, 0)) { //IsNetReady;
            return 0;
        }

        int ActorUpdatesThisConnection = 0;
        int ActorUpdatesThisConnectionSent = 0;
        int FinalRelevantCount = 0;

        for (int j = 0; j < PriorityActors.size(); j++) {
            UActorChannel* Channel = PriorityActors[j].Channel;

            if (!Channel || Channel->Actor) {
                AActor* Actor = PriorityActors[j].ActorInfo->actor;

                if (Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController) {
                    continue;
                }

                if (Actor->GetFullName().find("Default") != std::string::npos) {
                    continue;
                }

                if (Actor->RemoteRole == ENetRole::ROLE_None) {
                    continue;
                }
                
                FinalRelevantCount++;

                if (Channel == nullptr && Actor) {
                    Channel = reinterpret_cast<UActorChannel * (*)(UNetConnection*, EChannelType, bool, int)>(Globals::ModuleBase + 0x1FDD9E0)(Connection, EChannelType::CHTYPE_Actor, true, -1); //CreateChannel

                    if (Channel) {
                        reinterpret_cast<void(*)(UActorChannel*, AActor*)>(Globals::ModuleBase + 0x1E12C70)(Channel, Actor); //SetChannelActor
                    }
                }

                if (Channel && Channel->Actor) {
                    if (reinterpret_cast<bool(*)(UNetConnection*, int)>(Globals::ModuleBase + 0x1feba80)(Connection, 0)) { //IsNetReady
                        if (reinterpret_cast<bool(*)(UActorChannel*)>(Globals::ModuleBase + 0x1E0C1D0)(Channel)) { //ReplicateActor
                           // std::cout << "Replicated Actor!" << std::endl;
                            
                            ActorUpdatesThisConnectionSent++;

                            const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
                            const float MaxOptimalDelta = std::fmaxf(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
                            const float DeltaBetweenReplications = (GetWorldTimeSeconds(Globals::GetGWorld()) - PriorityActors[j].ActorInfo->LastNetReplicateTime);

                            PriorityActors[j].ActorInfo->OptimalNetUpdateDelta = std::clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
                            PriorityActors[j].ActorInfo->LastNetReplicateTime = GetWorldTimeSeconds(Globals::GetGWorld());
                        }

                        ActorUpdatesThisConnection++;
                        OutUpdated++;
                    }
                    else {
                       // std::cout << "Replication Failed, Forcing Net Update!" << std::endl;
                        reinterpret_cast<void(*)(AActor*)>(Globals::ModuleBase + 0x1B7E250)(Actor); //AActor::ForceNetUpdate
                    }

                    if (!reinterpret_cast<bool(*)(UNetConnection*, int)>(Globals::ModuleBase + 0x1feba80)(Connection, 0)) {
                        //std::cout << "Bailing on processing actors..." << std::endl;
                        return j;
                    }
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

        (*(__int64*)((__int64)GetNetDriver() + 0x280))++; //Bump ReplicationFrame

        bool shouldTick = ServerReplicateActors_PrepConnections();

        if (!shouldTick) {
            return;
        }

        float ServerTickTime = 20.0f; //Hardcoded 20 tickrate, changeme if want higher tickrate

        ServerTickTime = 1.0f / ServerTickTime;

        std::vector<FNetworkObjectInfo*> ConsiderList = std::vector<FNetworkObjectInfo*>();

        for (int i = 0; i < UObject::GObjects->Count(); i++) {
            UObject* obj = UObject::GObjects->GetByIndex(i);

            if (!obj)
                continue;

            if (!obj->IsA(AActor::StaticClass()))
                continue;

            AActor* actor = (AActor*)obj;

            if (reinterpret_cast<bool(*)(AActor*)>(Globals::ModuleBase + 0x2AFBB0)(actor))
                continue;

            FNetworkObjectInfo* newConsider = (FNetworkObjectInfo*)EngineLogic::Malloc(sizeof(FNetworkObjectInfo), 0);
            newConsider->actor = actor;
            newConsider->LastNetReplicateTime = 0;
            newConsider->NextUpdateTime = 0;
            newConsider->OptimalNetUpdateDelta = 1.0f;

            reinterpret_cast<void(*)(AActor*, UNetDriver*)>(Globals::ModuleBase + 0x1b743d0)(actor, GetNetDriver());

            ConsiderList.push_back(newConsider);
        }

        for (int i = 0; i < GetNetDriver()->ClientConnections.Count(); i++) {
            UNetConnection* Connection = GetNetDriver()->ClientConnections[i];

            if (Connection->PlayerController) {
                reinterpret_cast<void(*)(APlayerController*)>(Globals::ModuleBase + 0x212FD50)(Connection->PlayerController);
            }

            std::vector<FActorPriority> PriorityList = std::vector<FActorPriority>();
            std::vector<FActorPriority> PriorityActors = std::vector<FActorPriority>();

            ServerReplicateActors_PrioritizeActors(Connection, ConsiderList, PriorityList, PriorityActors);

            int Updated = 0;

            int LastProcessedActor = ServerReplicateActors_ProcessPrioritizedActors(Connection, PriorityActors, Updated);

            for (int k = LastProcessedActor; k < PriorityActors.size(); k++) {
                if (!PriorityActors[k].ActorInfo) {
                    continue;
                }

                AActor* Actor = PriorityActors[k].ActorInfo->actor;

                UActorChannel* Channel = PriorityActors[k].Channel;

                Actor->bPendingNetUpdate = true;
            }
        }
    }
}

namespace Hooking {
    bool procingCurrentFuncPtrs = false;

    std::vector<void*> FuncPtrsToProcInGameThread = std::vector<void*>();

    void ProcInGameThread(void* ptr) {
        FuncPtrsToProcInGameThread.push_back(ptr);
    }

    static bool triggerAbilityFailed = false;

    void TriggerAbilities() {
        bool procdAnAbility = false;

        for (UOrionAbilityTask_StartTargeting* target : UObject::FindObjects<UOrionAbilityTask_StartTargeting>()) {
            static std::vector< UOrionAbilityTask_StartTargeting*> alreadyProcdTasks = std::vector<UOrionAbilityTask_StartTargeting*>();

            if (target->GetFullName().find("Default") == std::string::npos) {
                bool alreadyProcd = false;

                for (UOrionAbilityTask_StartTargeting* cmp : alreadyProcdTasks) {
                    if (cmp == target) {
                        alreadyProcd = true;
                        break;
                    }
                }

                if (!alreadyProcd) {
                    alreadyProcdTasks.push_back(target);
                    procdAnAbility = true;
                    std::cout << target->GetFullName() << std::endl;
                    //target->ServerForceClientTargetData();
                    //UOrionAbilityTask_StartTargeting* newTarget = target->STATIC_StartTargeting(target->Ability, FName(), EGameplayTargetingConfirmation::UserConfirmed, 0);
                    //target->CancelImpl();
                    target->ConfirmOrCancel();
                }
            }
        }

        if (!procdAnAbility) {
            triggerAbilityFailed = true;
        }
    }

    //void ProcTriggerAbilityInDelay() {
        //Sleep(10);
        //ProcInGameThread(TriggerAbilities);
    //}

    void* origProcessEvent = nullptr;

    void* ProcessEventHook(UObject* object, UFunction* function, void* params) {
        static UFunction* internalServerTryActiveAbilityFunction = nullptr;

        static UFunction* internalServerTryActiveAbilityFunctionWithEventData = nullptr;

        static UFunction* waitNotifyNameFunction = nullptr;

        if (!internalServerTryActiveAbilityFunction)
            internalServerTryActiveAbilityFunction = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");

        if (!internalServerTryActiveAbilityFunctionWithEventData)
            internalServerTryActiveAbilityFunctionWithEventData = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");

        if (function == internalServerTryActiveAbilityFunction) {
            UAbilitySystemComponent_ServerTryActivateAbility_Params* castParams = reinterpret_cast<UAbilitySystemComponent_ServerTryActivateAbility_Params*>(params);

            GameplayAbilities::InternalServerTryActiveAbility(reinterpret_cast<UAbilitySystemComponent*>(object), castParams->AbilityToActivate, castParams->InputPressed, castParams->PredictionKey, nullptr);

            return reinterpret_cast<void* (__thiscall*)(UObject*, UFunction*, void*)>(origProcessEvent)(object, function, params);
        }

        if (function == internalServerTryActiveAbilityFunctionWithEventData) {
            triggerAbilityFailed = false;
            std::cout << "DUMMY FUNCTION CALLED" << std::endl;

            TriggerAbilities();
            
            /*
            for (int i = 0; i < castObj->AllReplicatedInstancedAbilities.Count(); i++) {
                UGameplayAbility* ability = castObj->AllReplicatedInstancedAbilities[i];

                for (int j = 0; j < ability->ActiveTasks.Count(); j++) {
                    UGameplayTask* task = ability->ActiveTasks[j];

                    if (task->IsA(UOrionAbilityTask_StartTargeting::StaticClass())) {
                        UOrionAbilityTask_StartTargeting* castTask = (UOrionAbilityTask_StartTargeting*)task;

                        castTask->ServerForceClientTargetData();
                        castTask->ConfirmOrCancel();
                    }
                }
            }
            */
        }

        //if ((object->GetFullName().find("Targeting") != std::string::npos || function->GetFullName().find("Targeting") != std::string::npos)) {
            //std::cout << object->GetFullName() << " - " << function->GetFullName() << std::endl;
        //}

        if (!procingCurrentFuncPtrs && FuncPtrsToProcInGameThread.size() > 0) {
            procingCurrentFuncPtrs = true;

            while (FuncPtrsToProcInGameThread.size() > 0) {
                void* funcPtr = FuncPtrsToProcInGameThread.back();

                reinterpret_cast<void(*)()>(funcPtr)();

                FuncPtrsToProcInGameThread.pop_back();
            }

            procingCurrentFuncPtrs = false;
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
        return 1;
    }

    void* origStatManagerCrash = nullptr;

    void StatManagerCrashHook() {
        return;
    }

    void* origNetDriverTickFlush = nullptr;

    void NetDriverTickFlushHook(float DeltaTime) {
        reinterpret_cast<void(*)(float)>(origNetDriverTickFlush)(DeltaTime);

        Networking::ServerReplicateActors();
    }

    void DelayedPCSetup(AOrionPlayerController_Game* pc) {
        Sleep(25 * 1000);

        std::cout << "Setting up new player..." << std::endl;
        GameLogic::RestartClient(pc);
    }

    static bool teamFlip = false;

    void* origGameModeMOBAPostLogin = nullptr;

    void GameModeMOBAPostLogin(AOrionGameMode_MOBA* gamemode, AOrionPlayerController_Game* controller) {
        if (controller != Globals::GetLocalPlayerController< AOrionPlayerController_Game>()) {
            controller->ClientHandlePostLogin();
            controller->ClientHandleMatchIsWaitingToStart();

            GameLogic::AddControllerToTeam(controller, teamFlip ? EOrionTeam::TeamRed : EOrionTeam::TeamBlue);

            teamFlip = !teamFlip;

            GameLogic::SetControllerHeroData(controller, UObject::FindObject<UOrionHeroData>("OrionHeroData HeroData_Vamp.HeroData_Vamp"), UObject::FindObject<UOrionSkinItemDefinition>("OrionSkinItemDefinition MasterSkin_Vamp.MasterSkin_Vamp"));
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
        std::cout << "GWA" << std::endl;
        return reinterpret_cast<void(*)(UAbilityTask_WaitTargetData*, void* a2)>(origTargetDataReplicated)(targetData, a2);
    }

    void* origGameEngineTick = nullptr;

    static int numTicksAbilitiesTriggered = 0;

    const int maxNumTicksAbilitiesTriggered = 10;

    static int numTicksWaitedToStartMatch = 0;

    const int maxNumTicksWaitedToStartMatch = 5000;

    int GameEngineTickHook(UGameEngine* gameengine, float deltatime, char a3) {
        if (triggerAbilityFailed) {
            numTicksAbilitiesTriggered++;
            TriggerAbilities();

            if (numTicksAbilitiesTriggered > maxNumTicksAbilitiesTriggered) {
                triggerAbilityFailed = false;
            }
        }
        else {
            numTicksAbilitiesTriggered = 0;
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

        void* unetConnectionClose = (void*)(Globals::ModuleBase + 0x1DE6970);

        MH_CreateHook(unetConnectionClose, reinterpret_cast<void*>(CloseConnection), &origCloseConnection);

        MH_EnableHook(unetConnectionClose);

        void* checkAbandonMatchTimer = (void*)(Globals::ModuleBase + 0x471800);

        MH_CreateHook(checkAbandonMatchTimer, reinterpret_cast<void*>(CheckAbandonMatchTimerHook), &origCheckAbandonMatchTimer);

        MH_EnableHook(checkAbandonMatchTimer);

        void* canRestartPlayer = (void*)(Globals::ModuleBase + 0x62F310);

        MH_CreateHook(canRestartPlayer, reinterpret_cast<void*>(CanRestartPlayerHook), &origCanRestartPlayer);

        MH_EnableHook(canRestartPlayer);

        void* collectGarbage = (void*)(Globals::ModuleBase + 0xF39050);

        MH_CreateHook(collectGarbage, reinterpret_cast<void*>(CollectGarbageHook), &origCollectGarbage);

        MH_EnableHook(collectGarbage);

        void* consumeClientTargetData = (void*)(Globals::ModuleBase + 0x2958F90);

        MH_CreateHook(consumeClientTargetData, reinterpret_cast<void*>(ConsumeClientTargetDataHook), &origConsumeClientTargetData);

        void* targetDataReplicated = (void*)(Globals::ModuleBase + 0x296EA0);

        MH_CreateHook(targetDataReplicated, reinterpret_cast<void*>(TargetDataReplicatedHook), &origTargetDataReplicated);
         
        MH_EnableHook(targetDataReplicated);

        void* gameEngineTick = (void*)(Globals::ModuleBase + 0x1E775B0);

        MH_CreateHook(gameEngineTick, reinterpret_cast<void*>(GameEngineTickHook), &origGameEngineTick);

        MH_EnableHook(gameEngineTick);
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

    std::cout << "Hiding loading screen..." << std::endl;
    GameLogic::HideLoadingScreen();

    std::cout << "Listening for connections..." << std::endl;
    Networking::Listen();
}

void OnGameInit() {
    std::cout << "Enabling game console..." << std::endl;
    EngineLogic::EnableGameConsole();

    std::cout << "Loading map..." << std::endl;
    EngineLogic::LoadMap(L"Origin", L"game=/Game/GameTypes/BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C"); //L"game=/Game/GameTypes/BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C"

    Sleep(20 * 1000);

    Hooking::ProcInGameThread(OnMatchInit);
}

void FixAbilities() {
    //reinterpret_cast<void(*)(UOrionAbilitySystemGlobals*)>(Globals::ModuleBase + 0x26C720)(SDKUtils::GetLastOfType< UOrionAbilitySystemGlobals>());
    std::cout << "fixing abilities" << std::endl;
    //AOrionPlayerController_Game* pc = (AOrionPlayerController_Game*)(Networking::GetNetDriver()->ClientConnections[0]->PlayerController);
    //reinterpret_cast<void(*)(UOrionAbilitySystemComponent*, AActor*, AActor*)>(Globals::ModuleBase + 0x26BB00)(((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent, pc->PlayerState, pc->Pawn);
    //reinterpret_cast<void(*)(UOrionAbilitySystemComponent*)>(Globals::ModuleBase + 0x297AD50)(((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent);
    //std::cout << pc->GetFullName() << std::endl;
    //std::cout << pc->Pawn->GetFullName() << std::endl;

    /*
    for (UGameplayAbility* ab : UObject::FindObjects<UGameplayAbility>()) {
        if (ab->GetFullName().find("Default") == std::string::npos) {
            std::cout << ab->GetFullName() << std::endl;
            std::cout << ab->bIsActive << std::endl;
            for (int i = 0; i < ab->ActiveTasks.Count(); i++) {
                std::cout << ab->ActiveTasks[i]->GetFullName() << std::endl;
            }
        }
    }
    */

    //THIS IS THE GOOD SHIT
    /*
    for (UOrionAbilityTask_StartTargeting* target : UObject::FindObjects<UOrionAbilityTask_StartTargeting>()) {
        if (target->GetFullName().find("Default") == std::string::npos) {
            std::cout << target->GetFullName() << std::endl;
            target->ServerForceClientTargetData();
            target->ConfirmOrCancel();


            //
            //reinterpret_cast<void(*)(UOrionAbilityTask_StartTargeting*)>(Globals::ModuleBase + 0x2B8850)(target);
            //reinterpret_cast<void(*)(UOrionAbilityTask_StartTargeting*)>(Globals::ModuleBase + 0x2A1E90)(target);
            //2A1CE0
        }
    }
    */
    for (AOrionTargetingMode* target : UObject::FindObjects<AOrionTargetingMode>()) {
        std::cout << target->GetFullName() << std::endl;
        target->ServerValidationFailPolicy = EOrionTargetingModeValidationFailPolicy::UseServerDataAndConfirm;
    }
    

    /*
    for (UOrionAbilitySet* aset : UObject::FindObjects<UOrionAbilitySet>()) {
        if (aset->GetFullName().find("Kwang") != std::string::npos) {
            std::cout << aset->GetFullName() << std::endl;
            reinterpret_cast<void(*)(UOrionAbilitySet*, UAbilitySystemComponent*)>(Globals::ModuleBase + 0x26AB80)(aset, ((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent);
        }
    }
    */

    //for (int i = 0; i < ((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent->ActivatableAbilities.Items.Count(); i++) {
        //std::cout << ((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent->ActivatableAbilities.Items[i].Ability->GetFullName() << std::endl;
       // std::cout << ((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent->ActivatableAbilities.Items[i].Handle.Handle << std::endl;
    //}

    //

    //
    //reinterpret_cast<void(*)(AOrionPlayerState_Game*)>(Globals::ModuleBase + 0x67C5B0)(((AOrionPlayerState_Game*)pc->PlayerState));
    //reinterpret_cast<void(*)(UOrionAbilitySystemComponent*, AActor*, AActor*)>(Globals::ModuleBase + 0x26BB00)(((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent, pc->PlayerState, pc->Pawn);
    //std::cout << ((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent->OwnerActor->GetFullName() << std::endl;
   // std::cout << ((AOrionPlayerState_Game*)pc->PlayerState)->AbilitySystemComponent->AvatarActor->GetFullName() << std::endl;
    //std::cout << SDKUtils::GetLastOfType<UOrionAbilitySystemComponent>()->AvatarActor->GetFullName() << std::endl;

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