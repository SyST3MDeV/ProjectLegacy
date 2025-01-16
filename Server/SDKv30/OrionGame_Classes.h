#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OrionGame.OrionXPSet
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UOrionXPSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_6QOJ[0x90];                                  // 0x0030(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameMode_MOBA
	 * Size -> 0x02C8 (FullSize[0x07F0] - InheritedSize[0x0528])
	 */
	class AOrionGameMode_MOBA : public AOrionGameMode_Base
	{
	public:
		unsigned char                                              UnknownData_3Q8H[0x2C8];                                 // 0x0528(0x02C8) MISSED OFFSET (PADDING)

	public:
		void ReceivePlayerSpawned(unsigned char Team);
		void ReceivePlayerKillStreakShutdown(int32_t KillStreakCount);
		void ReceivePlayerKilled(int32_t MultiKillCount, int32_t KillStreakCount);
		bool IsMatchTimeBased();
		bool IsMatchObjectiveCompleted();
		unsigned char GetWinningTeamNum();
		void ForceMatchWinCondition(unsigned char TeamNum);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameMode_PreGame
	 * Size -> 0x0000 (FullSize[0x0528] - InheritedSize[0x0528])
	 */
	class AOrionGameMode_PreGame : public AOrionGameMode_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.GameSessionCommon
	 * Size -> 0x01F8 (FullSize[0x0590] - InheritedSize[0x0398])
	 */
	class AGameSessionCommon : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_L1A4[0x1F8];                                 // 0x0398(0x01F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameSession
	 * Size -> 0x0040 (FullSize[0x05D0] - InheritedSize[0x0590])
	 */
	class AOrionGameSession : public AGameSessionCommon
	{
	public:
		unsigned char                                              UnknownData_0EU7[0x40];                                  // 0x0590(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.GameUserSettingsCommon
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UGameUserSettingsCommon : public UGameUserSettings
	{
	public:
		unsigned char                                              UnknownData_4YI7[0x28];                                  // 0x0108(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameUserSettings
	 * Size -> 0x00F0 (FullSize[0x0220] - InheritedSize[0x0130])
	 */
	class UOrionGameUserSettings : public UGameUserSettingsCommon
	{
	public:
		unsigned char                                              UnknownData_02YP[0xF0];                                  // 0x0130(0x00F0) MISSED OFFSET (PADDING)

	public:
		void TriggerRenderingBenchmark();
		void SetOrionGameplayQuality(int32_t Value);
		void SetMenuFrameRateLimit(float NewLimit);
		void SetForceAutomaticSettingsAtStartup(bool bShouldForceSettings);
		bool STATIC_IsRunningOnUnsupportedGraphicsCard();
		void STATIC_GetOrionGameUserSettings();
		int32_t GetOrionGameplayQuality();
		float GetMenuFrameRateLimit();
		int32_t GetInitialBenchmarkState();
		class FText GetGPUDisplayString();
		bool GetForceAutomaticSettingsAtStartup();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.GenericRecord
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGenericRecord : public UObject
	{
	public:
		unsigned char                                              UnknownData_JRIJ[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.ClientSettingsRecord
	 * Size -> 0x01C8 (FullSize[0x0210] - InheritedSize[0x0048])
	 */
	class UClientSettingsRecord : public UGenericRecord
	{
	public:
		unsigned char                                              UnknownData_AINN[0x1C8];                                 // 0x0048(0x01C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionClientSettingsRecord
	 * Size -> 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
	 */
	class UOrionClientSettingsRecord : public UClientSettingsRecord
	{
	public:
		unsigned char                                              UnknownData_U5BM[0x20];                                  // 0x0210(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.GraphicsCardInfoDB
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UGraphicsCardInfoDB : public UDeveloperSettings
	{
	public:
		unsigned char                                              UnknownData_35F6[0x70];                                  // 0x0038(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.HoverDroneMovementComponent
	 * Size -> 0x00C8 (FullSize[0x0238] - InheritedSize[0x0170])
	 */
	class UHoverDroneMovementComponent : public USpectatorPawnMovement
	{
	public:
		unsigned char                                              UnknownData_T89B[0xC8];                                  // 0x0170(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.InfluenceMapRenderingComponent
	 * Size -> 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
	 */
	class UInfluenceMapRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.InputSwitcher
	 * Size -> 0x0028 (FullSize[0x0140] - InheritedSize[0x0118])
	 */
	class UInputSwitcher : public UWidget
	{
	public:
		unsigned char                                              UnknownData_8E98[0x28];                                  // 0x0118(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.LocalPlayerCommon
	 * Size -> 0x0190 (FullSize[0x0320] - InheritedSize[0x0190])
	 */
	class ULocalPlayerCommon : public ULocalPlayer
	{
	public:
		unsigned char                                              UnknownData_NUHN[0x190];                                 // 0x0190(0x0190) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLocalPlayer
	 * Size -> 0x0660 (FullSize[0x0980] - InheritedSize[0x0320])
	 */
	class UOrionLocalPlayer : public ULocalPlayerCommon
	{
	public:
		unsigned char                                              UnknownData_FTJC[0x660];                                 // 0x0320(0x0660) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.MatchmakingSearchWidgetAnimationRoot
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class UMatchmakingSearchWidgetAnimationRoot : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_L5TS[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnHoveredChanged__DelegateSignature(bool bIsHovered);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.MatchmakingSearchWidget
	 * Size -> 0x0438 (FullSize[0x06E0] - InheritedSize[0x02A8])
	 */
	class UMatchmakingSearchWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_HPBX[0x438];                                 // 0x02A8(0x0438) MISSED OFFSET (PADDING)

	public:
		void OnShowWidget();
		void OnRestoreWidget();
		void OnReadyCheckTimerWarning();
		void OnReadyCheckReadyClicked();
		void OnReadyCheckNotReadyClicked();
		void OnReadyCheck();
		void OnPartyReadyUpClicked();
		void OnMinimizeWidget();
		void OnHoveredChanged(bool bIsHovered);
		void OnHideWidget();
		void OnFrontEndTabChanged(const class FName& TabId);
		void OnCancelButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.MessageOfTheDay
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UMessageOfTheDay : public UObject
	{
	public:
		unsigned char                                              UnknownData_2GHS[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		bool ShouldShowMOTD();
		void STATIC_GetMessageOfTheDay();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionOnlineAccount
	 * Size -> 0x0000 (FullSize[0x0700] - InheritedSize[0x0700])
	 */
	class UOrionOnlineAccount : public UOnlineAccountCommon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OnlineSessionClientCommon
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class UOnlineSessionClientCommon : public UOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionOnlineSessionClient
	 * Size -> 0x0100 (FullSize[0x0370] - InheritedSize[0x0270])
	 */
	class UOrionOnlineSessionClient : public UOnlineSessionClientCommon
	{
	public:
		unsigned char                                              UnknownData_ULYS[0x100];                                 // 0x0270(0x0100) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAuraManager
	 * Size -> 0x0040 (FullSize[0x03C0] - InheritedSize[0x0380])
	 */
	class AOrionAuraManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_KMIQ[0x40];                                  // 0x0380(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbility
	 * Size -> 0x0470 (FullSize[0x09F0] - InheritedSize[0x0580])
	 */
	class UOrionAbility : public UGameplayAbility
	{
	public:
		unsigned char                                              UnknownData_O3JM[0x470];                                 // 0x0580(0x0470) MISSED OFFSET (PADDING)

	public:
		void UnlockCharacterRotation();
		void UnlockCameraRotation(bool bResetOnDeath);
		void UnBlockMovementInput(bool bResetOnDeath);
		void TryCombo();
		void TravelModeUnblockAbilities();
		void TravelModeBlockAbilities();
		void TrackActor();
		void SnapCharacterRotationToCamera();
		void SetReticleVisibility(unsigned char Visibility);
		void SetPassiveTargetingMode(int32_t TargetingModeIndex);
		void SetCameraMode();
		void MakeGameplayCueParameters();
		void LockCharacterRotation();
		void LockCameraRotation(bool bResetOnDeath);
		void K2_SetUseFixedSkeletalBounds(bool UseFixedSkeletalBounds);
		float K2_ScaleTimeByAttackSpeed(float BaseTime);
		void K2_OrionRemoveUnselectableStatus();
		void K2_OrionRemoveLimboStatus();
		void K2_OrionRemoveInterruptionImmunity();
		void K2_OrionRemoveIgnorePawnCollision();
		void K2_OrionRemoveGameplayCue();
		void K2_OrionExecuteGameplayCueWithParams();
		void K2_OrionExecuteGameplayCue();
		void K2_OrionApplyUnselectableStatus();
		void K2_OrionApplyLimboStatus();
		void K2_OrionApplyInterruptionImmunity();
		void K2_OrionApplyIgnorePawnCollision();
		void K2_OrionAddGameplayCue(bool bRemoveOnAbilityEnd);
		float K2_GetTotalAttackTime();
		float K2_GetRateForAttackSpeedMontage(const class FName& SectionName, bool FillEntireAttackTime);
		void K2_GetBestMontageForAttackSpeed(float* OutPlayRate);
		float K2_GetAttackSpeedMultiplier();
		bool IsCharacterFalling();
		void InitFilterAndEffectsContainer();
		void InitAndApplyFilterContainerToTargetData();
		void GetTargets();
		void GetOrionCharHeroFromActorInfo();
		void GetOrionCharFromActorInfo();
		void GetOrionCharAIFromActorInfo();
		void GetMontageForEmote(unsigned char EmoteType);
		int32_t GetExternalAbilityLevel();
		void GetAbilitiesByTag();
		void EndAura();
		void EnableAbilityQueuing();
		void DisableAbilityQueuing();
		void ClearCameraMode();
		void ChangeActivationGroup(unsigned char NewGroup);
		void CancelCombo();
		void BP_GetCachedGameplayEffeectSpec();
		void BP_CommitConsumableStack(bool BroadcastCommitEvent);
		void BP_ApplyGameplayEffectToOwner_Cached();
		void BlockMovementInput(bool bResetOnDeath);
		void BeginAura(float Radius, bool EndWhenAbilityEnds);
		bool AbilityHasTag();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbility_CharacterJump
	 * Size -> 0x0000 (FullSize[0x09F0] - InheritedSize[0x09F0])
	 */
	class UOrionAbility_CharacterJump : public UOrionAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbility_MeleeAttack
	 * Size -> 0x0100 (FullSize[0x0AF0] - InheritedSize[0x09F0])
	 */
	class UOrionAbility_MeleeAttack : public UOrionAbility
	{
	public:
		unsigned char                                              UnknownData_OKA0[0x100];                                 // 0x09F0(0x0100) MISSED OFFSET (PADDING)

	public:
		void ServerMeleeTouch();
		void OnMontageEnded(bool bInterrupted);
		void OnMeleeTouch(int32_t OtherBodyIndex, bool bFromSweep);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbility_Sprint
	 * Size -> 0x0000 (FullSize[0x09F0] - InheritedSize[0x09F0])
	 */
	class UOrionAbility_Sprint : public UOrionAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityAITask_ExecuteGameplayAbility
	 * Size -> 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
	 */
	class UOrionAbilityAITask_ExecuteGameplayAbility : public UAITask
	{
	public:
		unsigned char                                              UnknownData_DI1J[0xA0];                                  // 0x0070(0x00A0) MISSED OFFSET (PADDING)

	public:
		void K2_SetUp();
		void STATIC_AIExecuteGameplayAbilityByTag(bool bWaitForAbilityEnd);
		void STATIC_AIExecuteGameplayAbilityByHandle(bool bWaitForAbilityEnd);
		void STATIC_AIExecuteGameplayAbilityByClass(bool bWaitForAbilityEnd);
		void STATIC_AIExecuteAvailableGameplayAbility(bool bWaitForAbilityEnd);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilitySystemGlobals
	 * Size -> 0x0000 (FullSize[0x01E0] - InheritedSize[0x01E0])
	 */
	class UOrionAbilitySystemGlobals : public UAbilitySystemGlobals
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTargetActor_Beam
	 * Size -> 0x0070 (FullSize[0x05C0] - InheritedSize[0x0550])
	 */
	class AOrionAbilityTargetActor_Beam : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_6LJT[0x70];                                  // 0x0550(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTargetActor_SelectMultipleTargets
	 * Size -> 0x0040 (FullSize[0x0590] - InheritedSize[0x0550])
	 */
	class AOrionAbilityTargetActor_SelectMultipleTargets : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_U56Y[0x40];                                  // 0x0550(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTargetActor_SelectSingleTarget
	 * Size -> 0x0030 (FullSize[0x0580] - InheritedSize[0x0550])
	 */
	class AOrionAbilityTargetActor_SelectSingleTarget : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_SBZP[0x30];                                  // 0x0550(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTargetActor_SelectTargets
	 * Size -> 0x0040 (FullSize[0x0590] - InheritedSize[0x0550])
	 */
	class AOrionAbilityTargetActor_SelectTargets : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_IMSX[0x40];                                  // 0x0550(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTargetActor_WellSelector
	 * Size -> 0x0000 (FullSize[0x0550] - InheritedSize[0x0550])
	 */
	class AOrionAbilityTargetActor_WellSelector : public AGameplayAbilityTargetActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_AddPlayerScoreListener
	 * Size -> 0x0140 (FullSize[0x01C0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_AddPlayerScoreListener : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_N5M0[0x140];                                 // 0x0080(0x0140) MISSED OFFSET (PADDING)

	public:
		void STATIC_CreateAddPlayerScoreListenerTask(const class FName& ListenerName);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_DirectedMovement
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_DirectedMovement : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_62OU[0x60];                                  // 0x0080(0x0060) MISSED OFFSET (PADDING)

	public:
		void STATIC_DirectedMovementToLocation(unsigned char MovementSpaceType, float MovementDuration, float CloseEnoughDistance, bool ModifyZ);
		void STATIC_DirectedMovementToComponent(float MaxMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ);
		void STATIC_DirectedMovementToActor(float MaxMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ);
		void STATIC_DirectedMovement(unsigned char MovementSpaceType, float MovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_InstantTargetData
	 * Size -> 0x0030 (FullSize[0x00F0] - InheritedSize[0x00C0])
	 */
	class UOrionAbilityTask_InstantTargetData : public UAbilityTask_WaitTargetData
	{
	public:
		unsigned char                                              UnknownData_R0LH[0x30];                                  // 0x00C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_HitScanTube(float Range, float BlockingRadius, float OverlapRadius, bool bMultiHit, bool bDebug);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionAnimTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimInstance
	 * Size -> 0x0030 (FullSize[0x04A8] - InheritedSize[0x0478])
	 */
	class UOrionAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_X2GZ[0x30];                                  // 0x0478(0x0030) MISSED OFFSET (PADDING)

	public:
		void TryGetOrionChar();
		bool STATIC_ShouldRateLimitBlueprintTicks(bool bIsHero, float* Amount);
		bool OwnerHasMatchingGameplayTag();
		void OnHit();
		bool IsGameplayCueActive();
		void AnimNotify_RightFootStep();
		void AnimNotify_LeftFootStep();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName
	 * Size -> 0x0110 (FullSize[0x0190] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_PlayMontageAndWaitNotifyName : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_ZU4O[0x110];                                 // 0x0080(0x0110) MISSED OFFSET (PADDING)

	public:
		void STATIC_PlayMontageAndWaitNotifyName(const class FName& TaskInstanceName, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds);
		void OnNotifyEndReceived(const class FName& NotifyName);
		void OnNotifyBeginReceived(const class FName& NotifyName);
		void OnMontageInterrupted();
		void OnMontageEnded(bool bInterrupted);
		void OnMontageBlendingOut(bool bInterrupted);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_RepeatedAction
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_RepeatedAction : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_CWAE[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		void STATIC_PerformRepeatedAction(float TimeBetweenActions, int32_t TotalActionCount);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnOrionActor
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_SpawnOrionActor : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_QSHY[0x80];                                  // 0x0080(0x0080) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnOrionActorTransform();
		void STATIC_SpawnOrionActorTargetData();
		void STATIC_SpawnOrionActor();
		void FinishSpawningActor();
		bool BeginSpawningActor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnProjectile
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_SpawnProjectile : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_QE7D[0x68];                                  // 0x0080(0x0068) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnProjectile(float PitchOffset, float YawOffset);
		void FinishSpawningActor();
		bool BeginSpawningActor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnProjectileMulti
	 * Size -> 0x0058 (FullSize[0x00D8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_SpawnProjectileMulti : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_FH4M[0x58];                                  // 0x0080(0x0058) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnProjectileMulti();
		void FinishSpawningActorArray();
		bool BeginSpawningActorArray();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnProjectileMulti_HorizontalSpreadFire
	 * Size -> 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
	 */
	class UOrionAbilityTask_SpawnProjectileMulti_HorizontalSpreadFire : public UOrionAbilityTask_SpawnProjectileMulti
	{
	public:
		unsigned char                                              UnknownData_MJ49[0x30];                                  // 0x00D8(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnProjectileMulti_HorizontalSpread(int32_t ProjectileCount, float PitchRandom, float PitchOffset, float YawRange, float YawOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnProjectileMulti_Cone
	 * Size -> 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
	 */
	class UOrionAbilityTask_SpawnProjectileMulti_Cone : public UOrionAbilityTask_SpawnProjectileMulti
	{
	public:
		unsigned char                                              UnknownData_CJ4J[0x30];                                  // 0x00D8(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnProjectileMulti_Cone(int32_t ProjectileCount, float PitchRandom, float PitchOffset, float YawRandom, float YawOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnRig
	 * Size -> 0x0058 (FullSize[0x00D8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_SpawnRig : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_CFMS[0x58];                                  // 0x0080(0x0058) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnRig(unsigned char RigTeamNum);
		void FinishSpawningActor();
		bool BeginSpawningActor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_SpawnWard
	 * Size -> 0x0058 (FullSize[0x00D8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_SpawnWard : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_WL2T[0x58];                                  // 0x0080(0x0058) MISSED OFFSET (PADDING)

	public:
		void STATIC_SpawnWard(unsigned char TeamNum);
		void FinishSpawningActor();
		bool BeginSpawningActor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_StartTargeting
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_StartTargeting : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_SQT6[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		void STATIC_StartTargeting(const class FName& TaskInstanceName, unsigned char ConfirmationType, int32_t Index);
		void ServerForceClientTargetData();
		void ConfirmOrWait();
		void ConfirmOrCancel();
		void CancelImpl();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityAITask_DoTargeting
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UOrionAbilityAITask_DoTargeting : public UOrionAbilityTask_StartTargeting
	{
	public:
		unsigned char                                              UnknownData_HOM0[0x38];                                  // 0x00B8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitAbilityLevelUp
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitAbilityLevelUp : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_MW3L[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitThisAbilityLevelUp(bool OnlyTriggerOnce);
		void STATIC_WaitAbilityLevelUp(bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitAnyAbilityInput
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitAnyAbilityInput : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_IE0Z[0x68];                                  // 0x0080(0x0068) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitAnyAbilityInput(bool bConsumeInput);
		void OnAnyAbilityInput();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitForCombo
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitForCombo : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_PVG7[0x40];                                  // 0x0080(0x0040) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitForCombo();
		void SuccessEventCallback();
		void FailEventCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitForSpecialAttackRotation
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitForSpecialAttackRotation : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_TAEV[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitForSpecialAttackRotation(unsigned char Mode);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitHeroGameplayTag
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitHeroGameplayTag : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_7GT6[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitHeroGameplayTagRemove(bool bAllies, bool bEnemies, bool bOnlyTriggerOnce);
		void STATIC_WaitHeroGameplayTagAdd(bool bAllies, bool bEnemies, bool bOnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitInputPress_WithState
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitInputPress_WithState : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_B889[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitInputPress_WithState(bool bTestAlreadyPressed, bool bForceAlreadyPressed);
		void OnPressCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitKilled
	 * Size -> 0x00A8 (FullSize[0x0128] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitKilled : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_BCOD[0xA8];                                  // 0x0080(0x00A8) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitOwnerKilled(bool TriggerOnce);
		void STATIC_WaitActorKilled(bool TriggerOnce);
		void OnKilledCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitLanded
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitLanded : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_D1WN[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitLanded();
		void OnLandedCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitMeleeImpact
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitMeleeImpact : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_VW6G[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnMeleeImpact();
		void STATIC_CreateWaitMovementModeChange();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitProjectileShutdown
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitProjectileShutdown : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_QWVI[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitProjectileShutdown();
		void OnShutdownCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitProjectileHitActor
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitProjectileHitActor : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_BHWQ[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitProjectileHitActor();
		void OnShutdownCallback();
		void OnHitActorCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitProjectileStop
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitProjectileStop : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_JXP0[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitProjectileStop();
		void OnStopCallback();
		void OnShutdownCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitSprintCancel
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitSprintCancel : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_T4EM[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitSprintCancel();
		void OnSprintDirectionChanged();
		void HandleReplicatedEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTask_WaitTowerTargetAcquired
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UOrionAbilityTask_WaitTowerTargetAcquired : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_CBKK[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		void STATIC_WaitTowerTargetAcquired();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAICommander
	 * Size -> 0x01E0 (FullSize[0x0208] - InheritedSize[0x0028])
	 */
	class UOrionAICommander : public UObject
	{
	public:
		unsigned char                                              BotTeams[0x170];                                         // 0x0000(0x0170) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAICommander.BotTeams
		unsigned char                                              UnknownData_95UC[0x98];                                  // 0x0170(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIController
	 * Size -> 0x0040 (FullSize[0x04B8] - InheritedSize[0x0478])
	 */
	class AOrionAIController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_XIN6[0x40];                                  // 0x0478(0x0040) MISSED OFFSET (PADDING)

	public:
		unsigned char GetTeamNum();
		void GetOrionChar();
		void GetAIFormation();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIBot
	 * Size -> 0x0428 (FullSize[0x08E0] - InheritedSize[0x04B8])
	 */
	class AOrionAIBot : public AOrionAIController
	{
	public:
		unsigned char                                              UnknownData_VSGL[0x428];                                 // 0x04B8(0x0428) MISSED OFFSET (PADDING)

	public:
		void OnCharacterDied();
		void K2_SetEnemy();
		void K2_SetAbilityToUse();
		bool K2_IsSafeToApproachOffensiveLaneGoal();
		bool K2_IsInsideTurret();
		void K2_GetPrimaryAttackHandle();
		void K2_GetEnemySelectionQuery();
		bool IsAbilityInRage();
		bool HasUsableAbilityAgainstCurrentEnemy();
		float GetLaneProgress();
		void GetCurrentScriptedBehavior();
		bool CanActivateAbility(bool bRequirePerfectMatch);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIBot_Babysitter
	 * Size -> 0x0000 (FullSize[0x08E0] - InheritedSize[0x08E0])
	 */
	class AOrionAIBot_Babysitter : public AOrionAIBot
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIController_MinionBase
	 * Size -> 0x0020 (FullSize[0x04D8] - InheritedSize[0x04B8])
	 */
	class AOrionAIController_MinionBase : public AOrionAIController
	{
	public:
		unsigned char                                              UnknownData_MGGK[0x20];                                  // 0x04B8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIController_Jungle
	 * Size -> 0x0058 (FullSize[0x0530] - InheritedSize[0x04D8])
	 */
	class AOrionAIController_Jungle : public AOrionAIController_MinionBase
	{
	public:
		unsigned char                                              UnknownData_L44W[0x58];                                  // 0x04D8(0x0058) MISSED OFFSET (PADDING)

	public:
		void GetSpawner();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCharAI
	 * Size -> 0x0240 (FullSize[0x0C90] - InheritedSize[0x0A50])
	 */
	class AOrionCharAI : public AOrionChar
	{
	public:
		unsigned char                                              UnknownData_URXN[0x240];                                 // 0x0A50(0x0240) MISSED OFFSET (PADDING)

	public:
		void RequestSelfDestruct(float Delay);
		void RequestAnimation(unsigned char Behavior, int32_t PlayIndex, bool bLooping);
		void PlaySpawning();
		void PlayHeroAggroAlert();
		void OnRep_DeathData();
		void OnRep_AIData();
		void Native_DoRangedAttack();
		void Native_DoMeleeAttack();
		void GameplayCue_Damage(unsigned char EventType);
		void CancelAnimation(unsigned char Behavior);
		void ApplyGameplayEffectToSelf(float GameplayEffectLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIMinionAggroManager
	 * Size -> 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
	 */
	class UOrionAIMinionAggroManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_T1KF[0x198];                                 // 0x0028(0x0198) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIController_Lane
	 * Size -> 0x0018 (FullSize[0x04F0] - InheritedSize[0x04D8])
	 */
	class AOrionAIController_Lane : public AOrionAIController_MinionBase
	{
	public:
		unsigned char                                              UnknownData_LCPZ[0x18];                                  // 0x04D8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIDataProvider_CurrentAbility
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UOrionAIDataProvider_CurrentAbility : public UAIDataProvider_QueryParams
	{
	public:
		unsigned char                                              UnknownData_LHVF[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIDataProvider_LaneGoal
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UOrionAIDataProvider_LaneGoal : public UAIDataProvider_QueryParams
	{
	public:
		unsigned char                                              UnknownData_1HP1[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIFormation
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOrionAIFormation : public UObject
	{
	public:
		unsigned char                                              UnknownData_LN44[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleFormationMemberDeath();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIData
	 * Size -> 0x0050 (FullSize[0x0188] - InheritedSize[0x0138])
	 */
	class UOrionAIData : public UOrionCharacterData
	{
	public:
		unsigned char                                              UnknownData_D82I[0x50];                                  // 0x0138(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIFormationData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOrionAIFormationData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_VVXQ[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIKismetLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionAIKismetLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateInfluenceSurce(unsigned char SourceType, float Radius, float Strength, bool bForceUpdate);
		void STATIC_RemoveInfluenceSource(bool bForceUpdate);
		float STATIC_GetInfluenceValueAt(unsigned char QuerierTeam);
		void STATIC_GetBlackboardValueAsAbilitySpecHandle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIPerceptionComponent
	 * Size -> 0x0008 (FullSize[0x01A8] - InheritedSize[0x01A0])
	 */
	class UOrionAIPerceptionComponent : public UAIPerceptionComponent
	{
	public:
		unsigned char                                              UnknownData_81RK[0x8];                                   // 0x01A0(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetRecentDamageTakenFromActor();
		float GetCallForHelpRating();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIBotPerceptionComponent
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class UOrionAIBotPerceptionComponent : public UOrionAIPerceptionComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIPerceptionSystem
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UOrionAIPerceptionSystem : public UAIPerceptionSystem
	{
	public:
		unsigned char                                              UnknownData_QBG6[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (PADDING)

	public:
		void HandleCallForHelp();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIResource_AbilityExecution
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionAIResource_AbilityExecution : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAISettings
	 * Size -> 0x0340 (FullSize[0x0378] - InheritedSize[0x0038])
	 */
	class UOrionAISettings : public UDeveloperSettings
	{
	public:
		struct FHealthPercentagetToStartHealing                    DefaultEQSQueries;                                       // 0x0000(0x00E0) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BMC[0x298];                                 // 0x00E0(0x0298) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAITask_FlowFieldMove
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UOrionAITask_FlowFieldMove : public UAITask
	{
	public:
		unsigned char                                              UnknownData_87LP[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)

	public:
		void MoveTaskCompletedSignature__DelegateSignature(unsigned char Result);
		void STATIC_FlowFieldMove(bool bLockAILogic);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAIWaypoint
	 * Size -> 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
	 */
	class AOrionAIWaypoint : public AActor
	{
	public:
		unsigned char                                              UnknownData_WSVP[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStatManager
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UOrionStatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_6BAZ[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeartbeatManager
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UOrionHeartbeatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_UOAH[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.TeamCommunicationsActor
	 * Size -> 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
	 */
	class ATeamCommunicationsActor : public AOrionBaseActor
	{
	public:
		unsigned char                                              UnknownData_DARA[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartHidingBeforeDestroy();
		void ShowVisuals(bool bIsOwningPlayer);
		void HideVisualsImmediately();
		void HideVisuals(bool bIsOwningPlayer);
		void HideMiniMapIcon();
		void Blueprint_StartHidingBeforeDestroy(bool bIsOwningPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PCTeamCommunicationsData
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UPCTeamCommunicationsData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_8AWU[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerController_Game
	 * Size -> 0x0070 (FullSize[0x0BB0] - InheritedSize[0x0B40])
	 */
	class AOrionPlayerController_Game : public AOrionPlayerController_Base
	{
	public:
		unsigned char                                              UnknownData_2V0U[0x70];                                  // 0x0B40(0x0070) MISSED OFFSET (PADDING)

	public:
		void ToggleTeamCommsMenu();
		void ToggleScoreboard();
		void ToggleLargeMinimap();
		void ToggleHUDMouse();
		void ToggleEscapeMenu();
		void ToggleCardMenu();
		void Suicide();
		void SetHealthCheat(float InPercent);
		void ServerTransitionToSpectating();
		void ServerSurrender(bool bSurrender);
		void ServerSuicide();
		void ServerSetIsUsingGamepad(bool bNewIsUsingGamepad);
		void ServerForceStartGame();
		void ScriptAIBehaviorCheat(const class FName& ScriptedBehaviorName);
		void ReportClientHitch(float Duration);
		void ReportBug();
		void OpenUpgradePanel();
		void OpenScoreboard();
		void OnHUDCursorModeToggle();
		void OnHUDCursorModeRelease();
		void OnHUDCursorModePress();
		void STATIC_GetLocationRotationForSpawnActor();
		void STATIC_GetLocationForTeamCommActor(float MaxRange);
		void ExecuteTeamCommData();
		void DisplayGameEventMessage();
		void DestroyTeamCommsActor();
		void CloseUpgradePanel();
		void CloseTeamCommsMenu();
		void CloseScoreboard();
		void CloseCardMenu();
		void ClientWardPing();
		void ClientTransitionToSpectating();
		void ClientSurrender(bool bSurrender, bool bSuccess);
		void ClientStopKillcam();
		void ClientPlayKillcam();
		void ClientMatchHasEnded();
		void ClientHandlePostLogin();
		void ClientHandleMatchIsWaitingToStart();
		void Client_ReceiveTeamComm();
		void CancelAllAbilitiesCheat();
		void CancelAbilityForPawnCheat();
		void ActivateAIAbility(unsigned char InputID);
		void ActivateAbilityForPawnCheat(unsigned char InputID, bool bPressed);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnalytics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionAnalytics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_FireEvent_ModifiedSettings();
		void STATIC_FireEvent_InitialLoadComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCoreBaseAnimInstance
	 * Size -> 0x03E8 (FullSize[0x0890] - InheritedSize[0x04A8])
	 */
	class UOrionCoreBaseAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_40EP[0x3E8];                                 // 0x04A8(0x03E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCoreRingsAnimInstance
	 * Size -> 0x0020 (FullSize[0x04C8] - InheritedSize[0x04A8])
	 */
	class UOrionCoreRingsAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_YB69[0x20];                                  // 0x04A8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCPPHeroBaseAnimInstance
	 * Size -> 0x0348 (FullSize[0x07F0] - InheritedSize[0x04A8])
	 */
	class UOrionCPPHeroBaseAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8FA3[0x348];                                 // 0x04A8(0x0348) MISSED OFFSET (PADDING)

	public:
		void AnimNotify_EnteredDefaultIdle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBaseHeroAnimInstance
	 * Size -> 0x0010 (FullSize[0x0800] - InheritedSize[0x07F0])
	 */
	class UOrionBaseHeroAnimInstance : public UOrionCPPHeroBaseAnimInstance
	{
	public:
		unsigned char                                              UnknownData_SFZC[0x10];                                  // 0x07F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void AnimNotify_MeleeUpperBody();
		void AnimNotify_MeleeFullBody();
		void AnimNotify_JumpLandingExit();
		void AnimNotify_JumpExit();
		void AnimNotify_JogToIdle();
		void AnimNotify_IdleToJog();
		void AnimNotify_HitReactEnd();
		void AnimNotify_ExitedTurnInPlace();
		void AnimNotify_ExitedIdle();
		void AnimNotify_EnteredTurnInPlace();
		void AnimNotify_EnteredIdle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionArcBladeAnimInstance
	 * Size -> 0x0038 (FullSize[0x0838] - InheritedSize[0x0800])
	 */
	class UOrionArcBladeAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_T1H7[0x38];                                  // 0x0800(0x0038) MISSED OFFSET (PADDING)

	public:
		void EnterBladeState03();
		void EnterBladeState02();
		void EnterBladeState01();
		void EnterBladeState00();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGadgetAnimInstance
	 * Size -> 0x0000 (FullSize[0x0800] - InheritedSize[0x0800])
	 */
	class UOrionGadgetAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGruxAnimInstance
	 * Size -> 0x0058 (FullSize[0x0858] - InheritedSize[0x0800])
	 */
	class UOrionGruxAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ROUH[0x58];                                  // 0x0800(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHyperBreachAnimInstance
	 * Size -> 0x00D0 (FullSize[0x08D0] - InheritedSize[0x0800])
	 */
	class UOrionHyperBreachAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_72GB[0xD0];                                  // 0x0800(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMurielAnimInstance
	 * Size -> 0x0118 (FullSize[0x0918] - InheritedSize[0x0800])
	 */
	class UOrionMurielAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_D6HP[0x118];                                 // 0x0800(0x0118) MISSED OFFSET (PADDING)

	public:
		void AnimNotify_Jump_Land_End();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPriceAnimInstance
	 * Size -> 0x00A8 (FullSize[0x08A8] - InheritedSize[0x0800])
	 */
	class UOrionPriceAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_06QD[0xA8];                                  // 0x0800(0x00A8) MISSED OFFSET (PADDING)

	public:
		void AnimNotify_IK_HndShotGun_On();
		void AnimNotify_IK_HndShotGun_Off();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRampageAnimInstance
	 * Size -> 0x0030 (FullSize[0x0830] - InheritedSize[0x0800])
	 */
	class UOrionRampageAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_PX9X[0x30];                                  // 0x0800(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSparrowAnimInstance
	 * Size -> 0x0010 (FullSize[0x0810] - InheritedSize[0x0800])
	 */
	class UOrionSparrowAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8AB7[0x10];                                  // 0x0800(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTotemAnimInstance
	 * Size -> 0x0060 (FullSize[0x0860] - InheritedSize[0x0800])
	 */
	class UOrionTotemAnimInstance : public UOrionBaseHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_UXN5[0x60];                                  // 0x0800(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSteelAnimInstance
	 * Size -> 0x0158 (FullSize[0x0948] - InheritedSize[0x07F0])
	 */
	class UOrionSteelAnimInstance : public UOrionCPPHeroBaseAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2XGR[0x158];                                 // 0x07F0(0x0158) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCharMovementComponent
	 * Size -> 0x0130 (FullSize[0x0800] - InheritedSize[0x06D0])
	 */
	class UOrionCharMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_2GTW[0x130];                                 // 0x06D0(0x0130) MISSED OFFSET (PADDING)

	public:
		void SimulateBasicFlight(float MaxDistancePerIncrement, int32_t MaxIncrements);
		void OrionServerMoveOld(float OldTimeStamp, unsigned char OldMoveFlags);
		void OrionServerMoveDualHybridRootMotion(float TimeStamp0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode);
		void OrionServerMoveDual(float TimeStamp0, unsigned char PendingFlags, uint32_t View0, float TimeStamp, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode);
		void OrionServerMove(float TimeStamp, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, const class FName& ClientBaseBoneName, unsigned char ClientMovementMode);
		void LaunchToPointFromTargetData(float LaunchVelocityXY, bool bLockAirControl);
		void LaunchToPoint(float LaunchVelocityXY, bool bLockAirControl);
		void LaunchInDirectionFromTargetData(float LaunchVelocity, bool bLockAirControl);
		void LaunchInDirection(float LaunchVelocity, bool bLockAirControl);
		void ApplyKnockup(float Distance);
		void ApplyKnockback(float DistanceXY);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroAnimInstance
	 * Size -> 0x0C88 (FullSize[0x1130] - InheritedSize[0x04A8])
	 */
	class UOrionHeroAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_PI06[0xC88];                                 // 0x04A8(0x0C88) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroArcBladeAnimInstance
	 * Size -> 0x0010 (FullSize[0x1140] - InheritedSize[0x1130])
	 */
	class UOrionHeroArcBladeAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VSR5[0x10];                                  // 0x1130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroChainsAnimInstance
	 * Size -> 0x0170 (FullSize[0x12A0] - InheritedSize[0x1130])
	 */
	class UOrionHeroChainsAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_LREX[0x170];                                 // 0x1130(0x0170) MISSED OFFSET (PADDING)

	public:
		void SetUpBellyChainOrientation();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroCoilAnimInstance
	 * Size -> 0x00A0 (FullSize[0x11D0] - InheritedSize[0x1130])
	 */
	class UOrionHeroCoilAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_JO3C[0xA0];                                  // 0x1130(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroCrunchAnimInstance
	 * Size -> 0x0000 (FullSize[0x1130] - InheritedSize[0x1130])
	 */
	class UOrionHeroCrunchAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroGhostAnimInstance
	 * Size -> 0x0000 (FullSize[0x1130] - InheritedSize[0x1130])
	 */
	class UOrionHeroGhostAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroHammerAnimInstance
	 * Size -> 0x0040 (FullSize[0x1170] - InheritedSize[0x1130])
	 */
	class UOrionHeroHammerAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_FUZZ[0x40];                                  // 0x1130(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroKurohaneAnimInstance
	 * Size -> 0x0060 (FullSize[0x1190] - InheritedSize[0x1130])
	 */
	class UOrionHeroKurohaneAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_QK0P[0x60];                                  // 0x1130(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroMamboAnimInstance
	 * Size -> 0x0000 (FullSize[0x1130] - InheritedSize[0x1130])
	 */
	class UOrionHeroMamboAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPriceAnimInstance
	 * Size -> 0x00A0 (FullSize[0x11D0] - InheritedSize[0x1130])
	 */
	class UOrionHeroPriceAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RQ58[0xA0];                                  // 0x1130(0x00A0) MISSED OFFSET (PADDING)

	public:
		void AnimNotify_IK_HndShotGun_On();
		void AnimNotify_IK_HndShotGun_Off();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPyroAnimInstance
	 * Size -> 0x0080 (FullSize[0x11B0] - InheritedSize[0x1130])
	 */
	class UOrionHeroPyroAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VRSP[0x80];                                  // 0x1130(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroRampageAnimInstance
	 * Size -> 0x0020 (FullSize[0x1150] - InheritedSize[0x1130])
	 */
	class UOrionHeroRampageAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CSX9[0x20];                                  // 0x1130(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroRiftmageAnimInstance
	 * Size -> 0x00D0 (FullSize[0x1200] - InheritedSize[0x1130])
	 */
	class UOrionHeroRiftmageAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ZFGH[0xD0];                                  // 0x1130(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroSparrowAnimInstance
	 * Size -> 0x0030 (FullSize[0x1160] - InheritedSize[0x1130])
	 */
	class UOrionHeroSparrowAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_P25W[0x30];                                  // 0x1130(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroSwordAnimInstance
	 * Size -> 0x0010 (FullSize[0x1140] - InheritedSize[0x1130])
	 */
	class UOrionHeroSwordAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_HJSW[0x10];                                  // 0x1130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroTacticiaAnimInstance
	 * Size -> 0x0000 (FullSize[0x1130] - InheritedSize[0x1130])
	 */
	class UOrionHeroTacticiaAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroTomahawkAnimInstance
	 * Size -> 0x0020 (FullSize[0x1150] - InheritedSize[0x1130])
	 */
	class UOrionHeroTomahawkAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_JDQ4[0x20];                                  // 0x1130(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroTotemAnimInstance
	 * Size -> 0x0030 (FullSize[0x1160] - InheritedSize[0x1130])
	 */
	class UOrionHeroTotemAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_X4BS[0x30];                                  // 0x1130(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroTwinblastAnimInstance
	 * Size -> 0x00E0 (FullSize[0x1210] - InheritedSize[0x1130])
	 */
	class UOrionHeroTwinblastAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_12NK[0xE0];                                  // 0x1130(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnMontageStartedDelegate();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroVampAnimInstance
	 * Size -> 0x0000 (FullSize[0x1130] - InheritedSize[0x1130])
	 */
	class UOrionHeroVampAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroVenusAnimInstance
	 * Size -> 0x0030 (FullSize[0x1160] - InheritedSize[0x1130])
	 */
	class UOrionHeroVenusAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_SOUT[0x30];                                  // 0x1130(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroWardrumAnimInstance
	 * Size -> 0x0010 (FullSize[0x1140] - InheritedSize[0x1130])
	 */
	class UOrionHeroWardrumAnimInstance : public UOrionHeroAnimInstance
	{
	public:
		unsigned char                                              UnknownData_MNM7[0x10];                                  // 0x1130(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPedestalAnimInstance
	 * Size -> 0x0008 (FullSize[0x04B0] - InheritedSize[0x04A8])
	 */
	class UOrionHeroPedestalAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NSKE[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMinionAnimInstance
	 * Size -> 0x04F8 (FullSize[0x09A0] - InheritedSize[0x04A8])
	 */
	class UOrionMinionAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_7TM7[0x4F8];                                 // 0x04A8(0x04F8) MISSED OFFSET (PADDING)

	public:
		void RequestBehavior(unsigned char Behavior, int32_t PlayIndex, bool bLooping);
		void CancelBehavior(unsigned char Behavior);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTerminusAnimInstance
	 * Size -> 0x0078 (FullSize[0x0520] - InheritedSize[0x04A8])
	 */
	class UOrionTerminusAnimInstance : public UOrionAnimInstance
	{
	public:
		unsigned char                                              UnknownData_4Y1G[0x78];                                  // 0x04A8(0x0078) MISSED OFFSET (PADDING)

	public:
		void AnimNotify_StartLooping();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimMotionRecorder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionAnimMotionRecorder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_AbilityNotify
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_AbilityNotify : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_G630[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_AbilityNotifyWindow
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotify_AbilityNotifyWindow : public UAnimNotifyState
	{
	public:
		unsigned char                                              UnknownData_L7SN[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_CameraShake
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_CameraShake : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_21A3[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_Footstep
	 * Size -> 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_Footstep : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_OSLB[0xB8];                                  // 0x0038(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_Landed
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UOrionAnimNotify_Landed : public UOrionAnimNotify_Footstep
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_GameplayCue
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_GameplayCue : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_CLKO[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_GameplayCueState
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotify_GameplayCueState : public UAnimNotifyState
	{
	public:
		unsigned char                                              UnknownData_VRAR[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_MeleeCancel
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_MeleeCancel : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_830E[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_MeleeCharge
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_MeleeCharge : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotify_PlaySoundTeamAdjusted
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UOrionAnimNotify_PlaySoundTeamAdjusted : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_GCAP[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_AbilityQueueWindow
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotifyState_AbilityQueueWindow : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_ForceFacingForward
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotifyState_ForceFacingForward : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_ForceFullBodyMontage
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotifyState_ForceFullBodyMontage : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_MeleeComboWindow
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotifyState_MeleeComboWindow : public UAnimNotifyState
	{
	public:
		unsigned char                                              UnknownData_23KW[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_MeleeDamageWindow
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotifyState_MeleeDamageWindow : public UAnimNotifyState
	{
	public:
		unsigned char                                              UnknownData_DW0S[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_MovementWindow
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOrionAnimNotifyState_MovementWindow : public UAnimNotifyState
	{
	public:
		unsigned char                                              UnknownData_O95K[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAnimNotifyState_TrailEffectTeamAdjusted
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UOrionAnimNotifyState_TrailEffectTeamAdjusted : public UAnimNotifyState_Trail
	{
	public:
		unsigned char                                              UnknownData_6JFI[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionArenaCamera
	 * Size -> 0x0028 (FullSize[0x03A8] - InheritedSize[0x0380])
	 */
	class AOrionArenaCamera : public AActor
	{
	public:
		unsigned char                                              UnknownData_W48L[0x28];                                  // 0x0380(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionArenaRailCamera
	 * Size -> 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
	 */
	class AOrionArenaRailCamera : public AOrionArenaCamera
	{
	public:
		unsigned char                                              UnknownData_FGWZ[0x20];                                  // 0x03A8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNotificationLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionNotificationLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ShowNotification(const class FText& TitleText, const class FText& BodyText, float DisplayTime);
		void STATIC_SetNotificationDisplayTime();
		bool STATIC_RemoveNotification();
		void STATIC_OnNotificationActionTaken(unsigned char InSelection);
		void STATIC_KillNotification(const class FName& Identifier);
		bool STATIC_IsNotificationValid();
		class FText STATIC_GetNotificationDisplayTimeText();
		bool STATIC_Equal();
		void STATIC_ClearAllErrorNotifications();
		void STATIC_BindToNotificationResponse(const class FScriptDelegate& InCallback);
		void STATIC_AddNotification();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNotificationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionNotificationInterface : public UInterface
	{
	public:
		void GetNotification();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAsyncAction_InteractiveNotification
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class UOrionAsyncAction_InteractiveNotification : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              Notification[0x1A0];                                     // 0x0000(0x01A0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAsyncAction_InteractiveNotification.Notification
		unsigned char                                              UnknownData_8QSV[0x60];                                  // 0x01A0(0x0060) MISSED OFFSET (PADDING)

	public:
		void STATIC_ShowInteractiveNotification(const class FText& TitleText, const class FText& BodyText, const class FText& LeftButton, const class FText& RightButton, const class FName& Identifier);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAsyncAction_ModalError
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UOrionAsyncAction_ModalError : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              Description[0xB0];                                       // 0x0000(0x00B0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAsyncAction_ModalError.Description
		unsigned char                                              UnknownData_I6J2[0x40];                                  // 0x00B0(0x0040) MISSED OFFSET (PADDING)

	public:
		void STATIC_ShowModalError(const class FText& ErrorMessage);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAsyncAction_ShowConfirmation
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UOrionAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              Description[0xB0];                                       // 0x0000(0x00B0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionAsyncAction_ShowConfirmation.Description
		unsigned char                                              UnknownData_3QPC[0x70];                                  // 0x00B0(0x0070) MISSED OFFSET (PADDING)

	public:
		void STATIC_ShowConfirmationDialog(const class FText& Title, const class FText& Message, const class FText& ConfirmButtonText, const class FText& DeclineButtonText, float InDisplayTime, bool bShowCancelButton);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAsyncAction_TimedLerp
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UOrionAsyncAction_TimedLerp : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_7XEL[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		void STATIC_TimedLerp(float StartValue, float EndValue, float LerpDuration, float EaseOutExp, bool bWholeNumbersOnly);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCombatSet
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UOrionCombatSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_H0GY[0x58];                                  // 0x0030(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnRep_ShieldPenetration();
		void OnRep_PhysicalPenetrationRating();
		void OnRep_PerseveranceRating();
		void OnRep_LifeStealRating();
		void OnRep_LifeGrantRating();
		void OnRep_LeftClickBasePower();
		void OnRep_LeftClickARC();
		void OnRep_HealingBonusSource();
		void OnRep_EnergyPenetrationRating();
		void OnRep_DamageToEnergyConversionRating();
		void OnRep_DamagePenetration();
		void OnRep_DamageBonusSource();
		void OnRep_CriticalDamageChance();
		void OnRep_CriticalDamageBonus();
		void OnRep_CleaveRating();
		void OnRep_BasePower();
		void OnRep_BaseAttackTime();
		void OnRep_AttackSpeedRating();
		void OnRep_AttackRatingCoeffecient();
		void OnRep_AttackRating();
		void OnRep_AoERating();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEnergySet
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UOrionEnergySet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_CG5H[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnRep_MaxEnergy();
		void OnRep_EnergyRegenRate();
		void OnRep_EnergyReductionPercentage();
		void OnRep_EnergyReduction();
		void OnRep_Energy();
		void OnRep_CooldownReductionValue();
		void OnRep_CooldownReductionPercentage();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplaySet
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOrionGameplaySet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_DT8Q[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHealthSet
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UOrionHealthSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_JPKL[0x58];                                  // 0x0030(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnRep_TargetMaxDamage();
		void OnRep_Shield();
		void OnRep_PhysicalResistanceRating();
		void OnRep_MaxShield();
		void OnRep_MaxHealth();
		void OnRep_HealthRegenRate();
		void OnRep_Health();
		void OnRep_HealingBonusTarget();
		void OnRep_EnergyResistanceRating();
		void OnRep_DamageResistance();
		void OnRep_DamageBonusTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMoveSet
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UOrionMoveSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_3XTG[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_MaxSprintSpeed();
		void OnRep_MaxMoveSpeed();
		void OnRep_CombatSlow();
		void OnRep_AvatarScale();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionObjectiveSet
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UOrionObjectiveSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_VV3T[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRigSet
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UOrionRigSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_JOU4[0x58];                                  // 0x0030(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTowerSet
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UOrionTowerSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_MSTD[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionVisionSet
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOrionVisionSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_FNDO[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_VisionRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWardSet
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOrionWardSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_D62H[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWellSet
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UOrionWellSet : public UOrionAttributeSet
	{
	public:
		unsigned char                                              UnknownData_N9S8[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBalanceOveride
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOrionBalanceOveride : public UObject
	{
	public:
		unsigned char                                              UnknownData_PJI7[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBotAISpawner
	 * Size -> 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
	 */
	class AOrionBotAISpawner : public AOrionBaseActor
	{
	public:
		unsigned char                                              UnknownData_PVRA[0x50];                                  // 0x03D0(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleSpawnedAIDeath();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCharAISpawner
	 * Size -> 0x0130 (FullSize[0x0500] - InheritedSize[0x03D0])
	 */
	class AOrionCharAISpawner : public AOrionBaseActor
	{
	public:
		unsigned char                                              UnknownData_6BIL[0x130];                                 // 0x03D0(0x0130) MISSED OFFSET (PADDING)

	public:
		void WaveSpawnManager();
		void StartSpawningNextAIFormation();
		void SpawnNextAIFromPool();
		void SpawnAI();
		void SetSpawnerType(unsigned char InType);
		void SendAggroManagerMessage(unsigned char Message);
		void SelectSpawnLocation();
		void RemoveAggroEffectForHero();
		void OnStartSpawningAIFormation();
		void OnReplenishWaveTimerStart(float InReplenishDelayTimer);
		void OnRep_ReplicatedSpawnTime();
		void OnPreSpawnAI();
		void OnPostSpawnedAI();
		void OnIntroSpawnForAI();
		void OnHandleMatchStart();
		void OnAIFormationSpawned();
		void OnAggroResetStarted();
		void OnAggroResetFinished();
		bool IsSpawningAnAIFormation();
		bool IsAggroManagerStateRespawning();
		bool IsAggroManagerStateResetting();
		bool IsAggroManagerStateInCombat();
		void HandleSpawnedAIDestroyed();
		void HandleSpawnedAIDeath();
		void HandleMatchStarted();
		void HandleMatchEnded();
		int32_t GetSpawnerAICount();
		void GetAggroManagerSpawnedList();
		void GetAggroManagerHeroesWithAggro();
		void GetAggroManagerHeroesInRange();
		void ForceRestartSpawner(unsigned char InType);
		void FinishSpawningNextAIFormation();
		void EnableSpawner();
		void DisableSpawner();
		void ChangeTeamOldVisionManagerOnly(unsigned char NewTeam);
		void ApplyAggroEffectForHero();
		void AddAIToNextWave();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRigs
	 * Size -> 0x0180 (FullSize[0x0A40] - InheritedSize[0x08C0])
	 */
	class AOrionRigs : public AOrionDamageableObjective_Base
	{
	public:
		unsigned char                                              UnknownData_PZR9[0x180];                                 // 0x08C0(0x0180) MISSED OFFSET (PADDING)

	public:
		void WellTagCallback_VisibleToEnemy(int32_t NewCount);
		void SetPlayerThatPlacedThisRig();
		void PlayerCollectCoins();
		void OnSpawnCoins(float ResourceAmount);
		void OnRep_AttachedToWell();
		void OnAttachedToWell();
		float GetWellResourcePercentLeft();
		void GetPlayerThatPlacedRig();
		int32_t GetMatchTimePlaced();
		void GetCoinSpawnLocation();
		float GetBoostedRigScaler();
		void GetAttchedToWell();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionVisionWard
	 * Size -> 0x0070 (FullSize[0x04E8] - InheritedSize[0x0478])
	 */
	class AOrionVisionWard : public AOrionDamageableActor
	{
	public:
		unsigned char                                              UnknownData_C7JQ[0x70];                                  // 0x0478(0x0070) MISSED OFFSET (PADDING)

	public:
		void OnVisionWardTimedOut();
		void OnPlayerSightedPing();
		void HandleTrackedHeroDeath();
		float GetLifeSpanPercentage();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayVolume
	 * Size -> 0x0108 (FullSize[0x04D8] - InheritedSize[0x03D0])
	 */
	class AOrionGameplayVolume : public AOrionBaseActor
	{
	public:
		unsigned char                                              UnknownData_BWD1[0x108];                                 // 0x03D0(0x0108) MISSED OFFSET (PADDING)

	public:
		void OnRep_Scale();
		void OnEndOverlapCallback(int32_t OtherBodyIndex);
		void OnBeginOverlapCallback(int32_t OtherBodyIndex, bool bFromSweep);
		void K2_OnEndOverlapCallback(int32_t OtherBodyIndex);
		void K2_OnBeginOverlapCallback(int32_t OtherBodyIndex, bool bFromSweep);
		void HandleMatchStarted();
		int32_t GetNumAppliedEffectsLeftToApply();
		bool CanStillApplyEffectsToTargets();
		void ApplyEffects();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionObjectiveCapturePoint
	 * Size -> 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
	 */
	class AOrionObjectiveCapturePoint : public AOrionBaseActor
	{
	public:
		unsigned char                                              UnknownData_XE6S[0x18];                                  // 0x03D0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnOverlapBegin(int32_t OtherBodyIndex, bool bFromSweep);
		void OnObjectiveCaptured();
		void OnManuallyHandleCapture(unsigned char OtherActorTeamNum);
		void OnCaptureHandle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPedestalHero
	 * Size -> 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
	 */
	class AOrionPedestalHero : public AOrionBaseActor
	{
	public:
		unsigned char                                              UnknownData_SLKD[0x38];                                  // 0x03D0(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnSkinChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerState_Base
	 * Size -> 0x02E0 (FullSize[0x06F0] - InheritedSize[0x0410])
	 */
	class AOrionPlayerState_Base : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_37NX[0x2E0];                                 // 0x0410(0x02E0) MISSED OFFSET (PADDING)

	public:
		void ServerSetPlayerHeroDataSpec();
		void ServerSetCardDeck(const class FString& DeckId);
		void ServerClearPlayerHeroData();
		void RemoveCardDataFromDeck(bool bRemoveEntireStack);
		void OnRep_Team();
		void OnRep_PartyOwner();
		void OnRep_HeroDataSpec();
		void OnRep_CardsInDeck();
		void OnRep_bReadyToStartMatch();
		void OnRep_bInitializedFromMatchmakingData();
		unsigned char GetTeamNum();
		void ClientFailedToPickHero();
		void _BPGetHeroData();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardMessageMaker
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UOrionCardMessageMaker : public UObject
	{
	public:
		unsigned char                                              UnknownData_54F4[0xA8];                                  // 0x0028(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerState_Game
	 * Size -> 0x0B00 (FullSize[0x11F0] - InheritedSize[0x06F0])
	 */
	class AOrionPlayerState_Game : public AOrionPlayerState_Base
	{
	public:
		unsigned char                                              UnknownData_WKPW[0xB00];                                 // 0x06F0(0x0B00) MISSED OFFSET (PADDING)

	public:
		void UpdateIsUltimateReady();
		void UndoReplaceCardDataAtIndex(int32_t HandIndex);
		void UndoRemoveCardFromHandAtIndex(int32_t HandIndex);
		void UndoAddCardToHandAtIndex(int32_t HandIndex);
		void TriggerMapPing(unsigned char InTeamNum, float PingTime);
		void SetCardActivationPointsMax(int32_t NewMaxTotal);
		void ServerTryToSetPlayerHeroDataSpecFromTeamSelection();
		void ServerAbilityLevelUp(int32_t InputID);
		void ReplaceCardDataAtIndex(int32_t HandIndex);
		void RemoveCardFromHandAtIndex(int32_t HandIndex);
		void OnRep_SurrenderVote(unsigned char OldVote);
		void OnRep_PlayersHand();
		void OnRep_DidRejoin();
		void OnRep_ClientDamageLog();
		void OnRep_CardActivationPointsSpent();
		void OnRep_CardActivationPointsMax();
		void OnPlayerModifiedCardInHand();
		void GivePlayerCardActivationPoints(int32_t PointsEarned);
		float GetTimeLeftToRespawn();
		unsigned char GetSurrenderVote();
		void GetCurrentPawn();
		int32_t GetCardActivationPointsSpent();
		int32_t GetCardActivationPointsMax();
		int32_t GetCardActivationPointsLeft();
		void GetAttachedBuffs();
		void ClientWhyStuck();
		void AddCardDataToHandAtIndex(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCarriedObjective
	 * Size -> 0x00C8 (FullSize[0x0690] - InheritedSize[0x05C8])
	 */
	class AOrionCarriedObjective : public AOrionPickUp
	{
	public:
		unsigned char                                              UnknownData_BKM0[0xC8];                                  // 0x05C8(0x00C8) MISSED OFFSET (PADDING)

	public:
		void ReturnToBase();
		void ResetCarriedObjectiveTimers();
		void OnStartTeleportation();
		void OnScoredObjective();
		void OnRep_ReturnToBaseGameTime();
		void OnRep_CurrentHolder();
		void OnObjectiveDropped();
		void OnFinishTeleportation();
		void MarkReadyToDespawn();
		bool IsHeld();
		void HandleHomingEnterPhaseShift();
		void HandleHomingDeath();
		void HandleCurrentHoldersDestroyed();
		void HandleCurrentHoldersDeath();
		float GetObjectiveMaxLifeSpan();
		float GetObjectiveLifeSpan();
		float GetCurrentObjectiveMaxLifeSpan();
		float GetCurrentObjectiveLifeSpan();
		void DropObjective();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBBKeyType_AbilitySpecHandle
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOrionBBKeyType_AbilitySpecHandle : public UBlackboardKeyType_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBotAbilityPicker
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionBotAbilityPicker : public UObject
	{
	public:
		bool STATIC_PickAbilityAgainstActor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTContext_Behavior
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UOrionBTContext_Behavior : public UBTService
	{
	public:
		unsigned char                                              UnknownData_DHA0[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTDecorator_EnemyInPrimaryRange
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UOrionBTDecorator_EnemyInPrimaryRange : public UBTDecorator
	{
	public:
		unsigned char                                              UnknownData_298B[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTDecorator_GameplayTagsMatch
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UOrionBTDecorator_GameplayTagsMatch : public UBTDecorator_CheckGameplayTagsOnActor
	{
	public:
		unsigned char                                              UnknownData_IX2Y[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTDecorator_LockUntil
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UOrionBTDecorator_LockUntil : public UBTDecorator_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTDecorator_LoopExecution
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UOrionBTDecorator_LoopExecution : public UBTDecorator
	{
	public:
		unsigned char                                              UnknownData_3787[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTService_GetEnemy
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UOrionBTService_GetEnemy : public UBTService
	{
	public:
		unsigned char                                              UnknownData_2MRL[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)

	public:
		float ScoreTargetEnemy();
		void ReceiveTick(float DeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_FlowFieldMove
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UOrionBTTask_FlowFieldMove : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_5C0D[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_GetLaneWaypoint
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UOrionBTTask_GetLaneWaypoint : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_MarkJungleReset
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UOrionBTTask_MarkJungleReset : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_ParametrizedMoveTo
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UOrionBTTask_ParametrizedMoveTo : public UBTTask_MoveTo
	{
	public:
		unsigned char                                              UnknownData_68FO[0x38];                                  // 0x00B0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_ObjectiveGraphMove
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UOrionBTTask_ObjectiveGraphMove : public UOrionBTTask_ParametrizedMoveTo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_PerformAbility
	 * Size -> 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
	 */
	class UOrionBTTask_PerformAbility : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_XDHW[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_LMBClosestEnemy
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UOrionBTTask_LMBClosestEnemy : public UOrionBTTask_PerformAbility
	{
	public:
		unsigned char                                              UnknownData_979T[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_ReassignLane
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UOrionBTTask_ReassignLane : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_StopMovement
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UOrionBTTask_StopMovement : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_TriggerAttack
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UOrionBTTask_TriggerAttack : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBTTask_WaitUntilTimestamp
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class UOrionBTTask_WaitUntilTimestamp : public UBTTask_Wait
	{
	public:
		unsigned char                                              UnknownData_IF5H[0x28];                                  // 0x0078(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionButton
	 * Size -> 0x0050 (FullSize[0x0288] - InheritedSize[0x0238])
	 */
	class UOrionButton : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_N25V[0x50];                                  // 0x0238(0x0050) MISSED OFFSET (PADDING)

	public:
		void SimpleButtonDelegate__DelegateSignature();
		void OnStateChanged(unsigned char NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCameraComponent
	 * Size -> 0x0070 (FullSize[0x0810] - InheritedSize[0x07A0])
	 */
	class UOrionCameraComponent : public UCameraComponent
	{
	public:
		unsigned char                                              UnknownData_ZYOU[0x70];                                  // 0x07A0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCard
	 * Size -> 0x00B0 (FullSize[0x0430] - InheritedSize[0x0380])
	 */
	class AOrionCard : public AInfo
	{
	public:
		unsigned char                                              UnknownData_XHQH[0xB0];                                  // 0x0380(0x00B0) MISSED OFFSET (PADDING)

	public:
		void OnRep_UpgradeCards();
		int32_t GetTotalCardCost();
		int32_t GetNumOfUpgradeSlotsUsed();
		int32_t GetNumOfUpgradeSlotsOpen();
		int32_t GetNumOfUpgradeSlots();
		void GetIconForUpgradeSlot(int32_t SlotIndex);
		void GetCardData_Blueprint();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardSelectionWidget
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionCardSelectionWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_U3F0[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void ExitSelectionMode();
		void EnterSelectionMode();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardAbilityLayoutWidget
	 * Size -> 0x00F8 (FullSize[0x0330] - InheritedSize[0x0238])
	 */
	class UOrionCardAbilityLayoutWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_JXEX[0xF8];                                  // 0x0238(0x00F8) MISSED OFFSET (PADDING)

	public:
		void InitInHUD();
		void AddWidgetElement(bool bIsAbilityWidgetRelated);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardDataCollection
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionCardDataCollection : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_9F9Y[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardStatWidget
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class UOrionCardStatWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_QDKP[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardTooltipStatEntry
	 * Size -> 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
	 */
	class UOrionCardTooltipStatEntry : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_ODZS[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardTooltipUpgradeEntry
	 * Size -> 0x0040 (FullSize[0x0278] - InheritedSize[0x0238])
	 */
	class UOrionCardTooltipUpgradeEntry : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_0NY6[0x40];                                  // 0x0238(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardUpgradeSlotWidget
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class UOrionCardUpgradeSlotWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_IM7N[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCharAI_Jungle
	 * Size -> 0x0100 (FullSize[0x0D90] - InheritedSize[0x0C90])
	 */
	class AOrionCharAI_Jungle : public AOrionCharAI
	{
	public:
		unsigned char                                              UnknownData_HP2D[0x100];                                 // 0x0C90(0x0100) MISSED OFFSET (PADDING)

	public:
		void RequestReplicatedAnimation(unsigned char Animation, int32_t AttackId);
		void PlaySpawningAbility();
		void OnRep_SpawnEffectLock();
		void OnRep_PackedAnimRequest();
		bool HasFinishedSpawning();
		void GetCurrentTarget();
		void GetBestTarget(unsigned char Mode);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCharAI_PrimeHelix
	 * Size -> 0x00D0 (FullSize[0x0E60] - InheritedSize[0x0D90])
	 */
	class AOrionCharAI_PrimeHelix : public AOrionCharAI_Jungle
	{
	public:
		unsigned char                                              UnknownData_4HJK[0xD0];                                  // 0x0D90(0x00D0) MISSED OFFSET (PADDING)

	public:
		void RequestReplicatedAttackAnimation(int32_t SpecialAttackId);
		void PlayExpandingKnockback();
		void GetConeAttackLocations();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCheatManagerBase
	 * Size -> 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
	 */
	class UOrionCheatManagerBase : public UCheatManager
	{
	public:
		unsigned char                                              UnknownData_Z4MY[0x48];                                  // 0x0078(0x0048) MISSED OFFSET (PADDING)

	public:
		void WhyNotReady();
		void UdpPingAddr(const class FString& Target, float Timeout);
		void ToggleUI(int32_t Enable);
		void TestSoloRiderStartAdvertising(const class FString& HeroName, int32_t Position, int32_t Role);
		void TestSoloRiderCancelAdvertising();
		void TestSoloRiderAcceptOrRejectInvite(bool bAccept, int32_t RiderIdx);
		void TestLobbyBuilderMatchmake(int32_t PlaylistId);
		void TestLobbyBuilderCancel();
		void TestLobbyBuilderAcceptMatch(bool bAcceptMatch);
		void TestGracefulShutdownServer(int32_t ExitCode);
		void TestComputeBestTeamComp(const class FString& HeroListName);
		void TestChangePartySize(int32_t NewSize);
		void TestChangePartyPrivacy(bool bPrivate, bool bLeaderFriendsOnly, bool bLeaderInvitesOnly);
		void TBUnlockSoloRider(const class FString& SoloriderUserId);
		void TBStartTeamMatchmaking();
		void TBSetSlotChoice(int32_t SlotIdx, int32_t Position, int32_t Role);
		void TBSetReady(bool bReady);
		void TBQuickmatch(bool bCoopVsAI, const class FString& HeroName);
		void TBMultiSoloRider(int32_t NumRiders);
		void TBLeaveTeam();
		void TBDebugState();
		void TBClearDebugState();
		void TBCaptainAcceptSlot(int32_t SlotIdx, bool bAccept);
		void TBCaptain();
		void TBCancelSlot(int32_t SlotIdx);
		void TBCancelMatchmaking();
		void TBAcceptSocialInvite(bool bAccept);
		void ShowLoadingScreen(bool bIsPregame);
		void SetPerfBots(const class FString& HeroList);
		void SetParallaxScaleFactor(float Factor);
		void SetParallaxLerpSpeed(float LerpSpeed);
		void SetNumLobbyPlayers(int32_t NumLobbyPlayers);
		void SetInputMode(unsigned char Mode);
		void SetGamepadSensitivity(int32_t YawIndex, int32_t PitchIndex);
		void SetGamepadConfig(int32_t ConfigIndex);
		void ResetDraft();
		void ReplayShowFocusPlane(bool bShowFocusPlane);
		void ReplaySetManualFocus(float NewFocusDistance);
		void ReplaySetManualExposure(float ExposureBias);
		void ReplaySetDroneCollision(bool bCollides);
		void ReplaySetAutoFocus();
		void ReplaySetAutoExposure();
		void ReplaySetAperture(float FStop);
		void PingStress();
		void OrionWatermark(int32_t Enable);
		void OrionForceCharLOD(int32_t LOD);
		void OrionDemoMode(bool bDemoMode);
		void McpTestTeamBuilderTeamSlots(const class FString& MatchmakingBucket, int32_t SlotCount);
		void McpTestTeamBuilderGetMatchTimes();
		void McpTestSubmitLogs();
		void McpSimulateMatchCompleteAbandon(bool bVictory);
		void McpSimulateMatchComplete(bool bVictory);
		void McpRefreshProfile();
		void McpRedeemPurchases();
		void McpLogout();
		void McpLogin(const class FString& User, const class FString& Password);
		void McpIssueCodeToken(const class FString& TokenId);
		void McpGetVersion();
		void McpGetUnredeemedCodes();
		void McpCheat();
		void LoadPlayGoMap();
		void LBBugIt();
		void IcmpPingAddr(const class FString& Target, float Timeout);
		void HideTowerTargetingBeams();
		void HideLoadingScreen();
		void GetAccountMMR(const class FString& RatingType);
		void ForceMouseCursor();
		void ForceHideMouseCursor();
		void EComPurchaseOffer(const class FString& StorefrontName, int32_t OfferIndex, int32_t Quantity);
		void EComListCatalogOffers();
		void DumpTeamInfo();
		void DumpReservations();
		void DraftPick(const class FString& HeroName);
		void CalculateMaxMMRDelta(int32_t SecondsInQueue, int32_t YourMMR);
		void AddTestNotification(int32_t Count);
		void AddInactiveTime(float NewInactiveTime);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCheatManagerGame
	 * Size -> 0x0038 (FullSize[0x00F8] - InheritedSize[0x00C0])
	 */
	class UOrionCheatManagerGame : public UOrionCheatManagerBase
	{
	public:
		unsigned char                                              UnknownData_T7GN[0x38];                                  // 0x00C0(0x0038) MISSED OFFSET (PADDING)

	public:
		void WTF(int32_t Enable);
		void WhyStuck();
		void VLogAIEvent(const class FString& EventLabel);
		void VisionManagerDebugLog();
		void UnlimitedHealth(int32_t State);
		void TravelModeMode(int32_t NewValue);
		void TowerGod(bool bTowerGod);
		void ToggleUnselectable();
		void ToggleTeamInfoWidget();
		void ToggleStun();
		void ToggleSilence();
		void ToggleScoreboardUpdating();
		void ToggleRoot();
		void ToggleOverheadHealth();
		void ToggleMiniMapWidget();
		void ToggleLimbo();
		void ToggleJuggernaut();
		void ToggleIsUsingGamepad();
		void ToggleIndicatorWidgets();
		void ToggleHealthAndStatusWidget();
		void ToggleFixedCamera();
		void ToggleEnemyInfoWidget();
		void ToggleEnableRootMotionSources();
		void ToggleDebugXP();
		void ToggleDamageLog();
		void ToggleBotsGod();
		void ToggleAIWaveSpawning();
		void ToggleAIAttack();
		void ToggleAbilityWidgets();
		void ToggleAbilityLevelEnforcement();
		void SurrenderVote(bool bVoteYes);
		void StopCoinSpawning(int32_t Value);
		void SpawnTargetDummyHeroAtPosAndRotation(const class FString& DataAssetName, float X, float Y, float Z, float InVerticalRotation);
		void SpawnTargetDummyHeroAtPos(const class FString& DataAssetName, float X, float Y, float Z);
		void SpawnTargetDummyHero(const class FString& DataAssetName);
		void SpawnFriendlyMinionAtPosAndRotation(const class FString& DataAssetName, float X, float Y, float Z, float InVerticalRotation);
		void SpawnFriendlyMinionAtPos(const class FString& DataAssetName, float X, float Y, float Z);
		void SpawnFriendlyMinion(const class FString& DataAssetName);
		void SpawnFriendlyHeroAtPosAndRotation(const class FString& DataAssetName, float X, float Y, float Z, float InVerticalRotation);
		void SpawnFriendlyHeroAtPos(const class FString& DataAssetName, float X, float Y, float Z);
		void SpawnFriendlyHero(const class FString& DataAssetName);
		void SpawnEnemyMinionAtPosAndRotation(const class FString& DataAssetName, float X, float Y, float Z, float InVerticalRotation);
		void SpawnEnemyMinionAtPos(const class FString& DataAssetName, float X, float Y, float Z);
		void SpawnEnemyMinion(const class FString& DataAssetName);
		void SpawnEnemyHeroAtPosAndRotation(const class FString& DataAssetName, float X, float Y, float Z, float InVerticalRotation, bool bWithBotController);
		void SpawnEnemyHeroAtPos(const class FString& DataAssetName, float X, float Y, float Z);
		void SpawnEnemyHero(const class FString& DataAssetName);
		void SpawnCreepMinionAtPosAndRotation(const class FString& DataAssetName, float X, float Y, float Z, float InVerticalRotation);
		void SpawnCreepMinionAtPos(const class FString& DataAssetName, float X, float Y, float Z);
		void SpawnCreepMinion(const class FString& DataAssetName);
		void SkipMatinee();
		void ShowMatchInfoText(const class FString& Text);
		void ShowBannerTestUI();
		void ShieldSelf(float ShieldAmount);
		void SetVisionManagerDebug(unsigned char DebugMode, unsigned char Filter, int32_t FilterIndex, int32_t SingleFilterType);
		void SetTeamNum(int32_t TeamIndex);
		void SetPlayerStat(const class FString& StatName, int32_t Amount);
		void SetMyAbilityLevels(int32_t NewLevel);
		void SetMouseSensitivityToDefault();
		void SetHeroStat(const class FString& HeroName, const class FString& StatName, int32_t Amount);
		void SetHero(const class FString& HeroName);
		void SetHealthPercent(float NewPercent);
		void SetFriendlyMinionWaveData(const class FString& DataAssetName);
		void SetEnemyMinionWaveData(const class FString& DataAssetName);
		void SetAllMinionWaveData(const class FString& DataAssetName);
		void SetAllAbilityLevels(int32_t NewLevel);
		void ResumeAI();
		void ResetSurrenderVoteCooldown(unsigned char TeamNum);
		void ResetCooldowns();
		void ResetCardShopToOneOfEveryCard();
		void ResetCardShopToFilter(const class FString& FilterStr);
		void ResetCards();
		void ReselectHero();
		void ReplenishHand();
		void RemoveRespawnTimeAll(int32_t State);
		void RemoveRespawnTime(int32_t State);
		void RemoveGameplayEffectLastApplied();
		void RemoveGameplayEffectFromSelf(const class FString& GameplayEffectName);
		void RemoveCosts(int32_t State);
		void RemoveCooldowns(int32_t State);
		void PrintPlayerHandData();
		void PrintAbilitySystemComponent();
		void PauseAI();
		void OrionDevMenu();
		void NextHero();
		void ModifyMaxMoveSpeed(float MoveAmount);
		void KnockupSelf(float Distance);
		void KnockbackSelf(float Distance);
		void KillMinionAI();
		void KillJungleAI();
		void KillAllNonPlayerPawns();
		void KillAI();
		void InvertMouse();
		void InterruptCurrentAbility();
		void HideVictoryScreen();
		void HideMatchInfoText();
		void HideHeroSelect();
		void HealSelf(float HealAmount);
		void God();
		void GiveXP(int32_t XP);
		void GiveTeamXP(int32_t TeamIndex, int32_t XP);
		void ForceWinMatch(unsigned char WinningTeamNum);
		void ForceVictoryScreen();
		void ForceTeamMaxLevel(int32_t TeamIndex);
		void ForceSpawnPrimeHelix();
		void ForcePlayerToMinStats();
		void ForcePlayerToMaxStats();
		void ForcePlayerMaxLevel();
		void ForceLossScreen();
		void ForceEndgame(int32_t TeamNumber);
		void ForceBotLane(int32_t LaneIndex);
		void ForceBotDifficulty(const class FString& DifficultyName);
		void ForceAllTeamsToMaxLevel();
		void ForceAllPlayersToMaxLevel();
		void ForceAISpawnerStartingLevelTo(int32_t Level);
		void FillWithBots(int32_t BotsToAddToEachTeam);
		void ExecuteOrionDevMenuHistory(int32_t idx);
		void EndSurrenderVoteTimer(unsigned char TeamNum);
		void EnableFixedTimeStep(int32_t AsIfItWasFPS);
		void DumpGameStats(const class FString& FilterName);
		void DrawDamageNumbers(bool bDrawNumbers);
		void DestroyAllNonPlayerPawns();
		void DamageSelf(float DamageAmount);
		void CoreUnlimitedHealth(int32_t State);
		void BadAss(int32_t State);
		void ApplyGameplayEffectToSelf(const class FString& GameplayEffectName, float Level);
		void AllowCardMenuAnywhere(int32_t Enable);
		void AI_AttackNow();
		void AddBotFriend(const class FString& DataAssetName);
		void AddBotEnemy(const class FString& DataAssetName);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionClientBotManager_MatchPerf
	 * Size -> 0x0090 (FullSize[0x0320] - InheritedSize[0x0290])
	 */
	class UOrionClientBotManager_MatchPerf : public UOrionClientBotManager_Game
	{
	public:
		unsigned char                                              UnknownData_J3AS[0x90];                                  // 0x0290(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionClientBotManager_SimpleSoloGame
	 * Size -> 0x0048 (FullSize[0x02D8] - InheritedSize[0x0290])
	 */
	class UOrionClientBotManager_SimpleSoloGame : public UOrionClientBotManager_Game
	{
	public:
		unsigned char                                              UnknownData_L28S[0x48];                                  // 0x0290(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionClientBotManager_Smoke
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UOrionClientBotManager_Smoke : public UOrionClientBotManager_Game
	{
	public:
		unsigned char                                              UnknownData_0VOS[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionClientBotManager_Social
	 * Size -> 0x0068 (FullSize[0x0138] - InheritedSize[0x00D0])
	 */
	class UOrionClientBotManager_Social : public UOrionClientBotManager_Base
	{
	public:
		unsigned char                                              UnknownData_D4DP[0x68];                                  // 0x00D0(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCmsManager
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UOrionCmsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_33SI[0xB8];                                  // 0x0028(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCooldown
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionCooldown : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDamage
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UOrionDamage : public UGameplayEffectExecutionCalculation
	{
	public:
		unsigned char                                              UnknownData_3DAR[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionExecute
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UOrionExecute : public UOrionDamage
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSuicide
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UOrionSuicide : public UGameplayEffectExecutionCalculation
	{
	public:
		unsigned char                                              UnknownData_S1KR[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDamageNumberManager
	 * Size -> 0x2028 (FullSize[0x23A8] - InheritedSize[0x0380])
	 */
	class AOrionDamageNumberManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_ZTHI[0x2028];                                // 0x0380(0x2028) MISSED OFFSET (PADDING)

	public:
		void GetDamageNumberStartLocation();
		void GetDamageNumberOffset();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDebugTeamMember
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class UOrionDebugTeamMember : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_YCY2[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDebugHeroSelect
	 * Size -> 0x0080 (FullSize[0x0368] - InheritedSize[0x02E8])
	 */
	class UOrionDebugHeroSelect : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_8Q4Z[0x80];                                  // 0x02E8(0x0080) MISSED OFFSET (PADDING)

	public:
		void HandleSkinSelected(bool bSelected);
		void HandleJoinTeamRedClicked();
		void HandleJoinTeamBlueClicked();
		void HandleHeroSelected(bool bSelected);
		void HandleForceStartClicked();
		void HandleFillWithBotsClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDecalLibrary
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionDecalLibrary : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_6HJ2[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDecalManager
	 * Size -> 0x0048 (FullSize[0x03C8] - InheritedSize[0x0380])
	 */
	class AOrionDecalManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_GXZL[0x48];                                  // 0x0380(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDigitalFlameWidget
	 * Size -> 0x0370 (FullSize[0x0488] - InheritedSize[0x0118])
	 */
	class UOrionDigitalFlameWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_B033[0x370];                                 // 0x0118(0x0370) MISSED OFFSET (PADDING)

	public:
		void InitInHUD();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDirectionalAlerts
	 * Size -> 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
	 */
	class UOrionDirectionalAlerts : public UWidget
	{
	public:
		unsigned char                                              UnknownData_0NV1[0x18];                                  // 0x0118(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDamageOverlay
	 * Size -> 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
	 */
	class UOrionDamageOverlay : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_O2FQ[0x38];                                  // 0x02A8(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnDamageUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftTurnPlayerIcon
	 * Size -> 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
	 */
	class UOrionDraftTurnPlayerIcon : public UUserWidget
	{
	public:
		void OnPlayerPickStatusChanged(unsigned char PickStatus);
		void InitPlayerIcon(bool bIsFriendly);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftTurnIndicator
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UOrionDraftTurnIndicator : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_EW6W[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftTimer
	 * Size -> 0x00C8 (FullSize[0x0370] - InheritedSize[0x02A8])
	 */
	class UOrionDraftTimer : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_8MLC[0xC8];                                  // 0x02A8(0x00C8) MISSED OFFSET (PADDING)

	public:
		void OnTurnStarted(unsigned char PickingMemberType);
		void OnTurnComplete(unsigned char FinishedMemberType);
		void OnTimerUpdated(bool bIsPlayerTurn, float TimeLeftRatio);
		void OnDraftStarted(unsigned char FirstPickerType);
		void OnDraftComplete(bool bSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEarnedCXP
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionEarnedCXP : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEarnedXP
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionEarnedXP : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTextStyle
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UOrionTextStyle : public UObject
	{
	public:
		unsigned char                                              Font[0xC0];                                              // 0x0000(0x00C0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTextStyle.Font
		unsigned char                                              UnknownData_LWAE[0x120];                                 // 0x00C0(0x0120) MISSED OFFSET (PADDING)

	public:
		void GetShadowOffset(unsigned char Size);
		void GetShadowColor(unsigned char ColorType);
		void GetMargin(unsigned char Size);
		float GetLineHeightPercentage(unsigned char Size);
		void GetFont(unsigned char Size);
		void GetColor(unsigned char ColorType);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTextBlock
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class UOrionTextBlock : public UTextBlock
	{
	public:
		unsigned char                                              UnknownData_NS86[0x60];                                  // 0x0220(0x0060) MISSED OFFSET (PADDING)

	public:
		void SetWrapTextWidth(int32_t InWrapTextAt);
		void SetUseDropShadow(bool bShouldUseDropShadow);
		void SetStyle();
		void SetSize(unsigned char Size);
		void SetProperties(unsigned char Size, unsigned char Color, int32_t InWrapTextAt, bool bShouldUseDropShadow);
		void SetColorType(unsigned char Color);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEditableTextBox
	 * Size -> 0x0030 (FullSize[0x0AB0] - InheritedSize[0x0A80])
	 */
	class UOrionEditableTextBox : public UEditableTextBox
	{
	public:
		unsigned char                                              UnknownData_A0U5[0x30];                                  // 0x0A80(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEnergyMissing
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionEnergyMissing : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEnergyMissingPCT
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionEnergyMissingPCT : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEnergyPCT
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionEnergyPCT : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEngine
	 * Size -> 0x0020 (FullSize[0x0D00] - InheritedSize[0x0CE0])
	 */
	class UOrionEngine : public UGameEngine
	{
	public:
		unsigned char                                              UnknownData_D57L[0x20];                                  // 0x0CE0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionEQSTestingPawn
	 * Size -> 0x0040 (FullSize[0x0840] - InheritedSize[0x0800])
	 */
	class AOrionEQSTestingPawn : public AEQSTestingPawn
	{
	public:
		unsigned char                                              UnknownData_RMJ5[0x40];                                  // 0x0800(0x0040) MISSED OFFSET (PADDING)

	public:
		unsigned char GetTeamNum();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUIStateWidget
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UOrionUIStateWidget : public UOrionUserWidgetBase
	{
	public:
		void UpdateCursorState();
		void UpdateButtonLegend();
		void OnExitState(unsigned char NextState);
		void OnEnterState(unsigned char PreviousState);
		void OnDestroy();
		bool IsReadyForNextState();
		void DebugDumpState();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBaseHUDWidget
	 * Size -> 0x0050 (FullSize[0x02F8] - InheritedSize[0x02A8])
	 */
	class UOrionBaseHUDWidget : public UOrionUIStateWidget
	{
	public:
		unsigned char                                              UnknownData_WD54[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		void EnableToolTips();
		void DisableToolTips();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHUDWidget
	 * Size -> 0x0178 (FullSize[0x0470] - InheritedSize[0x02F8])
	 */
	class UOrionHUDWidget : public UOrionBaseHUDWidget
	{
	public:
		unsigned char                                              UnknownData_Z94J[0x178];                                 // 0x02F8(0x0178) MISSED OFFSET (PADDING)

	public:
		void SetHUDWidget(unsigned char WidgetType);
		void OnShowKillCam_BlueprintEvent();
		void OnMatchEnd_BlueprintEvent();
		void OnHideKillCam_BlueprintEvent();
		void OnFadeHUDOut_BlueprintEvent();
		void OnFadeHUDIn_BlueprintEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionFloatingText
	 * Size -> 0x0068 (FullSize[0x0180] - InheritedSize[0x0118])
	 */
	class UOrionFloatingText : public UWidget
	{
	public:
		unsigned char                                              UnknownData_GVDC[0x68];                                  // 0x0118(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionFriendItem
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOrionFriendItem : public UObject
	{
	public:
		unsigned char                                              UnknownData_RBFE[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		void GetUniqueNetId();
		void GetDisplayName(class FText* FriendName);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameEventManager
	 * Size -> 0x0030 (FullSize[0x03B0] - InheritedSize[0x0380])
	 */
	class AOrionGameEventManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_MLGJ[0x30];                                  // 0x0380(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionViewModel_Base
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOrionViewModel_Base : public UObject
	{
	public:
		unsigned char                                              UnknownData_83UF[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void BlueprintTick(float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionViewModel_HUD
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UOrionViewModel_HUD : public UOrionViewModel_Base
	{
	public:
		unsigned char                                              UnknownData_MHEH[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void ToggleNeedsMouse();
		void SetNeedsMouse(bool bNewNeedsMouse);
		void SetEscapeMenuState(bool bOpen);
		void QuitToMainMenu();
		bool IsInTravelMode();
		void GetUIToggles();
		void GetTowerTargetingInfo();
		void GetPlayerPortrait();
		class FText GetPlayerName();
		void GetPlayerLocation();
		int32_t GetPlayerLevel();
		void GetPlayerCameraLocation();
		void GetPlayerCameraDirection();
		unsigned char GetMyTeam(bool AllowSpectatorTeam);
		float GetMiniMapRotation();
		void GetMiniMapBackground();
		bool GetLevelHasMiniMapVolume();
		int32_t GetKills();
		class FText GetHeroName();
		unsigned char GetEnemyTeam(bool AllowSpectatorTeam);
		int32_t GetDeaths();
		float GetDamageIndicatorRotation();
		void GetCoreInfo(unsigned char TeamNum);
		void GetCardAbilityData(unsigned char InputID);
		int32_t GetAssists();
		void CreateMessageWidget();
		void CreateLogMessageWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueManager
	 * Size -> 0x0010 (FullSize[0x01A0] - InheritedSize[0x0190])
	 */
	class UOrionGameplayCueManager : public UGameplayCueManager
	{
	public:
		unsigned char                                              UnknownData_0RNC[0x10];                                  // 0x0190(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_Actor
	 * Size -> 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
	 */
	class AOrionGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_YKXQ[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetShadowplaneVisibility(unsigned char ShadowPlaneVisibility);
		bool OnExitShadowplane();
		bool OnEnterShadowplane(bool bVisibleToMe);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_BeamAttachedSoundAndFX
	 * Size -> 0x0048 (FullSize[0x0428] - InheritedSize[0x03E0])
	 */
	class AOrionGameplayCueNotify_BeamAttachedSoundAndFX : public AOrionGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_G9R1[0x48];                                  // 0x03E0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_Burst_Latent
	 * Size -> 0x01A0 (FullSize[0x0580] - InheritedSize[0x03E0])
	 */
	class AOrionGameplayCueNotify_Burst_Latent : public AOrionGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_CNQM[0x1A0];                                 // 0x03E0(0x01A0) MISSED OFFSET (PADDING)

	public:
		void K2_OnExecute();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_Looping
	 * Size -> 0x0300 (FullSize[0x06E0] - InheritedSize[0x03E0])
	 */
	class AOrionGameplayCueNotify_Looping : public AOrionGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_0SO6[0x300];                                 // 0x03E0(0x0300) MISSED OFFSET (PADDING)

	public:
		void ReceiveTick(float DeltaSeconds);
		void K2_WhileActive();
		void K2_OnRemove();
		void K2_OnExecute();
		void K2_OnActive();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_StandardAttachedActor
	 * Size -> 0x0020 (FullSize[0x0400] - InheritedSize[0x03E0])
	 */
	class AOrionGameplayCueNotify_StandardAttachedActor : public AOrionGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_KH3Q[0x20];                                  // 0x03E0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_StandardAttachedSoundAndFX
	 * Size -> 0x0038 (FullSize[0x0418] - InheritedSize[0x03E0])
	 */
	class AOrionGameplayCueNotify_StandardAttachedSoundAndFX : public AOrionGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_XK92[0x38];                                  // 0x03E0(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_StandardAttachedMultiSoundAndFX
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class AOrionGameplayCueNotify_StandardAttachedMultiSoundAndFX : public AOrionGameplayCueNotify_StandardAttachedSoundAndFX
	{
	public:
		unsigned char                                              UnknownData_D5G8[0x20];                                  // 0x0418(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_Static
	 * Size -> 0xFFFFFFC0 (FullSize[0x0000] - InheritedSize[0x0040])
	 */
	class UOrionGameplayCueNotify_Static : public UGameplayCueNotify_Static
	{
	public:
		unsigned char                                              UnknownData_YM0L[0xFFFFFFC0];                            // 0x0040(0xFFFFFFC0) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayCueNotify_Burst
	 * Size -> 0x0498
	 */
	class UOrionGameplayCueNotify_Burst : public UOrionGameplayCueNotify_Static
	{
	public:
		unsigned char                                              BurstEffectData_Default[0xE8];                           // 0x0000(0x00E8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionGameplayCueNotify_Burst.BurstEffectData_Default
		unsigned char                                              BurstEffectData_Stone[0xE8];                             // 0x0000(0x00E8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionGameplayCueNotify_Burst.BurstEffectData_Stone
		unsigned char                                              BurstEffectData_Grass[0xE8];                             // 0x0000(0x00E8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionGameplayCueNotify_Burst.BurstEffectData_Grass
		unsigned char                                              BurstEffectData_ShallowWater[0xE8];                      // 0x0000(0x00E8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionGameplayCueNotify_Burst.BurstEffectData_ShallowWater
		unsigned char                                              UnknownData_H0S1[0x3B0];                                 // 0x00E8(0x03B0) MISSED OFFSET (PADDING)

	public:
		void OnBurst();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayVolumeComponent
	 * Size -> 0x01D0 (FullSize[0x0440] - InheritedSize[0x0270])
	 */
	class UOrionGameplayVolumeComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_9R8T[0x1D0];                                 // 0x0270(0x01D0) MISSED OFFSET (PADDING)

	public:
		void OnRep_NumGameplayEffectsApplied();
		void OnEndOverlapCallback(int32_t OtherBodyIndex);
		void OnBeginOverlapCallback(int32_t OtherBodyIndex, bool bFromSweep);
		bool IsValidTarget();
		void HandleMatchStarted();
		int32_t GetNumAppliedEffectsLeftToApply();
		bool CanStillApplyEffectsToTargets();
		void ApplyEffects();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionViewModelInterface_Scoreboard
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionViewModelInterface_Scoreboard : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameResults
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UOrionGameResults : public UObject
	{
	public:
		unsigned char                                              ScoreboardInfo[0x88];                                    // 0x0000(0x0088) UNKNOWN PROPERTY: StructProperty OrionGame.OrionGameResults.ScoreboardInfo
		unsigned char                                              UnknownData_UMDC[0x40];                                  // 0x0088(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameState_DraftLobby
	 * Size -> 0x0410 (FullSize[0x09C0] - InheritedSize[0x05B0])
	 */
	class AOrionGameState_DraftLobby : public AOrionGameState_Base
	{
	public:
		unsigned char                                              UnknownData_EUVE[0x410];                                 // 0x05B0(0x0410) MISSED OFFSET (PADDING)

	public:
		void OnRep_Phases();
		void OnRep_LockedInHeroes();
		void OnRep_CurrentPhaseState();
		void OnRep_CurrentPhaseIdx();
		void OnRep_AbortReason();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameState_Main
	 * Size -> 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
	 */
	class AOrionGameState_Main : public AOrionGameState_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameState_PreGame
	 * Size -> 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
	 */
	class AOrionGameState_PreGame : public AOrionGameState_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameTipsData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionGameTipsData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_LVWO[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameViewportClient
	 * Size -> 0x0060 (FullSize[0x04B0] - InheritedSize[0x0450])
	 */
	class UOrionGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_897V[0x60];                                  // 0x0450(0x0060) MISSED OFFSET (PADDING)

	public:
		void UpdateMenusOnFocusLost();
		void OnAnalogCursorEnabledToggle(bool bIsEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGestureData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionGestureData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_VXCO[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void GetMatchingGestureEntry(unsigned char Direction1, unsigned char Direction2);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHealing
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionHealing : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHealthEnergyWidget
	 * Size -> 0x0070 (FullSize[0x0188] - InheritedSize[0x0118])
	 */
	class UOrionHealthEnergyWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_V83B[0x70];                                  // 0x0118(0x0070) MISSED OFFSET (PADDING)

	public:
		void InitInHUD();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHealthMissing
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionHealthMissing : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHealthMissingPCT
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionHealthMissingPCT : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHealthPCT
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionHealthPCT : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroDataCollection
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOrionHeroDataCollection : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_8908[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroDisplayData
	 * Size -> 0x0480 (FullSize[0x04A8] - InheritedSize[0x0028])
	 */
	class UOrionHeroDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              Roles[0x1C0];                                            // 0x0000(0x01C0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroDisplayData.Roles
		unsigned char                                              Positions[0x150];                                        // 0x0000(0x0150) UNKNOWN PROPERTY: StructProperty OrionGame.OrionHeroDisplayData.Positions
		unsigned char                                              UnknownData_Z52B[0x358];                                 // 0x0150(0x0358) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroDisplayLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionHeroDisplayLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetHeroLockedMessage(unsigned char Tier, class FText* Message);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroStatBar
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class UOrionHeroStatBar : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_KD8Q[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHotfixManager
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class UOrionHotfixManager : public UOnlineHotfixManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHUDDatasheet
	 * Size -> 0x0000 (FullSize[0x0430] - InheritedSize[0x0430])
	 */
	class UOrionHUDDatasheet : public USlateDataSheet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionInputDisplayData
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class UOrionInputDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              GamepadActionEquivalencesMap[0x50];                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty OrionGame.OrionInputDisplayData.GamepadActionEquivalencesMap
		unsigned char                                              KeyboardKeyBackground[0x90];                             // 0x0000(0x0090) UNKNOWN PROPERTY: StructProperty OrionGame.OrionInputDisplayData.KeyboardKeyBackground
		unsigned char                                              UnknownData_22WX[0x190];                                 // 0x0090(0x0190) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionInputKeySelector
	 * Size -> 0x02B8 (FullSize[0x04A8] - InheritedSize[0x01F0])
	 */
	class UOrionInputKeySelector : public UInputKeySelector
	{
	public:
		unsigned char                                              UnknownData_BUED[0x2B8];                                 // 0x01F0(0x02B8) MISSED OFFSET (PADDING)

	public:
		void SetTextColorType(unsigned char InColor);
		void SetStyleSize(unsigned char InStyleSize);
		void SetOrionButtonStyle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionInputVisualizer
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UOrionInputVisualizer : public UWidget
	{
	public:
		unsigned char                                              UnknownData_9NZB[0x40];                                  // 0x0118(0x0040) MISSED OFFSET (PADDING)

	public:
		void ShowSpecificKey();
		void ShowInputAction(const class FName& InActionName);
		void ShowAbilityBinding(unsigned char AbilityBinding);
		void SetSize(unsigned char InSize);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionInterrupt
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionInterrupt : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionKillcamPlayback
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UOrionKillcamPlayback : public UObject
	{
	public:
		unsigned char                                              UnknownData_FRU0[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionKismetLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionKismetLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopForceFeedbackOnActor(const class FName& Tag);
		void STATIC_StopCameraShakeOnActor(bool bImmediately);
		void STATIC_StopCameraAnimOnActor();
		void STATIC_SplitTargetData();
		void STATIC_SplitGameplayEffectSpecBetweenTargetData();
		void STATIC_SplitGameplayEffectSpecBetweenActors();
		void STATIC_SpawnSoundTeamAdjustedAtLocation(bool bStopWhenAttachedToDestroyed);
		void STATIC_SpawnSoundTeamAdjusted(bool bForceCreateAudioComponent, bool bStopWhenDestroyed);
		void STATIC_SpawnSoundOnActorAtLocation(bool bStopWhenAttachedToDestroyed);
		void STATIC_SpawnSoundOnActor(bool Attached, bool bStopWhenAttachedToDestroyed);
		void STATIC_SpawnCoins(int32_t DesiredCoinsToSpawn, unsigned char OwnerTeam, unsigned char LaunchSpeed, int32_t MinCoinsToSpawnThreshold);
		float STATIC_SignedAngleBetweenInRadians();
		float STATIC_SignedAngleBetweenInDegrees();
		bool STATIC_ShouldShowRenderingAndResolutionSettings();
		void STATIC_SetFilterStackCountForGameplayEffect(float InCount);
		void STATIC_SetFilterSetByCallerMagnitude(const class FName& SetByCallerName, float Magnitude);
		void STATIC_SetFilterGameplayEffectLevel(float GameplayEffectLevel);
		void STATIC_SetFilterContextSourceObject();
		void STATIC_SetFilterContextOrigin();
		void STATIC_SetFilterContextInstigator();
		void STATIC_SetFilterContextHitResult();
		void STATIC_SetFilterContextActors();
		void STATIC_SetFilterContextAbility();
		void STATIC_RotateVectorRadians(float Radians);
		void STATIC_RotateVectorDegrees(float Radians);
		void STATIC_PlayForceFeedbackOnActor(bool bLooping, const class FName& Tag);
		void STATIC_PlayCameraShakeOnActor(float Scale, unsigned char PlaySpace);
		void STATIC_PlayCameraAnimOnActor(float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, unsigned char Space);
		bool STATIC_OnSameTeam();
		bool STATIC_OnSameFormationChar();
		bool STATIC_OnSameFormation();
		bool STATIC_NewVisionManagerEnabled();
		void STATIC_MakeOrionTargetData();
		void STATIC_MakeOrionFilterHandle(unsigned char FilterTeam);
		void STATIC_LaunchCharacterToPointFromTargetData(float LaunchVelocityXY, bool bLockAirControl);
		void STATIC_LaunchCharacterToPoint(float LaunchVelocityXY, bool bLockAirControl);
		void STATIC_LaunchCharacterInDirectionFromTargetData(float LaunchVelocity, bool bLockAirControl);
		void STATIC_LaunchCharacterInDirection(float LaunchVelocity, bool bLockAirControl);
		bool STATIC_IsVisibleToEnemy();
		bool STATIC_IsSprintEnabled();
		bool STATIC_IsRunningOnLowEndClient();
		bool STATIC_IsPhaseShifted();
		bool STATIC_IsOnLocalTeam();
		bool STATIC_IsLocallyControlledPlayer();
		bool STATIC_IsInShadowPlane();
		bool STATIC_IsEngineDoingAsyncLoading();
		bool STATIC_IsDead();
		bool STATIC_HasTrueSight();
		void STATIC_GetWorldUpVector();
		void STATIC_GetWorldRightVector();
		void STATIC_GetWorldLeftVector();
		void STATIC_GetWorldForwardVector();
		void STATIC_GetWorldDownVector();
		void STATIC_GetWorldBackwardVector();
		unsigned char STATIC_GetTravelModeMode();
		void STATIC_GetTeamColorFromMPCWithTeamNum(unsigned char TargetTeamNum);
		void STATIC_GetTeamColorFromMPC();
		class FString STATIC_GetTagString();
		class FString STATIC_GetTagContainerString();
		void STATIC_GetSpawnLocationForControllerAtStartPoint();
		unsigned char STATIC_GetShadowPlaneVisibilityRelativeToLocalPlayer();
		float STATIC_GetRigPlacementRange();
		void STATIC_GetPlayerControllerFromActor();
		void STATIC_GetOrionReplaySpectator();
		void STATIC_GetLocalPlayerController_Game();
		void STATIC_GetLocalPlayerController_Base();
		void STATIC_GetHeroSecondaryColor();
		void STATIC_GetHeroPrimaryColor();
		float STATIC_GetHealthPCT();
		float STATIC_GetHealth();
		void STATIC_GetGlobalExponentialHeightFog();
		void STATIC_GetGameplayEffectSpecsFromFilter(float InLevel);
		void STATIC_GetFriendlyColorFromMPC();
		void STATIC_GetEnemyColorFromMPC();
		bool STATIC_GetEffectsToApplyToTargetFromFilters();
		unsigned char STATIC_GetActorTeam();
		void STATIC_GetActorTargetPosition();
		float STATIC_GetActorRadius();
		void STATIC_GetActorBottom();
		void STATIC_GetActorAimPosition();
		void STATIC_GenerateGameplayEffectSpecsForFilter(float InLevel);
		void STATIC_GameplayCue_SpawnEmitter(bool Attached);
		void STATIC_GameplayCue_RemoveDecal(const class FName& DecalName);
		void STATIC_GameplayCue_PlaySoundTeamAdjustedForTarget(bool Attached, bool bStopWhenAttachedToDestroyed);
		void STATIC_GameplayCue_PlaySoundTeamAdjustedForSource(bool Attached, bool bStopWhenAttachedToDestroyed);
		void STATIC_GameplayCue_ApplyDecalForDuration(const class FName& DecalName, float Duration);
		void STATIC_GameplayCue_ApplyDecal(const class FName& DecalName);
		void STATIC_FindPlayerStart();
		bool STATIC_FilterActor();
		bool STATIC_DoesTeamHaveVisionOnTarget(unsigned char Team);
		bool STATIC_DoesActorHaveVisionOnTarget();
		float STATIC_DistanceSquaredBetweenSegments();
		bool STATIC_CompareTeams(unsigned char TeamA, unsigned char TeamB, unsigned char CompareType);
		bool STATIC_CompareActorTeams(unsigned char CompareType);
		void STATIC_ClosestPointsOnSegmentToSegment();
		void STATIC_ClosestPointOnSegmentToPlane();
		void STATIC_ClosestPointOnSegmentToLine();
		void STATIC_ClosestPointOnLineToLine();
		void STATIC_ChangeTeamController(unsigned char NewTeam);
		void STATIC_ChangeTeamChar(unsigned char NewTeam);
		bool STATIC_CanActorSeeTargetInShadowPlane();
		void STATIC_ApplyGameplayEffectsToTargetData();
		bool STATIC_ApplyGameplayEffectsToTarget();
		void STATIC_ApplyAbilityTagsToSpecFilterContainer();
		void STATIC_AnnouncerSayDialog(const class FString& Ident);
		float STATIC_AngleBetweenInRadians();
		float STATIC_AngleBetweenInDegrees();
		bool STATIC_AbilityTeleportActor(bool IsGroundLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionKnockback
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionKnockback : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionKnockup
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionKnockup : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLoadGuard
	 * Size -> 0x00C0 (FullSize[0x01F0] - InheritedSize[0x0130])
	 */
	class UOrionLoadGuard : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_JGNE[0xC0];                                  // 0x0130(0x00C0) MISSED OFFSET (PADDING)

	public:
		void SetLoadingText(const class FText& InLoadingText);
		void SetIsLoading(bool bInIsLoading);
		void OnAssetLoaded__DelegateSignature();
		bool IsLoading();
		void BP_GuardAndLoadAsset(const class FScriptDelegate& OnAssetLoaded);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLazyImage
	 * Size -> 0x0040 (FullSize[0x0240] - InheritedSize[0x0200])
	 */
	class UOrionLazyImage : public UImage
	{
	public:
		unsigned char                                              UnknownData_WYYS[0x40];                                  // 0x0200(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetBrushFromLazyTexture(bool bMatchSize);
		void SetBrushFromLazyMaterial();
		void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);
		void SetBrushFromItemDefinition(bool bMatchTextureSize);
		bool IsLoading();
		void ForwardLoadingStateChanged(bool bIsLoading);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLineDrawingWidget
	 * Size -> 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
	 */
	class UOrionLineDrawingWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_NJ9N[0x38];                                  // 0x0238(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGenericMarkingMenuNodeWidget
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UOrionGenericMarkingMenuNodeWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_YG1D[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnSelectNode();
		void UnHighlightNode();
		void ShowNode(bool bUsingGamepad);
		void SelectNode();
		void ResetNode();
		void HighlightNode();
		void HideNode();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMarkingMenuLayerWidget
	 * Size -> 0x0068 (FullSize[0x0310] - InheritedSize[0x02A8])
	 */
	class UOrionMarkingMenuLayerWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_VYB2[0x68];                                  // 0x02A8(0x0068) MISSED OFFSET (PADDING)

	public:
		void ShowWidget(bool bUsingGamepad);
		void ResetWidget();
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGenericMarkingMenuWidget
	 * Size -> 0x00B0 (FullSize[0x0358] - InheritedSize[0x02A8])
	 */
	class UOrionGenericMarkingMenuWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_GQUE[0xB0];                                  // 0x02A8(0x00B0) MISSED OFFSET (PADDING)

	public:
		void UpButtonPressed();
		void ToggleButtonPressed();
		void RightButtonPressed();
		void OnFaceButtonPressed(unsigned char Direction);
		void NativeOnOpen();
		void NativeOnClose();
		void LeftButtonPressed();
		void DownButtonPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionListItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionListItem : public UInterface
	{
	public:
		void ToggleExpansion();
		void SetSelected(bool bSelected);
		void SetIndexInList(int32_t InIndexInList);
		void RegisterOnClicked(const class FScriptDelegate& Callback);
		void Private_OnExpanderArrowShiftClicked();
		bool IsItemExpanded();
		unsigned char GetSelectionMode();
		int32_t GetIndentLevel();
		int32_t DoesItemHaveChildren();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionObjectListItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionObjectListItem : public UOrionListItem
	{
	public:
		void SetData();
		void Reset();
		void GetData();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionListView
	 * Size -> 0x0188 (FullSize[0x02A0] - InheritedSize[0x0118])
	 */
	class UOrionListView : public UWidget
	{
	public:
		unsigned char                                              UnknownData_7CXP[0x188];                                 // 0x0118(0x0188) MISSED OFFSET (PADDING)

	public:
		bool SetSelectedItem(bool bWaitIfPendingRefresh);
		bool SetSelectedIndex(int32_t Index);
		void SetItemSelection(bool bSelected);
		void SetItemHeight(float NewHeight);
		void SetDesiredItemPadding();
		void SetDataProvider();
		void ScrollIntoView();
		bool IsRefreshPending();
		bool IsItemVisible();
		bool GetSelectedItems();
		void GetSelectedItem();
		int32_t GetNumItemsSelected();
		void GetItemAt(int32_t Index);
		int32_t GetIndexForItem();
		void DynamicHandleItemClicked();
		void ClearSelection();
		void Clear();
		void AddItem();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTileView
	 * Size -> 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
	 */
	class UOrionTileView : public UOrionListView
	{
	public:
		unsigned char                                              UnknownData_NU52[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetItemWidth(float NewWidth);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLoadingActor
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class AOrionLoadingActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_BDE3[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSetSlotIndex(int32_t SlotIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMatchDataLoader
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UOrionMatchDataLoader : public UObject
	{
	public:
		unsigned char                                              HeroLoadTimes[0x50];                                     // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty OrionGame.OrionMatchDataLoader.HeroLoadTimes
		unsigned char                                              UnknownData_BSML[0xE0];                                  // 0x0050(0x00E0) MISSED OFFSET (PADDING)

	public:
		void TimerCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMatchHeartbeatManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UOrionMatchHeartbeatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_XM39[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMatchmakingDisplayData
	 * Size -> 0x1128 (FullSize[0x1150] - InheritedSize[0x0028])
	 */
	class UOrionMatchmakingDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              HeroAvailabilities[0xE0];                                // 0x0000(0x00E0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMatchmakingDisplayData.HeroAvailabilities
		unsigned char                                              QuickChatTopics[0xAB0];                                  // 0x0000(0x0AB0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMatchmakingDisplayData.QuickChatTopics
		unsigned char                                              TeamFoundConfirmation[0xB0];                             // 0x0000(0x00B0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMatchmakingDisplayData.TeamFoundConfirmation
		unsigned char                                              SoloSearchingNotification[0x1A0];                        // 0x0000(0x01A0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionMatchmakingDisplayData.SoloSearchingNotification
		unsigned char                                              UnknownData_L48H[0xFB0];                                 // 0x01A0(0x0FB0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMatchmakingDisplayLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionMatchmakingDisplayLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetTeamColor(unsigned char TeamMemberType);
		void STATIC_GetHeroAvailabilityText(unsigned char Availability, class FText* OutText);
		void STATIC_GetBanReasonText(unsigned char BanReason, class FText* OutText);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMatchmakingSearchPass
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class UOrionMatchmakingSearchPass : public UObject
	{
	public:
		unsigned char                                              UnknownData_GBLQ[0x1A8];                                 // 0x0028(0x01A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMcpClashMobItemDefinition
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class UOrionMcpClashMobItemDefinition : public UOrionMcpItemDefinition
	{
	public:
		unsigned char                                              UnknownData_45Z2[0x80];                                  // 0x00B8(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionObjectiveData
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UOrionObjectiveData : public UOrionMcpItemDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMcpUIUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionMcpUIUtils : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsItemNew();
		bool STATIC_ClearNewItem();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMcpUtils
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOrionMcpUtils : public UObject
	{
	public:
		unsigned char                                              UnknownData_AH2W[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMenuSlot
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UOrionMenuSlot : public UOverlaySlot
	{
	public:
		unsigned char                                              UnknownData_SHJ2[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSlotType(unsigned char NewSlotType);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMenuManagerWidget
	 * Size -> 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
	 */
	class UOrionMenuManagerWidget : public UOverlay
	{
	public:
		unsigned char                                              UnknownData_AEZE[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetLocalPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMeshWidget
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UOrionMeshWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_4GVG[0x40];                                  // 0x0118(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetMeshVerticalAlignment(unsigned char InVerticalAlignment);
		void SetMeshScale(float InScale);
		void SetMeshMargin();
		void SetMeshHorizontalAlignment(unsigned char InHorizontalAlignment);
		void SetDesiredSize();
		void GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMiniMapVolume
	 * Size -> 0x0020 (FullSize[0x03D8] - InheritedSize[0x03B8])
	 */
	class AOrionMiniMapVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_S2HX[0x20];                                  // 0x03B8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavArea_TowerInactive
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionNavArea_TowerInactive : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavArea_TowerRed
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionNavArea_TowerRed : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavArea_TowerBlue
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionNavArea_TowerBlue : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFilter_TeamRed
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UOrionNavFilter_TeamRed : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFilter_TeamBlue
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UOrionNavFilter_TeamBlue : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFilter_ExcludeRed
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UOrionNavFilter_ExcludeRed : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFilter_ExcludeBlue
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UOrionNavFilter_ExcludeBlue : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFilter_ActiveTowerNoEntry
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UOrionNavFilter_ActiveTowerNoEntry : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFieldRenderingComponent
	 * Size -> 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
	 */
	class UOrionNavFieldRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavFieldVolume
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class AOrionNavFieldVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_EDWV[0x8];                                   // 0x03B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavigationGraph
	 * Size -> 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
	 */
	class AOrionNavigationGraph : public AAbstractNavData
	{
	public:
		unsigned char                                              UnknownData_89HO[0x10];                                  // 0x0520(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavSystem
	 * Size -> 0x0060 (FullSize[0x04C0] - InheritedSize[0x0460])
	 */
	class UOrionNavSystem : public UNavigationSystem
	{
	public:
		unsigned char                                              UnknownData_M75M[0x60];                                  // 0x0460(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNavTowerComponent
	 * Size -> 0x0090 (FullSize[0x0188] - InheritedSize[0x00F8])
	 */
	class UOrionNavTowerComponent : public UNavRelevantComponent
	{
	public:
		unsigned char                                              UnknownData_S2PF[0x90];                                  // 0x00F8(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnNavDataGenerationFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionNotificationList
	 * Size -> 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
	 */
	class UOrionNotificationList : public UWidget
	{
	public:
		unsigned char                                              UnknownData_3UJV[0x20];                                  // 0x0118(0x0020) MISSED OFFSET (PADDING)

	public:
		void PushNotification();
		void PopNotification();
		int32_t NumNotifications();
		void FindUserWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionParty
	 * Size -> 0x0090 (FullSize[0x0500] - InheritedSize[0x0470])
	 */
	class UOrionParty : public UParty
	{
	public:
		unsigned char                                              UnknownData_86RF[0x90];                                  // 0x0470(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPartyBeaconClient
	 * Size -> 0x0150 (FullSize[0x0690] - InheritedSize[0x0540])
	 */
	class AOrionPartyBeaconClient : public APartyBeaconClient
	{
	public:
		unsigned char                                              UnknownData_B3DL[0x150];                                 // 0x0540(0x0150) MISSED OFFSET (PADDING)

	public:
		void ServerSetTeamInfoRequest(bool bPlayerTeam);
		void ServerSetAcceptedMatch(unsigned char AcceptState);
		void ServerConfigureMatchReservationRequest(const class FString& InSessionId);
		void ClientSetTeamInfoResponse(unsigned char Result);
		void ClientSendLobbyStateChanged(unsigned char NewState);
		void ClientSendAcceptMatchPlayersUpdate();
		void ClientAllTeamsReady();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPartyBeaconHost
	 * Size -> 0x0100 (FullSize[0x0600] - InheritedSize[0x0500])
	 */
	class AOrionPartyBeaconHost : public APartyBeaconHost
	{
	public:
		unsigned char                                              UnknownData_CYSF[0x100];                                 // 0x0500(0x0100) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTeamBuilderParty
	 * Size -> 0x0690 (FullSize[0x0C80] - InheritedSize[0x05F0])
	 */
	class UOrionTeamBuilderParty : public UOrionPartyGameState
	{
	public:
		unsigned char                                              UnknownData_DI0C[0x690];                                 // 0x05F0(0x0690) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPartyMemberState
	 * Size -> 0x0098 (FullSize[0x0110] - InheritedSize[0x0078])
	 */
	class UOrionPartyMemberState : public UPartyMemberState
	{
	public:
		unsigned char                                              UnknownData_JQ6J[0x98];                                  // 0x0078(0x0098) MISSED OFFSET (PADDING)

	public:
		void OnMemberUpdated__DelegateSignature();
		bool IsDirty(unsigned char Flag);
		bool IsAfK();
		float GetLevelProgress();
		int32_t GetIsConsole();
		int32_t GetAccountLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPersistentPartyMember
	 * Size -> 0x0170 (FullSize[0x0280] - InheritedSize[0x0110])
	 */
	class UOrionPersistentPartyMember : public UOrionPartyMemberState
	{
	public:
		unsigned char                                              UnknownData_4H6S[0x170];                                 // 0x0110(0x0170) MISSED OFFSET (PADDING)

	public:
		void SetReady(bool bInReady);
		void SetLoaded(bool InLoaded);
		void SetHero();
		bool IsReady();
		bool IsLoaded();
		bool IsDirty(unsigned char Flag);
		bool HasLockedInHero();
		unsigned char GetLocation();
		class FString GetHero();
		unsigned char GetCurrentBanReason();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTeamBuilderPartyMember
	 * Size -> 0x00B0 (FullSize[0x01C0] - InheritedSize[0x0110])
	 */
	class UOrionTeamBuilderPartyMember : public UOrionPartyMemberState
	{
	public:
		unsigned char                                              UnknownData_XKCQ[0xB0];                                  // 0x0110(0x00B0) MISSED OFFSET (PADDING)

	public:
		void SetRole(unsigned char Role);
		void SetReady(bool InReady);
		void SetPosition(unsigned char Position);
		void SetPlatform(unsigned char InPlatform);
		void SetHeroName(const class FString& HeroName);
		void SetDeck(const class FString& DeckId);
		bool IsReady();
		bool IsDirty(unsigned char Flag);
		int32_t GetSlotIdx();
		unsigned char GetRole();
		unsigned char GetPosition();
		unsigned char GetPlatform();
		class FString GetHeroName();
		class FString GetDeck();
		void GetCosmeticChoices();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPathFollowingComponent
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class UOrionPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_WKE6[0x20];                                  // 0x0360(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlacementActor
	 * Size -> 0x0030 (FullSize[0x03B0] - InheritedSize[0x0380])
	 */
	class AOrionPlacementActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_L67D[0x30];                                  // 0x0380(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnLoadingChanged(bool bIsLoading);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPlacementActor
	 * Size -> 0x0018 (FullSize[0x03C8] - InheritedSize[0x03B0])
	 */
	class AOrionHeroPlacementActor : public AOrionPlacementActor
	{
	public:
		unsigned char                                              UnknownData_H49J[0x18];                                  // 0x03B0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerCamera
	 * Size -> 0x0000 (FullSize[0x1940] - InheritedSize[0x1940])
	 */
	class AOrionPlayerCamera : public APlayerCameraManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerInput
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UOrionPlayerInput : public UObject
	{
	public:
		unsigned char                                              UnknownData_QIWM[0x168];                                 // 0x0028(0x0168) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerStart
	 * Size -> 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
	 */
	class AOrionPlayerStart : public APlayerStart
	{
	public:
		unsigned char                                              UnknownData_5NB2[0x10];                                  // 0x03B0(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsEnabled();
		unsigned char GetTeamNum();
		void EnableStartingSpot();
		void DisableStartingSpot();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerState_DraftLobby
	 * Size -> 0x05D0 (FullSize[0x0CC0] - InheritedSize[0x06F0])
	 */
	class AOrionPlayerState_DraftLobby : public AOrionPlayerState_Base
	{
	public:
		unsigned char                                              UnknownData_8OZN[0x5D0];                                 // 0x06F0(0x05D0) MISSED OFFSET (PADDING)

	public:
		void OnRep_TeamSpecificInfo();
		void OnRep_PickStatus();
		void OnRep_LockedInHeroInfo();
		void OnRep_IsSoleHumanInDraft();
		void OnRep_AbortPenaltyReason();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerState_DemoSpectator
	 * Size -> 0x0000 (FullSize[0x11F0] - InheritedSize[0x11F0])
	 */
	class AOrionPlayerState_DemoSpectator : public AOrionPlayerState_Game
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerState_Main
	 * Size -> 0x0140 (FullSize[0x0830] - InheritedSize[0x06F0])
	 */
	class AOrionPlayerState_Main : public AOrionPlayerState_Base
	{
	public:
		unsigned char                                              UnknownData_NW1L[0x140];                                 // 0x06F0(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerState_PreGame
	 * Size -> 0x0000 (FullSize[0x06F0] - InheritedSize[0x06F0])
	 */
	class AOrionPlayerState_PreGame : public AOrionPlayerState_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPostGameDisplayData
	 * Size -> 0x0438 (FullSize[0x0460] - InheritedSize[0x0028])
	 */
	class UOrionPostGameDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              FlairPopupRewards[0x380];                                // 0x0000(0x0380) UNKNOWN PROPERTY: StructProperty OrionGame.OrionPostGameDisplayData.FlairPopupRewards
		unsigned char                                              UnknownData_3U3O[0xE0];                                  // 0x0380(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionProfanityData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionProfanityData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_6LBD[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_AllEnemies
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_AllEnemies : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_CurrentDestination
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_CurrentDestination : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_CurrentEnemy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_CurrentEnemy : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_FrontWaveLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_FrontWaveLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_LaneGoal
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_LaneGoal : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_ObjectiveLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_ObjectiveLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_OwnTowerInLane
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_OwnTowerInLane : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryContext_SafeHouseLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionQueryContext_SafeHouseLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryGenerator_CharacterEnemies
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UOrionQueryGenerator_CharacterEnemies : public UEnvQueryGenerator
	{
	public:
		unsigned char                                              UnknownData_GGLP[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryGenerator_Enemies
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UOrionQueryGenerator_Enemies : public UEnvQueryGenerator
	{
	public:
		unsigned char                                              UnknownData_J2S2[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryTest_CharacterType
	 * Size -> 0x0018 (FullSize[0x01D8] - InheritedSize[0x01C0])
	 */
	class UOrionQueryTest_CharacterType : public UEnvQueryTest
	{
	public:
		unsigned char                                              UnknownData_WQGG[0x18];                                  // 0x01C0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryTest_CharacterWeight
	 * Size -> 0x0040 (FullSize[0x0200] - InheritedSize[0x01C0])
	 */
	class UOrionQueryTest_CharacterWeight : public UEnvQueryTest
	{
	public:
		unsigned char                                              UnknownData_XUXF[0x40];                                  // 0x01C0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryTest_FlowfieldDistance
	 * Size -> 0x0028 (FullSize[0x01E8] - InheritedSize[0x01C0])
	 */
	class UOrionQueryTest_FlowfieldDistance : public UEnvQueryTest
	{
	public:
		unsigned char                                              UnknownData_DMQ2[0x28];                                  // 0x01C0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryTest_InfluenceMap
	 * Size -> 0x0010 (FullSize[0x01D0] - InheritedSize[0x01C0])
	 */
	class UOrionQueryTest_InfluenceMap : public UEnvQueryTest
	{
	public:
		unsigned char                                              UnknownData_9BMF[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryTest_LaneProgress
	 * Size -> 0x0010 (FullSize[0x01D0] - InheritedSize[0x01C0])
	 */
	class UOrionQueryTest_LaneProgress : public UEnvQueryTest
	{
	public:
		unsigned char                                              UnknownData_TTTK[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQueryTest_LoSCache
	 * Size -> 0x0010 (FullSize[0x01D0] - InheritedSize[0x01C0])
	 */
	class UOrionQueryTest_LoSCache : public UEnvQueryTest
	{
	public:
		unsigned char                                              UnknownData_ZTB6[0x10];                                  // 0x01C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRejoinCheck
	 * Size -> 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
	 */
	class UOrionRejoinCheck : public UObject
	{
	public:
		unsigned char                                              UnknownData_7ZUW[0x198];                                 // 0x0028(0x0198) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayDetailsManager
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UOrionReplayDetailsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_952G[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayList
	 * Size -> 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
	 */
	class UOrionReplayList : public UWidget
	{
	public:
		unsigned char                                              UnknownData_HM0V[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplaySpectatorCameraComponent
	 * Size -> 0x0070 (FullSize[0x0810] - InheritedSize[0x07A0])
	 */
	class UOrionReplaySpectatorCameraComponent : public UCameraComponent
	{
	public:
		unsigned char                                              UnknownData_JQ2H[0x70];                                  // 0x07A0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHoverDroneCameraComponent
	 * Size -> 0x0020 (FullSize[0x0830] - InheritedSize[0x0810])
	 */
	class UOrionHoverDroneCameraComponent : public UOrionReplaySpectatorCameraComponent
	{
	public:
		unsigned char                                              UnknownData_B72X[0x20];                                  // 0x0810(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSpectatorCamComp_Arena
	 * Size -> 0x0020 (FullSize[0x0830] - InheritedSize[0x0810])
	 */
	class UOrionSpectatorCamComp_Arena : public UOrionReplaySpectatorCameraComponent
	{
	public:
		unsigned char                                              UnknownData_BUPA[0x20];                                  // 0x0810(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetEnforce180Rule(bool bNewEnforce180);
		void SetCameraPositionOnRail(float DistanceAlongRail);
		bool AddMoveRightInput(float InputVal);
		bool AddMoveForwardInput(float InputVal);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSpectatorCamComp_Chase
	 * Size -> 0x0100 (FullSize[0x0910] - InheritedSize[0x0810])
	 */
	class UOrionSpectatorCamComp_Chase : public UOrionReplaySpectatorCameraComponent
	{
	public:
		unsigned char                                              UnknownData_YBP2[0x100];                                 // 0x0810(0x0100) MISSED OFFSET (PADDING)

	public:
		void SetLazyAutoFollow(bool bNewLazyAutoFollow);
		void SetAutoFollow(bool bNewAutoFollow);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSpectatorCamComp_Isometric
	 * Size -> 0x00B0 (FullSize[0x08C0] - InheritedSize[0x0810])
	 */
	class UOrionSpectatorCamComp_Isometric : public UOrionReplaySpectatorCameraComponent
	{
	public:
		unsigned char                                              UnknownData_AY86[0xB0];                                  // 0x0810(0x00B0) MISSED OFFSET (PADDING)

	public:
		void SetCameraAngle(unsigned char NewAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSpectatorCamComp_OTS
	 * Size -> 0x00A0 (FullSize[0x08B0] - InheritedSize[0x0810])
	 */
	class UOrionSpectatorCamComp_OTS : public UOrionReplaySpectatorCameraComponent
	{
	public:
		unsigned char                                              UnknownData_O2I8[0xA0];                                  // 0x0810(0x00A0) MISSED OFFSET (PADDING)

	public:
		void SetAutoFollow(bool bNewAutoFollow);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplaySpectatorPawnBase
	 * Size -> 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
	 */
	class AOrionReplaySpectatorPawnBase : public ASpectatorPawn
	{
	public:
		unsigned char                                              UnknownData_IJCS[0x8];                                   // 0x0408(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.HoverDronePawn
	 * Size -> 0x0010 (FullSize[0x0420] - InheritedSize[0x0410])
	 */
	class AHoverDronePawn : public AOrionReplaySpectatorPawnBase
	{
	public:
		unsigned char                                              UnknownData_NBJ7[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsMaintainingConstantAltitude();
		float GetAltitude();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplaySpectatorPawn
	 * Size -> 0x0010 (FullSize[0x0420] - InheritedSize[0x0410])
	 */
	class AOrionReplaySpectatorPawn : public AOrionReplaySpectatorPawnBase
	{
	public:
		unsigned char                                              UnknownData_UPN4[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayStreamInfo
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOrionReplayStreamInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_2788[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplenishCardHand
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOrionReplenishCardHand : public UGameplayEffectExecutionCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRequireTargetDirection_Front
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionRequireTargetDirection_Front : public UGameplayEffectCustomApplicationRequirement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRequireTargetDirection_Back
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionRequireTargetDirection_Back : public UGameplayEffectCustomApplicationRequirement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionResistanceSum
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionResistanceSum : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardDisplayData
	 * Size -> 0x0540 (FullSize[0x0568] - InheritedSize[0x0028])
	 */
	class UOrionRewardDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              BadgeTypeInfo[0x60];                                     // 0x0000(0x0060) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRewardDisplayData.BadgeTypeInfo
		unsigned char                                              Badges[0x138];                                           // 0x0000(0x0138) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRewardDisplayData.Badges
		unsigned char                                              Currencies[0x120];                                       // 0x0000(0x0120) UNKNOWN PROPERTY: StructProperty OrionGame.OrionRewardDisplayData.Currencies
		unsigned char                                              UnknownData_UCM4[0x448];                                 // 0x0120(0x0448) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardDisplayLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionRewardDisplayLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetLootSourceText(class FText* LootSourceText);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTooltipBase
	 * Size -> 0x0070 (FullSize[0x0318] - InheritedSize[0x02A8])
	 */
	class UOrionTooltipBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_MAJQ[0x70];                                  // 0x02A8(0x0070) MISSED OFFSET (PADDING)

	public:
		void Show();
		void OnShow();
		void OnHide();
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardTooltipItem
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class UOrionRewardTooltipItem : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_61LJ[0x20];                                  // 0x0238(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardTooltip
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UOrionRewardTooltip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_2LJE[0x28];                                  // 0x0318(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRichText
	 * Size -> 0x0068 (FullSize[0x01A8] - InheritedSize[0x0140])
	 */
	class UOrionRichText : public UTextLayoutWidget
	{
	public:
		unsigned char                                              UnknownData_HV14[0x68];                                  // 0x0140(0x0068) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void SetSize(unsigned char Size);
		void SetInlineIconDisplayMode(unsigned char DisplayMode);
		void SetColorType(unsigned char Color);
		void Refresh();
		unsigned char GetStyleSize();
		unsigned char GetInlineIconColorType();
		unsigned char GetColorType();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRichTextStyleData
	 * Size -> 0x0248 (FullSize[0x0270] - InheritedSize[0x0028])
	 */
	class UOrionRichTextStyleData : public UDataAsset
	{
	public:
		unsigned char                                              IconsByKeyword[0x50];                                    // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty OrionGame.OrionRichTextStyleData.IconsByKeyword
		unsigned char                                              UnknownData_YSFC[0x220];                                 // 0x0050(0x0220) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRichTextHelperLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionRichTextHelperLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetCurrencyIconTagSpecific(unsigned char Currency, unsigned char Size);
		class FString STATIC_GetCurrencyIconTag(unsigned char Currency);
		void STATIC_GetAttributeValueTag(unsigned char SummandType, class FString* ValueTag);
		class FString STATIC_GetAttributeMarkup();
		class FString STATIC_GetAttributeAbbreviationMarkup(const class FString& Abbreviation);
		class FString STATIC_FormatAsKeywordSpecific(const class FString& Text, unsigned char Size, unsigned char Color);
		class FString STATIC_FormatAsKeyword(const class FString& Text);
		class FText STATIC_FormatAsCurrency(unsigned char Currency, const class FText& DisplayValue, unsigned char Size);
		class FString STATIC_FormatAsAttributeValue(const class FString& Value, unsigned char SummandType);
		void STATIC_ConvertToKeywordSpecific(class FText* Text, unsigned char Size, unsigned char Color);
		void STATIC_ConvertToKeyword(class FText* Text);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRuntimeOptions
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UOrionRuntimeOptions : public UObject
	{
	public:
		unsigned char                                              UnknownData_73UN[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnHotfixApplied__DelegateSignature();
		bool IsImageViewer();
		bool IsDeathcamEnabled();
		void STATIC_GetRuntimeOptions();
		class FString GetGameVersion();
		class FString GetBuildTime();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionScalingRules
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionScalingRules : public UDPICustomScalingRule
	{
	public:
		unsigned char                                              UnknownData_NFQQ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSessionHelper
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UOrionSessionHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_4TE0[0x178];                                 // 0x0028(0x0178) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionShadowPad
	 * Size -> 0x0068 (FullSize[0x03E8] - InheritedSize[0x0380])
	 */
	class AOrionShadowPad : public AActor
	{
	public:
		unsigned char                                              UnknownData_KXHY[0x68];                                  // 0x0380(0x0068) MISSED OFFSET (PADDING)

	public:
		void UpdateLocalEffects(bool Enabled);
		void OnOverlapEnd(int32_t OtherBodyIndex);
		void OnOverlapBegin(int32_t OtherBodyIndex, bool bFromSweep);
		void HandleOverlappingCharEnteredPhaseShift();
		void HandleOverlappingCharDeath();
		void GameplayTagCallback_ShadowPlanePadOff(int32_t NewCount);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStatusEffectData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOrionStatusEffectData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_CYPI[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStoreDisplayData
	 * Size -> 0x03D8 (FullSize[0x0400] - InheritedSize[0x0028])
	 */
	class UOrionStoreDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              StorefrontInfo[0x230];                                   // 0x0000(0x0230) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStoreDisplayData.StorefrontInfo
		unsigned char                                              NoOffersFoundNotification[0x1A0];                        // 0x0000(0x01A0) UNKNOWN PROPERTY: StructProperty OrionGame.OrionStoreDisplayData.NoOffersFoundNotification
		unsigned char                                              UnknownData_GYPP[0x260];                                 // 0x01A0(0x0260) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStoreDisplayLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionStoreDisplayLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetStorefrontDisplayInfo(unsigned char Storefront);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSurveyConfig
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UOrionSurveyConfig : public UObject
	{
	public:
		unsigned char                                              UnknownData_M4AR[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSurveyDisplayData
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOrionSurveyDisplayData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_XOJ6[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTableView
	 * Size -> 0x0828 (FullSize[0x0940] - InheritedSize[0x0118])
	 */
	class UOrionTableView : public UWidget
	{
	public:
		unsigned char                                              ScrollBarStyle[0x518];                                   // 0x0000(0x0518) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTableView.ScrollBarStyle
		unsigned char                                              UnknownData_ZZ2R[0x428];                                 // 0x0518(0x0428) MISSED OFFSET (PADDING)

	public:
		void SetSelection();
		void SetDataProvider();
		void OnTableViewItemEvent__DelegateSignature();
		void OnItemUnhover();
		void OnItemSelected(bool bSelected);
		void OnItemHover();
		void OnItemClicked();
		void GetSelection();
		void ClearSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTBSlotHelper
	 * Size -> 0x0358 (FullSize[0x0380] - InheritedSize[0x0028])
	 */
	class UOrionTBSlotHelper : public UObject
	{
	public:
		unsigned char                                              FoundChoices[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSlotHelper.FoundChoices
		unsigned char                                              CurrentSearchParams[0x48];                               // 0x0000(0x0048) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSlotHelper.CurrentSearchParams
		unsigned char                                              QueryChoices[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSlotHelper.QueryChoices
		unsigned char                                              UnknownData_AS93[0x330];                                 // 0x0050(0x0330) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTBSoloRider
	 * Size -> 0x0348 (FullSize[0x0370] - InheritedSize[0x0028])
	 */
	class UOrionTBSoloRider : public UObject
	{
	public:
		unsigned char                                              Params[0xA8];                                            // 0x0000(0x00A8) UNKNOWN PROPERTY: StructProperty OrionGame.OrionTBSoloRider.Params
		unsigned char                                              UnknownData_XPVL[0x2C8];                                 // 0x00A8(0x02C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTBStats
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class UOrionTBStats : public UObject
	{
	public:
		unsigned char                                              UnknownData_R31X[0x1E8];                                 // 0x0028(0x01E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTeamColorComponent
	 * Size -> 0x0050 (FullSize[0x02C0] - InheritedSize[0x0270])
	 */
	class UOrionTeamColorComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_HAR0[0x50];                                  // 0x0270(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetupTeamColors(unsigned char TeamNum, bool bIsDead);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTutorial
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOrionTutorial : public UObject
	{
	public:
		unsigned char                                              UnknownData_VBEB[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTutorialWrapper
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UOrionTutorialWrapper : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_XNTO[0x20];                                  // 0x0130(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUI_Base
	 * Size -> 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
	 */
	class AOrionUI_Base : public AHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUI_Game
	 * Size -> 0x00A8 (FullSize[0x0510] - InheritedSize[0x0468])
	 */
	class AOrionUI_Game : public AOrionUI_Base
	{
	public:
		unsigned char                                              UnknownData_CLWI[0xA8];                                  // 0x0468(0x00A8) MISSED OFFSET (PADDING)

	public:
		void ShowNetworkReplayMenu();
		void PreviousDebugTarget();
		void OrionCycleShowDebug();
		void NextDebugTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUI_Menu
	 * Size -> 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
	 */
	class AOrionUI_Menu : public AOrionUI_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUIBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionUIBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_ToString();
		class FText STATIC_StatToText(unsigned char InType);
		void STATIC_SetNeedsMouse(bool bNeedsMouse);
		void STATIC_SetInputModeUIOnly(bool bEnableParallax);
		void STATIC_SetInputModeGameOnly();
		void STATIC_SetInputModeGameAndUI(bool bHideCursorDuringCapture, bool bEnableParallax);
		float STATIC_SafePercent(float Value, float ValueMax, bool bIfInvalidReturnOne);
		bool STATIC_OrionTBFindMemberByIndex(int32_t SlotIndex);
		void STATIC_OrionAffinityStructToEnum(unsigned char* First, unsigned char* Second);
		bool STATIC_NotEqual_OrionPlayerStateUIID();
		bool STATIC_IsMTXPaymentAllowed();
		bool STATIC_IsInWorld();
		bool STATIC_IsInSegment(float Center, float WedgeSize, float TestAngle);
		bool STATIC_IsDemoMode();
		bool STATIC_IsConsoleOpen();
		bool STATIC_IsConsoleBuild();
		bool STATIC_HasCommandLineParameter(const class FString& CommandLine);
		void STATIC_GetTimespanAsSimpleText(class FText* Text);
		void STATIC_GetStoreOfferFrom();
		void STATIC_GetSegmentAngles(float Center, float WedgeSize, float* Min, float* Max);
		class FString STATIC_GetLanguageDisplayName(const class FString& LanguageCode);
		void STATIC_GetIconsFromScoreboardCardInfo();
		void STATIC_GetHeroesForWelcomeScreen();
		float STATIC_GetHealthPipValue();
		float STATIC_GetCurrentMaterialTime();
		class FString STATIC_GetCurrentLanguageCode();
		void STATIC_GetCleanOffset();
		void STATIC_GetCardRelatedData(int32_t* Quantity);
		void STATIC_GetCardDataFromScoreboardCardInfo();
		void STATIC_GetAvailableLanguages();
		bool STATIC_EqualEqual_OrionPlayerStateUIID();
		void STATIC_CopyToClipboard(const class FString& ClipboardText);
		bool STATIC_Contains_OrionAffinityStruct();
		void STATIC_ClearFocusForModalWindow();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUpdateManager
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class UOrionUpdateManager : public UUpdateManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTeamCommGameEventButtonIcon
	 * Size -> 0x0050 (FullSize[0x02F8] - InheritedSize[0x02A8])
	 */
	class UOrionTeamCommGameEventButtonIcon : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_H8G3[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTeamCommGameEventMessage
	 * Size -> 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
	 */
	class UOrionTeamCommGameEventMessage : public UOrionUserWidget_GameEventMessage
	{
	public:
		unsigned char                                              UnknownData_6DTW[0x38];                                  // 0x02D8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCMSBaseTile
	 * Size -> 0x00C8 (FullSize[0x0370] - InheritedSize[0x02A8])
	 */
	class UOrionCMSBaseTile : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_TY3R[0xC8];                                  // 0x02A8(0x00C8) MISSED OFFSET (PADDING)

	public:
		void OnMarketplaceWidgetClicked();
		void Launch();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.CountdownTimerBase
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UCountdownTimerBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_X4CI[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.HUDAlertWidgetBase
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UHUDAlertWidgetBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_EPR5[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnPlay();
		void NotifyAlertFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.HUDAlertPresenter
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UHUDAlertPresenter : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_CQU3[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityPipsWidget
	 * Size -> 0x0058 (FullSize[0x0300] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityPipsWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_JMHM[0x58];                                  // 0x02A8(0x0058) MISSED OFFSET (PADDING)

	public:
		void ShowWidget();
		void SetNumOfPips(unsigned char _NumOfPips);
		void SetNumOfFullPips(int32_t InNumOfPips);
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUpgradePanelIcon
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class UOrionUpgradePanelIcon : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_K1OG[0x30];                                  // 0x02A8(0x0030) MISSED OFFSET (PADDING)

	public:
		void HideLock();
		void GoToCanUpgradeState();
		void GoToCanNotUpgradeState();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityValueRow
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityValueRow : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_OJT7[0x30];                                  // 0x02A8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityUpgradePanelPullTab
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityUpgradePanelPullTab : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_38JF[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void ShowWidget();
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityUpgradePromptWidget
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityUpgradePromptWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_TS9I[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void ShowWidget();
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityUpgradeRowWidget
	 * Size -> 0x0158 (FullSize[0x0400] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityUpgradeRowWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_S8B9[0x158];                                 // 0x02A8(0x0158) MISSED OFFSET (PADDING)

	public:
		void ShowUpgrades();
		void ShowKeyboardKeys();
		void ShowGamepadKeys();
		void OnAbilityUpgraded();
		void HideUpgrades();
		void HideLocks();
		unsigned char GetInputID();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityUpgradePanel
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityUpgradePanel : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_LYHL[0x40];                                  // 0x02A8(0x0040) MISSED OFFSET (PADDING)

	public:
		void OpenMenu();
		void OnClosedFinished();
		void CloseMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardInspectWidget
	 * Size -> 0x0218 (FullSize[0x0500] - InheritedSize[0x02E8])
	 */
	class UOrionCardInspectWidget : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_QFPM[0x218];                                 // 0x02E8(0x0218) MISSED OFFSET (PADDING)

	public:
		void OnShow();
		void OnHide();
		void HandleCloseButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardsWidget_AffinityRow
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class UOrionCardsWidget_AffinityRow : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_J0C2[0x40];                                  // 0x02A8(0x0040) MISSED OFFSET (PADDING)

	public:
		void BP_OnSelected(bool bSkipAnim);
		void BP_OnDeselected(bool bSkipAnim);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardWidget
	 * Size -> 0x00C0 (FullSize[0x09B0] - InheritedSize[0x08F0])
	 */
	class UOrionCardWidget : public UOrionBaseButton
	{
	public:
		unsigned char                                              UnknownData_C0KQ[0xC0];                                  // 0x08F0(0x00C0) MISSED OFFSET (PADDING)

	public:
		void SetCardDataSource();
		void ResetData();
		void OnCardRefreshed();
		bool IsCardRecentlyUnlocked();
		bool IsCardLocked();
		int32_t GetTotalCost();
		int32_t GetNumUpgradeSlots();
		void GetCardData();
		void GetCardActor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardTooltip
	 * Size -> 0x0100 (FullSize[0x0418] - InheritedSize[0x0318])
	 */
	class UOrionCardTooltip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_NJNK[0x100];                                 // 0x0318(0x0100) MISSED OFFSET (PADDING)

	public:
		void SetCardDataSource();
		void SetCardData();
		void Refresh();
		void OnCardDataSourceUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardsWidget_Card
	 * Size -> 0x0048 (FullSize[0x02F0] - InheritedSize[0x02A8])
	 */
	class UOrionCardsWidget_Card : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_X9X7[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardsWidget
	 * Size -> 0x0588 (FullSize[0x0870] - InheritedSize[0x02E8])
	 */
	class UOrionCardsWidget : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_WQK1[0x588];                                 // 0x02E8(0x0588) MISSED OFFSET (PADDING)

	public:
		void HandleSearchTextCommitted(const class FText& Text, unsigned char CommitMethod);
		void HandleSearchTextChanged(const class FText& Text);
		void HandleFilterButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_FilterBase
	 * Size -> 0x00D8 (FullSize[0x0380] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_FilterBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_7S0E[0xD8];                                  // 0x02A8(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_FilterHeader
	 * Size -> 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
	 */
	class UOrionDeckBuilder_FilterHeader : public UOrionDeckBuilder_FilterBase
	{
	public:
		unsigned char                                              UnknownData_VINN[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_FilterEntry
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class UOrionDeckBuilder_FilterEntry : public UOrionDeckBuilder_FilterBase
	{
	public:
		unsigned char                                              UnknownData_PFYC[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSelectionChanged(bool bSelected);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_FilterMenu
	 * Size -> 0x0158 (FullSize[0x0400] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_FilterMenu : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_FC1T[0x158];                                 // 0x02A8(0x0158) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardsWidget_FilterRow
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionCardsWidget_FilterRow : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_OF7N[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void BP_OnSelected();
		void BP_OnDeselected();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardsWidget_FilterMenu
	 * Size -> 0x0408 (FullSize[0x06F0] - InheritedSize[0x02E8])
	 */
	class UOrionCardsWidget_FilterMenu : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_79GP[0x408];                                 // 0x02E8(0x0408) MISSED OFFSET (PADDING)

	public:
		void HandleToggleOwnedCardsOnly();
		void HandleOwnedCardsToggled(bool bSelected);
		void HandleCostCleared();
		void HandleCostButtonSelected(int32_t ButtonIndex);
		void HandleCloseButtonClicked();
		void BP_OnOpen();
		void BP_OnClose();
		void BP_CloseComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCMSBaseScreen
	 * Size -> 0x0058 (FullSize[0x0340] - InheritedSize[0x02E8])
	 */
	class UOrionCMSBaseScreen : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_IYGY[0x58];                                  // 0x02E8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHomeScreen
	 * Size -> 0x0008 (FullSize[0x0348] - InheritedSize[0x0340])
	 */
	class UOrionHomeScreen : public UOrionCMSBaseScreen
	{
	public:
		unsigned char                                              UnknownData_V69P[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStoreScreen
	 * Size -> 0x0090 (FullSize[0x03D0] - InheritedSize[0x0340])
	 */
	class UOrionStoreScreen : public UOrionCMSBaseScreen
	{
	public:
		unsigned char                                              UnknownData_U2QN[0x90];                                  // 0x0340(0x0090) MISSED OFFSET (PADDING)

	public:
		void RebuildFeaturedOffers();
		void HandleFoundersPackOpened();
		void HandleFoundersPackConfirmed(bool bPurchased);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_GroupAttribute
	 * Size -> 0x00E0 (FullSize[0x0388] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_GroupAttribute : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_DIRB[0xE0];                                  // 0x02A8(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_CardGroupTip
	 * Size -> 0x00D0 (FullSize[0x03E8] - InheritedSize[0x0318])
	 */
	class UOrionDeckBuilder_CardGroupTip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_AJQ5[0xD0];                                  // 0x0318(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_DeckCard
	 * Size -> 0x00A8 (FullSize[0x0350] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_DeckCard : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_Q3SW[0xA8];                                  // 0x02A8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_UpgradePip
	 * Size -> 0x0058 (FullSize[0x0300] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_UpgradePip : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_V09T[0x58];                                  // 0x02A8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_CardGroup
	 * Size -> 0x0088 (FullSize[0x0330] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_CardGroup : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_VPPS[0x88];                                  // 0x02A8(0x0088) MISSED OFFSET (PADDING)

	public:
		void HandleRemoveFromDeckClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_OverviewHeader
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_OverviewHeader : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_QQN6[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_DeckOverview
	 * Size -> 0x01D8 (FullSize[0x0480] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_DeckOverview : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_QY4Y[0x1D8];                                 // 0x02A8(0x01D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDefaultButton
	 * Size -> 0x00F0 (FullSize[0x09E0] - InheritedSize[0x08F0])
	 */
	class UOrionDefaultButton : public UOrionBaseButton
	{
	public:
		unsigned char                                              UnknownData_EE53[0xF0];                                  // 0x08F0(0x00F0) MISSED OFFSET (PADDING)

	public:
		void UpdateText(const class FText& InText);
		void UpdateSpecificImageSize(unsigned char Type, float InSize);
		void UpdateIconFromTexture();
		void UpdateIcon(bool bRetainBrushImageSize);
		void SetNormalContentColor(unsigned char InNormalTextColor);
		void SetHoveredContentColor(unsigned char InHoveredTextColor);
		void RefreshLayout();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_Card
	 * Size -> 0x00F8 (FullSize[0x03A0] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_Card : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XZKM[0xF8];                                  // 0x02A8(0x00F8) MISSED OFFSET (PADDING)

	public:
		void HandleAddToDeck();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_GroupMaker
	 * Size -> 0x0358 (FullSize[0x0640] - InheritedSize[0x02E8])
	 */
	class UOrionDeckBuilder_GroupMaker : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_KNAS[0x358];                                 // 0x02E8(0x0358) MISSED OFFSET (PADDING)

	public:
		void HandleOpenComplete();
		void HandleCloseComplete();
		void HandleCancelClicked();
		void HandleAcceptClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_ImportExport
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UOrionDeckBuilder_ImportExport : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_EHMH[0x28];                                  // 0x02E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void DidCommitText(const class FText& Text, unsigned char CommitMethod);
		void DidClickImport();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_PrimeSelector
	 * Size -> 0x01C8 (FullSize[0x0470] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_PrimeSelector : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_D5S1[0x1C8];                                 // 0x02A8(0x01C8) MISSED OFFSET (PADDING)

	public:
		void DidFinishCloseAnim();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_StatFilterButton
	 * Size -> 0x0198 (FullSize[0x0440] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_StatFilterButton : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_FSZM[0x198];                                 // 0x02A8(0x0198) MISSED OFFSET (PADDING)

	public:
		void PreStateChange(unsigned char NextState);
		void PostStateChange(unsigned char CurrentState, unsigned char PreviousState);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_StatFilterGroup
	 * Size -> 0x01B8 (FullSize[0x0460] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_StatFilterGroup : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_G1LQ[0x1B8];                                 // 0x02A8(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_StatFilterDisplay
	 * Size -> 0x01A8 (FullSize[0x0450] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_StatFilterDisplay : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_SSPC[0x1A8];                                 // 0x02A8(0x01A8) MISSED OFFSET (PADDING)

	public:
		void HandleResetClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckList
	 * Size -> 0x0050 (FullSize[0x0338] - InheritedSize[0x02E8])
	 */
	class UOrionDeckList : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_J544[0x50];                                  // 0x02E8(0x0050) MISSED OFFSET (PADDING)

	public:
		void DidDeactivateDeckReset();
		void DidClickNewDeck();
		void DidClickDeck();
		void DidClickBuyDeckSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDialogWidget
	 * Size -> 0x00B8 (FullSize[0x03A0] - InheritedSize[0x02E8])
	 */
	class UOrionDialogWidget : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_0OWT[0xB8];                                  // 0x02E8(0x00B8) MISSED OFFSET (PADDING)

	public:
		void ShowDialog();
		void ProcessResult(unsigned char DialogResult);
		void OnShow();
		void OnKill();
		void KillDialog();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftHeroCustomization
	 * Size -> 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
	 */
	class UOrionDraftHeroCustomization : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_209Y[0x20];                                  // 0x02E8(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleSkinSelected(bool bSelected);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionFlairPopup
	 * Size -> 0x0138 (FullSize[0x0420] - InheritedSize[0x02E8])
	 */
	class UOrionFlairPopup : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_TK10[0x138];                                 // 0x02E8(0x0138) MISSED OFFSET (PADDING)

	public:
		void ShowNextFlair();
		void DynamicButtonClicked();
		void AnimateRandomChestOpen();
		void AnimateOut();
		void AnimateIn();
		void AnimateDailyChestOpen();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroDetails_Path
	 * Size -> 0x0170 (FullSize[0x0458] - InheritedSize[0x02E8])
	 */
	class UOrionHeroDetails_Path : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_V3T9[0x170];                                 // 0x02E8(0x0170) MISSED OFFSET (PADDING)

	public:
		void SetHero();
		void OnHeroSet();
		void OnHeroPurchased();
		void HandlePurchaseButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroDetails_Skins
	 * Size -> 0x0100 (FullSize[0x03E8] - InheritedSize[0x02E8])
	 */
	class UOrionHeroDetails_Skins : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_9BU3[0x100];                                 // 0x02E8(0x0100) MISSED OFFSET (PADDING)

	public:
		void SetHero();
		void OnSkinPurchased();
		void DynamicHandleSkinSelected(bool bSelected);
		void DynamicHandleBuyButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMuteMenuRow
	 * Size -> 0x0090 (FullSize[0x0338] - InheritedSize[0x02A8])
	 */
	class UOrionMuteMenuRow : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_AVUX[0x90];                                  // 0x02A8(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnMutePressed();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMuteMenu
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UOrionMuteMenu : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_9VPF[0x28];                                  // 0x02E8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerRateMenu
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UOrionPlayerRateMenu : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_1XMS[0x28];                                  // 0x02E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetMyParent();
		void DynamicHandleSubmitButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSinglePlayerRating
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionSinglePlayerRating : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_78VY[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdateButtonText(const class FText& _Text);
		void RevertButtonGraphic();
		void ResetRatingState();
		void RecordRatingInternal(unsigned char Rating);
		void RecordNewRating(unsigned char InRatingValue);
		void CloseChildMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerRatingScreen
	 * Size -> 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
	 */
	class UOrionPlayerRatingScreen : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_1H6R[0x20];                                  // 0x02E8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayRoot
	 * Size -> 0x0080 (FullSize[0x0368] - InheritedSize[0x02E8])
	 */
	class UOrionPlayRoot : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_JC1Y[0x80];                                  // 0x02E8(0x0080) MISSED OFFSET (PADDING)

	public:
		void HandleReadyButtonSelectionChanged(bool bIsSelected);
		void HandleGameTypeSelected(int32_t ButtonIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPostGameScreen
	 * Size -> 0x00A0 (FullSize[0x0388] - InheritedSize[0x02E8])
	 */
	class UOrionPostGameScreen : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_BGF5[0xA0];                                  // 0x02E8(0x00A0) MISSED OFFSET (PADDING)

	public:
		void ShowWeeklyQuest();
		void ShowPlayerRating();
		void SetFlairPopupReady();
		void ResumeScreen();
		void PrepareRewards();
		void PauseScreen();
		void OnExitScreen();
		bool IsPostGameFlairMinimal();
		bool IsPlayerRatingButtonDisabled();
		bool IsContinueButtonDelayEnabled();
		void DynamicHandleXPFillComplete();
		void DynamicHandleContinueButtonClicked();
		void BeginPopupSequence();
		void BeginFanfare();
		bool AreBanMessagesSuppressed();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSurveyQuestion
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionSurveyQuestion : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_M7GD[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPostGameSurvey
	 * Size -> 0x0048 (FullSize[0x0330] - InheritedSize[0x02E8])
	 */
	class UOrionPostGameSurvey : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_KZ85[0x48];                                  // 0x02E8(0x0048) MISSED OFFSET (PADDING)

	public:
		void DynamicHandleSubmitButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPurchaseConfirmationWidget
	 * Size -> 0x01B8 (FullSize[0x04A0] - InheritedSize[0x02E8])
	 */
	class UOrionPurchaseConfirmationWidget : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_9F0J[0x1B8];                                 // 0x02E8(0x01B8) MISSED OFFSET (PADDING)

	public:
		void OnShow();
		void OnPurchaseComplete(bool bSuccessful);
		void OnBuyAgain();
		void OnBeginPurchase();
		void GetPrice();
		void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
		void DynamicHandleCurrencyChanged();
		void DynamicHandleBuyButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuickChatMessage
	 * Size -> 0x0078 (FullSize[0x0320] - InheritedSize[0x02A8])
	 */
	class UOrionQuickChatMessage : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_AGP0[0x78];                                  // 0x02A8(0x0078) MISSED OFFSET (PADDING)

	public:
		void HandleMessageInputReceived();
		void BP_OnMessageSelected();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuickChatWrapper
	 * Size -> 0x0050 (FullSize[0x0338] - InheritedSize[0x02E8])
	 */
	class UOrionQuickChatWrapper : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_DTX3[0x50];                                  // 0x02E8(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnToggleChatOptions(bool bShowChatOptions);
		void HandleToggleChatOptions();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuickStatBase
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UOrionQuickStatBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_QY0C[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuickStatsBase
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UOrionQuickStatsBase : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_HMZE[0x30];                                  // 0x02E8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayBrowserList
	 * Size -> 0x0098 (FullSize[0x0380] - InheritedSize[0x02E8])
	 */
	class UOrionReplayBrowserList : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_ARNB[0x98];                                  // 0x02E8(0x0098) MISSED OFFSET (PADDING)

	public:
		void OnReplaySearchTextCommitted();
		void OnReplaySearchButtonClicked();
		void HandleToggleSpoilers(bool bSelected);
		void HandleDeactivated();
		void HandleActivated();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWidgetSwitcher
	 * Size -> 0x0048 (FullSize[0x0190] - InheritedSize[0x0148])
	 */
	class UOrionWidgetSwitcher : public UWidgetSwitcher
	{
	public:
		unsigned char                                              UnknownData_XB6K[0x48];                                  // 0x0148(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleActiveWidgetDeactivated();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayBrowserRoot
	 * Size -> 0x0248 (FullSize[0x0530] - InheritedSize[0x02E8])
	 */
	class UOrionReplayBrowserRoot : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_VYT4[0x248];                                 // 0x02E8(0x0248) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardsToday
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UOrionRewardsToday : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_DB6I[0x28];                                  // 0x02E8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCatalogOfferBase
	 * Size -> 0x0110 (FullSize[0x0A00] - InheritedSize[0x08F0])
	 */
	class UOrionCatalogOfferBase : public UOrionBaseButton
	{
	public:
		unsigned char                                              UnknownData_7BD6[0x110];                                 // 0x08F0(0x0110) MISSED OFFSET (PADDING)

	public:
		void SetOffer();
		void SetAdditionalConfirmationContent();
		void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
		void DynamicHandleCurrencyChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCatalogOffer
	 * Size -> 0x0038 (FullSize[0x0A38] - InheritedSize[0x0A00])
	 */
	class UOrionCatalogOffer : public UOrionCatalogOfferBase
	{
	public:
		unsigned char                                              UnknownData_5QT0[0x38];                                  // 0x0A00(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStorefront
	 * Size -> 0x0188 (FullSize[0x0470] - InheritedSize[0x02E8])
	 */
	class UOrionStorefront : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_KUHU[0x188];                                 // 0x02E8(0x0188) MISSED OFFSET (PADDING)

	public:
		void SetStorefrontType(unsigned char InStorefrontType);
		void OnCatalogFlushed();
		void HandleOfferConfirmed(bool bPurchased);
		void HandleFoundersPackOpened();
		void HandleFoundersPackConfirmed(bool bPurchased);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStorefrontPopup
	 * Size -> 0x00A0 (FullSize[0x0510] - InheritedSize[0x0470])
	 */
	class UOrionStorefrontPopup : public UOrionStorefront
	{
	public:
		unsigned char                                              UnknownData_CHS6[0xA0];                                  // 0x0470(0x00A0) MISSED OFFSET (PADDING)

	public:
		void DynamicHandleCloseClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStorefrontCMS
	 * Size -> 0x0000 (FullSize[0x02E8] - InheritedSize[0x02E8])
	 */
	class UOrionStorefrontCMS : public UOrionActivatableWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWeeklyQuestScreen
	 * Size -> 0x00B8 (FullSize[0x03A0] - InheritedSize[0x02E8])
	 */
	class UOrionWeeklyQuestScreen : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_7FB6[0xB8];                                  // 0x02E8(0x00B8) MISSED OFFSET (PADDING)

	public:
		void OnResetData();
		void AbandonQuest();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionXPRewards
	 * Size -> 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
	 */
	class UOrionXPRewards : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_PC7T[0x30];                                  // 0x02E8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuestProgressBarBase
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UOrionQuestProgressBarBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_SAAJ[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWeeklyQuestsRewardBase
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UOrionWeeklyQuestsRewardBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_ZTE3[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.WeeklyQuestsBase
	 * Size -> 0x0188 (FullSize[0x0470] - InheritedSize[0x02E8])
	 */
	class UWeeklyQuestsBase : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_R7WC[0x188];                                 // 0x02E8(0x0188) MISSED OFFSET (PADDING)

	public:
		void OnQuestPanelAdded();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionActorLoadingWidget
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionActorLoadingWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_1H1W[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSkinOffer
	 * Size -> 0x0028 (FullSize[0x0A60] - InheritedSize[0x0A38])
	 */
	class UOrionSkinOffer : public UOrionCatalogOffer
	{
	public:
		unsigned char                                              UnknownData_H23M[0x28];                                  // 0x0A38(0x0028) MISSED OFFSET (PADDING)

	public:
		void DynamicHandlePurchaseSkinClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroListItem
	 * Size -> 0x0040 (FullSize[0x0930] - InheritedSize[0x08F0])
	 */
	class UOrionHeroListItem : public UOrionBaseButton
	{
	public:
		unsigned char                                              UnknownData_58R8[0x40];                                  // 0x08F0(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnHeroDataSet();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroListItem_Matchmaking
	 * Size -> 0x0010 (FullSize[0x0940] - InheritedSize[0x0930])
	 */
	class UOrionHeroListItem_Matchmaking : public UOrionHeroListItem
	{
	public:
		unsigned char                                              UnknownData_A3X2[0x10];                                  // 0x0930(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRegionListItem
	 * Size -> 0x0018 (FullSize[0x0908] - InheritedSize[0x08F0])
	 */
	class UOrionRegionListItem : public UOrionBaseButton
	{
	public:
		unsigned char                                              UnknownData_3K3L[0x18];                                  // 0x08F0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSkinListItem
	 * Size -> 0x0180 (FullSize[0x0A70] - InheritedSize[0x08F0])
	 */
	class UOrionSkinListItem : public UOrionBaseButton
	{
	public:
		unsigned char                                              UnknownData_3SFZ[0x180];                                 // 0x08F0(0x0180) MISSED OFFSET (PADDING)

	public:
		void OnSkinDefinitionSet();
		bool IsOwned();
		bool IsForSale();
		void HandleBuyButtonClicked();
		void BP_OnSkinPurchased();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardAbilityWidget
	 * Size -> 0x0168 (FullSize[0x0410] - InheritedSize[0x02A8])
	 */
	class UOrionCardAbilityWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_X5SR[0x168];                                 // 0x02A8(0x0168) MISSED OFFSET (PADDING)

	public:
		void StopCooldown();
		void StartCooldown();
		void ShowStacksImage();
		bool RemovePlayedAnimation();
		void IsUnSelected();
		void IsSelected();
		void HideStacksImage();
		void HideLock();
		void ExitSelectionMode(bool bWasHighlighted);
		void EnterSelectionMode();
		void CardSet();
		void CardCleared();
		void CannotActivate();
		void CanActivate();
		void AddPlayedAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PageViewItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPageViewItem : public UInterface
	{
	public:
		void SetRowColumn(int32_t Row, int32_t Column);
		void SetData();
		void Reset();
		void RegisterOnUnhover(const class FScriptDelegate& Callback);
		void RegisterOnSelected(const class FScriptDelegate& Callback);
		void RegisterOnHover(const class FScriptDelegate& Callback);
		void RegisterOnClicked(const class FScriptDelegate& Callback);
		void Initialize();
		void GetData();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PageView
	 * Size -> 0x0298 (FullSize[0x03B0] - InheritedSize[0x0118])
	 */
	class UPageView : public UWidget
	{
	public:
		unsigned char                                              UnknownData_ZT6U[0x298];                                 // 0x0118(0x0298) MISSED OFFSET (PADDING)

	public:
		void SetPage(int32_t Page);
		void RequestRefresh();
		void PageViewOnItemSelected__DelegateSignature(bool bSelected);
		void PageViewOnItemHovered__DelegateSignature();
		void PageViewOnItemClicked__DelegateSignature();
		int32_t GetPage();
		void DynamicOnPageRight();
		void DynamicOnPagePicked(int32_t ButtonIndex);
		void DynamicOnPageLeft();
		void DynamicOnItemUnhover();
		void DynamicOnItemSelected(bool bSelected);
		void DynamicOnItemHover();
		void DynamicOnItemClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLinkedCardGroupTooltip
	 * Size -> 0x00C0 (FullSize[0x03D8] - InheritedSize[0x0318])
	 */
	class UOrionLinkedCardGroupTooltip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_9N9X[0xC0];                                  // 0x0318(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardMenuCard
	 * Size -> 0x0448 (FullSize[0x06F0] - InheritedSize[0x02A8])
	 */
	class UOrionCardMenuCard : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_13AJ[0x448];                                 // 0x02A8(0x0448) MISSED OFFSET (PADDING)

	public:
		void OnStateChanged(unsigned char NewState, unsigned char OldState);
		void BP_ShowActionPompt(bool bShow);
		void BP_Reset();
		void BP_ChangeRecentlyUnlocked(bool bIsRecentlyUnlocked);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardPointsWidget
	 * Size -> 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
	 */
	class UOrionCardPointsWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_ET9T[0x38];                                  // 0x02A8(0x0038) MISSED OFFSET (PADDING)

	public:
		void ShowWidget();
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardShopBuildPip
	 * Size -> 0x0208 (FullSize[0x04B0] - InheritedSize[0x02A8])
	 */
	class UOrionCardShopBuildPip : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_7Z1X[0x208];                                 // 0x02A8(0x0208) MISSED OFFSET (PADDING)

	public:
		bool IsSelected();
		bool IsHighlighted();
		bool IsConsumed();
		void BP_OnSelected(bool bSelected);
		void BP_OnInfoChanged();
		void BP_OnHighlighted(bool bHighlighted);
		void BP_OnConsumedChanged(bool bIsConsumed);
		void BP_OnClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardShopBuildGuideGroup
	 * Size -> 0x0308 (FullSize[0x05B0] - InheritedSize[0x02A8])
	 */
	class UOrionCardShopBuildGuideGroup : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_YFEO[0x308];                                 // 0x02A8(0x0308) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardShopBuildGuide
	 * Size -> 0x02B8 (FullSize[0x0560] - InheritedSize[0x02A8])
	 */
	class UOrionCardShopBuildGuide : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_AGO3[0x2B8];                                 // 0x02A8(0x02B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardShopSuggestions
	 * Size -> 0x0128 (FullSize[0x03D0] - InheritedSize[0x02A8])
	 */
	class UOrionCardShopSuggestions : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_S4LF[0x128];                                 // 0x02A8(0x0128) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardSlotWidget
	 * Size -> 0x0048 (FullSize[0x02F0] - InheritedSize[0x02A8])
	 */
	class UOrionCardSlotWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_MCK0[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (PADDING)

	public:
		void TrashCard();
		void SetSelected(bool InSelected);
		void OnSelectionChanged(bool bSelected);
		void OnCardChanged();
		bool IsSelected();
		void GetCardForSlot();
		class FName GetActionForSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckOutline
	 * Size -> 0x00C8 (FullSize[0x0370] - InheritedSize[0x02A8])
	 */
	class UOrionDeckOutline : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9ZTI[0xC8];                                  // 0x02A8(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHandSlotWidget
	 * Size -> 0x0440 (FullSize[0x0730] - InheritedSize[0x02F0])
	 */
	class UOrionHandSlotWidget : public UOrionCardSlotWidget
	{
	public:
		unsigned char                                              UnknownData_XTQO[0x440];                                 // 0x02F0(0x0440) MISSED OFFSET (PADDING)

	public:
		void UpdateForCard();
		void PreviewCard();
		void OnTrashButtonClicked();
		void OnTrashAnimComplete();
		void OnSpendAnimComplete();
		void OnReadOnlyChanged(bool bIsReadOnly);
		void OnClicked();
		void HandleRemoveCardAnimComplete();
		void HandleAddCardAnimComplete();
		void BP_OnCardUpgraded(int32_t UpgradeSlot);
		void BP_OnCardStateChanged(unsigned char NewState);
		void BP_OnCardPreviewChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCardShopWidget
	 * Size -> 0x04D8 (FullSize[0x0780] - InheritedSize[0x02A8])
	 */
	class UOrionCardShopWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_V3ZU[0x4D8];                                 // 0x02A8(0x04D8) MISSED OFFSET (PADDING)

	public:
		void TrashCardInSlot(unsigned char SlotIndex);
		void SetSuggestionModeActive(bool bInSuggestionMode);
		void SetActiveCategory(unsigned char InCategory);
		void RegisterHandSlot();
		void Open();
		void OnUndoClicked();
		void OnSummonTutorialClicked();
		void OnSuggestionModeClicked();
		void OnStateChanged(unsigned char NewState);
		void OnSlotFilterChanged(const class FText& FilterText);
		void OnReadOnlyStateChanged(bool bIsReadOnly);
		void OnHelpTextUpdated(const class FText& NewHelpText);
		void OnFilterIndexChanged(unsigned char Index);
		void OnDeckSelected();
		void OnConfirmDeckSelection();
		void OnChangesDiscarded();
		void OnChangesCommitted();
		void OnCardSourceChanged();
		void OnCardHovered();
		void OnActiveCategoryChanged(unsigned char Category);
		bool IsSuggestionModeActive();
		void HandleCanShopChange(bool bCanShop);
		void GetHandSlots();
		void FilterBySlot(unsigned char SlotIndex);
		void Exit();
		void Close();
		void ClearSlotFilter();
		void BP_OnDeckChanged();
		void AddPendingCardToSlot(unsigned char SlotIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCMSBaseLayout
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class UOrionCMSBaseLayout : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_K5DF[0x30];                                  // 0x02A8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHomeScreenTile
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class UOrionHomeScreenTile : public UOrionCMSBaseTile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStoreScreenTile
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class UOrionStoreScreenTile : public UOrionCMSBaseTile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCombatMessageManagerWidget
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionCombatMessageManagerWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NA66[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnIsInBaseChange(bool bIsInBase);
		void OnCanShopChange(bool bCanShop);
		void OnBuffInfoRemoved();
		void OnBuffInfoAdded();
		void AddCombatMessageWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCombatMessageWidget
	 * Size -> 0x00B8 (FullSize[0x0360] - InheritedSize[0x02A8])
	 */
	class UOrionCombatMessageWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_IBVT[0xB8];                                  // 0x02A8(0x00B8) MISSED OFFSET (PADDING)

	public:
		void SetUsingGamepad(bool bUsingGamepad);
		void OnIdleFinished();
		void OnExitFinished();
		void OnEnterFinished();
		bool IsPersistentMessage();
		void Idle();
		unsigned char GetCombatMessageType();
		unsigned char GetCombatMessageState();
		void Exit();
		void Enter();
		void AttemptExit();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCoreWidget
	 * Size -> 0x0090 (FullSize[0x0338] - InheritedSize[0x02A8])
	 */
	class UOrionCoreWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_KCMQ[0x90];                                  // 0x02A8(0x0090) MISSED OFFSET (PADDING)

	public:
		void TeamsAreReady(unsigned char MyTeam, unsigned char EnemyTeam);
		void OnCoreExposed();
		void OnCoreDamaged();
		void OnCoreCritical();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionCustomStoreContentWidget
	 * Size -> 0x00D0 (FullSize[0x0378] - InheritedSize[0x02A8])
	 */
	class UOrionCustomStoreContentWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XOSZ[0xD0];                                  // 0x02A8(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetOffer();
		void OnOfferSet();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeathRecapEntryWidget
	 * Size -> 0x00B8 (FullSize[0x0360] - InheritedSize[0x02A8])
	 */
	class UOrionDeathRecapEntryWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_V6JS[0xB8];                                  // 0x02A8(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeathRecapPanel
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class UOrionDeathRecapPanel : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XL2W[0x30];                                  // 0x02A8(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnLocalHeroSpawn();
		void OnLocalHeroDeath();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckBuilder_FilterDisplay
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UOrionDeckBuilder_FilterDisplay : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0CSN[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckItemRenderer
	 * Size -> 0x0058 (FullSize[0x0300] - InheritedSize[0x02A8])
	 */
	class UOrionDeckItemRenderer : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_LUVK[0x58];                                  // 0x02A8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDeckRenderer
	 * Size -> 0x0068 (FullSize[0x0310] - InheritedSize[0x02A8])
	 */
	class UOrionDeckRenderer : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XRN6[0x68];                                  // 0x02A8(0x0068) MISSED OFFSET (PADDING)

	public:
		void SetSelected(bool bSelected);
		void DidRequestDeleteDeck();
		void CreateDeckTooltip();
		void BP_DeckLockedChanged(bool bIsLocked);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftTeamMember
	 * Size -> 0x0050 (FullSize[0x02F8] - InheritedSize[0x02A8])
	 */
	class UOrionDraftTeamMember : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_M549[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnPickStatusChanged(unsigned char PickStatus);
		void OnMemberSet(bool bIsLocalPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftTeamRoster
	 * Size -> 0x0070 (FullSize[0x0318] - InheritedSize[0x02A8])
	 */
	class UOrionDraftTeamRoster : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_VYWZ[0x70];                                  // 0x02A8(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGenericMarkingMenuNodeWidget_TeamComms
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class UOrionGenericMarkingMenuNodeWidget_TeamComms : public UOrionGenericMarkingMenuNodeWidget
	{
	public:
		unsigned char                                              UnknownData_O80P[0x28];                                  // 0x02B0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMarkingMenuLayerWidget_TeamComms
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UOrionMarkingMenuLayerWidget_TeamComms : public UOrionMarkingMenuLayerWidget
	{
	public:
		void ShowEmoteTogglePrompt(bool bShowPrompt);
		void SetInEmoteMode(bool bInEmoteMode);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGenericMarkingMenu_TeamComms
	 * Size -> 0x0020 (FullSize[0x0378] - InheritedSize[0x0358])
	 */
	class UOrionGenericMarkingMenu_TeamComms : public UOrionGenericMarkingMenuWidget
	{
	public:
		unsigned char                                              UnknownData_6SXZ[0x20];                                  // 0x0358(0x0020) MISSED OFFSET (PADDING)

	public:
		void ToggleEmoteMode();
		void SetEmoteMode(bool bNewInEmoteMode);
		bool GetInEmoteMode();
		void DisableEmoteToggle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroAbilityDisplay
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionHeroAbilityDisplay : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_U3HU[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetHero();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroAbilityWidget
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionHeroAbilityWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_Z0TD[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetAbilityInfoSimple();
		void SetAbilityInfo(int32_t HeroLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroDeckListItem
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UOrionHeroDeckListItem : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_DDRE[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnDeckSet();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPathCluster
	 * Size -> 0x0058 (FullSize[0x0300] - InheritedSize[0x02A8])
	 */
	class UOrionHeroPathCluster : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_3L5J[0x58];                                  // 0x02A8(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnClusterInitialized();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPath
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionHeroPath : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_ZUCF[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void InitializeForHero();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHomeTileCarousel
	 * Size -> 0x0050 (FullSize[0x02F8] - InheritedSize[0x02A8])
	 */
	class UOrionHomeTileCarousel : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_XLFO[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		void PreviousPage();
		void NextPage();
		void NavigationVisibilityChanged(bool bShowNavigation);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHUDRespawnTimer
	 * Size -> 0x0058 (FullSize[0x0300] - InheritedSize[0x02A8])
	 */
	class UOrionHUDRespawnTimer : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_U45N[0x58];                                  // 0x02A8(0x0058) MISSED OFFSET (PADDING)

	public:
		void ShowWidget();
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityConfirmWidget
	 * Size -> 0x0050 (FullSize[0x02F8] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityConfirmWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_6A9L[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		void ShowConfirmWidget();
		void HideConfirmWidget(bool bImmediate);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityLayoutWidget
	 * Size -> 0x0108 (FullSize[0x03B0] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityLayoutWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_4X6J[0x108];                                 // 0x02A8(0x0108) MISSED OFFSET (PADDING)

	public:
		void SetParentRetainerBox();
		void OnSpectatorWatchedHeroChange(unsigned char HeroTeam, int32_t HeroIndex);
		void InitInHUD();
		void AddWidgetComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMiscAbilityWidget
	 * Size -> 0x00F0 (FullSize[0x0398] - InheritedSize[0x02A8])
	 */
	class UOrionMiscAbilityWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_4E8S[0xF0];                                  // 0x02A8(0x00F0) MISSED OFFSET (PADDING)

	public:
		void ShowAbilityWidget(bool bImmediate);
		void HideAbilityWidget();
		void CannotActivate();
		void CanActivate();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityWidget
	 * Size -> 0x0250 (FullSize[0x04F8] - InheritedSize[0x02A8])
	 */
	class UOrionAbilityWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_04JZ[0x250];                                 // 0x02A8(0x0250) MISSED OFFSET (PADDING)

	public:
		void StopCooldown();
		void StartCooldown();
		void ShowUpgrades(int32_t CurrentLevel, int32_t MaxLevel);
		void ShowStacks();
		void OnUnSilenced();
		void OnStackAdded();
		void OnSilenced();
		void OnAbilityLevelUp(int32_t NewLevel, int32_t OldLevel, int32_t LevelMax, bool bCanStillUpgrade);
		void OnAbilityEngaged();
		void OnAbilityDisengaged();
		void HideUpgrades();
		void HideStacks();
		void HideLock();
		void CannotActivate();
		void CanActivate();
		void AbilityFail_Generic();
		void AbilityFail_Energy();
		void AbilityFail_Cooldown();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAFKWarning
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UOrionAFKWarning : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_L4SN[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowAFKWarning();
		void HideAFKWarning();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayEffectsWidget
	 * Size -> 0x00A8 (FullSize[0x0350] - InheritedSize[0x02A8])
	 */
	class UOrionGameplayEffectsWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_7DZ1[0xA8];                                  // 0x02A8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void TimerStarted(float TimerLength);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionGameplayEffectsContainerWidget
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionGameplayEffectsContainerWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_QF8K[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHUDVictoryScreen
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UOrionHUDVictoryScreen : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NPDK[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowVictory();
		void ShowDefeat();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionJungleBuffWidget
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class UOrionJungleBuffWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_BCF5[0x40];                                  // 0x02A8(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionJungleBuffWidgetContainer
	 * Size -> 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
	 */
	class UOrionJungleBuffWidgetContainer : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_CA4K[0x30];                                  // 0x02A8(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnBuffUpdated();
		void OnBuffRemoved();
		void OnBuffAdded();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionKDAWidget
	 * Size -> 0x0050 (FullSize[0x02F8] - InheritedSize[0x02A8])
	 */
	class UOrionKDAWidget : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_R1A5[0x50];                                  // 0x02A8(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnKDAUpdate(int32_t Kills, int32_t Deaths, int32_t Assists, int32_t Minions);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuestAlert
	 * Size -> 0x0070 (FullSize[0x0318] - InheritedSize[0x02A8])
	 */
	class UOrionQuestAlert : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_PIHN[0x70];                                  // 0x02A8(0x0070) MISSED OFFSET (PADDING)

	public:
		void ShowAlert();
		void AlertFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuestAlertContainer
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionQuestAlertContainer : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NGFN[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuestWidget
	 * Size -> 0x0080 (FullSize[0x0328] - InheritedSize[0x02A8])
	 */
	class UOrionQuestWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_94KA[0x80];                                  // 0x02A8(0x0080) MISSED OFFSET (PADDING)

	public:
		void ShowQuestWidget();
		void OnProgressBarUpdated();
		void HideQuestWidget();
		void CompleteQuest();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionQuestLog
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionQuestLog : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_FOQT[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateRandomQuest();
		void OnLocalHeroSpawn();
		void OnLocalHeroDeath();
		void CompleteRandomTest();
		void AddRandomQuest();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReticleContainer
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionReticleContainer : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0P2U[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateVisuals();
		void SetupDefaultReticle();
		void OnAddedNewReticle();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSprintIndicator
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UOrionSprintIndicator : public UOrionHUDWidgetBase
	{
	public:
		unsigned char                                              UnknownData_E2OT[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnSprintStartFill(float Duration);
		void OnSprintFull();
		void OnSprintEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionLightBox
	 * Size -> 0x0168 (FullSize[0x0410] - InheritedSize[0x02A8])
	 */
	class UOrionLightBox : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_MIMZ[0x168];                                 // 0x02A8(0x0168) MISSED OFFSET (PADDING)

	public:
		void OverrideContentActivation(bool bActivate);
		bool IsContentActive();
		void EstablishActivatableContent();
		void DynamicHandleContentDeactivated();
		void DynamicHandleContentActivated();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionMatchTimerWidget
	 * Size -> 0x0060 (FullSize[0x0308] - InheritedSize[0x02A8])
	 */
	class UOrionMatchTimerWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_N9VS[0x60];                                  // 0x02A8(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionObjectiveDisplay
	 * Size -> 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
	 */
	class UOrionObjectiveDisplay : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_74UL[0x38];                                  // 0x02A8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerStatusWidget
	 * Size -> 0x00A8 (FullSize[0x0350] - InheritedSize[0x02A8])
	 */
	class UOrionPlayerStatusWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_18UD[0xA8];                                  // 0x02A8(0x00A8) MISSED OFFSET (PADDING)

	public:
		void InitInHUD();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionProgressBar
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionProgressBar : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_LG6O[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayCurrentlySelected
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionReplayCurrentlySelected : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_WVKW[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnPlayClicked();
		void OnCancelClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.TimeAgoLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeAgoLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RegisterTextBox();
		void STATIC_RegisterText();
		void STATIC_RegisterEditableText();
		void STATIC_RefreshTime();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplayWidget
	 * Size -> 0x00F0 (FullSize[0x0398] - InheritedSize[0x02A8])
	 */
	class UOrionReplayWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_3T8T[0xF0];                                  // 0x02A8(0x00F0) MISSED OFFSET (PADDING)

	public:
		void SetShowSpoilers(bool InShowSpoilers);
		void SetReplayStream();
		void OnReplayClicked();
		void OnDetailStateChanged(unsigned char NewState);
		class FText GetPlayerName(unsigned char Team, int32_t SlotIndex);
		void GetName(class FString* ResultString);
		class FText GetKDA(unsigned char Team, int32_t SlotIndex);
		void GetHeroData(unsigned char Team, int32_t SlotIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRespawnTimerHeroIconWidget
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionRespawnTimerHeroIconWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_W3LR[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void StartRemoving();
		void SetIsFriendly(bool bIsFriendly);
		void SetHeroIcon();
		void SetCountdownText(float SecondsRemaining);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRespawnTimerWidget
	 * Size -> 0x0088 (FullSize[0x0330] - InheritedSize[0x02A8])
	 */
	class UOrionRespawnTimerWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_IBTL[0x88];                                  // 0x02A8(0x0088) MISSED OFFSET (PADDING)

	public:
		void OnHeroDeath();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardWidget
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UOrionRewardWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_LMYY[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardCarouselItem
	 * Size -> 0x0030 (FullSize[0x02F0] - InheritedSize[0x02C0])
	 */
	class UOrionRewardCarouselItem : public UOrionRewardWidget
	{
	public:
		unsigned char                                              UnknownData_R4OU[0x30];                                  // 0x02C0(0x0030) MISSED OFFSET (PADDING)

	public:
		void RefreshLayout();
		void OnRewardEarned();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardCarousel
	 * Size -> 0x01D8 (FullSize[0x0480] - InheritedSize[0x02A8])
	 */
	class UOrionRewardCarousel : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_CQ9I[0x1D8];                                 // 0x02A8(0x01D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionRewardChestBase
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionRewardChestBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_CC3D[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnSetup();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroPathNode
	 * Size -> 0x0028 (FullSize[0x02E8] - InheritedSize[0x02C0])
	 */
	class UOrionHeroPathNode : public UOrionRewardWidget
	{
	public:
		unsigned char                                              UnknownData_R6F5[0x28];                                  // 0x02C0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionScoreboardHeaderIconWidget
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionScoreboardHeaderIconWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_2DPT[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionScoreboardTotalsWidget
	 * Size -> 0x0080 (FullSize[0x0328] - InheritedSize[0x02A8])
	 */
	class UOrionScoreboardTotalsWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_UVKK[0x80];                                  // 0x02A8(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionScoreboardCardWidget
	 * Size -> 0x0070 (FullSize[0x0318] - InheritedSize[0x02A8])
	 */
	class UOrionScoreboardCardWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_NQE0[0x70];                                  // 0x02A8(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionScoreboardRow
	 * Size -> 0x0110 (FullSize[0x03B8] - InheritedSize[0x02A8])
	 */
	class UOrionScoreboardRow : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9Z62[0x110];                                 // 0x02A8(0x0110) MISSED OFFSET (PADDING)

	public:
		void UpdateVisibleToLocalPlayer(bool bVisibleToLocalPlayer);
		void UpdateIsLocalPlayer(bool bIsLocalPlayer);
		void ShowAddFriendButton();
		void OnRespawned();
		void OnDisconnectedChange(bool bIsDisconnected);
		void OnDeath();
		void OnAddFriendPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionScoreboardWidget
	 * Size -> 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
	 */
	class UOrionScoreboardWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_5M5Y[0x38];                                  // 0x02A8(0x0038) MISSED OFFSET (PADDING)

	public:
		void HideCardTooltips();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionReplaySpectator
	 * Size -> 0x0150 (FullSize[0x0C90] - InheritedSize[0x0B40])
	 */
	class AOrionReplaySpectator : public AOrionPlayerController_Base
	{
	public:
		unsigned char                                              UnknownData_1LKQ[0x150];                                 // 0x0B40(0x0150) MISSED OFFSET (PADDING)

	public:
		bool WatchHero(unsigned char Team, int32_t HeroIndex);
		void WatchActor();
		void StopWatchingActor();
		void StartWatchingActor();
		void SetSpectatorCameraType(unsigned char NewCameraType);
		void SetHUDVisibility(bool bShowHUD);
		void ReplaceSpectatorPawn();
		void NotifyHeroPortraitClicked(unsigned char HeroTeam, int32_t PlayerIndex);
		bool IsShowingDebugCameraOptions();
		bool IsForPlayback();
		void GetWatchedActor();
		unsigned char GetCurrentCameraType();
		void DebugSetSpectatorCameraType(const class FString& Type);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSpectatorViewOptions
	 * Size -> 0x0080 (FullSize[0x0328] - InheritedSize[0x02A8])
	 */
	class UOrionSpectatorViewOptions : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9I7Y[0x80];                                  // 0x02A8(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnSetButtonSelected__DelegateSignature(bool bIsSelected);
		void OnRefreshButtonStateFromSpectator();
		void OnButtonClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSurrenderWidget
	 * Size -> 0x0048 (FullSize[0x02F0] - InheritedSize[0x02A8])
	 */
	class UOrionSurrenderWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_K0QR[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (PADDING)

	public:
		void ShowWidget();
		void OnTeamSurrenderStatusChange(unsigned char TeamVoteStatus);
		void OnPlayerSurrenderStatusChange(unsigned char Vote);
		void HideWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTabListWidget
	 * Size -> 0x0098 (FullSize[0x0340] - InheritedSize[0x02A8])
	 */
	class UOrionTabListWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_EBFA[0x98];                                  // 0x02A8(0x0098) MISSED OFFSET (PADDING)

	public:
		void UpdateTabInputSettings(unsigned char InListType, int32_t InInputPriority);
		void SetTabEnabled(const class FName& TabNameID, bool bEnable);
		void SetListeningForInput(bool bShouldListen);
		void SetLinkedSwitcher();
		bool SelectTabByID(const class FName& TabNameID);
		bool RegisterInstance(const class FName& TabId, const class FText& TabName, const class FName& SceneName);
		bool RegisterAssetID(const class FName& TabId, const class FText& TabName, const class FName& SceneName, bool bLoadNow);
		void OnCreateNewTab(const class FText& DisplayName);
		void HandleTabRight();
		void HandleTabLeft();
		void HandleTabButtonSelected(int32_t ButtonIndex);
		void GetTabButtonByID(const class FName& TabNameID);
		class FName GetActiveTab();
		void DisableTabWithReason(const class FName& TabNameID, const class FText& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTimedFillWidget
	 * Size -> 0x0048 (FullSize[0x02F0] - InheritedSize[0x02A8])
	 */
	class UOrionTimedFillWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_VRFJ[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetRange(int32_t StartValue, int32_t EndValue);
		void SetMaxFillTime(float InMaxFillTime);
		void Reset();
		void OnUpdateCurrentValue(int32_t Value);
		void OnReset();
		void OnFillCompleted();
		void BeginFill();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionItemizedCounter
	 * Size -> 0x0060 (FullSize[0x0350] - InheritedSize[0x02F0])
	 */
	class UOrionItemizedCounter : public UOrionTimedFillWidget
	{
	public:
		unsigned char                                              UnknownData_QBN0[0x60];                                  // 0x02F0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionXPFillWidget
	 * Size -> 0x00F0 (FullSize[0x03E0] - InheritedSize[0x02F0])
	 */
	class UOrionXPFillWidget : public UOrionTimedFillWidget
	{
	public:
		unsigned char                                              UnknownData_4NUE[0xF0];                                  // 0x02F0(0x00F0) MISSED OFFSET (PADDING)

	public:
		void SetLevelRange(int32_t InBoostXP);
		void OnShowLevelUp(bool bAtMaxLevel);
		void OnOwningHeroSet();
		bool IsAtMaxLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionAbilityTooltip
	 * Size -> 0x0038 (FullSize[0x0350] - InheritedSize[0x0318])
	 */
	class UOrionAbilityTooltip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_W99P[0x38];                                  // 0x0318(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetAbility();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBasicTooltipWidget
	 * Size -> 0x0000 (FullSize[0x0318] - InheritedSize[0x0318])
	 */
	class UOrionBasicTooltipWidget : public UOrionTooltipBase
	{
	public:
		void UpdateTooltipText(const class FText& NewTooltipText);
		void UpdateTitleText(const class FText& NewTitleText);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionDraftPlayerTooltip
	 * Size -> 0x0078 (FullSize[0x0390] - InheritedSize[0x0318])
	 */
	class UOrionDraftPlayerTooltip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_CS8J[0x78];                                  // 0x0318(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroTooltip
	 * Size -> 0x0100 (FullSize[0x0418] - InheritedSize[0x0318])
	 */
	class UOrionHeroTooltip : public UOrionTooltipBase
	{
	public:
		unsigned char                                              UnknownData_PEJC[0x100];                                 // 0x0318(0x0100) MISSED OFFSET (PADDING)

	public:
		void SetHero();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionHeroRewardTooltip
	 * Size -> 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
	 */
	class UOrionHeroRewardTooltip : public UOrionRewardTooltip
	{
	public:
		unsigned char                                              UnknownData_3CHA[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnUpdateXPBonuses(float SelfBonus, float TeammateBonus);
		void OnUpdateLock(bool bIsOwned);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionBadgeTooltip
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class UOrionBadgeTooltip : public UOrionRewardTooltip
	{
	public:
		void OnUpdateLock(bool bIsOwned);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionTutorialMessageWidget
	 * Size -> 0x0118 (FullSize[0x03C0] - InheritedSize[0x02A8])
	 */
	class UOrionTutorialMessageWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_T2XG[0x118];                                 // 0x02A8(0x0118) MISSED OFFSET (PADDING)

	public:
		void OnShowNewStage();
		void HandlePreviousClicked();
		void HandleNextClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionUIManagerWidget
	 * Size -> 0x0338 (FullSize[0x05E0] - InheritedSize[0x02A8])
	 */
	class UOrionUIManagerWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_N015[0x338];                                 // 0x02A8(0x0338) MISSED OFFSET (PADDING)

	public:
		void ShowModalContent();
		void STATIC_ShowLoadingScreen(bool bShow, bool bIsPregame);
		void STATIC_ShowErrorNotification(const class FText& DisplayMessage, bool bClearExistingErrors);
		void SetStateContentDisplayed(bool bDisplay);
		void STATIC_SetActiveTutorial(bool bOverrideTutorialInProgress);
		void RouteBackAction();
		void OnStateTransitionComplete();
		void OnShowError();
		void OnSetMatchInfoVisibility(bool bVisible);
		void OnSetMatchInfoText(const class FText& InText);
		void OnPreMatchLoadingProgressUpdated__DelegateSignature(float LoadingPercent);
		void STATIC_KillConfirmationDialog();
		void KillConfirmation();
		bool IsStateContentDisplayed();
		void HandleExitModalMode();
		void HandleEnterModalMode();
		void STATIC_GetUIManagerWidget();
		void GetCurrentUIStateWidget();
		unsigned char GetCurrentUIState();
		void STATIC_EstablishCurrentBackHandlerStack(const class FName& StackName);
		void STATIC_BP_UnregisterInputHandlerWidget();
		void STATIC_BP_RegisterInputHandlerWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionSpectatorHUDWidget
	 * Size -> 0x0000 (FullSize[0x02F8] - InheritedSize[0x02F8])
	 */
	class UOrionSpectatorHUDWidget : public UOrionBaseHUDWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_DraftLobby
	 * Size -> 0x0130 (FullSize[0x03D8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_DraftLobby : public UOrionUIStateWidget
	{
	public:
		unsigned char                                              UnknownData_XQQR[0x130];                                 // 0x02A8(0x0130) MISSED OFFSET (PADDING)

	public:
		void OnTurnStarted(unsigned char PickingMemberType);
		void OnTurnComplete(unsigned char FinishedMemberType);
		void OnLockInFailed();
		void OnLockInButtonEnabledChanged(bool bLockInEnabled);
		void OnLocalPlayerTurnUpNext();
		void OnHeroLockedIn();
		void OnFirstHeroSelected();
		void OnEndLocalPlayerTurn();
		void OnDraftStarted(unsigned char FirstPickerType);
		void OnDraftComplete(bool bSuccess);
		void OnBeginLocalPlayerTurn();
		void HandleSummonTutorialClicked();
		void HandleRoleSelected(int32_t Index);
		void HandlePositionSelected(int32_t Index);
		void HandleLockInHeroClicked();
		void HandleHeroSelected(bool bSelected);
		void HandleCustomizeClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_FrontEnd
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_FrontEnd : public UOrionUIStateWidget
	{
	public:
		unsigned char                                              UnknownData_PSUM[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnMatchmakingStateChanged(unsigned char NewState);
		void DynamicHandlePurchaseConfirmationMTXReplenish();
		void DynamicHandlePurchaseConfirmationDeactivated();
		void DynamicHandlePurchaseConfirmationActivated();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_Login
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_Login : public UOrionUIStateWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_PreMatch
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_PreMatch : public UOrionUIStateWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_RejoinMatch
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_RejoinMatch : public UOrionUIStateWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_Replay
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_Replay : public UOrionUIStateWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_Title
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_Title : public UOrionUIStateWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_UpdateBase
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UOrionStateWidget_UpdateBase : public UOrionUIStateWidget
	{
	public:
		unsigned char                                              UnknownData_PRYF[0x28];                                  // 0x02A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void ShowLoginPlatformUI();
		void OnUpdateSuccess_NoChange_Blueprint();
		void OnUpdateSuccess_NeedsReload_Blueprint();
		void OnUpdateSuccess_NeedsRelaunch_Blueprint();
		void OnUpdateSuccess_NeedsPatch_Blueprint();
		void OnUpdateSuccess_Blueprint();
		void OnUpdateStateChange(unsigned char NewState);
		void OnUpdateHotfixProgress(int32_t NumDownloaded, int32_t TotalFiles, int32_t NumBytes, int32_t TotalBytes);
		void OnUpdateHotfixFileProcessed(const class FString& FriendlyName, const class FString& CachedName);
		void OnUpdateFailed_NotLoggedIn_Blueprint();
		void OnUpdateFailed_Blueprint();
		bool IsUpdatingEnabled();
		bool IsBlockingForInitialLoadEnabled();
		unsigned char GetUpdateState();
		float GetLoadProgress();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_HotfixAndLoad
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UOrionStateWidget_HotfixAndLoad : public UOrionStateWidget_UpdateBase
	{
	public:
		void HotfixFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionStateWidget_InitialPreload
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UOrionStateWidget_InitialPreload : public UOrionStateWidget_UpdateBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWellProgressWidget
	 * Size -> 0x0080 (FullSize[0x0328] - InheritedSize[0x02A8])
	 */
	class UOrionWellProgressWidget : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_LTAG[0x80];                                  // 0x02A8(0x0080) MISSED OFFSET (PADDING)

	public:
		void OnWellProgressTextSet(const class FText& NewText);
		void OnWellProgressPercentSet(float NewPercent);
		void Exit();
		void Enter();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionXPWidget
	 * Size -> 0x00D8 (FullSize[0x01F0] - InheritedSize[0x0118])
	 */
	class UOrionXPWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_OYGM[0xD8];                                  // 0x0118(0x00D8) MISSED OFFSET (PADDING)

	public:
		void SetPrimaryColor();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionXpAssembly
	 * Size -> 0x0048 (FullSize[0x02F0] - InheritedSize[0x02A8])
	 */
	class UOrionXpAssembly : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_5PPB[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnPlayerXPUpdate(int32_t XP, int32_t MaxXP);
		void OnPlayerLevelUp(int32_t NewLevel);
		void OnCardXPUpdate(float XP, float MaxXP);
		void OnCardPointsUpdate(int32_t NewCardPointsSpent, int32_t NewCardPointsMax);
		void InitInHUD();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionXPOverview
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UOrionXPOverview : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_N1S9[0x20];                                  // 0x02A8(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetAccountLevelInfo(const class FText& OwnerName);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PlayerActionWidget
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class UPlayerActionWidget : public UOrionUserWidgetBase
	{
	public:
		void SetSlotIndex(int32_t SlotIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.SaleBannerBase
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class USaleBannerBase : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_GFI1[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionViewModelInterface_EndGame
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionViewModelInterface_EndGame : public UInterface
	{
	public:
		void OnContinueButtonPressed();
		unsigned char GetMyTeam();
		unsigned char GetEnemyTeam();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionViewModel_EndGame
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UOrionViewModel_EndGame : public UOrionViewModel_Base
	{
	public:
		unsigned char                                              UnknownData_E92X[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnContinueButtonPressed();
		unsigned char GetMyTeam();
		unsigned char GetEnemyTeam();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWidget_HUDIndicatorOverlay
	 * Size -> 0x0090 (FullSize[0x01A8] - InheritedSize[0x0118])
	 */
	class UOrionWidget_HUDIndicatorOverlay : public UWidget
	{
	public:
		unsigned char                                              UnknownData_3XMG[0x90];                                  // 0x0118(0x0090) MISSED OFFSET (PADDING)

	public:
		void SetLocalPlayerController();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWidgetCarousel
	 * Size -> 0x08C0 (FullSize[0x09F0] - InheritedSize[0x0130])
	 */
	class UOrionWidgetCarousel : public UPanelWidget
	{
	public:
		unsigned char                                              NavigationStyle[0x890];                                  // 0x0000(0x0890) UNKNOWN PROPERTY: StructProperty OrionGame.OrionWidgetCarousel.NavigationStyle
		unsigned char                                              UnknownData_H972[0x160];                                 // 0x0890(0x0160) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget();
		void PreviousPage();
		void NextPage();
		void GetWidgetAtIndex(int32_t Index);
		int32_t GetActiveWidgetIndex();
		void EndAutoScrolling();
		void BeginAutoScrolling(float ScrollInterval);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWidgetCarouselSlot
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UOrionWidgetCarouselSlot : public UPanelSlot
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWidgetData
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UOrionWidgetData : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_GXZA[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionWorldSettings
	 * Size -> 0x0000 (FullSize[0x0538] - InheritedSize[0x0538])
	 */
	class AOrionWorldSettings : public AWorldSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionYouTubeUpload
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOrionYouTubeUpload : public UObject
	{
	public:
		unsigned char                                              UnknownData_0QB9[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OutlinePanel
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UOutlinePanel : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_JYPI[0x20];                                  // 0x0130(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetOutlineSize();
		void AddChildToOutline();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PlatformSpecificWidget
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UPlatformSpecificWidget : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_393Z[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PlatformSpecificWidgetSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UPlatformSpecificWidgetSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_9Q6U[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PlayerBotSpawner
	 * Size -> 0x0038 (FullSize[0x03B8] - InheritedSize[0x0380])
	 */
	class APlayerBotSpawner : public AActor
	{
	public:
		unsigned char                                              UnknownData_7F75[0x38];                                  // 0x0380(0x0038) MISSED OFFSET (PADDING)

	public:
		void Spawn();
		void HandleMatchStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerController_DraftLobby
	 * Size -> 0x01D0 (FullSize[0x0D10] - InheritedSize[0x0B40])
	 */
	class AOrionPlayerController_DraftLobby : public AOrionPlayerController_Base
	{
	public:
		unsigned char                                              UnknownData_SNGC[0x1D0];                                 // 0x0B40(0x01D0) MISSED OFFSET (PADDING)

	public:
		void ServerSetSelectedHero();
		void ServerSetDesiredRole(unsigned char DesiredRole);
		void ServerSetDesiredPosition(unsigned char Position);
		void ServerSendQuickChatMessage();
		void ServerRequestDraftTutorial();
		void ServerNotifyTutorialComplete();
		void ServerAttemptLockInHeroChoice(const class FString& HeroName);
		void ClientUpNextNotification();
		void ClientReceiveQuickChatMessage();
		void ClientPickNotification();
		void ClientJoinTeamChatRoom(const class FString& ChatRoomId);
		void ClientHeroSelectionStatus(bool bWasSuccessful);
		void ClientCreateTeamChatRoom(const class FString& ChatRoomId);
		void ClientBeginDraftTutorial();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerController_Main
	 * Size -> 0x0100 (FullSize[0x0C40] - InheritedSize[0x0B40])
	 */
	class AOrionPlayerController_Main : public AOrionPlayerController_Base
	{
	public:
		unsigned char                                              UnknownData_JQ7U[0x100];                                 // 0x0B40(0x0100) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.OrionPlayerController_PreGame
	 * Size -> 0x0000 (FullSize[0x0B40] - InheritedSize[0x0B40])
	 */
	class AOrionPlayerController_PreGame : public AOrionPlayerController_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PopupAnchor
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	class UPopupAnchor : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_Q7P4[0x28];                                  // 0x0130(0x0028) MISSED OFFSET (PADDING)

	public:
		void Open(bool bFocus);
		void OnPopupOpenChanged__DelegateSignature(bool bOpen);
		bool IsOpen();
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.PopupAnchorSlot
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UPopupAnchorSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_HR9E[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.ScalableFloatUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScalableFloatUtils : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_ToSimpleString();
		void STATIC_SetValue(float NewValue);
		void STATIC_SetScalingValue(float InCoeffecient, const class FName& InRowName);
		bool STATIC_IsStatic();
		float STATIC_GetValueAtLevel(float Level);
		float STATIC_GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.TeamCommunicationsData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTeamCommunicationsData : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.TooltipWidget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTooltipWidget : public UInterface
	{
	public:
		void Show();
		void SetAdditionalContent();
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionGame.WidgetStack
	 * Size -> 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
	 */
	class UWidgetStack : public UWidget
	{
	public:
		unsigned char                                              UnknownData_9PPN[0x20];                                  // 0x0118(0x0020) MISSED OFFSET (PADDING)

	public:
		void PushWidget();
		void PopWidget();
		int32_t NumWidgets();
		void Clear();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
