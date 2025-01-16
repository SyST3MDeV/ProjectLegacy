#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OrionGame.OrionXPSet.OnRep_CurrentLevel
	 */
	struct UOrionXPSet_OnRep_CurrentLevel_Params
	{	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.ReceivePlayerSpawned
	 */
	struct AOrionGameMode_MOBA_ReceivePlayerSpawned_Params
	{
	public:
		unsigned char                                              Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.ReceivePlayerKillStreakShutdown
	 */
	struct AOrionGameMode_MOBA_ReceivePlayerKillStreakShutdown_Params
	{
	public:
		int32_t                                                    KillStreakCount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.ReceivePlayerKilled
	 */
	struct AOrionGameMode_MOBA_ReceivePlayerKilled_Params
	{
	public:
		int32_t                                                    MultiKillCount;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    KillStreakCount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.IsMatchTimeBased
	 */
	struct AOrionGameMode_MOBA_IsMatchTimeBased_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.IsMatchObjectiveCompleted
	 */
	struct AOrionGameMode_MOBA_IsMatchObjectiveCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.GetWinningTeamNum
	 */
	struct AOrionGameMode_MOBA_GetWinningTeamNum_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameMode_MOBA.ForceMatchWinCondition
	 */
	struct AOrionGameMode_MOBA_ForceMatchWinCondition_Params
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.TriggerRenderingBenchmark
	 */
	struct UOrionGameUserSettings_TriggerRenderingBenchmark_Params
	{	};

	/**
	 * Function OrionGame.OrionGameUserSettings.SetOrionGameplayQuality
	 */
	struct UOrionGameUserSettings_SetOrionGameplayQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.SetMenuFrameRateLimit
	 */
	struct UOrionGameUserSettings_SetMenuFrameRateLimit_Params
	{
	public:
		float                                                      NewLimit;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.SetForceAutomaticSettingsAtStartup
	 */
	struct UOrionGameUserSettings_SetForceAutomaticSettingsAtStartup_Params
	{
	public:
		bool                                                       bShouldForceSettings;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.IsRunningOnUnsupportedGraphicsCard
	 */
	struct UOrionGameUserSettings_IsRunningOnUnsupportedGraphicsCard_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.GetOrionGameUserSettings
	 */
	struct UOrionGameUserSettings_GetOrionGameUserSettings_Params
	{	};

	/**
	 * Function OrionGame.OrionGameUserSettings.GetOrionGameplayQuality
	 */
	struct UOrionGameUserSettings_GetOrionGameplayQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.GetMenuFrameRateLimit
	 */
	struct UOrionGameUserSettings_GetMenuFrameRateLimit_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.GetInitialBenchmarkState
	 */
	struct UOrionGameUserSettings_GetInitialBenchmarkState_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.GetGPUDisplayString
	 */
	struct UOrionGameUserSettings_GetGPUDisplayString_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameUserSettings.GetForceAutomaticSettingsAtStartup
	 */
	struct UOrionGameUserSettings_GetForceAutomaticSettingsAtStartup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.MatchmakingSearchWidgetAnimationRoot.OnHoveredChanged__DelegateSignature
	 */
	struct UMatchmakingSearchWidgetAnimationRoot_OnHoveredChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsHovered;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnShowWidget
	 */
	struct UMatchmakingSearchWidget_OnShowWidget_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnRestoreWidget
	 */
	struct UMatchmakingSearchWidget_OnRestoreWidget_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnReadyCheckTimerWarning
	 */
	struct UMatchmakingSearchWidget_OnReadyCheckTimerWarning_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnReadyCheckReadyClicked
	 */
	struct UMatchmakingSearchWidget_OnReadyCheckReadyClicked_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnReadyCheckNotReadyClicked
	 */
	struct UMatchmakingSearchWidget_OnReadyCheckNotReadyClicked_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnReadyCheck
	 */
	struct UMatchmakingSearchWidget_OnReadyCheck_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnPartyReadyUpClicked
	 */
	struct UMatchmakingSearchWidget_OnPartyReadyUpClicked_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnMinimizeWidget
	 */
	struct UMatchmakingSearchWidget_OnMinimizeWidget_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnHoveredChanged
	 */
	struct UMatchmakingSearchWidget_OnHoveredChanged_Params
	{
	public:
		bool                                                       bIsHovered;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnHideWidget
	 */
	struct UMatchmakingSearchWidget_OnHideWidget_Params
	{	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnFrontEndTabChanged
	 */
	struct UMatchmakingSearchWidget_OnFrontEndTabChanged_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.MatchmakingSearchWidget.OnCancelButtonClicked
	 */
	struct UMatchmakingSearchWidget_OnCancelButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.MessageOfTheDay.ShouldShowMOTD
	 */
	struct UMessageOfTheDay_ShouldShowMOTD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.MessageOfTheDay.GetMessageOfTheDay
	 */
	struct UMessageOfTheDay_GetMessageOfTheDay_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.UnlockCharacterRotation
	 */
	struct UOrionAbility_UnlockCharacterRotation_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.UnlockCameraRotation
	 */
	struct UOrionAbility_UnlockCameraRotation_Params
	{
	public:
		bool                                                       bResetOnDeath;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.UnBlockMovementInput
	 */
	struct UOrionAbility_UnBlockMovementInput_Params
	{
	public:
		bool                                                       bResetOnDeath;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.TryCombo
	 */
	struct UOrionAbility_TryCombo_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.TravelModeUnblockAbilities
	 */
	struct UOrionAbility_TravelModeUnblockAbilities_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.TravelModeBlockAbilities
	 */
	struct UOrionAbility_TravelModeBlockAbilities_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.TrackActor
	 */
	struct UOrionAbility_TrackActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.SnapCharacterRotationToCamera
	 */
	struct UOrionAbility_SnapCharacterRotationToCamera_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.SetReticleVisibility
	 */
	struct UOrionAbility_SetReticleVisibility_Params
	{
	public:
		unsigned char                                              Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.SetPassiveTargetingMode
	 */
	struct UOrionAbility_SetPassiveTargetingMode_Params
	{
	public:
		int32_t                                                    TargetingModeIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.SetCameraMode
	 */
	struct UOrionAbility_SetCameraMode_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.MakeGameplayCueParameters
	 */
	struct UOrionAbility_MakeGameplayCueParameters_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.LockCharacterRotation
	 */
	struct UOrionAbility_LockCharacterRotation_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.LockCameraRotation
	 */
	struct UOrionAbility_LockCameraRotation_Params
	{
	public:
		bool                                                       bResetOnDeath;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_SetUseFixedSkeletalBounds
	 */
	struct UOrionAbility_K2_SetUseFixedSkeletalBounds_Params
	{
	public:
		bool                                                       UseFixedSkeletalBounds;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_ScaleTimeByAttackSpeed
	 */
	struct UOrionAbility_K2_ScaleTimeByAttackSpeed_Params
	{
	public:
		float                                                      BaseTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionRemoveUnselectableStatus
	 */
	struct UOrionAbility_K2_OrionRemoveUnselectableStatus_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionRemoveLimboStatus
	 */
	struct UOrionAbility_K2_OrionRemoveLimboStatus_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionRemoveInterruptionImmunity
	 */
	struct UOrionAbility_K2_OrionRemoveInterruptionImmunity_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionRemoveIgnorePawnCollision
	 */
	struct UOrionAbility_K2_OrionRemoveIgnorePawnCollision_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionRemoveGameplayCue
	 */
	struct UOrionAbility_K2_OrionRemoveGameplayCue_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionExecuteGameplayCueWithParams
	 */
	struct UOrionAbility_K2_OrionExecuteGameplayCueWithParams_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionExecuteGameplayCue
	 */
	struct UOrionAbility_K2_OrionExecuteGameplayCue_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionApplyUnselectableStatus
	 */
	struct UOrionAbility_K2_OrionApplyUnselectableStatus_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionApplyLimboStatus
	 */
	struct UOrionAbility_K2_OrionApplyLimboStatus_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionApplyInterruptionImmunity
	 */
	struct UOrionAbility_K2_OrionApplyInterruptionImmunity_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionApplyIgnorePawnCollision
	 */
	struct UOrionAbility_K2_OrionApplyIgnorePawnCollision_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.K2_OrionAddGameplayCue
	 */
	struct UOrionAbility_K2_OrionAddGameplayCue_Params
	{
	public:
		bool                                                       bRemoveOnAbilityEnd;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_GetTotalAttackTime
	 */
	struct UOrionAbility_K2_GetTotalAttackTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_GetRateForAttackSpeedMontage
	 */
	struct UOrionAbility_K2_GetRateForAttackSpeedMontage_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FillEntireAttackTime;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_GetBestMontageForAttackSpeed
	 */
	struct UOrionAbility_K2_GetBestMontageForAttackSpeed_Params
	{
	public:
		float                                                      OutPlayRate;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.K2_GetAttackSpeedMultiplier
	 */
	struct UOrionAbility_K2_GetAttackSpeedMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.IsCharacterFalling
	 */
	struct UOrionAbility_IsCharacterFalling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.InitFilterAndEffectsContainer
	 */
	struct UOrionAbility_InitFilterAndEffectsContainer_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.InitAndApplyFilterContainerToTargetData
	 */
	struct UOrionAbility_InitAndApplyFilterContainerToTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.GetTargets
	 */
	struct UOrionAbility_GetTargets_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.GetOrionCharHeroFromActorInfo
	 */
	struct UOrionAbility_GetOrionCharHeroFromActorInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.GetOrionCharFromActorInfo
	 */
	struct UOrionAbility_GetOrionCharFromActorInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.GetOrionCharAIFromActorInfo
	 */
	struct UOrionAbility_GetOrionCharAIFromActorInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.GetMontageForEmote
	 */
	struct UOrionAbility_GetMontageForEmote_Params
	{
	public:
		unsigned char                                              EmoteType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.GetExternalAbilityLevel
	 */
	struct UOrionAbility_GetExternalAbilityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.GetAbilitiesByTag
	 */
	struct UOrionAbility_GetAbilitiesByTag_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.EndAura
	 */
	struct UOrionAbility_EndAura_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.EnableAbilityQueuing
	 */
	struct UOrionAbility_EnableAbilityQueuing_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.DisableAbilityQueuing
	 */
	struct UOrionAbility_DisableAbilityQueuing_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.ClearCameraMode
	 */
	struct UOrionAbility_ClearCameraMode_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.ChangeActivationGroup
	 */
	struct UOrionAbility_ChangeActivationGroup_Params
	{
	public:
		unsigned char                                              NewGroup;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.CancelCombo
	 */
	struct UOrionAbility_CancelCombo_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.BP_GetCachedGameplayEffeectSpec
	 */
	struct UOrionAbility_BP_GetCachedGameplayEffeectSpec_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.BP_CommitConsumableStack
	 */
	struct UOrionAbility_BP_CommitConsumableStack_Params
	{
	public:
		bool                                                       BroadcastCommitEvent;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.BP_ApplyGameplayEffectToOwner_Cached
	 */
	struct UOrionAbility_BP_ApplyGameplayEffectToOwner_Cached_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility.BlockMovementInput
	 */
	struct UOrionAbility_BlockMovementInput_Params
	{
	public:
		bool                                                       bResetOnDeath;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.BeginAura
	 */
	struct UOrionAbility_BeginAura_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       EndWhenAbilityEnds;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility.AbilityHasTag
	 */
	struct UOrionAbility_AbilityHasTag_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility_MeleeAttack.ServerMeleeTouch
	 */
	struct UOrionAbility_MeleeAttack_ServerMeleeTouch_Params
	{	};

	/**
	 * Function OrionGame.OrionAbility_MeleeAttack.OnMontageEnded
	 */
	struct UOrionAbility_MeleeAttack_OnMontageEnded_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbility_MeleeAttack.OnMeleeTouch
	 */
	struct UOrionAbility_MeleeAttack_OnMeleeTouch_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityAITask_ExecuteGameplayAbility.K2_SetUp
	 */
	struct UOrionAbilityAITask_ExecuteGameplayAbility_K2_SetUp_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityAITask_ExecuteGameplayAbility.AIExecuteGameplayAbilityByTag
	 */
	struct UOrionAbilityAITask_ExecuteGameplayAbility_AIExecuteGameplayAbilityByTag_Params
	{
	public:
		bool                                                       bWaitForAbilityEnd;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityAITask_ExecuteGameplayAbility.AIExecuteGameplayAbilityByHandle
	 */
	struct UOrionAbilityAITask_ExecuteGameplayAbility_AIExecuteGameplayAbilityByHandle_Params
	{
	public:
		bool                                                       bWaitForAbilityEnd;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityAITask_ExecuteGameplayAbility.AIExecuteGameplayAbilityByClass
	 */
	struct UOrionAbilityAITask_ExecuteGameplayAbility_AIExecuteGameplayAbilityByClass_Params
	{
	public:
		bool                                                       bWaitForAbilityEnd;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityAITask_ExecuteGameplayAbility.AIExecuteAvailableGameplayAbility
	 */
	struct UOrionAbilityAITask_ExecuteGameplayAbility_AIExecuteAvailableGameplayAbility_Params
	{
	public:
		bool                                                       bWaitForAbilityEnd;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_AddPlayerScoreListener.CreateAddPlayerScoreListenerTask
	 */
	struct UOrionAbilityTask_AddPlayerScoreListener_CreateAddPlayerScoreListenerTask_Params
	{
	public:
		class FName                                                ListenerName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_DirectedMovement.DirectedMovementToLocation
	 */
	struct UOrionAbilityTask_DirectedMovement_DirectedMovementToLocation_Params
	{
	public:
		unsigned char                                              MovementSpaceType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MovementDuration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CloseEnoughDistance;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ModifyZ;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_DirectedMovement.DirectedMovementToComponent
	 */
	struct UOrionAbilityTask_DirectedMovement_DirectedMovementToComponent_Params
	{
	public:
		float                                                      MaxMovementDistance;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MovementDuration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      IdealDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ModifyZ;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_DirectedMovement.DirectedMovementToActor
	 */
	struct UOrionAbilityTask_DirectedMovement_DirectedMovementToActor_Params
	{
	public:
		float                                                      MaxMovementDistance;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MovementDuration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      IdealDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ModifyZ;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_DirectedMovement.DirectedMovement
	 */
	struct UOrionAbilityTask_DirectedMovement_DirectedMovement_Params
	{
	public:
		unsigned char                                              MovementSpaceType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MovementDistance;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MovementDuration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      IdealDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ModifyZ;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_InstantTargetData.HitScanTube
	 */
	struct UOrionAbilityTask_InstantTargetData_HitScanTube_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlockingRadius;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OverlapRadius;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMultiHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDebug;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAnimInstance.TryGetOrionChar
	 */
	struct UOrionAnimInstance_TryGetOrionChar_Params
	{	};

	/**
	 * Function OrionGame.OrionAnimInstance.ShouldRateLimitBlueprintTicks
	 */
	struct UOrionAnimInstance_ShouldRateLimitBlueprintTicks_Params
	{
	public:
		bool                                                       bIsHero;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAnimInstance.OwnerHasMatchingGameplayTag
	 */
	struct UOrionAnimInstance_OwnerHasMatchingGameplayTag_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAnimInstance.OnHit
	 */
	struct UOrionAnimInstance_OnHit_Params
	{	};

	/**
	 * Function OrionGame.OrionAnimInstance.IsGameplayCueActive
	 */
	struct UOrionAnimInstance_IsGameplayCueActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAnimInstance.AnimNotify_RightFootStep
	 */
	struct UOrionAnimInstance_AnimNotify_RightFootStep_Params
	{	};

	/**
	 * Function OrionGame.OrionAnimInstance.AnimNotify_LeftFootStep
	 */
	struct UOrionAnimInstance_AnimNotify_LeftFootStep_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName.PlayMontageAndWaitNotifyName
	 */
	struct UOrionAbilityTask_PlayMontageAndWaitNotifyName_PlayMontageAndWaitNotifyName_Params
	{
	public:
		class FName                                                TaskInstanceName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName.OnNotifyEndReceived
	 */
	struct UOrionAbilityTask_PlayMontageAndWaitNotifyName_OnNotifyEndReceived_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName.OnNotifyBeginReceived
	 */
	struct UOrionAbilityTask_PlayMontageAndWaitNotifyName_OnNotifyBeginReceived_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName.OnMontageInterrupted
	 */
	struct UOrionAbilityTask_PlayMontageAndWaitNotifyName_OnMontageInterrupted_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName.OnMontageEnded
	 */
	struct UOrionAbilityTask_PlayMontageAndWaitNotifyName_OnMontageEnded_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_PlayMontageAndWaitNotifyName.OnMontageBlendingOut
	 */
	struct UOrionAbilityTask_PlayMontageAndWaitNotifyName_OnMontageBlendingOut_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_RepeatedAction.PerformRepeatedAction
	 */
	struct UOrionAbilityTask_RepeatedAction_PerformRepeatedAction_Params
	{
	public:
		float                                                      TimeBetweenActions;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalActionCount;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnOrionActor.SpawnOrionActorTransform
	 */
	struct UOrionAbilityTask_SpawnOrionActor_SpawnOrionActorTransform_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnOrionActor.SpawnOrionActorTargetData
	 */
	struct UOrionAbilityTask_SpawnOrionActor_SpawnOrionActorTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnOrionActor.SpawnOrionActor
	 */
	struct UOrionAbilityTask_SpawnOrionActor_SpawnOrionActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnOrionActor.FinishSpawningActor
	 */
	struct UOrionAbilityTask_SpawnOrionActor_FinishSpawningActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnOrionActor.BeginSpawningActor
	 */
	struct UOrionAbilityTask_SpawnOrionActor_BeginSpawningActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectile.SpawnProjectile
	 */
	struct UOrionAbilityTask_SpawnProjectile_SpawnProjectile_Params
	{
	public:
		float                                                      PitchOffset;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YawOffset;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectile.FinishSpawningActor
	 */
	struct UOrionAbilityTask_SpawnProjectile_FinishSpawningActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectile.BeginSpawningActor
	 */
	struct UOrionAbilityTask_SpawnProjectile_BeginSpawningActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectileMulti.SpawnProjectileMulti
	 */
	struct UOrionAbilityTask_SpawnProjectileMulti_SpawnProjectileMulti_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectileMulti.FinishSpawningActorArray
	 */
	struct UOrionAbilityTask_SpawnProjectileMulti_FinishSpawningActorArray_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectileMulti.BeginSpawningActorArray
	 */
	struct UOrionAbilityTask_SpawnProjectileMulti_BeginSpawningActorArray_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectileMulti_HorizontalSpreadFire.SpawnProjectileMulti_HorizontalSpread
	 */
	struct UOrionAbilityTask_SpawnProjectileMulti_HorizontalSpreadFire_SpawnProjectileMulti_HorizontalSpread_Params
	{
	public:
		int32_t                                                    ProjectileCount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchRandom;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchOffset;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YawRange;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YawOffset;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnProjectileMulti_Cone.SpawnProjectileMulti_Cone
	 */
	struct UOrionAbilityTask_SpawnProjectileMulti_Cone_SpawnProjectileMulti_Cone_Params
	{
	public:
		int32_t                                                    ProjectileCount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchRandom;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchOffset;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YawRandom;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YawOffset;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnRig.SpawnRig
	 */
	struct UOrionAbilityTask_SpawnRig_SpawnRig_Params
	{
	public:
		unsigned char                                              RigTeamNum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnRig.FinishSpawningActor
	 */
	struct UOrionAbilityTask_SpawnRig_FinishSpawningActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnRig.BeginSpawningActor
	 */
	struct UOrionAbilityTask_SpawnRig_BeginSpawningActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnWard.SpawnWard
	 */
	struct UOrionAbilityTask_SpawnWard_SpawnWard_Params
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnWard.FinishSpawningActor
	 */
	struct UOrionAbilityTask_SpawnWard_FinishSpawningActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_SpawnWard.BeginSpawningActor
	 */
	struct UOrionAbilityTask_SpawnWard_BeginSpawningActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_StartTargeting.StartTargeting
	 */
	struct UOrionAbilityTask_StartTargeting_StartTargeting_Params
	{
	public:
		class FName                                                TaskInstanceName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ConfirmationType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_StartTargeting.ServerForceClientTargetData
	 */
	struct UOrionAbilityTask_StartTargeting_ServerForceClientTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_StartTargeting.ConfirmOrWait
	 */
	struct UOrionAbilityTask_StartTargeting_ConfirmOrWait_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_StartTargeting.ConfirmOrCancel
	 */
	struct UOrionAbilityTask_StartTargeting_ConfirmOrCancel_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_StartTargeting.CancelImpl
	 */
	struct UOrionAbilityTask_StartTargeting_CancelImpl_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitAbilityLevelUp.WaitThisAbilityLevelUp
	 */
	struct UOrionAbilityTask_WaitAbilityLevelUp_WaitThisAbilityLevelUp_Params
	{
	public:
		bool                                                       OnlyTriggerOnce;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitAbilityLevelUp.WaitAbilityLevelUp
	 */
	struct UOrionAbilityTask_WaitAbilityLevelUp_WaitAbilityLevelUp_Params
	{
	public:
		bool                                                       OnlyTriggerOnce;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitAnyAbilityInput.WaitAnyAbilityInput
	 */
	struct UOrionAbilityTask_WaitAnyAbilityInput_WaitAnyAbilityInput_Params
	{
	public:
		bool                                                       bConsumeInput;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitAnyAbilityInput.OnAnyAbilityInput
	 */
	struct UOrionAbilityTask_WaitAnyAbilityInput_OnAnyAbilityInput_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitForCombo.WaitForCombo
	 */
	struct UOrionAbilityTask_WaitForCombo_WaitForCombo_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitForCombo.SuccessEventCallback
	 */
	struct UOrionAbilityTask_WaitForCombo_SuccessEventCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitForCombo.FailEventCallback
	 */
	struct UOrionAbilityTask_WaitForCombo_FailEventCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitForSpecialAttackRotation.WaitForSpecialAttackRotation
	 */
	struct UOrionAbilityTask_WaitForSpecialAttackRotation_WaitForSpecialAttackRotation_Params
	{
	public:
		unsigned char                                              Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitHeroGameplayTag.WaitHeroGameplayTagRemove
	 */
	struct UOrionAbilityTask_WaitHeroGameplayTag_WaitHeroGameplayTagRemove_Params
	{
	public:
		bool                                                       bAllies;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bEnemies;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bOnlyTriggerOnce;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitHeroGameplayTag.WaitHeroGameplayTagAdd
	 */
	struct UOrionAbilityTask_WaitHeroGameplayTag_WaitHeroGameplayTagAdd_Params
	{
	public:
		bool                                                       bAllies;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bEnemies;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bOnlyTriggerOnce;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitInputPress_WithState.WaitInputPress_WithState
	 */
	struct UOrionAbilityTask_WaitInputPress_WithState_WaitInputPress_WithState_Params
	{
	public:
		bool                                                       bTestAlreadyPressed;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bForceAlreadyPressed;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitInputPress_WithState.OnPressCallback
	 */
	struct UOrionAbilityTask_WaitInputPress_WithState_OnPressCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitKilled.WaitOwnerKilled
	 */
	struct UOrionAbilityTask_WaitKilled_WaitOwnerKilled_Params
	{
	public:
		bool                                                       TriggerOnce;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitKilled.WaitActorKilled
	 */
	struct UOrionAbilityTask_WaitKilled_WaitActorKilled_Params
	{
	public:
		bool                                                       TriggerOnce;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitKilled.OnKilledCallback
	 */
	struct UOrionAbilityTask_WaitKilled_OnKilledCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitLanded.WaitLanded
	 */
	struct UOrionAbilityTask_WaitLanded_WaitLanded_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitLanded.OnLandedCallback
	 */
	struct UOrionAbilityTask_WaitLanded_OnLandedCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitMeleeImpact.OnMeleeImpact
	 */
	struct UOrionAbilityTask_WaitMeleeImpact_OnMeleeImpact_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitMeleeImpact.CreateWaitMovementModeChange
	 */
	struct UOrionAbilityTask_WaitMeleeImpact_CreateWaitMovementModeChange_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileShutdown.WaitProjectileShutdown
	 */
	struct UOrionAbilityTask_WaitProjectileShutdown_WaitProjectileShutdown_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileShutdown.OnShutdownCallback
	 */
	struct UOrionAbilityTask_WaitProjectileShutdown_OnShutdownCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileHitActor.WaitProjectileHitActor
	 */
	struct UOrionAbilityTask_WaitProjectileHitActor_WaitProjectileHitActor_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileHitActor.OnShutdownCallback
	 */
	struct UOrionAbilityTask_WaitProjectileHitActor_OnShutdownCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileHitActor.OnHitActorCallback
	 */
	struct UOrionAbilityTask_WaitProjectileHitActor_OnHitActorCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileStop.WaitProjectileStop
	 */
	struct UOrionAbilityTask_WaitProjectileStop_WaitProjectileStop_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileStop.OnStopCallback
	 */
	struct UOrionAbilityTask_WaitProjectileStop_OnStopCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitProjectileStop.OnShutdownCallback
	 */
	struct UOrionAbilityTask_WaitProjectileStop_OnShutdownCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitSprintCancel.WaitSprintCancel
	 */
	struct UOrionAbilityTask_WaitSprintCancel_WaitSprintCancel_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitSprintCancel.OnSprintDirectionChanged
	 */
	struct UOrionAbilityTask_WaitSprintCancel_OnSprintDirectionChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitSprintCancel.HandleReplicatedEvent
	 */
	struct UOrionAbilityTask_WaitSprintCancel_HandleReplicatedEvent_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityTask_WaitTowerTargetAcquired.WaitTowerTargetAcquired
	 */
	struct UOrionAbilityTask_WaitTowerTargetAcquired_WaitTowerTargetAcquired_Params
	{	};

	/**
	 * Function OrionGame.OrionAIController.GetTeamNum
	 */
	struct AOrionAIController_GetTeamNum_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIController.GetOrionChar
	 */
	struct AOrionAIController_GetOrionChar_Params
	{	};

	/**
	 * Function OrionGame.OrionAIController.GetAIFormation
	 */
	struct AOrionAIController_GetAIFormation_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.OnCharacterDied
	 */
	struct AOrionAIBot_OnCharacterDied_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.K2_SetEnemy
	 */
	struct AOrionAIBot_K2_SetEnemy_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.K2_SetAbilityToUse
	 */
	struct AOrionAIBot_K2_SetAbilityToUse_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.K2_IsSafeToApproachOffensiveLaneGoal
	 */
	struct AOrionAIBot_K2_IsSafeToApproachOffensiveLaneGoal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIBot.K2_IsInsideTurret
	 */
	struct AOrionAIBot_K2_IsInsideTurret_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIBot.K2_GetPrimaryAttackHandle
	 */
	struct AOrionAIBot_K2_GetPrimaryAttackHandle_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.K2_GetEnemySelectionQuery
	 */
	struct AOrionAIBot_K2_GetEnemySelectionQuery_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.IsAbilityInRage
	 */
	struct AOrionAIBot_IsAbilityInRage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIBot.HasUsableAbilityAgainstCurrentEnemy
	 */
	struct AOrionAIBot_HasUsableAbilityAgainstCurrentEnemy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIBot.GetLaneProgress
	 */
	struct AOrionAIBot_GetLaneProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIBot.GetCurrentScriptedBehavior
	 */
	struct AOrionAIBot_GetCurrentScriptedBehavior_Params
	{	};

	/**
	 * Function OrionGame.OrionAIBot.CanActivateAbility
	 */
	struct AOrionAIBot_CanActivateAbility_Params
	{
	public:
		bool                                                       bRequirePerfectMatch;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIController_Jungle.GetSpawner
	 */
	struct AOrionAIController_Jungle_GetSpawner_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.RequestSelfDestruct
	 */
	struct AOrionCharAI_RequestSelfDestruct_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI.RequestAnimation
	 */
	struct AOrionCharAI_RequestAnimation_Params
	{
	public:
		unsigned char                                              Behavior;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLooping;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI.PlaySpawning
	 */
	struct AOrionCharAI_PlaySpawning_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.PlayHeroAggroAlert
	 */
	struct AOrionCharAI_PlayHeroAggroAlert_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.OnRep_DeathData
	 */
	struct AOrionCharAI_OnRep_DeathData_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.OnRep_AIData
	 */
	struct AOrionCharAI_OnRep_AIData_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.Native_DoRangedAttack
	 */
	struct AOrionCharAI_Native_DoRangedAttack_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.Native_DoMeleeAttack
	 */
	struct AOrionCharAI_Native_DoMeleeAttack_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI.GameplayCue_Damage
	 */
	struct AOrionCharAI_GameplayCue_Damage_Params
	{
	public:
		unsigned char                                              EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI.CancelAnimation
	 */
	struct AOrionCharAI_CancelAnimation_Params
	{
	public:
		unsigned char                                              Behavior;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI.ApplyGameplayEffectToSelf
	 */
	struct AOrionCharAI_ApplyGameplayEffectToSelf_Params
	{
	public:
		float                                                      GameplayEffectLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIFormation.HandleFormationMemberDeath
	 */
	struct UOrionAIFormation_HandleFormationMemberDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionAIKismetLibrary.UpdateInfluenceSurce
	 */
	struct UOrionAIKismetLibrary_UpdateInfluenceSurce_Params
	{
	public:
		unsigned char                                              SourceType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceUpdate;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIKismetLibrary.RemoveInfluenceSource
	 */
	struct UOrionAIKismetLibrary_RemoveInfluenceSource_Params
	{
	public:
		bool                                                       bForceUpdate;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIKismetLibrary.GetInfluenceValueAt
	 */
	struct UOrionAIKismetLibrary_GetInfluenceValueAt_Params
	{
	public:
		unsigned char                                              QuerierTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIKismetLibrary.GetBlackboardValueAsAbilitySpecHandle
	 */
	struct UOrionAIKismetLibrary_GetBlackboardValueAsAbilitySpecHandle_Params
	{	};

	/**
	 * Function OrionGame.OrionAIPerceptionComponent.GetRecentDamageTakenFromActor
	 */
	struct UOrionAIPerceptionComponent_GetRecentDamageTakenFromActor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIPerceptionComponent.GetCallForHelpRating
	 */
	struct UOrionAIPerceptionComponent_GetCallForHelpRating_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAIPerceptionSystem.HandleCallForHelp
	 */
	struct UOrionAIPerceptionSystem_HandleCallForHelp_Params
	{	};

	/**
	 * DelegateFunction OrionGame.OrionAITask_FlowFieldMove.MoveTaskCompletedSignature__DelegateSignature
	 */
	struct UOrionAITask_FlowFieldMove_MoveTaskCompletedSignature__DelegateSignature_Params
	{
	public:
		unsigned char                                              Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAITask_FlowFieldMove.FlowFieldMove
	 */
	struct UOrionAITask_FlowFieldMove_FlowFieldMove_Params
	{
	public:
		bool                                                       bLockAILogic;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.TeamCommunicationsActor.StartHidingBeforeDestroy
	 */
	struct ATeamCommunicationsActor_StartHidingBeforeDestroy_Params
	{	};

	/**
	 * Function OrionGame.TeamCommunicationsActor.ShowVisuals
	 */
	struct ATeamCommunicationsActor_ShowVisuals_Params
	{
	public:
		bool                                                       bIsOwningPlayer;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.TeamCommunicationsActor.HideVisualsImmediately
	 */
	struct ATeamCommunicationsActor_HideVisualsImmediately_Params
	{	};

	/**
	 * Function OrionGame.TeamCommunicationsActor.HideVisuals
	 */
	struct ATeamCommunicationsActor_HideVisuals_Params
	{
	public:
		bool                                                       bIsOwningPlayer;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.TeamCommunicationsActor.HideMiniMapIcon
	 */
	struct ATeamCommunicationsActor_HideMiniMapIcon_Params
	{	};

	/**
	 * Function OrionGame.TeamCommunicationsActor.Blueprint_StartHidingBeforeDestroy
	 */
	struct ATeamCommunicationsActor_Blueprint_StartHidingBeforeDestroy_Params
	{
	public:
		bool                                                       bIsOwningPlayer;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ToggleTeamCommsMenu
	 */
	struct AOrionPlayerController_Game_ToggleTeamCommsMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ToggleScoreboard
	 */
	struct AOrionPlayerController_Game_ToggleScoreboard_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ToggleLargeMinimap
	 */
	struct AOrionPlayerController_Game_ToggleLargeMinimap_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ToggleHUDMouse
	 */
	struct AOrionPlayerController_Game_ToggleHUDMouse_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ToggleEscapeMenu
	 */
	struct AOrionPlayerController_Game_ToggleEscapeMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ToggleCardMenu
	 */
	struct AOrionPlayerController_Game_ToggleCardMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.Suicide
	 */
	struct AOrionPlayerController_Game_Suicide_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.SetHealthCheat
	 */
	struct AOrionPlayerController_Game_SetHealthCheat_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ServerTransitionToSpectating
	 */
	struct AOrionPlayerController_Game_ServerTransitionToSpectating_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ServerSurrender
	 */
	struct AOrionPlayerController_Game_ServerSurrender_Params
	{
	public:
		bool                                                       bSurrender;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ServerSuicide
	 */
	struct AOrionPlayerController_Game_ServerSuicide_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ServerSetIsUsingGamepad
	 */
	struct AOrionPlayerController_Game_ServerSetIsUsingGamepad_Params
	{
	public:
		bool                                                       bNewIsUsingGamepad;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ServerForceStartGame
	 */
	struct AOrionPlayerController_Game_ServerForceStartGame_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ScriptAIBehaviorCheat
	 */
	struct AOrionPlayerController_Game_ScriptAIBehaviorCheat_Params
	{
	public:
		class FName                                                ScriptedBehaviorName;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ReportClientHitch
	 */
	struct AOrionPlayerController_Game_ReportClientHitch_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ReportBug
	 */
	struct AOrionPlayerController_Game_ReportBug_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.OpenUpgradePanel
	 */
	struct AOrionPlayerController_Game_OpenUpgradePanel_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.OpenScoreboard
	 */
	struct AOrionPlayerController_Game_OpenScoreboard_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.OnHUDCursorModeToggle
	 */
	struct AOrionPlayerController_Game_OnHUDCursorModeToggle_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.OnHUDCursorModeRelease
	 */
	struct AOrionPlayerController_Game_OnHUDCursorModeRelease_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.OnHUDCursorModePress
	 */
	struct AOrionPlayerController_Game_OnHUDCursorModePress_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.GetLocationRotationForSpawnActor
	 */
	struct AOrionPlayerController_Game_GetLocationRotationForSpawnActor_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.GetLocationForTeamCommActor
	 */
	struct AOrionPlayerController_Game_GetLocationForTeamCommActor_Params
	{
	public:
		float                                                      MaxRange;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ExecuteTeamCommData
	 */
	struct AOrionPlayerController_Game_ExecuteTeamCommData_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.DisplayGameEventMessage
	 */
	struct AOrionPlayerController_Game_DisplayGameEventMessage_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.DestroyTeamCommsActor
	 */
	struct AOrionPlayerController_Game_DestroyTeamCommsActor_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.CloseUpgradePanel
	 */
	struct AOrionPlayerController_Game_CloseUpgradePanel_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.CloseTeamCommsMenu
	 */
	struct AOrionPlayerController_Game_CloseTeamCommsMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.CloseScoreboard
	 */
	struct AOrionPlayerController_Game_CloseScoreboard_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.CloseCardMenu
	 */
	struct AOrionPlayerController_Game_CloseCardMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientWardPing
	 */
	struct AOrionPlayerController_Game_ClientWardPing_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientTransitionToSpectating
	 */
	struct AOrionPlayerController_Game_ClientTransitionToSpectating_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientSurrender
	 */
	struct AOrionPlayerController_Game_ClientSurrender_Params
	{
	public:
		bool                                                       bSurrender;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientStopKillcam
	 */
	struct AOrionPlayerController_Game_ClientStopKillcam_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientPlayKillcam
	 */
	struct AOrionPlayerController_Game_ClientPlayKillcam_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientMatchHasEnded
	 */
	struct AOrionPlayerController_Game_ClientMatchHasEnded_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientHandlePostLogin
	 */
	struct AOrionPlayerController_Game_ClientHandlePostLogin_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ClientHandleMatchIsWaitingToStart
	 */
	struct AOrionPlayerController_Game_ClientHandleMatchIsWaitingToStart_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.Client_ReceiveTeamComm
	 */
	struct AOrionPlayerController_Game_Client_ReceiveTeamComm_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.CancelAllAbilitiesCheat
	 */
	struct AOrionPlayerController_Game_CancelAllAbilitiesCheat_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.CancelAbilityForPawnCheat
	 */
	struct AOrionPlayerController_Game_CancelAbilityForPawnCheat_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ActivateAIAbility
	 */
	struct AOrionPlayerController_Game_ActivateAIAbility_Params
	{
	public:
		unsigned char                                              InputID;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_Game.ActivateAbilityForPawnCheat
	 */
	struct AOrionPlayerController_Game_ActivateAbilityForPawnCheat_Params
	{
	public:
		unsigned char                                              InputID;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAnalytics.FireEvent_ModifiedSettings
	 */
	struct UOrionAnalytics_FireEvent_ModifiedSettings_Params
	{	};

	/**
	 * Function OrionGame.OrionAnalytics.FireEvent_InitialLoadComplete
	 */
	struct UOrionAnalytics_FireEvent_InitialLoadComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionCPPHeroBaseAnimInstance.AnimNotify_EnteredDefaultIdle
	 */
	struct UOrionCPPHeroBaseAnimInstance_AnimNotify_EnteredDefaultIdle_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_MeleeUpperBody
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_MeleeUpperBody_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_MeleeFullBody
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_MeleeFullBody_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_JumpLandingExit
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_JumpLandingExit_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_JumpExit
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_JumpExit_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_JogToIdle
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_JogToIdle_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_IdleToJog
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_IdleToJog_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_HitReactEnd
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_HitReactEnd_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_ExitedTurnInPlace
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_ExitedTurnInPlace_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_ExitedIdle
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_ExitedIdle_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_EnteredTurnInPlace
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_EnteredTurnInPlace_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHeroAnimInstance.AnimNotify_EnteredIdle
	 */
	struct UOrionBaseHeroAnimInstance_AnimNotify_EnteredIdle_Params
	{	};

	/**
	 * Function OrionGame.OrionArcBladeAnimInstance.EnterBladeState03
	 */
	struct UOrionArcBladeAnimInstance_EnterBladeState03_Params
	{	};

	/**
	 * Function OrionGame.OrionArcBladeAnimInstance.EnterBladeState02
	 */
	struct UOrionArcBladeAnimInstance_EnterBladeState02_Params
	{	};

	/**
	 * Function OrionGame.OrionArcBladeAnimInstance.EnterBladeState01
	 */
	struct UOrionArcBladeAnimInstance_EnterBladeState01_Params
	{	};

	/**
	 * Function OrionGame.OrionArcBladeAnimInstance.EnterBladeState00
	 */
	struct UOrionArcBladeAnimInstance_EnterBladeState00_Params
	{	};

	/**
	 * Function OrionGame.OrionMurielAnimInstance.AnimNotify_Jump_Land_End
	 */
	struct UOrionMurielAnimInstance_AnimNotify_Jump_Land_End_Params
	{	};

	/**
	 * Function OrionGame.OrionPriceAnimInstance.AnimNotify_IK_HndShotGun_On
	 */
	struct UOrionPriceAnimInstance_AnimNotify_IK_HndShotGun_On_Params
	{	};

	/**
	 * Function OrionGame.OrionPriceAnimInstance.AnimNotify_IK_HndShotGun_Off
	 */
	struct UOrionPriceAnimInstance_AnimNotify_IK_HndShotGun_Off_Params
	{	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.SimulateBasicFlight
	 */
	struct UOrionCharMovementComponent_SimulateBasicFlight_Params
	{
	public:
		float                                                      MaxDistancePerIncrement;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxIncrements;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.OrionServerMoveOld
	 */
	struct UOrionCharMovementComponent_OrionServerMoveOld_Params
	{
	public:
		float                                                      OldTimeStamp;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              OldMoveFlags;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.OrionServerMoveDualHybridRootMotion
	 */
	struct UOrionCharMovementComponent_OrionServerMoveDualHybridRootMotion_Params
	{
	public:
		float                                                      TimeStamp0;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PendingFlags;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   View0;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewFlags;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   View;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClientBaseBoneName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.OrionServerMoveDual
	 */
	struct UOrionCharMovementComponent_OrionServerMoveDual_Params
	{
	public:
		float                                                      TimeStamp0;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PendingFlags;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   View0;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewFlags;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   View;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClientBaseBoneName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.OrionServerMove
	 */
	struct UOrionCharMovementComponent_OrionServerMove_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              CompressedMoveFlags;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientRoll;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   View;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClientBaseBoneName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientMovementMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.LaunchToPointFromTargetData
	 */
	struct UOrionCharMovementComponent_LaunchToPointFromTargetData_Params
	{
	public:
		float                                                      LaunchVelocityXY;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.LaunchToPoint
	 */
	struct UOrionCharMovementComponent_LaunchToPoint_Params
	{
	public:
		float                                                      LaunchVelocityXY;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.LaunchInDirectionFromTargetData
	 */
	struct UOrionCharMovementComponent_LaunchInDirectionFromTargetData_Params
	{
	public:
		float                                                      LaunchVelocity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.LaunchInDirection
	 */
	struct UOrionCharMovementComponent_LaunchInDirection_Params
	{
	public:
		float                                                      LaunchVelocity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.ApplyKnockup
	 */
	struct UOrionCharMovementComponent_ApplyKnockup_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharMovementComponent.ApplyKnockback
	 */
	struct UOrionCharMovementComponent_ApplyKnockback_Params
	{
	public:
		float                                                      DistanceXY;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHeroChainsAnimInstance.SetUpBellyChainOrientation
	 */
	struct UOrionHeroChainsAnimInstance_SetUpBellyChainOrientation_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroPriceAnimInstance.AnimNotify_IK_HndShotGun_On
	 */
	struct UOrionHeroPriceAnimInstance_AnimNotify_IK_HndShotGun_On_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroPriceAnimInstance.AnimNotify_IK_HndShotGun_Off
	 */
	struct UOrionHeroPriceAnimInstance_AnimNotify_IK_HndShotGun_Off_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroTwinblastAnimInstance.OnMontageStartedDelegate
	 */
	struct UOrionHeroTwinblastAnimInstance_OnMontageStartedDelegate_Params
	{	};

	/**
	 * Function OrionGame.OrionMinionAnimInstance.RequestBehavior
	 */
	struct UOrionMinionAnimInstance_RequestBehavior_Params
	{
	public:
		unsigned char                                              Behavior;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLooping;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMinionAnimInstance.CancelBehavior
	 */
	struct UOrionMinionAnimInstance_CancelBehavior_Params
	{
	public:
		unsigned char                                              Behavior;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTerminusAnimInstance.AnimNotify_StartLooping
	 */
	struct UOrionTerminusAnimInstance_AnimNotify_StartLooping_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.ShowNotification
	 */
	struct UOrionNotificationLibrary_ShowNotification_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      DisplayTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.SetNotificationDisplayTime
	 */
	struct UOrionNotificationLibrary_SetNotificationDisplayTime_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.RemoveNotification
	 */
	struct UOrionNotificationLibrary_RemoveNotification_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.OnNotificationActionTaken
	 */
	struct UOrionNotificationLibrary_OnNotificationActionTaken_Params
	{
	public:
		unsigned char                                              InSelection;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.KillNotification
	 */
	struct UOrionNotificationLibrary_KillNotification_Params
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.IsNotificationValid
	 */
	struct UOrionNotificationLibrary_IsNotificationValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.GetNotificationDisplayTimeText
	 */
	struct UOrionNotificationLibrary_GetNotificationDisplayTimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.Equal
	 */
	struct UOrionNotificationLibrary_Equal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.ClearAllErrorNotifications
	 */
	struct UOrionNotificationLibrary_ClearAllErrorNotifications_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.BindToNotificationResponse
	 */
	struct UOrionNotificationLibrary_BindToNotificationResponse_Params
	{
	public:
		class FScriptDelegate                                      InCallback;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationLibrary.AddNotification
	 */
	struct UOrionNotificationLibrary_AddNotification_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationInterface.GetNotification
	 */
	struct UOrionNotificationInterface_GetNotification_Params
	{	};

	/**
	 * Function OrionGame.OrionAsyncAction_InteractiveNotification.ShowInteractiveNotification
	 */
	struct UOrionAsyncAction_InteractiveNotification_ShowInteractiveNotification_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                BodyText;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                LeftButton;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                RightButton;                                             // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FName                                                Identifier;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAsyncAction_ModalError.ShowModalError
	 */
	struct UOrionAsyncAction_ModalError_ShowModalError_Params
	{
	public:
		class FText                                                ErrorMessage;                                            // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAsyncAction_ShowConfirmation.ShowConfirmationDialog
	 */
	struct UOrionAsyncAction_ShowConfirmation_ShowConfirmationDialog_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                ConfirmButtonText;                                       // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                DeclineButtonText;                                       // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      InDisplayTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowCancelButton;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAsyncAction_TimedLerp.TimedLerp
	 */
	struct UOrionAsyncAction_TimedLerp_TimedLerp_Params
	{
	public:
		float                                                      StartValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LerpDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EaseOutExp;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWholeNumbersOnly;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_ShieldPenetration
	 */
	struct UOrionCombatSet_OnRep_ShieldPenetration_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_PhysicalPenetrationRating
	 */
	struct UOrionCombatSet_OnRep_PhysicalPenetrationRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_PerseveranceRating
	 */
	struct UOrionCombatSet_OnRep_PerseveranceRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_LifeStealRating
	 */
	struct UOrionCombatSet_OnRep_LifeStealRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_LifeGrantRating
	 */
	struct UOrionCombatSet_OnRep_LifeGrantRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_LeftClickBasePower
	 */
	struct UOrionCombatSet_OnRep_LeftClickBasePower_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_LeftClickARC
	 */
	struct UOrionCombatSet_OnRep_LeftClickARC_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_HealingBonusSource
	 */
	struct UOrionCombatSet_OnRep_HealingBonusSource_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_EnergyPenetrationRating
	 */
	struct UOrionCombatSet_OnRep_EnergyPenetrationRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_DamageToEnergyConversionRating
	 */
	struct UOrionCombatSet_OnRep_DamageToEnergyConversionRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_DamagePenetration
	 */
	struct UOrionCombatSet_OnRep_DamagePenetration_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_DamageBonusSource
	 */
	struct UOrionCombatSet_OnRep_DamageBonusSource_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_CriticalDamageChance
	 */
	struct UOrionCombatSet_OnRep_CriticalDamageChance_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_CriticalDamageBonus
	 */
	struct UOrionCombatSet_OnRep_CriticalDamageBonus_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_CleaveRating
	 */
	struct UOrionCombatSet_OnRep_CleaveRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_BasePower
	 */
	struct UOrionCombatSet_OnRep_BasePower_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_BaseAttackTime
	 */
	struct UOrionCombatSet_OnRep_BaseAttackTime_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_AttackSpeedRating
	 */
	struct UOrionCombatSet_OnRep_AttackSpeedRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_AttackRatingCoeffecient
	 */
	struct UOrionCombatSet_OnRep_AttackRatingCoeffecient_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_AttackRating
	 */
	struct UOrionCombatSet_OnRep_AttackRating_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatSet.OnRep_AoERating
	 */
	struct UOrionCombatSet_OnRep_AoERating_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_MaxEnergy
	 */
	struct UOrionEnergySet_OnRep_MaxEnergy_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_EnergyRegenRate
	 */
	struct UOrionEnergySet_OnRep_EnergyRegenRate_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_EnergyReductionPercentage
	 */
	struct UOrionEnergySet_OnRep_EnergyReductionPercentage_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_EnergyReduction
	 */
	struct UOrionEnergySet_OnRep_EnergyReduction_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_Energy
	 */
	struct UOrionEnergySet_OnRep_Energy_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_CooldownReductionValue
	 */
	struct UOrionEnergySet_OnRep_CooldownReductionValue_Params
	{	};

	/**
	 * Function OrionGame.OrionEnergySet.OnRep_CooldownReductionPercentage
	 */
	struct UOrionEnergySet_OnRep_CooldownReductionPercentage_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_TargetMaxDamage
	 */
	struct UOrionHealthSet_OnRep_TargetMaxDamage_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_Shield
	 */
	struct UOrionHealthSet_OnRep_Shield_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_PhysicalResistanceRating
	 */
	struct UOrionHealthSet_OnRep_PhysicalResistanceRating_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_MaxShield
	 */
	struct UOrionHealthSet_OnRep_MaxShield_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_MaxHealth
	 */
	struct UOrionHealthSet_OnRep_MaxHealth_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_HealthRegenRate
	 */
	struct UOrionHealthSet_OnRep_HealthRegenRate_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_Health
	 */
	struct UOrionHealthSet_OnRep_Health_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_HealingBonusTarget
	 */
	struct UOrionHealthSet_OnRep_HealingBonusTarget_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_EnergyResistanceRating
	 */
	struct UOrionHealthSet_OnRep_EnergyResistanceRating_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_DamageResistance
	 */
	struct UOrionHealthSet_OnRep_DamageResistance_Params
	{	};

	/**
	 * Function OrionGame.OrionHealthSet.OnRep_DamageBonusTarget
	 */
	struct UOrionHealthSet_OnRep_DamageBonusTarget_Params
	{	};

	/**
	 * Function OrionGame.OrionMoveSet.OnRep_MaxSprintSpeed
	 */
	struct UOrionMoveSet_OnRep_MaxSprintSpeed_Params
	{	};

	/**
	 * Function OrionGame.OrionMoveSet.OnRep_MaxMoveSpeed
	 */
	struct UOrionMoveSet_OnRep_MaxMoveSpeed_Params
	{	};

	/**
	 * Function OrionGame.OrionMoveSet.OnRep_CombatSlow
	 */
	struct UOrionMoveSet_OnRep_CombatSlow_Params
	{	};

	/**
	 * Function OrionGame.OrionMoveSet.OnRep_AvatarScale
	 */
	struct UOrionMoveSet_OnRep_AvatarScale_Params
	{	};

	/**
	 * Function OrionGame.OrionVisionSet.OnRep_VisionRadius
	 */
	struct UOrionVisionSet_OnRep_VisionRadius_Params
	{	};

	/**
	 * Function OrionGame.OrionBotAISpawner.HandleSpawnedAIDeath
	 */
	struct AOrionBotAISpawner_HandleSpawnedAIDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.WaveSpawnManager
	 */
	struct AOrionCharAISpawner_WaveSpawnManager_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.StartSpawningNextAIFormation
	 */
	struct AOrionCharAISpawner_StartSpawningNextAIFormation_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.SpawnNextAIFromPool
	 */
	struct AOrionCharAISpawner_SpawnNextAIFromPool_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.SpawnAI
	 */
	struct AOrionCharAISpawner_SpawnAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.SetSpawnerType
	 */
	struct AOrionCharAISpawner_SetSpawnerType_Params
	{
	public:
		unsigned char                                              InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.SendAggroManagerMessage
	 */
	struct AOrionCharAISpawner_SendAggroManagerMessage_Params
	{
	public:
		unsigned char                                              Message;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.SelectSpawnLocation
	 */
	struct AOrionCharAISpawner_SelectSpawnLocation_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.RemoveAggroEffectForHero
	 */
	struct AOrionCharAISpawner_RemoveAggroEffectForHero_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnStartSpawningAIFormation
	 */
	struct AOrionCharAISpawner_OnStartSpawningAIFormation_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnReplenishWaveTimerStart
	 */
	struct AOrionCharAISpawner_OnReplenishWaveTimerStart_Params
	{
	public:
		float                                                      InReplenishDelayTimer;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnRep_ReplicatedSpawnTime
	 */
	struct AOrionCharAISpawner_OnRep_ReplicatedSpawnTime_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnPreSpawnAI
	 */
	struct AOrionCharAISpawner_OnPreSpawnAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnPostSpawnedAI
	 */
	struct AOrionCharAISpawner_OnPostSpawnedAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnIntroSpawnForAI
	 */
	struct AOrionCharAISpawner_OnIntroSpawnForAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnHandleMatchStart
	 */
	struct AOrionCharAISpawner_OnHandleMatchStart_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnAIFormationSpawned
	 */
	struct AOrionCharAISpawner_OnAIFormationSpawned_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnAggroResetStarted
	 */
	struct AOrionCharAISpawner_OnAggroResetStarted_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.OnAggroResetFinished
	 */
	struct AOrionCharAISpawner_OnAggroResetFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.IsSpawningAnAIFormation
	 */
	struct AOrionCharAISpawner_IsSpawningAnAIFormation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.IsAggroManagerStateRespawning
	 */
	struct AOrionCharAISpawner_IsAggroManagerStateRespawning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.IsAggroManagerStateResetting
	 */
	struct AOrionCharAISpawner_IsAggroManagerStateResetting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.IsAggroManagerStateInCombat
	 */
	struct AOrionCharAISpawner_IsAggroManagerStateInCombat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.HandleSpawnedAIDestroyed
	 */
	struct AOrionCharAISpawner_HandleSpawnedAIDestroyed_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.HandleSpawnedAIDeath
	 */
	struct AOrionCharAISpawner_HandleSpawnedAIDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.HandleMatchStarted
	 */
	struct AOrionCharAISpawner_HandleMatchStarted_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.HandleMatchEnded
	 */
	struct AOrionCharAISpawner_HandleMatchEnded_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.GetSpawnerAICount
	 */
	struct AOrionCharAISpawner_GetSpawnerAICount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.GetAggroManagerSpawnedList
	 */
	struct AOrionCharAISpawner_GetAggroManagerSpawnedList_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.GetAggroManagerHeroesWithAggro
	 */
	struct AOrionCharAISpawner_GetAggroManagerHeroesWithAggro_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.GetAggroManagerHeroesInRange
	 */
	struct AOrionCharAISpawner_GetAggroManagerHeroesInRange_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.ForceRestartSpawner
	 */
	struct AOrionCharAISpawner_ForceRestartSpawner_Params
	{
	public:
		unsigned char                                              InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.FinishSpawningNextAIFormation
	 */
	struct AOrionCharAISpawner_FinishSpawningNextAIFormation_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.EnableSpawner
	 */
	struct AOrionCharAISpawner_EnableSpawner_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.DisableSpawner
	 */
	struct AOrionCharAISpawner_DisableSpawner_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.ChangeTeamOldVisionManagerOnly
	 */
	struct AOrionCharAISpawner_ChangeTeamOldVisionManagerOnly_Params
	{
	public:
		unsigned char                                              NewTeam;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAISpawner.ApplyAggroEffectForHero
	 */
	struct AOrionCharAISpawner_ApplyAggroEffectForHero_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAISpawner.AddAIToNextWave
	 */
	struct AOrionCharAISpawner_AddAIToNextWave_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.WellTagCallback_VisibleToEnemy
	 */
	struct AOrionRigs_WellTagCallback_VisibleToEnemy_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRigs.SetPlayerThatPlacedThisRig
	 */
	struct AOrionRigs_SetPlayerThatPlacedThisRig_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.PlayerCollectCoins
	 */
	struct AOrionRigs_PlayerCollectCoins_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.OnSpawnCoins
	 */
	struct AOrionRigs_OnSpawnCoins_Params
	{
	public:
		float                                                      ResourceAmount;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRigs.OnRep_AttachedToWell
	 */
	struct AOrionRigs_OnRep_AttachedToWell_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.OnAttachedToWell
	 */
	struct AOrionRigs_OnAttachedToWell_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.GetWellResourcePercentLeft
	 */
	struct AOrionRigs_GetWellResourcePercentLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRigs.GetPlayerThatPlacedRig
	 */
	struct AOrionRigs_GetPlayerThatPlacedRig_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.GetMatchTimePlaced
	 */
	struct AOrionRigs_GetMatchTimePlaced_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRigs.GetCoinSpawnLocation
	 */
	struct AOrionRigs_GetCoinSpawnLocation_Params
	{	};

	/**
	 * Function OrionGame.OrionRigs.GetBoostedRigScaler
	 */
	struct AOrionRigs_GetBoostedRigScaler_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRigs.GetAttchedToWell
	 */
	struct AOrionRigs_GetAttchedToWell_Params
	{	};

	/**
	 * Function OrionGame.OrionVisionWard.OnVisionWardTimedOut
	 */
	struct AOrionVisionWard_OnVisionWardTimedOut_Params
	{	};

	/**
	 * Function OrionGame.OrionVisionWard.OnPlayerSightedPing
	 */
	struct AOrionVisionWard_OnPlayerSightedPing_Params
	{	};

	/**
	 * Function OrionGame.OrionVisionWard.HandleTrackedHeroDeath
	 */
	struct AOrionVisionWard_HandleTrackedHeroDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionVisionWard.GetLifeSpanPercentage
	 */
	struct AOrionVisionWard_GetLifeSpanPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.OnRep_Scale
	 */
	struct AOrionGameplayVolume_OnRep_Scale_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayVolume.OnEndOverlapCallback
	 */
	struct AOrionGameplayVolume_OnEndOverlapCallback_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.OnBeginOverlapCallback
	 */
	struct AOrionGameplayVolume_OnBeginOverlapCallback_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.K2_OnEndOverlapCallback
	 */
	struct AOrionGameplayVolume_K2_OnEndOverlapCallback_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.K2_OnBeginOverlapCallback
	 */
	struct AOrionGameplayVolume_K2_OnBeginOverlapCallback_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.HandleMatchStarted
	 */
	struct AOrionGameplayVolume_HandleMatchStarted_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayVolume.GetNumAppliedEffectsLeftToApply
	 */
	struct AOrionGameplayVolume_GetNumAppliedEffectsLeftToApply_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.CanStillApplyEffectsToTargets
	 */
	struct AOrionGameplayVolume_CanStillApplyEffectsToTargets_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolume.ApplyEffects
	 */
	struct AOrionGameplayVolume_ApplyEffects_Params
	{	};

	/**
	 * Function OrionGame.OrionObjectiveCapturePoint.OnOverlapBegin
	 */
	struct AOrionObjectiveCapturePoint_OnOverlapBegin_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionObjectiveCapturePoint.OnObjectiveCaptured
	 */
	struct AOrionObjectiveCapturePoint_OnObjectiveCaptured_Params
	{	};

	/**
	 * Function OrionGame.OrionObjectiveCapturePoint.OnManuallyHandleCapture
	 */
	struct AOrionObjectiveCapturePoint_OnManuallyHandleCapture_Params
	{
	public:
		unsigned char                                              OtherActorTeamNum;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionObjectiveCapturePoint.OnCaptureHandle
	 */
	struct AOrionObjectiveCapturePoint_OnCaptureHandle_Params
	{	};

	/**
	 * Function OrionGame.OrionPedestalHero.OnSkinChanged
	 */
	struct AOrionPedestalHero_OnSkinChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.ServerSetPlayerHeroDataSpec
	 */
	struct AOrionPlayerState_Base_ServerSetPlayerHeroDataSpec_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.ServerSetCardDeck
	 */
	struct AOrionPlayerState_Base_ServerSetCardDeck_Params
	{
	public:
		class FString                                              DeckId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.ServerClearPlayerHeroData
	 */
	struct AOrionPlayerState_Base_ServerClearPlayerHeroData_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.RemoveCardDataFromDeck
	 */
	struct AOrionPlayerState_Base_RemoveCardDataFromDeck_Params
	{
	public:
		bool                                                       bRemoveEntireStack;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.OnRep_Team
	 */
	struct AOrionPlayerState_Base_OnRep_Team_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.OnRep_PartyOwner
	 */
	struct AOrionPlayerState_Base_OnRep_PartyOwner_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.OnRep_HeroDataSpec
	 */
	struct AOrionPlayerState_Base_OnRep_HeroDataSpec_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.OnRep_CardsInDeck
	 */
	struct AOrionPlayerState_Base_OnRep_CardsInDeck_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.OnRep_bReadyToStartMatch
	 */
	struct AOrionPlayerState_Base_OnRep_bReadyToStartMatch_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.OnRep_bInitializedFromMatchmakingData
	 */
	struct AOrionPlayerState_Base_OnRep_bInitializedFromMatchmakingData_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.GetTeamNum
	 */
	struct AOrionPlayerState_Base_GetTeamNum_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Base.ClientFailedToPickHero
	 */
	struct AOrionPlayerState_Base_ClientFailedToPickHero_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Base._BPGetHeroData
	 */
	struct AOrionPlayerState_Base__BPGetHeroData_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.UpdateIsUltimateReady
	 */
	struct AOrionPlayerState_Game_UpdateIsUltimateReady_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.UndoReplaceCardDataAtIndex
	 */
	struct AOrionPlayerState_Game_UndoReplaceCardDataAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.UndoRemoveCardFromHandAtIndex
	 */
	struct AOrionPlayerState_Game_UndoRemoveCardFromHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.UndoAddCardToHandAtIndex
	 */
	struct AOrionPlayerState_Game_UndoAddCardToHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.TriggerMapPing
	 */
	struct AOrionPlayerState_Game_TriggerMapPing_Params
	{
	public:
		unsigned char                                              InTeamNum;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PingTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.SetCardActivationPointsMax
	 */
	struct AOrionPlayerState_Game_SetCardActivationPointsMax_Params
	{
	public:
		int32_t                                                    NewMaxTotal;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.ServerTryToSetPlayerHeroDataSpecFromTeamSelection
	 */
	struct AOrionPlayerState_Game_ServerTryToSetPlayerHeroDataSpecFromTeamSelection_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.ServerAbilityLevelUp
	 */
	struct AOrionPlayerState_Game_ServerAbilityLevelUp_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.ReplaceCardDataAtIndex
	 */
	struct AOrionPlayerState_Game_ReplaceCardDataAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.RemoveCardFromHandAtIndex
	 */
	struct AOrionPlayerState_Game_RemoveCardFromHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnRep_SurrenderVote
	 */
	struct AOrionPlayerState_Game_OnRep_SurrenderVote_Params
	{
	public:
		unsigned char                                              OldVote;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnRep_PlayersHand
	 */
	struct AOrionPlayerState_Game_OnRep_PlayersHand_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnRep_DidRejoin
	 */
	struct AOrionPlayerState_Game_OnRep_DidRejoin_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnRep_ClientDamageLog
	 */
	struct AOrionPlayerState_Game_OnRep_ClientDamageLog_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnRep_CardActivationPointsSpent
	 */
	struct AOrionPlayerState_Game_OnRep_CardActivationPointsSpent_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnRep_CardActivationPointsMax
	 */
	struct AOrionPlayerState_Game_OnRep_CardActivationPointsMax_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.OnPlayerModifiedCardInHand
	 */
	struct AOrionPlayerState_Game_OnPlayerModifiedCardInHand_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GivePlayerCardActivationPoints
	 */
	struct AOrionPlayerState_Game_GivePlayerCardActivationPoints_Params
	{
	public:
		int32_t                                                    PointsEarned;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetTimeLeftToRespawn
	 */
	struct AOrionPlayerState_Game_GetTimeLeftToRespawn_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetSurrenderVote
	 */
	struct AOrionPlayerState_Game_GetSurrenderVote_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetCurrentPawn
	 */
	struct AOrionPlayerState_Game_GetCurrentPawn_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetCardActivationPointsSpent
	 */
	struct AOrionPlayerState_Game_GetCardActivationPointsSpent_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetCardActivationPointsMax
	 */
	struct AOrionPlayerState_Game_GetCardActivationPointsMax_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetCardActivationPointsLeft
	 */
	struct AOrionPlayerState_Game_GetCardActivationPointsLeft_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.GetAttachedBuffs
	 */
	struct AOrionPlayerState_Game_GetAttachedBuffs_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.ClientWhyStuck
	 */
	struct AOrionPlayerState_Game_ClientWhyStuck_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_Game.AddCardDataToHandAtIndex
	 */
	struct AOrionPlayerState_Game_AddCardDataToHandAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCarriedObjective.ReturnToBase
	 */
	struct AOrionCarriedObjective_ReturnToBase_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.ResetCarriedObjectiveTimers
	 */
	struct AOrionCarriedObjective_ResetCarriedObjectiveTimers_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.OnStartTeleportation
	 */
	struct AOrionCarriedObjective_OnStartTeleportation_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.OnScoredObjective
	 */
	struct AOrionCarriedObjective_OnScoredObjective_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.OnRep_ReturnToBaseGameTime
	 */
	struct AOrionCarriedObjective_OnRep_ReturnToBaseGameTime_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.OnRep_CurrentHolder
	 */
	struct AOrionCarriedObjective_OnRep_CurrentHolder_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.OnObjectiveDropped
	 */
	struct AOrionCarriedObjective_OnObjectiveDropped_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.OnFinishTeleportation
	 */
	struct AOrionCarriedObjective_OnFinishTeleportation_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.MarkReadyToDespawn
	 */
	struct AOrionCarriedObjective_MarkReadyToDespawn_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.IsHeld
	 */
	struct AOrionCarriedObjective_IsHeld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCarriedObjective.HandleHomingEnterPhaseShift
	 */
	struct AOrionCarriedObjective_HandleHomingEnterPhaseShift_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.HandleHomingDeath
	 */
	struct AOrionCarriedObjective_HandleHomingDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.HandleCurrentHoldersDestroyed
	 */
	struct AOrionCarriedObjective_HandleCurrentHoldersDestroyed_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.HandleCurrentHoldersDeath
	 */
	struct AOrionCarriedObjective_HandleCurrentHoldersDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionCarriedObjective.GetObjectiveMaxLifeSpan
	 */
	struct AOrionCarriedObjective_GetObjectiveMaxLifeSpan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCarriedObjective.GetObjectiveLifeSpan
	 */
	struct AOrionCarriedObjective_GetObjectiveLifeSpan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCarriedObjective.GetCurrentObjectiveMaxLifeSpan
	 */
	struct AOrionCarriedObjective_GetCurrentObjectiveMaxLifeSpan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCarriedObjective.GetCurrentObjectiveLifeSpan
	 */
	struct AOrionCarriedObjective_GetCurrentObjectiveLifeSpan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCarriedObjective.DropObjective
	 */
	struct AOrionCarriedObjective_DropObjective_Params
	{	};

	/**
	 * Function OrionGame.OrionBotAbilityPicker.PickAbilityAgainstActor
	 */
	struct UOrionBotAbilityPicker_PickAbilityAgainstActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionBTService_GetEnemy.ScoreTargetEnemy
	 */
	struct UOrionBTService_GetEnemy_ScoreTargetEnemy_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionBTService_GetEnemy.ReceiveTick
	 */
	struct UOrionBTService_GetEnemy_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.OrionButton.SimpleButtonDelegate__DelegateSignature
	 */
	struct UOrionButton_SimpleButtonDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function OrionGame.OrionButton.OnStateChanged
	 */
	struct UOrionButton_OnStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCard.OnRep_UpgradeCards
	 */
	struct AOrionCard_OnRep_UpgradeCards_Params
	{	};

	/**
	 * Function OrionGame.OrionCard.GetTotalCardCost
	 */
	struct AOrionCard_GetTotalCardCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCard.GetNumOfUpgradeSlotsUsed
	 */
	struct AOrionCard_GetNumOfUpgradeSlotsUsed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCard.GetNumOfUpgradeSlotsOpen
	 */
	struct AOrionCard_GetNumOfUpgradeSlotsOpen_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCard.GetNumOfUpgradeSlots
	 */
	struct AOrionCard_GetNumOfUpgradeSlots_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCard.GetIconForUpgradeSlot
	 */
	struct AOrionCard_GetIconForUpgradeSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCard.GetCardData_Blueprint
	 */
	struct AOrionCard_GetCardData_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionCardSelectionWidget.ExitSelectionMode
	 */
	struct UOrionCardSelectionWidget_ExitSelectionMode_Params
	{	};

	/**
	 * Function OrionGame.OrionCardSelectionWidget.EnterSelectionMode
	 */
	struct UOrionCardSelectionWidget_EnterSelectionMode_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityLayoutWidget.InitInHUD
	 */
	struct UOrionCardAbilityLayoutWidget_InitInHUD_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityLayoutWidget.AddWidgetElement
	 */
	struct UOrionCardAbilityLayoutWidget_AddWidgetElement_Params
	{
	public:
		bool                                                       bIsAbilityWidgetRelated;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.RequestReplicatedAnimation
	 */
	struct AOrionCharAI_Jungle_RequestReplicatedAnimation_Params
	{
	public:
		unsigned char                                              Animation;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttackId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.PlaySpawningAbility
	 */
	struct AOrionCharAI_Jungle_PlaySpawningAbility_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.OnRep_SpawnEffectLock
	 */
	struct AOrionCharAI_Jungle_OnRep_SpawnEffectLock_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.OnRep_PackedAnimRequest
	 */
	struct AOrionCharAI_Jungle_OnRep_PackedAnimRequest_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.HasFinishedSpawning
	 */
	struct AOrionCharAI_Jungle_HasFinishedSpawning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.GetCurrentTarget
	 */
	struct AOrionCharAI_Jungle_GetCurrentTarget_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI_Jungle.GetBestTarget
	 */
	struct AOrionCharAI_Jungle_GetBestTarget_Params
	{
	public:
		unsigned char                                              Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI_PrimeHelix.RequestReplicatedAttackAnimation
	 */
	struct AOrionCharAI_PrimeHelix_RequestReplicatedAttackAnimation_Params
	{
	public:
		int32_t                                                    SpecialAttackId;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCharAI_PrimeHelix.PlayExpandingKnockback
	 */
	struct AOrionCharAI_PrimeHelix_PlayExpandingKnockback_Params
	{	};

	/**
	 * Function OrionGame.OrionCharAI_PrimeHelix.GetConeAttackLocations
	 */
	struct AOrionCharAI_PrimeHelix_GetConeAttackLocations_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.WhyNotReady
	 */
	struct UOrionCheatManagerBase_WhyNotReady_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.UdpPingAddr
	 */
	struct UOrionCheatManagerBase_UdpPingAddr_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ToggleUI
	 */
	struct UOrionCheatManagerBase_ToggleUI_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestSoloRiderStartAdvertising
	 */
	struct UOrionCheatManagerBase_TestSoloRiderStartAdvertising_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Position;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Role;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestSoloRiderCancelAdvertising
	 */
	struct UOrionCheatManagerBase_TestSoloRiderCancelAdvertising_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestSoloRiderAcceptOrRejectInvite
	 */
	struct UOrionCheatManagerBase_TestSoloRiderAcceptOrRejectInvite_Params
	{
	public:
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    RiderIdx;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestLobbyBuilderMatchmake
	 */
	struct UOrionCheatManagerBase_TestLobbyBuilderMatchmake_Params
	{
	public:
		int32_t                                                    PlaylistId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestLobbyBuilderCancel
	 */
	struct UOrionCheatManagerBase_TestLobbyBuilderCancel_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestLobbyBuilderAcceptMatch
	 */
	struct UOrionCheatManagerBase_TestLobbyBuilderAcceptMatch_Params
	{
	public:
		bool                                                       bAcceptMatch;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestGracefulShutdownServer
	 */
	struct UOrionCheatManagerBase_TestGracefulShutdownServer_Params
	{
	public:
		int32_t                                                    ExitCode;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestComputeBestTeamComp
	 */
	struct UOrionCheatManagerBase_TestComputeBestTeamComp_Params
	{
	public:
		class FString                                              HeroListName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestChangePartySize
	 */
	struct UOrionCheatManagerBase_TestChangePartySize_Params
	{
	public:
		int32_t                                                    NewSize;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TestChangePartyPrivacy
	 */
	struct UOrionCheatManagerBase_TestChangePartyPrivacy_Params
	{
	public:
		bool                                                       bPrivate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bLeaderFriendsOnly;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bLeaderInvitesOnly;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBUnlockSoloRider
	 */
	struct UOrionCheatManagerBase_TBUnlockSoloRider_Params
	{
	public:
		class FString                                              SoloriderUserId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBStartTeamMatchmaking
	 */
	struct UOrionCheatManagerBase_TBStartTeamMatchmaking_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBSetSlotChoice
	 */
	struct UOrionCheatManagerBase_TBSetSlotChoice_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Position;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Role;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBSetReady
	 */
	struct UOrionCheatManagerBase_TBSetReady_Params
	{
	public:
		bool                                                       bReady;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBQuickmatch
	 */
	struct UOrionCheatManagerBase_TBQuickmatch_Params
	{
	public:
		bool                                                       bCoopVsAI;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBMultiSoloRider
	 */
	struct UOrionCheatManagerBase_TBMultiSoloRider_Params
	{
	public:
		int32_t                                                    NumRiders;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBLeaveTeam
	 */
	struct UOrionCheatManagerBase_TBLeaveTeam_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBDebugState
	 */
	struct UOrionCheatManagerBase_TBDebugState_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBClearDebugState
	 */
	struct UOrionCheatManagerBase_TBClearDebugState_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBCaptainAcceptSlot
	 */
	struct UOrionCheatManagerBase_TBCaptainAcceptSlot_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBCaptain
	 */
	struct UOrionCheatManagerBase_TBCaptain_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBCancelSlot
	 */
	struct UOrionCheatManagerBase_TBCancelSlot_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBCancelMatchmaking
	 */
	struct UOrionCheatManagerBase_TBCancelMatchmaking_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.TBAcceptSocialInvite
	 */
	struct UOrionCheatManagerBase_TBAcceptSocialInvite_Params
	{
	public:
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ShowLoadingScreen
	 */
	struct UOrionCheatManagerBase_ShowLoadingScreen_Params
	{
	public:
		bool                                                       bIsPregame;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetPerfBots
	 */
	struct UOrionCheatManagerBase_SetPerfBots_Params
	{
	public:
		class FString                                              HeroList;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetParallaxScaleFactor
	 */
	struct UOrionCheatManagerBase_SetParallaxScaleFactor_Params
	{
	public:
		float                                                      Factor;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetParallaxLerpSpeed
	 */
	struct UOrionCheatManagerBase_SetParallaxLerpSpeed_Params
	{
	public:
		float                                                      LerpSpeed;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetNumLobbyPlayers
	 */
	struct UOrionCheatManagerBase_SetNumLobbyPlayers_Params
	{
	public:
		int32_t                                                    NumLobbyPlayers;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetInputMode
	 */
	struct UOrionCheatManagerBase_SetInputMode_Params
	{
	public:
		unsigned char                                              Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetGamepadSensitivity
	 */
	struct UOrionCheatManagerBase_SetGamepadSensitivity_Params
	{
	public:
		int32_t                                                    YawIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PitchIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.SetGamepadConfig
	 */
	struct UOrionCheatManagerBase_SetGamepadConfig_Params
	{
	public:
		int32_t                                                    ConfigIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ResetDraft
	 */
	struct UOrionCheatManagerBase_ResetDraft_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplayShowFocusPlane
	 */
	struct UOrionCheatManagerBase_ReplayShowFocusPlane_Params
	{
	public:
		bool                                                       bShowFocusPlane;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplaySetManualFocus
	 */
	struct UOrionCheatManagerBase_ReplaySetManualFocus_Params
	{
	public:
		float                                                      NewFocusDistance;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplaySetManualExposure
	 */
	struct UOrionCheatManagerBase_ReplaySetManualExposure_Params
	{
	public:
		float                                                      ExposureBias;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplaySetDroneCollision
	 */
	struct UOrionCheatManagerBase_ReplaySetDroneCollision_Params
	{
	public:
		bool                                                       bCollides;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplaySetAutoFocus
	 */
	struct UOrionCheatManagerBase_ReplaySetAutoFocus_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplaySetAutoExposure
	 */
	struct UOrionCheatManagerBase_ReplaySetAutoExposure_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ReplaySetAperture
	 */
	struct UOrionCheatManagerBase_ReplaySetAperture_Params
	{
	public:
		float                                                      FStop;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.PingStress
	 */
	struct UOrionCheatManagerBase_PingStress_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.OrionWatermark
	 */
	struct UOrionCheatManagerBase_OrionWatermark_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.OrionForceCharLOD
	 */
	struct UOrionCheatManagerBase_OrionForceCharLOD_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.OrionDemoMode
	 */
	struct UOrionCheatManagerBase_OrionDemoMode_Params
	{
	public:
		bool                                                       bDemoMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpTestTeamBuilderTeamSlots
	 */
	struct UOrionCheatManagerBase_McpTestTeamBuilderTeamSlots_Params
	{
	public:
		class FString                                              MatchmakingBucket;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpTestTeamBuilderGetMatchTimes
	 */
	struct UOrionCheatManagerBase_McpTestTeamBuilderGetMatchTimes_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpTestSubmitLogs
	 */
	struct UOrionCheatManagerBase_McpTestSubmitLogs_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpSimulateMatchCompleteAbandon
	 */
	struct UOrionCheatManagerBase_McpSimulateMatchCompleteAbandon_Params
	{
	public:
		bool                                                       bVictory;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpSimulateMatchComplete
	 */
	struct UOrionCheatManagerBase_McpSimulateMatchComplete_Params
	{
	public:
		bool                                                       bVictory;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpRefreshProfile
	 */
	struct UOrionCheatManagerBase_McpRefreshProfile_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpRedeemPurchases
	 */
	struct UOrionCheatManagerBase_McpRedeemPurchases_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpLogout
	 */
	struct UOrionCheatManagerBase_McpLogout_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpLogin
	 */
	struct UOrionCheatManagerBase_McpLogin_Params
	{
	public:
		class FString                                              User;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpIssueCodeToken
	 */
	struct UOrionCheatManagerBase_McpIssueCodeToken_Params
	{
	public:
		class FString                                              TokenId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpGetVersion
	 */
	struct UOrionCheatManagerBase_McpGetVersion_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpGetUnredeemedCodes
	 */
	struct UOrionCheatManagerBase_McpGetUnredeemedCodes_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.McpCheat
	 */
	struct UOrionCheatManagerBase_McpCheat_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.LoadPlayGoMap
	 */
	struct UOrionCheatManagerBase_LoadPlayGoMap_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.LBBugIt
	 */
	struct UOrionCheatManagerBase_LBBugIt_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.IcmpPingAddr
	 */
	struct UOrionCheatManagerBase_IcmpPingAddr_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.HideTowerTargetingBeams
	 */
	struct UOrionCheatManagerBase_HideTowerTargetingBeams_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.HideLoadingScreen
	 */
	struct UOrionCheatManagerBase_HideLoadingScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.GetAccountMMR
	 */
	struct UOrionCheatManagerBase_GetAccountMMR_Params
	{
	public:
		class FString                                              RatingType;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ForceMouseCursor
	 */
	struct UOrionCheatManagerBase_ForceMouseCursor_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.ForceHideMouseCursor
	 */
	struct UOrionCheatManagerBase_ForceHideMouseCursor_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.EComPurchaseOffer
	 */
	struct UOrionCheatManagerBase_EComPurchaseOffer_Params
	{
	public:
		class FString                                              StorefrontName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OfferIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.EComListCatalogOffers
	 */
	struct UOrionCheatManagerBase_EComListCatalogOffers_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.DumpTeamInfo
	 */
	struct UOrionCheatManagerBase_DumpTeamInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.DumpReservations
	 */
	struct UOrionCheatManagerBase_DumpReservations_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.DraftPick
	 */
	struct UOrionCheatManagerBase_DraftPick_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.CalculateMaxMMRDelta
	 */
	struct UOrionCheatManagerBase_CalculateMaxMMRDelta_Params
	{
	public:
		int32_t                                                    SecondsInQueue;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    YourMMR;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.AddTestNotification
	 */
	struct UOrionCheatManagerBase_AddTestNotification_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerBase.AddInactiveTime
	 */
	struct UOrionCheatManagerBase_AddInactiveTime_Params
	{
	public:
		float                                                      NewInactiveTime;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.WTF
	 */
	struct UOrionCheatManagerGame_WTF_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.WhyStuck
	 */
	struct UOrionCheatManagerGame_WhyStuck_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.VLogAIEvent
	 */
	struct UOrionCheatManagerGame_VLogAIEvent_Params
	{
	public:
		class FString                                              EventLabel;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.VisionManagerDebugLog
	 */
	struct UOrionCheatManagerGame_VisionManagerDebugLog_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.UnlimitedHealth
	 */
	struct UOrionCheatManagerGame_UnlimitedHealth_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.TravelModeMode
	 */
	struct UOrionCheatManagerGame_TravelModeMode_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.TowerGod
	 */
	struct UOrionCheatManagerGame_TowerGod_Params
	{
	public:
		bool                                                       bTowerGod;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleUnselectable
	 */
	struct UOrionCheatManagerGame_ToggleUnselectable_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleTeamInfoWidget
	 */
	struct UOrionCheatManagerGame_ToggleTeamInfoWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleStun
	 */
	struct UOrionCheatManagerGame_ToggleStun_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleSilence
	 */
	struct UOrionCheatManagerGame_ToggleSilence_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleScoreboardUpdating
	 */
	struct UOrionCheatManagerGame_ToggleScoreboardUpdating_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleRoot
	 */
	struct UOrionCheatManagerGame_ToggleRoot_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleOverheadHealth
	 */
	struct UOrionCheatManagerGame_ToggleOverheadHealth_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleMiniMapWidget
	 */
	struct UOrionCheatManagerGame_ToggleMiniMapWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleLimbo
	 */
	struct UOrionCheatManagerGame_ToggleLimbo_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleJuggernaut
	 */
	struct UOrionCheatManagerGame_ToggleJuggernaut_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleIsUsingGamepad
	 */
	struct UOrionCheatManagerGame_ToggleIsUsingGamepad_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleIndicatorWidgets
	 */
	struct UOrionCheatManagerGame_ToggleIndicatorWidgets_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleHealthAndStatusWidget
	 */
	struct UOrionCheatManagerGame_ToggleHealthAndStatusWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleFixedCamera
	 */
	struct UOrionCheatManagerGame_ToggleFixedCamera_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleEnemyInfoWidget
	 */
	struct UOrionCheatManagerGame_ToggleEnemyInfoWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleEnableRootMotionSources
	 */
	struct UOrionCheatManagerGame_ToggleEnableRootMotionSources_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleDebugXP
	 */
	struct UOrionCheatManagerGame_ToggleDebugXP_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleDamageLog
	 */
	struct UOrionCheatManagerGame_ToggleDamageLog_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleBotsGod
	 */
	struct UOrionCheatManagerGame_ToggleBotsGod_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleAIWaveSpawning
	 */
	struct UOrionCheatManagerGame_ToggleAIWaveSpawning_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleAIAttack
	 */
	struct UOrionCheatManagerGame_ToggleAIAttack_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleAbilityWidgets
	 */
	struct UOrionCheatManagerGame_ToggleAbilityWidgets_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ToggleAbilityLevelEnforcement
	 */
	struct UOrionCheatManagerGame_ToggleAbilityLevelEnforcement_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SurrenderVote
	 */
	struct UOrionCheatManagerGame_SurrenderVote_Params
	{
	public:
		bool                                                       bVoteYes;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.StopCoinSpawning
	 */
	struct UOrionCheatManagerGame_StopCoinSpawning_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnTargetDummyHeroAtPosAndRotation
	 */
	struct UOrionCheatManagerGame_SpawnTargetDummyHeroAtPosAndRotation_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVerticalRotation;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnTargetDummyHeroAtPos
	 */
	struct UOrionCheatManagerGame_SpawnTargetDummyHeroAtPos_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnTargetDummyHero
	 */
	struct UOrionCheatManagerGame_SpawnTargetDummyHero_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnFriendlyMinionAtPosAndRotation
	 */
	struct UOrionCheatManagerGame_SpawnFriendlyMinionAtPosAndRotation_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVerticalRotation;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnFriendlyMinionAtPos
	 */
	struct UOrionCheatManagerGame_SpawnFriendlyMinionAtPos_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnFriendlyMinion
	 */
	struct UOrionCheatManagerGame_SpawnFriendlyMinion_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnFriendlyHeroAtPosAndRotation
	 */
	struct UOrionCheatManagerGame_SpawnFriendlyHeroAtPosAndRotation_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVerticalRotation;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnFriendlyHeroAtPos
	 */
	struct UOrionCheatManagerGame_SpawnFriendlyHeroAtPos_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnFriendlyHero
	 */
	struct UOrionCheatManagerGame_SpawnFriendlyHero_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnEnemyMinionAtPosAndRotation
	 */
	struct UOrionCheatManagerGame_SpawnEnemyMinionAtPosAndRotation_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVerticalRotation;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnEnemyMinionAtPos
	 */
	struct UOrionCheatManagerGame_SpawnEnemyMinionAtPos_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnEnemyMinion
	 */
	struct UOrionCheatManagerGame_SpawnEnemyMinion_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnEnemyHeroAtPosAndRotation
	 */
	struct UOrionCheatManagerGame_SpawnEnemyHeroAtPosAndRotation_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVerticalRotation;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWithBotController;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnEnemyHeroAtPos
	 */
	struct UOrionCheatManagerGame_SpawnEnemyHeroAtPos_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnEnemyHero
	 */
	struct UOrionCheatManagerGame_SpawnEnemyHero_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnCreepMinionAtPosAndRotation
	 */
	struct UOrionCheatManagerGame_SpawnCreepMinionAtPosAndRotation_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InVerticalRotation;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnCreepMinionAtPos
	 */
	struct UOrionCheatManagerGame_SpawnCreepMinionAtPos_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SpawnCreepMinion
	 */
	struct UOrionCheatManagerGame_SpawnCreepMinion_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SkipMatinee
	 */
	struct UOrionCheatManagerGame_SkipMatinee_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ShowMatchInfoText
	 */
	struct UOrionCheatManagerGame_ShowMatchInfoText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ShowBannerTestUI
	 */
	struct UOrionCheatManagerGame_ShowBannerTestUI_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ShieldSelf
	 */
	struct UOrionCheatManagerGame_ShieldSelf_Params
	{
	public:
		float                                                      ShieldAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetVisionManagerDebug
	 */
	struct UOrionCheatManagerGame_SetVisionManagerDebug_Params
	{
	public:
		unsigned char                                              DebugMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Filter;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FilterIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SingleFilterType;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetTeamNum
	 */
	struct UOrionCheatManagerGame_SetTeamNum_Params
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetPlayerStat
	 */
	struct UOrionCheatManagerGame_SetPlayerStat_Params
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetMyAbilityLevels
	 */
	struct UOrionCheatManagerGame_SetMyAbilityLevels_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetMouseSensitivityToDefault
	 */
	struct UOrionCheatManagerGame_SetMouseSensitivityToDefault_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetHeroStat
	 */
	struct UOrionCheatManagerGame_SetHeroStat_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetHero
	 */
	struct UOrionCheatManagerGame_SetHero_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetHealthPercent
	 */
	struct UOrionCheatManagerGame_SetHealthPercent_Params
	{
	public:
		float                                                      NewPercent;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetFriendlyMinionWaveData
	 */
	struct UOrionCheatManagerGame_SetFriendlyMinionWaveData_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetEnemyMinionWaveData
	 */
	struct UOrionCheatManagerGame_SetEnemyMinionWaveData_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetAllMinionWaveData
	 */
	struct UOrionCheatManagerGame_SetAllMinionWaveData_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.SetAllAbilityLevels
	 */
	struct UOrionCheatManagerGame_SetAllAbilityLevels_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ResumeAI
	 */
	struct UOrionCheatManagerGame_ResumeAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ResetSurrenderVoteCooldown
	 */
	struct UOrionCheatManagerGame_ResetSurrenderVoteCooldown_Params
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ResetCooldowns
	 */
	struct UOrionCheatManagerGame_ResetCooldowns_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ResetCardShopToOneOfEveryCard
	 */
	struct UOrionCheatManagerGame_ResetCardShopToOneOfEveryCard_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ResetCardShopToFilter
	 */
	struct UOrionCheatManagerGame_ResetCardShopToFilter_Params
	{
	public:
		class FString                                              FilterStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ResetCards
	 */
	struct UOrionCheatManagerGame_ResetCards_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ReselectHero
	 */
	struct UOrionCheatManagerGame_ReselectHero_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ReplenishHand
	 */
	struct UOrionCheatManagerGame_ReplenishHand_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.RemoveRespawnTimeAll
	 */
	struct UOrionCheatManagerGame_RemoveRespawnTimeAll_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.RemoveRespawnTime
	 */
	struct UOrionCheatManagerGame_RemoveRespawnTime_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.RemoveGameplayEffectLastApplied
	 */
	struct UOrionCheatManagerGame_RemoveGameplayEffectLastApplied_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.RemoveGameplayEffectFromSelf
	 */
	struct UOrionCheatManagerGame_RemoveGameplayEffectFromSelf_Params
	{
	public:
		class FString                                              GameplayEffectName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.RemoveCosts
	 */
	struct UOrionCheatManagerGame_RemoveCosts_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.RemoveCooldowns
	 */
	struct UOrionCheatManagerGame_RemoveCooldowns_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.PrintPlayerHandData
	 */
	struct UOrionCheatManagerGame_PrintPlayerHandData_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.PrintAbilitySystemComponent
	 */
	struct UOrionCheatManagerGame_PrintAbilitySystemComponent_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.PauseAI
	 */
	struct UOrionCheatManagerGame_PauseAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.OrionDevMenu
	 */
	struct UOrionCheatManagerGame_OrionDevMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.NextHero
	 */
	struct UOrionCheatManagerGame_NextHero_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ModifyMaxMoveSpeed
	 */
	struct UOrionCheatManagerGame_ModifyMaxMoveSpeed_Params
	{
	public:
		float                                                      MoveAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.KnockupSelf
	 */
	struct UOrionCheatManagerGame_KnockupSelf_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.KnockbackSelf
	 */
	struct UOrionCheatManagerGame_KnockbackSelf_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.KillMinionAI
	 */
	struct UOrionCheatManagerGame_KillMinionAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.KillJungleAI
	 */
	struct UOrionCheatManagerGame_KillJungleAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.KillAllNonPlayerPawns
	 */
	struct UOrionCheatManagerGame_KillAllNonPlayerPawns_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.KillAI
	 */
	struct UOrionCheatManagerGame_KillAI_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.InvertMouse
	 */
	struct UOrionCheatManagerGame_InvertMouse_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.InterruptCurrentAbility
	 */
	struct UOrionCheatManagerGame_InterruptCurrentAbility_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.HideVictoryScreen
	 */
	struct UOrionCheatManagerGame_HideVictoryScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.HideMatchInfoText
	 */
	struct UOrionCheatManagerGame_HideMatchInfoText_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.HideHeroSelect
	 */
	struct UOrionCheatManagerGame_HideHeroSelect_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.HealSelf
	 */
	struct UOrionCheatManagerGame_HealSelf_Params
	{
	public:
		float                                                      HealAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.God
	 */
	struct UOrionCheatManagerGame_God_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.GiveXP
	 */
	struct UOrionCheatManagerGame_GiveXP_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.GiveTeamXP
	 */
	struct UOrionCheatManagerGame_GiveTeamXP_Params
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceWinMatch
	 */
	struct UOrionCheatManagerGame_ForceWinMatch_Params
	{
	public:
		unsigned char                                              WinningTeamNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceVictoryScreen
	 */
	struct UOrionCheatManagerGame_ForceVictoryScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceTeamMaxLevel
	 */
	struct UOrionCheatManagerGame_ForceTeamMaxLevel_Params
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceSpawnPrimeHelix
	 */
	struct UOrionCheatManagerGame_ForceSpawnPrimeHelix_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForcePlayerToMinStats
	 */
	struct UOrionCheatManagerGame_ForcePlayerToMinStats_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForcePlayerToMaxStats
	 */
	struct UOrionCheatManagerGame_ForcePlayerToMaxStats_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForcePlayerMaxLevel
	 */
	struct UOrionCheatManagerGame_ForcePlayerMaxLevel_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceLossScreen
	 */
	struct UOrionCheatManagerGame_ForceLossScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceEndgame
	 */
	struct UOrionCheatManagerGame_ForceEndgame_Params
	{
	public:
		int32_t                                                    TeamNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceBotLane
	 */
	struct UOrionCheatManagerGame_ForceBotLane_Params
	{
	public:
		int32_t                                                    LaneIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceBotDifficulty
	 */
	struct UOrionCheatManagerGame_ForceBotDifficulty_Params
	{
	public:
		class FString                                              DifficultyName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceAllTeamsToMaxLevel
	 */
	struct UOrionCheatManagerGame_ForceAllTeamsToMaxLevel_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceAllPlayersToMaxLevel
	 */
	struct UOrionCheatManagerGame_ForceAllPlayersToMaxLevel_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ForceAISpawnerStartingLevelTo
	 */
	struct UOrionCheatManagerGame_ForceAISpawnerStartingLevelTo_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.FillWithBots
	 */
	struct UOrionCheatManagerGame_FillWithBots_Params
	{
	public:
		int32_t                                                    BotsToAddToEachTeam;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ExecuteOrionDevMenuHistory
	 */
	struct UOrionCheatManagerGame_ExecuteOrionDevMenuHistory_Params
	{
	public:
		int32_t                                                    idx;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.EndSurrenderVoteTimer
	 */
	struct UOrionCheatManagerGame_EndSurrenderVoteTimer_Params
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.EnableFixedTimeStep
	 */
	struct UOrionCheatManagerGame_EnableFixedTimeStep_Params
	{
	public:
		int32_t                                                    AsIfItWasFPS;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.DumpGameStats
	 */
	struct UOrionCheatManagerGame_DumpGameStats_Params
	{
	public:
		class FString                                              FilterName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.DrawDamageNumbers
	 */
	struct UOrionCheatManagerGame_DrawDamageNumbers_Params
	{
	public:
		bool                                                       bDrawNumbers;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.DestroyAllNonPlayerPawns
	 */
	struct UOrionCheatManagerGame_DestroyAllNonPlayerPawns_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.DamageSelf
	 */
	struct UOrionCheatManagerGame_DamageSelf_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.CoreUnlimitedHealth
	 */
	struct UOrionCheatManagerGame_CoreUnlimitedHealth_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.BadAss
	 */
	struct UOrionCheatManagerGame_BadAss_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.ApplyGameplayEffectToSelf
	 */
	struct UOrionCheatManagerGame_ApplyGameplayEffectToSelf_Params
	{
	public:
		class FString                                              GameplayEffectName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.AllowCardMenuAnywhere
	 */
	struct UOrionCheatManagerGame_AllowCardMenuAnywhere_Params
	{
	public:
		int32_t                                                    Enable;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.AI_AttackNow
	 */
	struct UOrionCheatManagerGame_AI_AttackNow_Params
	{	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.AddBotFriend
	 */
	struct UOrionCheatManagerGame_AddBotFriend_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCheatManagerGame.AddBotEnemy
	 */
	struct UOrionCheatManagerGame_AddBotEnemy_Params
	{
	public:
		class FString                                              DataAssetName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDamageNumberManager.GetDamageNumberStartLocation
	 */
	struct AOrionDamageNumberManager_GetDamageNumberStartLocation_Params
	{	};

	/**
	 * Function OrionGame.OrionDamageNumberManager.GetDamageNumberOffset
	 */
	struct AOrionDamageNumberManager_GetDamageNumberOffset_Params
	{	};

	/**
	 * Function OrionGame.OrionDebugHeroSelect.HandleSkinSelected
	 */
	struct UOrionDebugHeroSelect_HandleSkinSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDebugHeroSelect.HandleJoinTeamRedClicked
	 */
	struct UOrionDebugHeroSelect_HandleJoinTeamRedClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDebugHeroSelect.HandleJoinTeamBlueClicked
	 */
	struct UOrionDebugHeroSelect_HandleJoinTeamBlueClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDebugHeroSelect.HandleHeroSelected
	 */
	struct UOrionDebugHeroSelect_HandleHeroSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDebugHeroSelect.HandleForceStartClicked
	 */
	struct UOrionDebugHeroSelect_HandleForceStartClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDebugHeroSelect.HandleFillWithBotsClicked
	 */
	struct UOrionDebugHeroSelect_HandleFillWithBotsClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDigitalFlameWidget.InitInHUD
	 */
	struct UOrionDigitalFlameWidget_InitInHUD_Params
	{	};

	/**
	 * Function OrionGame.OrionDamageOverlay.OnDamageUpdate
	 */
	struct UOrionDamageOverlay_OnDamageUpdate_Params
	{	};

	/**
	 * Function OrionGame.OrionDraftTurnPlayerIcon.OnPlayerPickStatusChanged
	 */
	struct UOrionDraftTurnPlayerIcon_OnPlayerPickStatusChanged_Params
	{
	public:
		unsigned char                                              PickStatus;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTurnPlayerIcon.InitPlayerIcon
	 */
	struct UOrionDraftTurnPlayerIcon_InitPlayerIcon_Params
	{
	public:
		bool                                                       bIsFriendly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTimer.OnTurnStarted
	 */
	struct UOrionDraftTimer_OnTurnStarted_Params
	{
	public:
		unsigned char                                              PickingMemberType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTimer.OnTurnComplete
	 */
	struct UOrionDraftTimer_OnTurnComplete_Params
	{
	public:
		unsigned char                                              FinishedMemberType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTimer.OnTimerUpdated
	 */
	struct UOrionDraftTimer_OnTimerUpdated_Params
	{
	public:
		bool                                                       bIsPlayerTurn;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      TimeLeftRatio;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTimer.OnDraftStarted
	 */
	struct UOrionDraftTimer_OnDraftStarted_Params
	{
	public:
		unsigned char                                              FirstPickerType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTimer.OnDraftComplete
	 */
	struct UOrionDraftTimer_OnDraftComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextStyle.GetShadowOffset
	 */
	struct UOrionTextStyle_GetShadowOffset_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextStyle.GetShadowColor
	 */
	struct UOrionTextStyle_GetShadowColor_Params
	{
	public:
		unsigned char                                              ColorType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextStyle.GetMargin
	 */
	struct UOrionTextStyle_GetMargin_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextStyle.GetLineHeightPercentage
	 */
	struct UOrionTextStyle_GetLineHeightPercentage_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextStyle.GetFont
	 */
	struct UOrionTextStyle_GetFont_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextStyle.GetColor
	 */
	struct UOrionTextStyle_GetColor_Params
	{
	public:
		unsigned char                                              ColorType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextBlock.SetWrapTextWidth
	 */
	struct UOrionTextBlock_SetWrapTextWidth_Params
	{
	public:
		int32_t                                                    InWrapTextAt;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextBlock.SetUseDropShadow
	 */
	struct UOrionTextBlock_SetUseDropShadow_Params
	{
	public:
		bool                                                       bShouldUseDropShadow;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextBlock.SetStyle
	 */
	struct UOrionTextBlock_SetStyle_Params
	{	};

	/**
	 * Function OrionGame.OrionTextBlock.SetSize
	 */
	struct UOrionTextBlock_SetSize_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextBlock.SetProperties
	 */
	struct UOrionTextBlock_SetProperties_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Color;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InWrapTextAt;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldUseDropShadow;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTextBlock.SetColorType
	 */
	struct UOrionTextBlock_SetColorType_Params
	{
	public:
		unsigned char                                              Color;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionEQSTestingPawn.GetTeamNum
	 */
	struct AOrionEQSTestingPawn_GetTeamNum_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIStateWidget.UpdateCursorState
	 */
	struct UOrionUIStateWidget_UpdateCursorState_Params
	{	};

	/**
	 * Function OrionGame.OrionUIStateWidget.UpdateButtonLegend
	 */
	struct UOrionUIStateWidget_UpdateButtonLegend_Params
	{	};

	/**
	 * Function OrionGame.OrionUIStateWidget.OnExitState
	 */
	struct UOrionUIStateWidget_OnExitState_Params
	{
	public:
		unsigned char                                              NextState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIStateWidget.OnEnterState
	 */
	struct UOrionUIStateWidget_OnEnterState_Params
	{
	public:
		unsigned char                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIStateWidget.OnDestroy
	 */
	struct UOrionUIStateWidget_OnDestroy_Params
	{	};

	/**
	 * Function OrionGame.OrionUIStateWidget.IsReadyForNextState
	 */
	struct UOrionUIStateWidget_IsReadyForNextState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIStateWidget.DebugDumpState
	 */
	struct UOrionUIStateWidget_DebugDumpState_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHUDWidget.EnableToolTips
	 */
	struct UOrionBaseHUDWidget_EnableToolTips_Params
	{	};

	/**
	 * Function OrionGame.OrionBaseHUDWidget.DisableToolTips
	 */
	struct UOrionBaseHUDWidget_DisableToolTips_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDWidget.SetHUDWidget
	 */
	struct UOrionHUDWidget_SetHUDWidget_Params
	{
	public:
		unsigned char                                              WidgetType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHUDWidget.OnShowKillCam_BlueprintEvent
	 */
	struct UOrionHUDWidget_OnShowKillCam_BlueprintEvent_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDWidget.OnMatchEnd_BlueprintEvent
	 */
	struct UOrionHUDWidget_OnMatchEnd_BlueprintEvent_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDWidget.OnHideKillCam_BlueprintEvent
	 */
	struct UOrionHUDWidget_OnHideKillCam_BlueprintEvent_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDWidget.OnFadeHUDOut_BlueprintEvent
	 */
	struct UOrionHUDWidget_OnFadeHUDOut_BlueprintEvent_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDWidget.OnFadeHUDIn_BlueprintEvent
	 */
	struct UOrionHUDWidget_OnFadeHUDIn_BlueprintEvent_Params
	{	};

	/**
	 * Function OrionGame.OrionFriendItem.GetUniqueNetId
	 */
	struct UOrionFriendItem_GetUniqueNetId_Params
	{	};

	/**
	 * Function OrionGame.OrionFriendItem.GetDisplayName
	 */
	struct UOrionFriendItem_GetDisplayName_Params
	{
	public:
		class FText                                                FriendName;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_Base.BlueprintTick
	 */
	struct UOrionViewModel_Base_BlueprintTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.ToggleNeedsMouse
	 */
	struct UOrionViewModel_HUD_ToggleNeedsMouse_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.SetNeedsMouse
	 */
	struct UOrionViewModel_HUD_SetNeedsMouse_Params
	{
	public:
		bool                                                       bNewNeedsMouse;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.SetEscapeMenuState
	 */
	struct UOrionViewModel_HUD_SetEscapeMenuState_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.QuitToMainMenu
	 */
	struct UOrionViewModel_HUD_QuitToMainMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.IsInTravelMode
	 */
	struct UOrionViewModel_HUD_IsInTravelMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetUIToggles
	 */
	struct UOrionViewModel_HUD_GetUIToggles_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetTowerTargetingInfo
	 */
	struct UOrionViewModel_HUD_GetTowerTargetingInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetPlayerPortrait
	 */
	struct UOrionViewModel_HUD_GetPlayerPortrait_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetPlayerName
	 */
	struct UOrionViewModel_HUD_GetPlayerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetPlayerLocation
	 */
	struct UOrionViewModel_HUD_GetPlayerLocation_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetPlayerLevel
	 */
	struct UOrionViewModel_HUD_GetPlayerLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetPlayerCameraLocation
	 */
	struct UOrionViewModel_HUD_GetPlayerCameraLocation_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetPlayerCameraDirection
	 */
	struct UOrionViewModel_HUD_GetPlayerCameraDirection_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetMyTeam
	 */
	struct UOrionViewModel_HUD_GetMyTeam_Params
	{
	public:
		bool                                                       AllowSpectatorTeam;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetMiniMapRotation
	 */
	struct UOrionViewModel_HUD_GetMiniMapRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetMiniMapBackground
	 */
	struct UOrionViewModel_HUD_GetMiniMapBackground_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetLevelHasMiniMapVolume
	 */
	struct UOrionViewModel_HUD_GetLevelHasMiniMapVolume_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetKills
	 */
	struct UOrionViewModel_HUD_GetKills_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetHeroName
	 */
	struct UOrionViewModel_HUD_GetHeroName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetEnemyTeam
	 */
	struct UOrionViewModel_HUD_GetEnemyTeam_Params
	{
	public:
		bool                                                       AllowSpectatorTeam;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetDeaths
	 */
	struct UOrionViewModel_HUD_GetDeaths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetDamageIndicatorRotation
	 */
	struct UOrionViewModel_HUD_GetDamageIndicatorRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetCoreInfo
	 */
	struct UOrionViewModel_HUD_GetCoreInfo_Params
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetCardAbilityData
	 */
	struct UOrionViewModel_HUD_GetCardAbilityData_Params
	{
	public:
		unsigned char                                              InputID;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.GetAssists
	 */
	struct UOrionViewModel_HUD_GetAssists_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.CreateMessageWidget
	 */
	struct UOrionViewModel_HUD_CreateMessageWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_HUD.CreateLogMessageWidget
	 */
	struct UOrionViewModel_HUD_CreateLogMessageWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Actor.SetShadowplaneVisibility
	 */
	struct AOrionGameplayCueNotify_Actor_SetShadowplaneVisibility_Params
	{
	public:
		unsigned char                                              ShadowPlaneVisibility;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Actor.OnExitShadowplane
	 */
	struct AOrionGameplayCueNotify_Actor_OnExitShadowplane_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Actor.OnEnterShadowplane
	 */
	struct AOrionGameplayCueNotify_Actor_OnEnterShadowplane_Params
	{
	public:
		bool                                                       bVisibleToMe;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Burst_Latent.K2_OnExecute
	 */
	struct AOrionGameplayCueNotify_Burst_Latent_K2_OnExecute_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Looping.ReceiveTick
	 */
	struct AOrionGameplayCueNotify_Looping_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Looping.K2_WhileActive
	 */
	struct AOrionGameplayCueNotify_Looping_K2_WhileActive_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Looping.K2_OnRemove
	 */
	struct AOrionGameplayCueNotify_Looping_K2_OnRemove_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Looping.K2_OnExecute
	 */
	struct AOrionGameplayCueNotify_Looping_K2_OnExecute_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Looping.K2_OnActive
	 */
	struct AOrionGameplayCueNotify_Looping_K2_OnActive_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayCueNotify_Burst.OnBurst
	 */
	struct UOrionGameplayCueNotify_Burst_OnBurst_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.OnRep_NumGameplayEffectsApplied
	 */
	struct UOrionGameplayVolumeComponent_OnRep_NumGameplayEffectsApplied_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.OnEndOverlapCallback
	 */
	struct UOrionGameplayVolumeComponent_OnEndOverlapCallback_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.OnBeginOverlapCallback
	 */
	struct UOrionGameplayVolumeComponent_OnBeginOverlapCallback_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.IsValidTarget
	 */
	struct UOrionGameplayVolumeComponent_IsValidTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.HandleMatchStarted
	 */
	struct UOrionGameplayVolumeComponent_HandleMatchStarted_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.GetNumAppliedEffectsLeftToApply
	 */
	struct UOrionGameplayVolumeComponent_GetNumAppliedEffectsLeftToApply_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.CanStillApplyEffectsToTargets
	 */
	struct UOrionGameplayVolumeComponent_CanStillApplyEffectsToTargets_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGameplayVolumeComponent.ApplyEffects
	 */
	struct UOrionGameplayVolumeComponent_ApplyEffects_Params
	{	};

	/**
	 * Function OrionGame.OrionGameState_DraftLobby.OnRep_Phases
	 */
	struct AOrionGameState_DraftLobby_OnRep_Phases_Params
	{	};

	/**
	 * Function OrionGame.OrionGameState_DraftLobby.OnRep_LockedInHeroes
	 */
	struct AOrionGameState_DraftLobby_OnRep_LockedInHeroes_Params
	{	};

	/**
	 * Function OrionGame.OrionGameState_DraftLobby.OnRep_CurrentPhaseState
	 */
	struct AOrionGameState_DraftLobby_OnRep_CurrentPhaseState_Params
	{	};

	/**
	 * Function OrionGame.OrionGameState_DraftLobby.OnRep_CurrentPhaseIdx
	 */
	struct AOrionGameState_DraftLobby_OnRep_CurrentPhaseIdx_Params
	{	};

	/**
	 * Function OrionGame.OrionGameState_DraftLobby.OnRep_AbortReason
	 */
	struct AOrionGameState_DraftLobby_OnRep_AbortReason_Params
	{	};

	/**
	 * Function OrionGame.OrionGameViewportClient.UpdateMenusOnFocusLost
	 */
	struct UOrionGameViewportClient_UpdateMenusOnFocusLost_Params
	{	};

	/**
	 * Function OrionGame.OrionGameViewportClient.OnAnalogCursorEnabledToggle
	 */
	struct UOrionGameViewportClient_OnAnalogCursorEnabledToggle_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGestureData.GetMatchingGestureEntry
	 */
	struct UOrionGestureData_GetMatchingGestureEntry_Params
	{
	public:
		unsigned char                                              Direction1;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Direction2;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHealthEnergyWidget.InitInHUD
	 */
	struct UOrionHealthEnergyWidget_InitInHUD_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDisplayLibrary.GetHeroLockedMessage
	 */
	struct UOrionHeroDisplayLibrary_GetHeroLockedMessage_Params
	{
	public:
		unsigned char                                              Tier;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionInputKeySelector.SetTextColorType
	 */
	struct UOrionInputKeySelector_SetTextColorType_Params
	{
	public:
		unsigned char                                              InColor;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionInputKeySelector.SetStyleSize
	 */
	struct UOrionInputKeySelector_SetStyleSize_Params
	{
	public:
		unsigned char                                              InStyleSize;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionInputKeySelector.SetOrionButtonStyle
	 */
	struct UOrionInputKeySelector_SetOrionButtonStyle_Params
	{	};

	/**
	 * Function OrionGame.OrionInputVisualizer.ShowSpecificKey
	 */
	struct UOrionInputVisualizer_ShowSpecificKey_Params
	{	};

	/**
	 * Function OrionGame.OrionInputVisualizer.ShowInputAction
	 */
	struct UOrionInputVisualizer_ShowInputAction_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionInputVisualizer.ShowAbilityBinding
	 */
	struct UOrionInputVisualizer_ShowAbilityBinding_Params
	{
	public:
		unsigned char                                              AbilityBinding;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionInputVisualizer.SetSize
	 */
	struct UOrionInputVisualizer_SetSize_Params
	{
	public:
		unsigned char                                              InSize;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.StopForceFeedbackOnActor
	 */
	struct UOrionKismetLibrary_StopForceFeedbackOnActor_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.StopCameraShakeOnActor
	 */
	struct UOrionKismetLibrary_StopCameraShakeOnActor_Params
	{
	public:
		bool                                                       bImmediately;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.StopCameraAnimOnActor
	 */
	struct UOrionKismetLibrary_StopCameraAnimOnActor_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SplitTargetData
	 */
	struct UOrionKismetLibrary_SplitTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SplitGameplayEffectSpecBetweenTargetData
	 */
	struct UOrionKismetLibrary_SplitGameplayEffectSpecBetweenTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SplitGameplayEffectSpecBetweenActors
	 */
	struct UOrionKismetLibrary_SplitGameplayEffectSpecBetweenActors_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SpawnSoundTeamAdjustedAtLocation
	 */
	struct UOrionKismetLibrary_SpawnSoundTeamAdjustedAtLocation_Params
	{
	public:
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SpawnSoundTeamAdjusted
	 */
	struct UOrionKismetLibrary_SpawnSoundTeamAdjusted_Params
	{
	public:
		bool                                                       bForceCreateAudioComponent;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenDestroyed;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SpawnSoundOnActorAtLocation
	 */
	struct UOrionKismetLibrary_SpawnSoundOnActorAtLocation_Params
	{
	public:
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SpawnSoundOnActor
	 */
	struct UOrionKismetLibrary_SpawnSoundOnActor_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SpawnCoins
	 */
	struct UOrionKismetLibrary_SpawnCoins_Params
	{
	public:
		int32_t                                                    DesiredCoinsToSpawn;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              OwnerTeam;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              LaunchSpeed;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinCoinsToSpawnThreshold;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SignedAngleBetweenInRadians
	 */
	struct UOrionKismetLibrary_SignedAngleBetweenInRadians_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SignedAngleBetweenInDegrees
	 */
	struct UOrionKismetLibrary_SignedAngleBetweenInDegrees_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ShouldShowRenderingAndResolutionSettings
	 */
	struct UOrionKismetLibrary_ShouldShowRenderingAndResolutionSettings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterStackCountForGameplayEffect
	 */
	struct UOrionKismetLibrary_SetFilterStackCountForGameplayEffect_Params
	{
	public:
		float                                                      InCount;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterSetByCallerMagnitude
	 */
	struct UOrionKismetLibrary_SetFilterSetByCallerMagnitude_Params
	{
	public:
		class FName                                                SetByCallerName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Magnitude;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterGameplayEffectLevel
	 */
	struct UOrionKismetLibrary_SetFilterGameplayEffectLevel_Params
	{
	public:
		float                                                      GameplayEffectLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterContextSourceObject
	 */
	struct UOrionKismetLibrary_SetFilterContextSourceObject_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterContextOrigin
	 */
	struct UOrionKismetLibrary_SetFilterContextOrigin_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterContextInstigator
	 */
	struct UOrionKismetLibrary_SetFilterContextInstigator_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterContextHitResult
	 */
	struct UOrionKismetLibrary_SetFilterContextHitResult_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterContextActors
	 */
	struct UOrionKismetLibrary_SetFilterContextActors_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.SetFilterContextAbility
	 */
	struct UOrionKismetLibrary_SetFilterContextAbility_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.RotateVectorRadians
	 */
	struct UOrionKismetLibrary_RotateVectorRadians_Params
	{
	public:
		float                                                      Radians;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.RotateVectorDegrees
	 */
	struct UOrionKismetLibrary_RotateVectorDegrees_Params
	{
	public:
		float                                                      Radians;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.PlayForceFeedbackOnActor
	 */
	struct UOrionKismetLibrary_PlayForceFeedbackOnActor_Params
	{
	public:
		bool                                                       bLooping;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.PlayCameraShakeOnActor
	 */
	struct UOrionKismetLibrary_PlayCameraShakeOnActor_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PlaySpace;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.PlayCameraAnimOnActor
	 */
	struct UOrionKismetLibrary_PlayCameraAnimOnActor_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlendInTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BlendOutTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoop;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bRandomStartTime;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              Space;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.OnSameTeam
	 */
	struct UOrionKismetLibrary_OnSameTeam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.OnSameFormationChar
	 */
	struct UOrionKismetLibrary_OnSameFormationChar_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.OnSameFormation
	 */
	struct UOrionKismetLibrary_OnSameFormation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.NewVisionManagerEnabled
	 */
	struct UOrionKismetLibrary_NewVisionManagerEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.MakeOrionTargetData
	 */
	struct UOrionKismetLibrary_MakeOrionTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.MakeOrionFilterHandle
	 */
	struct UOrionKismetLibrary_MakeOrionFilterHandle_Params
	{
	public:
		unsigned char                                              FilterTeam;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.LaunchCharacterToPointFromTargetData
	 */
	struct UOrionKismetLibrary_LaunchCharacterToPointFromTargetData_Params
	{
	public:
		float                                                      LaunchVelocityXY;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.LaunchCharacterToPoint
	 */
	struct UOrionKismetLibrary_LaunchCharacterToPoint_Params
	{
	public:
		float                                                      LaunchVelocityXY;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.LaunchCharacterInDirectionFromTargetData
	 */
	struct UOrionKismetLibrary_LaunchCharacterInDirectionFromTargetData_Params
	{
	public:
		float                                                      LaunchVelocity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.LaunchCharacterInDirection
	 */
	struct UOrionKismetLibrary_LaunchCharacterInDirection_Params
	{
	public:
		float                                                      LaunchVelocity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAirControl;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsVisibleToEnemy
	 */
	struct UOrionKismetLibrary_IsVisibleToEnemy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsSprintEnabled
	 */
	struct UOrionKismetLibrary_IsSprintEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsRunningOnLowEndClient
	 */
	struct UOrionKismetLibrary_IsRunningOnLowEndClient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsPhaseShifted
	 */
	struct UOrionKismetLibrary_IsPhaseShifted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsOnLocalTeam
	 */
	struct UOrionKismetLibrary_IsOnLocalTeam_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsLocallyControlledPlayer
	 */
	struct UOrionKismetLibrary_IsLocallyControlledPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsInShadowPlane
	 */
	struct UOrionKismetLibrary_IsInShadowPlane_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsEngineDoingAsyncLoading
	 */
	struct UOrionKismetLibrary_IsEngineDoingAsyncLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.IsDead
	 */
	struct UOrionKismetLibrary_IsDead_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.HasTrueSight
	 */
	struct UOrionKismetLibrary_HasTrueSight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetWorldUpVector
	 */
	struct UOrionKismetLibrary_GetWorldUpVector_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetWorldRightVector
	 */
	struct UOrionKismetLibrary_GetWorldRightVector_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetWorldLeftVector
	 */
	struct UOrionKismetLibrary_GetWorldLeftVector_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetWorldForwardVector
	 */
	struct UOrionKismetLibrary_GetWorldForwardVector_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetWorldDownVector
	 */
	struct UOrionKismetLibrary_GetWorldDownVector_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetWorldBackwardVector
	 */
	struct UOrionKismetLibrary_GetWorldBackwardVector_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetTravelModeMode
	 */
	struct UOrionKismetLibrary_GetTravelModeMode_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetTeamColorFromMPCWithTeamNum
	 */
	struct UOrionKismetLibrary_GetTeamColorFromMPCWithTeamNum_Params
	{
	public:
		unsigned char                                              TargetTeamNum;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetTeamColorFromMPC
	 */
	struct UOrionKismetLibrary_GetTeamColorFromMPC_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetTagString
	 */
	struct UOrionKismetLibrary_GetTagString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetTagContainerString
	 */
	struct UOrionKismetLibrary_GetTagContainerString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetSpawnLocationForControllerAtStartPoint
	 */
	struct UOrionKismetLibrary_GetSpawnLocationForControllerAtStartPoint_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetShadowPlaneVisibilityRelativeToLocalPlayer
	 */
	struct UOrionKismetLibrary_GetShadowPlaneVisibilityRelativeToLocalPlayer_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetRigPlacementRange
	 */
	struct UOrionKismetLibrary_GetRigPlacementRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetPlayerControllerFromActor
	 */
	struct UOrionKismetLibrary_GetPlayerControllerFromActor_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetOrionReplaySpectator
	 */
	struct UOrionKismetLibrary_GetOrionReplaySpectator_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetLocalPlayerController_Game
	 */
	struct UOrionKismetLibrary_GetLocalPlayerController_Game_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetLocalPlayerController_Base
	 */
	struct UOrionKismetLibrary_GetLocalPlayerController_Base_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetHeroSecondaryColor
	 */
	struct UOrionKismetLibrary_GetHeroSecondaryColor_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetHeroPrimaryColor
	 */
	struct UOrionKismetLibrary_GetHeroPrimaryColor_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetHealthPCT
	 */
	struct UOrionKismetLibrary_GetHealthPCT_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetHealth
	 */
	struct UOrionKismetLibrary_GetHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetGlobalExponentialHeightFog
	 */
	struct UOrionKismetLibrary_GetGlobalExponentialHeightFog_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetGameplayEffectSpecsFromFilter
	 */
	struct UOrionKismetLibrary_GetGameplayEffectSpecsFromFilter_Params
	{
	public:
		float                                                      InLevel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetFriendlyColorFromMPC
	 */
	struct UOrionKismetLibrary_GetFriendlyColorFromMPC_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetEnemyColorFromMPC
	 */
	struct UOrionKismetLibrary_GetEnemyColorFromMPC_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetEffectsToApplyToTargetFromFilters
	 */
	struct UOrionKismetLibrary_GetEffectsToApplyToTargetFromFilters_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetActorTeam
	 */
	struct UOrionKismetLibrary_GetActorTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetActorTargetPosition
	 */
	struct UOrionKismetLibrary_GetActorTargetPosition_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetActorRadius
	 */
	struct UOrionKismetLibrary_GetActorRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetActorBottom
	 */
	struct UOrionKismetLibrary_GetActorBottom_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GetActorAimPosition
	 */
	struct UOrionKismetLibrary_GetActorAimPosition_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GenerateGameplayEffectSpecsForFilter
	 */
	struct UOrionKismetLibrary_GenerateGameplayEffectSpecsForFilter_Params
	{
	public:
		float                                                      InLevel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GameplayCue_SpawnEmitter
	 */
	struct UOrionKismetLibrary_GameplayCue_SpawnEmitter_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GameplayCue_RemoveDecal
	 */
	struct UOrionKismetLibrary_GameplayCue_RemoveDecal_Params
	{
	public:
		class FName                                                DecalName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GameplayCue_PlaySoundTeamAdjustedForTarget
	 */
	struct UOrionKismetLibrary_GameplayCue_PlaySoundTeamAdjustedForTarget_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GameplayCue_PlaySoundTeamAdjustedForSource
	 */
	struct UOrionKismetLibrary_GameplayCue_PlaySoundTeamAdjustedForSource_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GameplayCue_ApplyDecalForDuration
	 */
	struct UOrionKismetLibrary_GameplayCue_ApplyDecalForDuration_Params
	{
	public:
		class FName                                                DecalName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.GameplayCue_ApplyDecal
	 */
	struct UOrionKismetLibrary_GameplayCue_ApplyDecal_Params
	{
	public:
		class FName                                                DecalName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.FindPlayerStart
	 */
	struct UOrionKismetLibrary_FindPlayerStart_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.FilterActor
	 */
	struct UOrionKismetLibrary_FilterActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.DoesTeamHaveVisionOnTarget
	 */
	struct UOrionKismetLibrary_DoesTeamHaveVisionOnTarget_Params
	{
	public:
		unsigned char                                              Team;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.DoesActorHaveVisionOnTarget
	 */
	struct UOrionKismetLibrary_DoesActorHaveVisionOnTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.DistanceSquaredBetweenSegments
	 */
	struct UOrionKismetLibrary_DistanceSquaredBetweenSegments_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.CompareTeams
	 */
	struct UOrionKismetLibrary_CompareTeams_Params
	{
	public:
		unsigned char                                              TeamA;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TeamB;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              CompareType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.CompareActorTeams
	 */
	struct UOrionKismetLibrary_CompareActorTeams_Params
	{
	public:
		unsigned char                                              CompareType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ClosestPointsOnSegmentToSegment
	 */
	struct UOrionKismetLibrary_ClosestPointsOnSegmentToSegment_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ClosestPointOnSegmentToPlane
	 */
	struct UOrionKismetLibrary_ClosestPointOnSegmentToPlane_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ClosestPointOnSegmentToLine
	 */
	struct UOrionKismetLibrary_ClosestPointOnSegmentToLine_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ClosestPointOnLineToLine
	 */
	struct UOrionKismetLibrary_ClosestPointOnLineToLine_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ChangeTeamController
	 */
	struct UOrionKismetLibrary_ChangeTeamController_Params
	{
	public:
		unsigned char                                              NewTeam;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ChangeTeamChar
	 */
	struct UOrionKismetLibrary_ChangeTeamChar_Params
	{
	public:
		unsigned char                                              NewTeam;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.CanActorSeeTargetInShadowPlane
	 */
	struct UOrionKismetLibrary_CanActorSeeTargetInShadowPlane_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ApplyGameplayEffectsToTargetData
	 */
	struct UOrionKismetLibrary_ApplyGameplayEffectsToTargetData_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ApplyGameplayEffectsToTarget
	 */
	struct UOrionKismetLibrary_ApplyGameplayEffectsToTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.ApplyAbilityTagsToSpecFilterContainer
	 */
	struct UOrionKismetLibrary_ApplyAbilityTagsToSpecFilterContainer_Params
	{	};

	/**
	 * Function OrionGame.OrionKismetLibrary.AnnouncerSayDialog
	 */
	struct UOrionKismetLibrary_AnnouncerSayDialog_Params
	{
	public:
		class FString                                              Ident;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.AngleBetweenInRadians
	 */
	struct UOrionKismetLibrary_AngleBetweenInRadians_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.AngleBetweenInDegrees
	 */
	struct UOrionKismetLibrary_AngleBetweenInDegrees_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionKismetLibrary.AbilityTeleportActor
	 */
	struct UOrionKismetLibrary_AbilityTeleportActor_Params
	{
	public:
		bool                                                       IsGroundLocation;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLoadGuard.SetLoadingText
	 */
	struct UOrionLoadGuard_SetLoadingText_Params
	{
	public:
		class FText                                                InLoadingText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLoadGuard.SetIsLoading
	 */
	struct UOrionLoadGuard_SetIsLoading_Params
	{
	public:
		bool                                                       bInIsLoading;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.OrionLoadGuard.OnAssetLoaded__DelegateSignature
	 */
	struct UOrionLoadGuard_OnAssetLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function OrionGame.OrionLoadGuard.IsLoading
	 */
	struct UOrionLoadGuard_IsLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLoadGuard.BP_GuardAndLoadAsset
	 */
	struct UOrionLoadGuard_BP_GuardAndLoadAsset_Params
	{
	public:
		class FScriptDelegate                                      OnAssetLoaded;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLazyImage.SetBrushFromLazyTexture
	 */
	struct UOrionLazyImage_SetBrushFromLazyTexture_Params
	{
	public:
		bool                                                       bMatchSize;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLazyImage.SetBrushFromLazyMaterial
	 */
	struct UOrionLazyImage_SetBrushFromLazyMaterial_Params
	{	};

	/**
	 * Function OrionGame.OrionLazyImage.SetBrushFromLazyDisplayAsset
	 */
	struct UOrionLazyImage_SetBrushFromLazyDisplayAsset_Params
	{
	public:
		bool                                                       bMatchTextureSize;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLazyImage.SetBrushFromItemDefinition
	 */
	struct UOrionLazyImage_SetBrushFromItemDefinition_Params
	{
	public:
		bool                                                       bMatchTextureSize;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLazyImage.IsLoading
	 */
	struct UOrionLazyImage_IsLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLazyImage.ForwardLoadingStateChanged
	 */
	struct UOrionLazyImage_ForwardLoadingStateChanged_Params
	{
	public:
		bool                                                       bIsLoading;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.UnSelectNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_UnSelectNode_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.UnHighlightNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_UnHighlightNode_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.ShowNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_ShowNode_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.SelectNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_SelectNode_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.ResetNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_ResetNode_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.HighlightNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_HighlightNode_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuNodeWidget.HideNode
	 */
	struct UOrionGenericMarkingMenuNodeWidget_HideNode_Params
	{	};

	/**
	 * Function OrionGame.OrionMarkingMenuLayerWidget.ShowWidget
	 */
	struct UOrionMarkingMenuLayerWidget_ShowWidget_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMarkingMenuLayerWidget.ResetWidget
	 */
	struct UOrionMarkingMenuLayerWidget_ResetWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionMarkingMenuLayerWidget.HideWidget
	 */
	struct UOrionMarkingMenuLayerWidget_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.UpButtonPressed
	 */
	struct UOrionGenericMarkingMenuWidget_UpButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.ToggleButtonPressed
	 */
	struct UOrionGenericMarkingMenuWidget_ToggleButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.RightButtonPressed
	 */
	struct UOrionGenericMarkingMenuWidget_RightButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.OnFaceButtonPressed
	 */
	struct UOrionGenericMarkingMenuWidget_OnFaceButtonPressed_Params
	{
	public:
		unsigned char                                              Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.NativeOnOpen
	 */
	struct UOrionGenericMarkingMenuWidget_NativeOnOpen_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.NativeOnClose
	 */
	struct UOrionGenericMarkingMenuWidget_NativeOnClose_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.LeftButtonPressed
	 */
	struct UOrionGenericMarkingMenuWidget_LeftButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenuWidget.DownButtonPressed
	 */
	struct UOrionGenericMarkingMenuWidget_DownButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionListItem.ToggleExpansion
	 */
	struct UOrionListItem_ToggleExpansion_Params
	{	};

	/**
	 * Function OrionGame.OrionListItem.SetSelected
	 */
	struct UOrionListItem_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListItem.SetIndexInList
	 */
	struct UOrionListItem_SetIndexInList_Params
	{
	public:
		int32_t                                                    InIndexInList;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListItem.RegisterOnClicked
	 */
	struct UOrionListItem_RegisterOnClicked_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListItem.Private_OnExpanderArrowShiftClicked
	 */
	struct UOrionListItem_Private_OnExpanderArrowShiftClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionListItem.IsItemExpanded
	 */
	struct UOrionListItem_IsItemExpanded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListItem.GetSelectionMode
	 */
	struct UOrionListItem_GetSelectionMode_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListItem.GetIndentLevel
	 */
	struct UOrionListItem_GetIndentLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListItem.DoesItemHaveChildren
	 */
	struct UOrionListItem_DoesItemHaveChildren_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionObjectListItem.SetData
	 */
	struct UOrionObjectListItem_SetData_Params
	{	};

	/**
	 * Function OrionGame.OrionObjectListItem.Reset
	 */
	struct UOrionObjectListItem_Reset_Params
	{	};

	/**
	 * Function OrionGame.OrionObjectListItem.GetData
	 */
	struct UOrionObjectListItem_GetData_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.SetSelectedItem
	 */
	struct UOrionListView_SetSelectedItem_Params
	{
	public:
		bool                                                       bWaitIfPendingRefresh;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.SetSelectedIndex
	 */
	struct UOrionListView_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.SetItemSelection
	 */
	struct UOrionListView_SetItemSelection_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.SetItemHeight
	 */
	struct UOrionListView_SetItemHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.SetDesiredItemPadding
	 */
	struct UOrionListView_SetDesiredItemPadding_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.SetDataProvider
	 */
	struct UOrionListView_SetDataProvider_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.ScrollIntoView
	 */
	struct UOrionListView_ScrollIntoView_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.IsRefreshPending
	 */
	struct UOrionListView_IsRefreshPending_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.IsItemVisible
	 */
	struct UOrionListView_IsItemVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.GetSelectedItems
	 */
	struct UOrionListView_GetSelectedItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.GetSelectedItem
	 */
	struct UOrionListView_GetSelectedItem_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.GetNumItemsSelected
	 */
	struct UOrionListView_GetNumItemsSelected_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.GetItemAt
	 */
	struct UOrionListView_GetItemAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.GetIndexForItem
	 */
	struct UOrionListView_GetIndexForItem_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionListView.DynamicHandleItemClicked
	 */
	struct UOrionListView_DynamicHandleItemClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.ClearSelection
	 */
	struct UOrionListView_ClearSelection_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.Clear
	 */
	struct UOrionListView_Clear_Params
	{	};

	/**
	 * Function OrionGame.OrionListView.AddItem
	 */
	struct UOrionListView_AddItem_Params
	{	};

	/**
	 * Function OrionGame.OrionTileView.SetItemWidth
	 */
	struct UOrionTileView_SetItemWidth_Params
	{
	public:
		float                                                      NewWidth;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLoadingActor.OnSetSlotIndex
	 */
	struct AOrionLoadingActor_OnSetSlotIndex_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMatchDataLoader.TimerCallback
	 */
	struct UOrionMatchDataLoader_TimerCallback_Params
	{	};

	/**
	 * Function OrionGame.OrionMatchmakingDisplayLibrary.GetTeamColor
	 */
	struct UOrionMatchmakingDisplayLibrary_GetTeamColor_Params
	{
	public:
		unsigned char                                              TeamMemberType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMatchmakingDisplayLibrary.GetHeroAvailabilityText
	 */
	struct UOrionMatchmakingDisplayLibrary_GetHeroAvailabilityText_Params
	{
	public:
		unsigned char                                              Availability;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMatchmakingDisplayLibrary.GetBanReasonText
	 */
	struct UOrionMatchmakingDisplayLibrary_GetBanReasonText_Params
	{
	public:
		unsigned char                                              BanReason;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMcpUIUtils.IsItemNew
	 */
	struct UOrionMcpUIUtils_IsItemNew_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMcpUIUtils.ClearNewItem
	 */
	struct UOrionMcpUIUtils_ClearNewItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMenuSlot.SetSlotType
	 */
	struct UOrionMenuSlot_SetSlotType_Params
	{
	public:
		unsigned char                                              NewSlotType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMenuManagerWidget.SetLocalPlayer
	 */
	struct UOrionMenuManagerWidget_SetLocalPlayer_Params
	{	};

	/**
	 * Function OrionGame.OrionMeshWidget.SetMeshVerticalAlignment
	 */
	struct UOrionMeshWidget_SetMeshVerticalAlignment_Params
	{
	public:
		unsigned char                                              InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMeshWidget.SetMeshScale
	 */
	struct UOrionMeshWidget_SetMeshScale_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMeshWidget.SetMeshMargin
	 */
	struct UOrionMeshWidget_SetMeshMargin_Params
	{	};

	/**
	 * Function OrionGame.OrionMeshWidget.SetMeshHorizontalAlignment
	 */
	struct UOrionMeshWidget_SetMeshHorizontalAlignment_Params
	{
	public:
		unsigned char                                              InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMeshWidget.SetDesiredSize
	 */
	struct UOrionMeshWidget_SetDesiredSize_Params
	{	};

	/**
	 * Function OrionGame.OrionMeshWidget.GetDynamicMaterial
	 */
	struct UOrionMeshWidget_GetDynamicMaterial_Params
	{	};

	/**
	 * Function OrionGame.OrionNavTowerComponent.OnNavDataGenerationFinished
	 */
	struct UOrionNavTowerComponent_OnNavDataGenerationFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationList.PushNotification
	 */
	struct UOrionNotificationList_PushNotification_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationList.PopNotification
	 */
	struct UOrionNotificationList_PopNotification_Params
	{	};

	/**
	 * Function OrionGame.OrionNotificationList.NumNotifications
	 */
	struct UOrionNotificationList_NumNotifications_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionNotificationList.FindUserWidget
	 */
	struct UOrionNotificationList_FindUserWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ServerSetTeamInfoRequest
	 */
	struct AOrionPartyBeaconClient_ServerSetTeamInfoRequest_Params
	{
	public:
		bool                                                       bPlayerTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ServerSetAcceptedMatch
	 */
	struct AOrionPartyBeaconClient_ServerSetAcceptedMatch_Params
	{
	public:
		unsigned char                                              AcceptState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ServerConfigureMatchReservationRequest
	 */
	struct AOrionPartyBeaconClient_ServerConfigureMatchReservationRequest_Params
	{
	public:
		class FString                                              InSessionId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ClientSetTeamInfoResponse
	 */
	struct AOrionPartyBeaconClient_ClientSetTeamInfoResponse_Params
	{
	public:
		unsigned char                                              Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ClientSendLobbyStateChanged
	 */
	struct AOrionPartyBeaconClient_ClientSendLobbyStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ClientSendAcceptMatchPlayersUpdate
	 */
	struct AOrionPartyBeaconClient_ClientSendAcceptMatchPlayersUpdate_Params
	{	};

	/**
	 * Function OrionGame.OrionPartyBeaconClient.ClientAllTeamsReady
	 */
	struct AOrionPartyBeaconClient_ClientAllTeamsReady_Params
	{	};

	/**
	 * DelegateFunction OrionGame.OrionPartyMemberState.OnMemberUpdated__DelegateSignature
	 */
	struct UOrionPartyMemberState_OnMemberUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function OrionGame.OrionPartyMemberState.IsDirty
	 */
	struct UOrionPartyMemberState_IsDirty_Params
	{
	public:
		unsigned char                                              Flag;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyMemberState.IsAfK
	 */
	struct UOrionPartyMemberState_IsAfK_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyMemberState.GetLevelProgress
	 */
	struct UOrionPartyMemberState_GetLevelProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyMemberState.GetIsConsole
	 */
	struct UOrionPartyMemberState_GetIsConsole_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPartyMemberState.GetAccountLevel
	 */
	struct UOrionPartyMemberState_GetAccountLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.SetReady
	 */
	struct UOrionPersistentPartyMember_SetReady_Params
	{
	public:
		bool                                                       bInReady;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.SetLoaded
	 */
	struct UOrionPersistentPartyMember_SetLoaded_Params
	{
	public:
		bool                                                       InLoaded;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.SetHero
	 */
	struct UOrionPersistentPartyMember_SetHero_Params
	{	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.IsReady
	 */
	struct UOrionPersistentPartyMember_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.IsLoaded
	 */
	struct UOrionPersistentPartyMember_IsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.IsDirty
	 */
	struct UOrionPersistentPartyMember_IsDirty_Params
	{
	public:
		unsigned char                                              Flag;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.HasLockedInHero
	 */
	struct UOrionPersistentPartyMember_HasLockedInHero_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.GetLocation
	 */
	struct UOrionPersistentPartyMember_GetLocation_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.GetHero
	 */
	struct UOrionPersistentPartyMember_GetHero_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPersistentPartyMember.GetCurrentBanReason
	 */
	struct UOrionPersistentPartyMember_GetCurrentBanReason_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.SetRole
	 */
	struct UOrionTeamBuilderPartyMember_SetRole_Params
	{
	public:
		unsigned char                                              Role;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.SetReady
	 */
	struct UOrionTeamBuilderPartyMember_SetReady_Params
	{
	public:
		bool                                                       InReady;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.SetPosition
	 */
	struct UOrionTeamBuilderPartyMember_SetPosition_Params
	{
	public:
		unsigned char                                              Position;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.SetPlatform
	 */
	struct UOrionTeamBuilderPartyMember_SetPlatform_Params
	{
	public:
		unsigned char                                              InPlatform;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.SetHeroName
	 */
	struct UOrionTeamBuilderPartyMember_SetHeroName_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.SetDeck
	 */
	struct UOrionTeamBuilderPartyMember_SetDeck_Params
	{
	public:
		class FString                                              DeckId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.IsReady
	 */
	struct UOrionTeamBuilderPartyMember_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.IsDirty
	 */
	struct UOrionTeamBuilderPartyMember_IsDirty_Params
	{
	public:
		unsigned char                                              Flag;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetSlotIdx
	 */
	struct UOrionTeamBuilderPartyMember_GetSlotIdx_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetRole
	 */
	struct UOrionTeamBuilderPartyMember_GetRole_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetPosition
	 */
	struct UOrionTeamBuilderPartyMember_GetPosition_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetPlatform
	 */
	struct UOrionTeamBuilderPartyMember_GetPlatform_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetHeroName
	 */
	struct UOrionTeamBuilderPartyMember_GetHeroName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetDeck
	 */
	struct UOrionTeamBuilderPartyMember_GetDeck_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTeamBuilderPartyMember.GetCosmeticChoices
	 */
	struct UOrionTeamBuilderPartyMember_GetCosmeticChoices_Params
	{	};

	/**
	 * Function OrionGame.OrionPlacementActor.OnLoadingChanged
	 */
	struct AOrionPlacementActor_OnLoadingChanged_Params
	{
	public:
		bool                                                       bIsLoading;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerStart.IsEnabled
	 */
	struct AOrionPlayerStart_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerStart.GetTeamNum
	 */
	struct AOrionPlayerStart_GetTeamNum_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerStart.EnableStartingSpot
	 */
	struct AOrionPlayerStart_EnableStartingSpot_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerStart.DisableStartingSpot
	 */
	struct AOrionPlayerStart_DisableStartingSpot_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_DraftLobby.OnRep_TeamSpecificInfo
	 */
	struct AOrionPlayerState_DraftLobby_OnRep_TeamSpecificInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_DraftLobby.OnRep_PickStatus
	 */
	struct AOrionPlayerState_DraftLobby_OnRep_PickStatus_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_DraftLobby.OnRep_LockedInHeroInfo
	 */
	struct AOrionPlayerState_DraftLobby_OnRep_LockedInHeroInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_DraftLobby.OnRep_IsSoleHumanInDraft
	 */
	struct AOrionPlayerState_DraftLobby_OnRep_IsSoleHumanInDraft_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerState_DraftLobby.OnRep_AbortPenaltyReason
	 */
	struct AOrionPlayerState_DraftLobby_OnRep_AbortPenaltyReason_Params
	{	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Arena.SetEnforce180Rule
	 */
	struct UOrionSpectatorCamComp_Arena_SetEnforce180Rule_Params
	{
	public:
		bool                                                       bNewEnforce180;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Arena.SetCameraPositionOnRail
	 */
	struct UOrionSpectatorCamComp_Arena_SetCameraPositionOnRail_Params
	{
	public:
		float                                                      DistanceAlongRail;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Arena.AddMoveRightInput
	 */
	struct UOrionSpectatorCamComp_Arena_AddMoveRightInput_Params
	{
	public:
		float                                                      InputVal;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Arena.AddMoveForwardInput
	 */
	struct UOrionSpectatorCamComp_Arena_AddMoveForwardInput_Params
	{
	public:
		float                                                      InputVal;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Chase.SetLazyAutoFollow
	 */
	struct UOrionSpectatorCamComp_Chase_SetLazyAutoFollow_Params
	{
	public:
		bool                                                       bNewLazyAutoFollow;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Chase.SetAutoFollow
	 */
	struct UOrionSpectatorCamComp_Chase_SetAutoFollow_Params
	{
	public:
		bool                                                       bNewAutoFollow;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_Isometric.SetCameraAngle
	 */
	struct UOrionSpectatorCamComp_Isometric_SetCameraAngle_Params
	{
	public:
		unsigned char                                              NewAngle;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorCamComp_OTS.SetAutoFollow
	 */
	struct UOrionSpectatorCamComp_OTS_SetAutoFollow_Params
	{
	public:
		bool                                                       bNewAutoFollow;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.HoverDronePawn.IsMaintainingConstantAltitude
	 */
	struct AHoverDronePawn_IsMaintainingConstantAltitude_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.HoverDronePawn.GetAltitude
	 */
	struct AHoverDronePawn_GetAltitude_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRewardDisplayLibrary.GetLootSourceText
	 */
	struct UOrionRewardDisplayLibrary_GetLootSourceText_Params
	{
	public:
		class FText                                                LootSourceText;                                          // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTooltipBase.Show
	 */
	struct UOrionTooltipBase_Show_Params
	{	};

	/**
	 * Function OrionGame.OrionTooltipBase.OnShow
	 */
	struct UOrionTooltipBase_OnShow_Params
	{	};

	/**
	 * Function OrionGame.OrionTooltipBase.OnHide
	 */
	struct UOrionTooltipBase_OnHide_Params
	{	};

	/**
	 * Function OrionGame.OrionTooltipBase.Hide
	 */
	struct UOrionTooltipBase_Hide_Params
	{	};

	/**
	 * Function OrionGame.OrionRichText.SetText
	 */
	struct UOrionRichText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichText.SetSize
	 */
	struct UOrionRichText_SetSize_Params
	{
	public:
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichText.SetInlineIconDisplayMode
	 */
	struct UOrionRichText_SetInlineIconDisplayMode_Params
	{
	public:
		unsigned char                                              DisplayMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichText.SetColorType
	 */
	struct UOrionRichText_SetColorType_Params
	{
	public:
		unsigned char                                              Color;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichText.Refresh
	 */
	struct UOrionRichText_Refresh_Params
	{	};

	/**
	 * Function OrionGame.OrionRichText.GetStyleSize
	 */
	struct UOrionRichText_GetStyleSize_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichText.GetInlineIconColorType
	 */
	struct UOrionRichText_GetInlineIconColorType_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichText.GetColorType
	 */
	struct UOrionRichText_GetColorType_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.GetCurrencyIconTagSpecific
	 */
	struct UOrionRichTextHelperLibrary_GetCurrencyIconTagSpecific_Params
	{
	public:
		unsigned char                                              Currency;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.GetCurrencyIconTag
	 */
	struct UOrionRichTextHelperLibrary_GetCurrencyIconTag_Params
	{
	public:
		unsigned char                                              Currency;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.GetAttributeValueTag
	 */
	struct UOrionRichTextHelperLibrary_GetAttributeValueTag_Params
	{
	public:
		unsigned char                                              SummandType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ValueTag;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.GetAttributeMarkup
	 */
	struct UOrionRichTextHelperLibrary_GetAttributeMarkup_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.GetAttributeAbbreviationMarkup
	 */
	struct UOrionRichTextHelperLibrary_GetAttributeAbbreviationMarkup_Params
	{
	public:
		class FString                                              Abbreviation;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.FormatAsKeywordSpecific
	 */
	struct UOrionRichTextHelperLibrary_FormatAsKeywordSpecific_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Color;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.FormatAsKeyword
	 */
	struct UOrionRichTextHelperLibrary_FormatAsKeyword_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.FormatAsCurrency
	 */
	struct UOrionRichTextHelperLibrary_FormatAsCurrency_Params
	{
	public:
		unsigned char                                              Currency;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                DisplayValue;                                            // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.FormatAsAttributeValue
	 */
	struct UOrionRichTextHelperLibrary_FormatAsAttributeValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              SummandType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.ConvertToKeywordSpecific
	 */
	struct UOrionRichTextHelperLibrary_ConvertToKeywordSpecific_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              Size;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Color;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRichTextHelperLibrary.ConvertToKeyword
	 */
	struct UOrionRichTextHelperLibrary_ConvertToKeyword_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.OrionRuntimeOptions.OnHotfixApplied__DelegateSignature
	 */
	struct UOrionRuntimeOptions_OnHotfixApplied__DelegateSignature_Params
	{	};

	/**
	 * Function OrionGame.OrionRuntimeOptions.IsImageViewer
	 */
	struct UOrionRuntimeOptions_IsImageViewer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRuntimeOptions.IsDeathcamEnabled
	 */
	struct UOrionRuntimeOptions_IsDeathcamEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRuntimeOptions.GetRuntimeOptions
	 */
	struct UOrionRuntimeOptions_GetRuntimeOptions_Params
	{	};

	/**
	 * Function OrionGame.OrionRuntimeOptions.GetGameVersion
	 */
	struct UOrionRuntimeOptions_GetGameVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRuntimeOptions.GetBuildTime
	 */
	struct UOrionRuntimeOptions_GetBuildTime_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionShadowPad.UpdateLocalEffects
	 */
	struct AOrionShadowPad_UpdateLocalEffects_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionShadowPad.OnOverlapEnd
	 */
	struct AOrionShadowPad_OnOverlapEnd_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionShadowPad.OnOverlapBegin
	 */
	struct AOrionShadowPad_OnOverlapBegin_Params
	{
	public:
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionShadowPad.HandleOverlappingCharEnteredPhaseShift
	 */
	struct AOrionShadowPad_HandleOverlappingCharEnteredPhaseShift_Params
	{	};

	/**
	 * Function OrionGame.OrionShadowPad.HandleOverlappingCharDeath
	 */
	struct AOrionShadowPad_HandleOverlappingCharDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionShadowPad.GameplayTagCallback_ShadowPlanePadOff
	 */
	struct AOrionShadowPad_GameplayTagCallback_ShadowPlanePadOff_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStoreDisplayLibrary.GetStorefrontDisplayInfo
	 */
	struct UOrionStoreDisplayLibrary_GetStorefrontDisplayInfo_Params
	{
	public:
		unsigned char                                              Storefront;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTableView.SetSelection
	 */
	struct UOrionTableView_SetSelection_Params
	{	};

	/**
	 * Function OrionGame.OrionTableView.SetDataProvider
	 */
	struct UOrionTableView_SetDataProvider_Params
	{	};

	/**
	 * DelegateFunction OrionGame.OrionTableView.OnTableViewItemEvent__DelegateSignature
	 */
	struct UOrionTableView_OnTableViewItemEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OrionGame.OrionTableView.OnItemUnhover
	 */
	struct UOrionTableView_OnItemUnhover_Params
	{	};

	/**
	 * Function OrionGame.OrionTableView.OnItemSelected
	 */
	struct UOrionTableView_OnItemSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTableView.OnItemHover
	 */
	struct UOrionTableView_OnItemHover_Params
	{	};

	/**
	 * Function OrionGame.OrionTableView.OnItemClicked
	 */
	struct UOrionTableView_OnItemClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionTableView.GetSelection
	 */
	struct UOrionTableView_GetSelection_Params
	{	};

	/**
	 * Function OrionGame.OrionTableView.ClearSelection
	 */
	struct UOrionTableView_ClearSelection_Params
	{	};

	/**
	 * Function OrionGame.OrionTeamColorComponent.SetupTeamColors
	 */
	struct UOrionTeamColorComponent_SetupTeamColors_Params
	{
	public:
		unsigned char                                              TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDead;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUI_Game.ShowNetworkReplayMenu
	 */
	struct AOrionUI_Game_ShowNetworkReplayMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionUI_Game.PreviousDebugTarget
	 */
	struct AOrionUI_Game_PreviousDebugTarget_Params
	{	};

	/**
	 * Function OrionGame.OrionUI_Game.OrionCycleShowDebug
	 */
	struct AOrionUI_Game_OrionCycleShowDebug_Params
	{	};

	/**
	 * Function OrionGame.OrionUI_Game.NextDebugTarget
	 */
	struct AOrionUI_Game_NextDebugTarget_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.ToString
	 */
	struct UOrionUIBlueprintLibrary_ToString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.StatToText
	 */
	struct UOrionUIBlueprintLibrary_StatToText_Params
	{
	public:
		unsigned char                                              InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.SetNeedsMouse
	 */
	struct UOrionUIBlueprintLibrary_SetNeedsMouse_Params
	{
	public:
		bool                                                       bNeedsMouse;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.SetInputModeUIOnly
	 */
	struct UOrionUIBlueprintLibrary_SetInputModeUIOnly_Params
	{
	public:
		bool                                                       bEnableParallax;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.SetInputModeGameOnly
	 */
	struct UOrionUIBlueprintLibrary_SetInputModeGameOnly_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.SetInputModeGameAndUI
	 */
	struct UOrionUIBlueprintLibrary_SetInputModeGameAndUI_Params
	{
	public:
		bool                                                       bHideCursorDuringCapture;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bEnableParallax;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.SafePercent
	 */
	struct UOrionUIBlueprintLibrary_SafePercent_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueMax;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIfInvalidReturnOne;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.OrionTBFindMemberByIndex
	 */
	struct UOrionUIBlueprintLibrary_OrionTBFindMemberByIndex_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.OrionAffinityStructToEnum
	 */
	struct UOrionUIBlueprintLibrary_OrionAffinityStructToEnum_Params
	{
	public:
		unsigned char                                              First;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Second;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.NotEqual_OrionPlayerStateUIID
	 */
	struct UOrionUIBlueprintLibrary_NotEqual_OrionPlayerStateUIID_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.IsMTXPaymentAllowed
	 */
	struct UOrionUIBlueprintLibrary_IsMTXPaymentAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.IsInWorld
	 */
	struct UOrionUIBlueprintLibrary_IsInWorld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.IsInSegment
	 */
	struct UOrionUIBlueprintLibrary_IsInSegment_Params
	{
	public:
		float                                                      Center;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WedgeSize;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TestAngle;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.IsDemoMode
	 */
	struct UOrionUIBlueprintLibrary_IsDemoMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.IsConsoleOpen
	 */
	struct UOrionUIBlueprintLibrary_IsConsoleOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.IsConsoleBuild
	 */
	struct UOrionUIBlueprintLibrary_IsConsoleBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.HasCommandLineParameter
	 */
	struct UOrionUIBlueprintLibrary_HasCommandLineParameter_Params
	{
	public:
		class FString                                              CommandLine;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetTimespanAsSimpleText
	 */
	struct UOrionUIBlueprintLibrary_GetTimespanAsSimpleText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetStoreOfferFrom
	 */
	struct UOrionUIBlueprintLibrary_GetStoreOfferFrom_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetSegmentAngles
	 */
	struct UOrionUIBlueprintLibrary_GetSegmentAngles_Params
	{
	public:
		float                                                      Center;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WedgeSize;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Min;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Max;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetLanguageDisplayName
	 */
	struct UOrionUIBlueprintLibrary_GetLanguageDisplayName_Params
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetIconsFromScoreboardCardInfo
	 */
	struct UOrionUIBlueprintLibrary_GetIconsFromScoreboardCardInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetHeroesForWelcomeScreen
	 */
	struct UOrionUIBlueprintLibrary_GetHeroesForWelcomeScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetHealthPipValue
	 */
	struct UOrionUIBlueprintLibrary_GetHealthPipValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetCurrentMaterialTime
	 */
	struct UOrionUIBlueprintLibrary_GetCurrentMaterialTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetCurrentLanguageCode
	 */
	struct UOrionUIBlueprintLibrary_GetCurrentLanguageCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetCleanOffset
	 */
	struct UOrionUIBlueprintLibrary_GetCleanOffset_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetCardRelatedData
	 */
	struct UOrionUIBlueprintLibrary_GetCardRelatedData_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetCardDataFromScoreboardCardInfo
	 */
	struct UOrionUIBlueprintLibrary_GetCardDataFromScoreboardCardInfo_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.GetAvailableLanguages
	 */
	struct UOrionUIBlueprintLibrary_GetAvailableLanguages_Params
	{	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.EqualEqual_OrionPlayerStateUIID
	 */
	struct UOrionUIBlueprintLibrary_EqualEqual_OrionPlayerStateUIID_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.CopyToClipboard
	 */
	struct UOrionUIBlueprintLibrary_CopyToClipboard_Params
	{
	public:
		class FString                                              ClipboardText;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.Contains_OrionAffinityStruct
	 */
	struct UOrionUIBlueprintLibrary_Contains_OrionAffinityStruct_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIBlueprintLibrary.ClearFocusForModalWindow
	 */
	struct UOrionUIBlueprintLibrary_ClearFocusForModalWindow_Params
	{	};

	/**
	 * Function OrionGame.OrionCMSBaseTile.OnMarketplaceWidgetClicked
	 */
	struct UOrionCMSBaseTile_OnMarketplaceWidgetClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCMSBaseTile.Launch
	 */
	struct UOrionCMSBaseTile_Launch_Params
	{	};

	/**
	 * Function OrionGame.HUDAlertWidgetBase.OnPlay
	 */
	struct UHUDAlertWidgetBase_OnPlay_Params
	{	};

	/**
	 * Function OrionGame.HUDAlertWidgetBase.NotifyAlertFinished
	 */
	struct UHUDAlertWidgetBase_NotifyAlertFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityPipsWidget.ShowWidget
	 */
	struct UOrionAbilityPipsWidget_ShowWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityPipsWidget.SetNumOfPips
	 */
	struct UOrionAbilityPipsWidget_SetNumOfPips_Params
	{
	public:
		unsigned char                                              _NumOfPips;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityPipsWidget.SetNumOfFullPips
	 */
	struct UOrionAbilityPipsWidget_SetNumOfFullPips_Params
	{
	public:
		int32_t                                                    InNumOfPips;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityPipsWidget.HideWidget
	 */
	struct UOrionAbilityPipsWidget_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionUpgradePanelIcon.HideLock
	 */
	struct UOrionUpgradePanelIcon_HideLock_Params
	{	};

	/**
	 * Function OrionGame.OrionUpgradePanelIcon.GoToCanUpgradeState
	 */
	struct UOrionUpgradePanelIcon_GoToCanUpgradeState_Params
	{	};

	/**
	 * Function OrionGame.OrionUpgradePanelIcon.GoToCanNotUpgradeState
	 */
	struct UOrionUpgradePanelIcon_GoToCanNotUpgradeState_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePanelPullTab.ShowWidget
	 */
	struct UOrionAbilityUpgradePanelPullTab_ShowWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePanelPullTab.HideWidget
	 */
	struct UOrionAbilityUpgradePanelPullTab_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePromptWidget.ShowWidget
	 */
	struct UOrionAbilityUpgradePromptWidget_ShowWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePromptWidget.HideWidget
	 */
	struct UOrionAbilityUpgradePromptWidget_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.ShowUpgrades
	 */
	struct UOrionAbilityUpgradeRowWidget_ShowUpgrades_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.ShowKeyboardKeys
	 */
	struct UOrionAbilityUpgradeRowWidget_ShowKeyboardKeys_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.ShowGamepadKeys
	 */
	struct UOrionAbilityUpgradeRowWidget_ShowGamepadKeys_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.OnAbilityUpgraded
	 */
	struct UOrionAbilityUpgradeRowWidget_OnAbilityUpgraded_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.HideUpgrades
	 */
	struct UOrionAbilityUpgradeRowWidget_HideUpgrades_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.HideLocks
	 */
	struct UOrionAbilityUpgradeRowWidget_HideLocks_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradeRowWidget.GetInputID
	 */
	struct UOrionAbilityUpgradeRowWidget_GetInputID_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePanel.OpenMenu
	 */
	struct UOrionAbilityUpgradePanel_OpenMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePanel.OnClosedFinished
	 */
	struct UOrionAbilityUpgradePanel_OnClosedFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityUpgradePanel.CloseMenu
	 */
	struct UOrionAbilityUpgradePanel_CloseMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionCardInspectWidget.OnShow
	 */
	struct UOrionCardInspectWidget_OnShow_Params
	{	};

	/**
	 * Function OrionGame.OrionCardInspectWidget.OnHide
	 */
	struct UOrionCardInspectWidget_OnHide_Params
	{	};

	/**
	 * Function OrionGame.OrionCardInspectWidget.HandleCloseButtonClicked
	 */
	struct UOrionCardInspectWidget_HandleCloseButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_AffinityRow.BP_OnSelected
	 */
	struct UOrionCardsWidget_AffinityRow_BP_OnSelected_Params
	{
	public:
		bool                                                       bSkipAnim;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardsWidget_AffinityRow.BP_OnDeselected
	 */
	struct UOrionCardsWidget_AffinityRow_BP_OnDeselected_Params
	{
	public:
		bool                                                       bSkipAnim;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardWidget.SetCardDataSource
	 */
	struct UOrionCardWidget_SetCardDataSource_Params
	{	};

	/**
	 * Function OrionGame.OrionCardWidget.ResetData
	 */
	struct UOrionCardWidget_ResetData_Params
	{	};

	/**
	 * Function OrionGame.OrionCardWidget.OnCardRefreshed
	 */
	struct UOrionCardWidget_OnCardRefreshed_Params
	{	};

	/**
	 * Function OrionGame.OrionCardWidget.IsCardRecentlyUnlocked
	 */
	struct UOrionCardWidget_IsCardRecentlyUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardWidget.IsCardLocked
	 */
	struct UOrionCardWidget_IsCardLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardWidget.GetTotalCost
	 */
	struct UOrionCardWidget_GetTotalCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardWidget.GetNumUpgradeSlots
	 */
	struct UOrionCardWidget_GetNumUpgradeSlots_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardWidget.GetCardData
	 */
	struct UOrionCardWidget_GetCardData_Params
	{	};

	/**
	 * Function OrionGame.OrionCardWidget.GetCardActor
	 */
	struct UOrionCardWidget_GetCardActor_Params
	{	};

	/**
	 * Function OrionGame.OrionCardTooltip.SetCardDataSource
	 */
	struct UOrionCardTooltip_SetCardDataSource_Params
	{	};

	/**
	 * Function OrionGame.OrionCardTooltip.SetCardData
	 */
	struct UOrionCardTooltip_SetCardData_Params
	{	};

	/**
	 * Function OrionGame.OrionCardTooltip.Refresh
	 */
	struct UOrionCardTooltip_Refresh_Params
	{	};

	/**
	 * Function OrionGame.OrionCardTooltip.OnCardDataSourceUpdated
	 */
	struct UOrionCardTooltip_OnCardDataSourceUpdated_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget.HandleSearchTextCommitted
	 */
	struct UOrionCardsWidget_HandleSearchTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              CommitMethod;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardsWidget.HandleSearchTextChanged
	 */
	struct UOrionCardsWidget_HandleSearchTextChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardsWidget.HandleFilterButtonClicked
	 */
	struct UOrionCardsWidget_HandleFilterButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_FilterEntry.OnSelectionChanged
	 */
	struct UOrionDeckBuilder_FilterEntry_OnSelectionChanged_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterRow.BP_OnSelected
	 */
	struct UOrionCardsWidget_FilterRow_BP_OnSelected_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterRow.BP_OnDeselected
	 */
	struct UOrionCardsWidget_FilterRow_BP_OnDeselected_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.HandleToggleOwnedCardsOnly
	 */
	struct UOrionCardsWidget_FilterMenu_HandleToggleOwnedCardsOnly_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.HandleOwnedCardsToggled
	 */
	struct UOrionCardsWidget_FilterMenu_HandleOwnedCardsToggled_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.HandleCostCleared
	 */
	struct UOrionCardsWidget_FilterMenu_HandleCostCleared_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.HandleCostButtonSelected
	 */
	struct UOrionCardsWidget_FilterMenu_HandleCostButtonSelected_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.HandleCloseButtonClicked
	 */
	struct UOrionCardsWidget_FilterMenu_HandleCloseButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.BP_OnOpen
	 */
	struct UOrionCardsWidget_FilterMenu_BP_OnOpen_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.BP_OnClose
	 */
	struct UOrionCardsWidget_FilterMenu_BP_OnClose_Params
	{	};

	/**
	 * Function OrionGame.OrionCardsWidget_FilterMenu.BP_CloseComplete
	 */
	struct UOrionCardsWidget_FilterMenu_BP_CloseComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionStoreScreen.RebuildFeaturedOffers
	 */
	struct UOrionStoreScreen_RebuildFeaturedOffers_Params
	{	};

	/**
	 * Function OrionGame.OrionStoreScreen.HandleFoundersPackOpened
	 */
	struct UOrionStoreScreen_HandleFoundersPackOpened_Params
	{	};

	/**
	 * Function OrionGame.OrionStoreScreen.HandleFoundersPackConfirmed
	 */
	struct UOrionStoreScreen_HandleFoundersPackConfirmed_Params
	{
	public:
		bool                                                       bPurchased;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDeckBuilder_CardGroup.HandleRemoveFromDeckClicked
	 */
	struct UOrionDeckBuilder_CardGroup_HandleRemoveFromDeckClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDefaultButton.UpdateText
	 */
	struct UOrionDefaultButton_UpdateText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDefaultButton.UpdateSpecificImageSize
	 */
	struct UOrionDefaultButton_UpdateSpecificImageSize_Params
	{
	public:
		unsigned char                                              Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InSize;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDefaultButton.UpdateIconFromTexture
	 */
	struct UOrionDefaultButton_UpdateIconFromTexture_Params
	{	};

	/**
	 * Function OrionGame.OrionDefaultButton.UpdateIcon
	 */
	struct UOrionDefaultButton_UpdateIcon_Params
	{
	public:
		bool                                                       bRetainBrushImageSize;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDefaultButton.SetNormalContentColor
	 */
	struct UOrionDefaultButton_SetNormalContentColor_Params
	{
	public:
		unsigned char                                              InNormalTextColor;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDefaultButton.SetHoveredContentColor
	 */
	struct UOrionDefaultButton_SetHoveredContentColor_Params
	{
	public:
		unsigned char                                              InHoveredTextColor;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDefaultButton.RefreshLayout
	 */
	struct UOrionDefaultButton_RefreshLayout_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_Card.HandleAddToDeck
	 */
	struct UOrionDeckBuilder_Card_HandleAddToDeck_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_GroupMaker.HandleOpenComplete
	 */
	struct UOrionDeckBuilder_GroupMaker_HandleOpenComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_GroupMaker.HandleCloseComplete
	 */
	struct UOrionDeckBuilder_GroupMaker_HandleCloseComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_GroupMaker.HandleCancelClicked
	 */
	struct UOrionDeckBuilder_GroupMaker_HandleCancelClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_GroupMaker.HandleAcceptClicked
	 */
	struct UOrionDeckBuilder_GroupMaker_HandleAcceptClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_ImportExport.DidCommitText
	 */
	struct UOrionDeckBuilder_ImportExport_DidCommitText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              CommitMethod;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDeckBuilder_ImportExport.DidClickImport
	 */
	struct UOrionDeckBuilder_ImportExport_DidClickImport_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_PrimeSelector.DidFinishCloseAnim
	 */
	struct UOrionDeckBuilder_PrimeSelector_DidFinishCloseAnim_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckBuilder_StatFilterButton.PreStateChange
	 */
	struct UOrionDeckBuilder_StatFilterButton_PreStateChange_Params
	{
	public:
		unsigned char                                              NextState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDeckBuilder_StatFilterButton.PostStateChange
	 */
	struct UOrionDeckBuilder_StatFilterButton_PostStateChange_Params
	{
	public:
		unsigned char                                              CurrentState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDeckBuilder_StatFilterDisplay.HandleResetClicked
	 */
	struct UOrionDeckBuilder_StatFilterDisplay_HandleResetClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckList.DidDeactivateDeckReset
	 */
	struct UOrionDeckList_DidDeactivateDeckReset_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckList.DidClickNewDeck
	 */
	struct UOrionDeckList_DidClickNewDeck_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckList.DidClickDeck
	 */
	struct UOrionDeckList_DidClickDeck_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckList.DidClickBuyDeckSlot
	 */
	struct UOrionDeckList_DidClickBuyDeckSlot_Params
	{	};

	/**
	 * Function OrionGame.OrionDialogWidget.ShowDialog
	 */
	struct UOrionDialogWidget_ShowDialog_Params
	{	};

	/**
	 * Function OrionGame.OrionDialogWidget.ProcessResult
	 */
	struct UOrionDialogWidget_ProcessResult_Params
	{
	public:
		unsigned char                                              DialogResult;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDialogWidget.OnShow
	 */
	struct UOrionDialogWidget_OnShow_Params
	{	};

	/**
	 * Function OrionGame.OrionDialogWidget.OnKill
	 */
	struct UOrionDialogWidget_OnKill_Params
	{	};

	/**
	 * Function OrionGame.OrionDialogWidget.KillDialog
	 */
	struct UOrionDialogWidget_KillDialog_Params
	{	};

	/**
	 * Function OrionGame.OrionDraftHeroCustomization.HandleSkinSelected
	 */
	struct UOrionDraftHeroCustomization_HandleSkinSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionFlairPopup.ShowNextFlair
	 */
	struct UOrionFlairPopup_ShowNextFlair_Params
	{	};

	/**
	 * Function OrionGame.OrionFlairPopup.DynamicButtonClicked
	 */
	struct UOrionFlairPopup_DynamicButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionFlairPopup.AnimateRandomChestOpen
	 */
	struct UOrionFlairPopup_AnimateRandomChestOpen_Params
	{	};

	/**
	 * Function OrionGame.OrionFlairPopup.AnimateOut
	 */
	struct UOrionFlairPopup_AnimateOut_Params
	{	};

	/**
	 * Function OrionGame.OrionFlairPopup.AnimateIn
	 */
	struct UOrionFlairPopup_AnimateIn_Params
	{	};

	/**
	 * Function OrionGame.OrionFlairPopup.AnimateDailyChestOpen
	 */
	struct UOrionFlairPopup_AnimateDailyChestOpen_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Path.SetHero
	 */
	struct UOrionHeroDetails_Path_SetHero_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Path.OnHeroSet
	 */
	struct UOrionHeroDetails_Path_OnHeroSet_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Path.OnHeroPurchased
	 */
	struct UOrionHeroDetails_Path_OnHeroPurchased_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Path.HandlePurchaseButtonClicked
	 */
	struct UOrionHeroDetails_Path_HandlePurchaseButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Skins.SetHero
	 */
	struct UOrionHeroDetails_Skins_SetHero_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Skins.OnSkinPurchased
	 */
	struct UOrionHeroDetails_Skins_OnSkinPurchased_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroDetails_Skins.DynamicHandleSkinSelected
	 */
	struct UOrionHeroDetails_Skins_DynamicHandleSkinSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHeroDetails_Skins.DynamicHandleBuyButtonClicked
	 */
	struct UOrionHeroDetails_Skins_DynamicHandleBuyButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionMuteMenuRow.OnMutePressed
	 */
	struct UOrionMuteMenuRow_OnMutePressed_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerRateMenu.SetMyParent
	 */
	struct UOrionPlayerRateMenu_SetMyParent_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerRateMenu.DynamicHandleSubmitButtonClicked
	 */
	struct UOrionPlayerRateMenu_DynamicHandleSubmitButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionSinglePlayerRating.UpdateButtonText
	 */
	struct UOrionSinglePlayerRating_UpdateButtonText_Params
	{
	public:
		class FText                                                _Text;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSinglePlayerRating.RevertButtonGraphic
	 */
	struct UOrionSinglePlayerRating_RevertButtonGraphic_Params
	{	};

	/**
	 * Function OrionGame.OrionSinglePlayerRating.ResetRatingState
	 */
	struct UOrionSinglePlayerRating_ResetRatingState_Params
	{	};

	/**
	 * Function OrionGame.OrionSinglePlayerRating.RecordRatingInternal
	 */
	struct UOrionSinglePlayerRating_RecordRatingInternal_Params
	{
	public:
		unsigned char                                              Rating;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSinglePlayerRating.RecordNewRating
	 */
	struct UOrionSinglePlayerRating_RecordNewRating_Params
	{
	public:
		unsigned char                                              InRatingValue;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSinglePlayerRating.CloseChildMenu
	 */
	struct UOrionSinglePlayerRating_CloseChildMenu_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayRoot.HandleReadyButtonSelectionChanged
	 */
	struct UOrionPlayRoot_HandleReadyButtonSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayRoot.HandleGameTypeSelected
	 */
	struct UOrionPlayRoot_HandleGameTypeSelected_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPostGameScreen.ShowWeeklyQuest
	 */
	struct UOrionPostGameScreen_ShowWeeklyQuest_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.ShowPlayerRating
	 */
	struct UOrionPostGameScreen_ShowPlayerRating_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.SetFlairPopupReady
	 */
	struct UOrionPostGameScreen_SetFlairPopupReady_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.ResumeScreen
	 */
	struct UOrionPostGameScreen_ResumeScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.PrepareRewards
	 */
	struct UOrionPostGameScreen_PrepareRewards_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.PauseScreen
	 */
	struct UOrionPostGameScreen_PauseScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.OnExitScreen
	 */
	struct UOrionPostGameScreen_OnExitScreen_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.IsPostGameFlairMinimal
	 */
	struct UOrionPostGameScreen_IsPostGameFlairMinimal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPostGameScreen.IsPlayerRatingButtonDisabled
	 */
	struct UOrionPostGameScreen_IsPlayerRatingButtonDisabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPostGameScreen.IsContinueButtonDelayEnabled
	 */
	struct UOrionPostGameScreen_IsContinueButtonDelayEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPostGameScreen.DynamicHandleXPFillComplete
	 */
	struct UOrionPostGameScreen_DynamicHandleXPFillComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.DynamicHandleContinueButtonClicked
	 */
	struct UOrionPostGameScreen_DynamicHandleContinueButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.BeginPopupSequence
	 */
	struct UOrionPostGameScreen_BeginPopupSequence_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.BeginFanfare
	 */
	struct UOrionPostGameScreen_BeginFanfare_Params
	{	};

	/**
	 * Function OrionGame.OrionPostGameScreen.AreBanMessagesSuppressed
	 */
	struct UOrionPostGameScreen_AreBanMessagesSuppressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPostGameSurvey.DynamicHandleSubmitButtonClicked
	 */
	struct UOrionPostGameSurvey_DynamicHandleSubmitButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.OnShow
	 */
	struct UOrionPurchaseConfirmationWidget_OnShow_Params
	{	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.OnPurchaseComplete
	 */
	struct UOrionPurchaseConfirmationWidget_OnPurchaseComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.OnBuyAgain
	 */
	struct UOrionPurchaseConfirmationWidget_OnBuyAgain_Params
	{	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.OnBeginPurchase
	 */
	struct UOrionPurchaseConfirmationWidget_OnBeginPurchase_Params
	{	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.GetPrice
	 */
	struct UOrionPurchaseConfirmationWidget_GetPrice_Params
	{	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.DynamicHandleIconLoadingStateChanged
	 */
	struct UOrionPurchaseConfirmationWidget_DynamicHandleIconLoadingStateChanged_Params
	{
	public:
		bool                                                       bIsLoading;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.DynamicHandleCurrencyChanged
	 */
	struct UOrionPurchaseConfirmationWidget_DynamicHandleCurrencyChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionPurchaseConfirmationWidget.DynamicHandleBuyButtonClicked
	 */
	struct UOrionPurchaseConfirmationWidget_DynamicHandleBuyButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionQuickChatMessage.HandleMessageInputReceived
	 */
	struct UOrionQuickChatMessage_HandleMessageInputReceived_Params
	{	};

	/**
	 * Function OrionGame.OrionQuickChatMessage.BP_OnMessageSelected
	 */
	struct UOrionQuickChatMessage_BP_OnMessageSelected_Params
	{	};

	/**
	 * Function OrionGame.OrionQuickChatWrapper.OnToggleChatOptions
	 */
	struct UOrionQuickChatWrapper_OnToggleChatOptions_Params
	{
	public:
		bool                                                       bShowChatOptions;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionQuickChatWrapper.HandleToggleChatOptions
	 */
	struct UOrionQuickChatWrapper_HandleToggleChatOptions_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayBrowserList.OnReplaySearchTextCommitted
	 */
	struct UOrionReplayBrowserList_OnReplaySearchTextCommitted_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayBrowserList.OnReplaySearchButtonClicked
	 */
	struct UOrionReplayBrowserList_OnReplaySearchButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayBrowserList.HandleToggleSpoilers
	 */
	struct UOrionReplayBrowserList_HandleToggleSpoilers_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplayBrowserList.HandleDeactivated
	 */
	struct UOrionReplayBrowserList_HandleDeactivated_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayBrowserList.HandleActivated
	 */
	struct UOrionReplayBrowserList_HandleActivated_Params
	{	};

	/**
	 * Function OrionGame.OrionWidgetSwitcher.HandleActiveWidgetDeactivated
	 */
	struct UOrionWidgetSwitcher_HandleActiveWidgetDeactivated_Params
	{	};

	/**
	 * Function OrionGame.OrionCatalogOfferBase.SetOffer
	 */
	struct UOrionCatalogOfferBase_SetOffer_Params
	{	};

	/**
	 * Function OrionGame.OrionCatalogOfferBase.SetAdditionalConfirmationContent
	 */
	struct UOrionCatalogOfferBase_SetAdditionalConfirmationContent_Params
	{	};

	/**
	 * Function OrionGame.OrionCatalogOfferBase.DynamicHandleIconLoadingStateChanged
	 */
	struct UOrionCatalogOfferBase_DynamicHandleIconLoadingStateChanged_Params
	{
	public:
		bool                                                       bIsLoading;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCatalogOfferBase.DynamicHandleCurrencyChanged
	 */
	struct UOrionCatalogOfferBase_DynamicHandleCurrencyChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionStorefront.SetStorefrontType
	 */
	struct UOrionStorefront_SetStorefrontType_Params
	{
	public:
		unsigned char                                              InStorefrontType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStorefront.OnCatalogFlushed
	 */
	struct UOrionStorefront_OnCatalogFlushed_Params
	{	};

	/**
	 * Function OrionGame.OrionStorefront.HandleOfferConfirmed
	 */
	struct UOrionStorefront_HandleOfferConfirmed_Params
	{
	public:
		bool                                                       bPurchased;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStorefront.HandleFoundersPackOpened
	 */
	struct UOrionStorefront_HandleFoundersPackOpened_Params
	{	};

	/**
	 * Function OrionGame.OrionStorefront.HandleFoundersPackConfirmed
	 */
	struct UOrionStorefront_HandleFoundersPackConfirmed_Params
	{
	public:
		bool                                                       bPurchased;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStorefrontPopup.DynamicHandleCloseClicked
	 */
	struct UOrionStorefrontPopup_DynamicHandleCloseClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionWeeklyQuestScreen.OnResetData
	 */
	struct UOrionWeeklyQuestScreen_OnResetData_Params
	{	};

	/**
	 * Function OrionGame.OrionWeeklyQuestScreen.AbandonQuest
	 */
	struct UOrionWeeklyQuestScreen_AbandonQuest_Params
	{	};

	/**
	 * Function OrionGame.WeeklyQuestsBase.OnQuestPanelAdded
	 */
	struct UWeeklyQuestsBase_OnQuestPanelAdded_Params
	{	};

	/**
	 * Function OrionGame.OrionSkinOffer.DynamicHandlePurchaseSkinClicked
	 */
	struct UOrionSkinOffer_DynamicHandlePurchaseSkinClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroListItem.OnHeroDataSet
	 */
	struct UOrionHeroListItem_OnHeroDataSet_Params
	{	};

	/**
	 * Function OrionGame.OrionSkinListItem.OnSkinDefinitionSet
	 */
	struct UOrionSkinListItem_OnSkinDefinitionSet_Params
	{	};

	/**
	 * Function OrionGame.OrionSkinListItem.IsOwned
	 */
	struct UOrionSkinListItem_IsOwned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSkinListItem.IsForSale
	 */
	struct UOrionSkinListItem_IsForSale_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSkinListItem.HandleBuyButtonClicked
	 */
	struct UOrionSkinListItem_HandleBuyButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionSkinListItem.BP_OnSkinPurchased
	 */
	struct UOrionSkinListItem_BP_OnSkinPurchased_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.StopCooldown
	 */
	struct UOrionCardAbilityWidget_StopCooldown_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.StartCooldown
	 */
	struct UOrionCardAbilityWidget_StartCooldown_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.ShowStacksImage
	 */
	struct UOrionCardAbilityWidget_ShowStacksImage_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.RemovePlayedAnimation
	 */
	struct UOrionCardAbilityWidget_RemovePlayedAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.IsUnSelected
	 */
	struct UOrionCardAbilityWidget_IsUnSelected_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.IsSelected
	 */
	struct UOrionCardAbilityWidget_IsSelected_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.HideStacksImage
	 */
	struct UOrionCardAbilityWidget_HideStacksImage_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.HideLock
	 */
	struct UOrionCardAbilityWidget_HideLock_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.ExitSelectionMode
	 */
	struct UOrionCardAbilityWidget_ExitSelectionMode_Params
	{
	public:
		bool                                                       bWasHighlighted;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.EnterSelectionMode
	 */
	struct UOrionCardAbilityWidget_EnterSelectionMode_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.CardSet
	 */
	struct UOrionCardAbilityWidget_CardSet_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.CardCleared
	 */
	struct UOrionCardAbilityWidget_CardCleared_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.CannotActivate
	 */
	struct UOrionCardAbilityWidget_CannotActivate_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.CanActivate
	 */
	struct UOrionCardAbilityWidget_CanActivate_Params
	{	};

	/**
	 * Function OrionGame.OrionCardAbilityWidget.AddPlayedAnimation
	 */
	struct UOrionCardAbilityWidget_AddPlayedAnimation_Params
	{	};

	/**
	 * Function OrionGame.PageViewItem.SetRowColumn
	 */
	struct UPageViewItem_SetRowColumn_Params
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Column;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageViewItem.SetData
	 */
	struct UPageViewItem_SetData_Params
	{	};

	/**
	 * Function OrionGame.PageViewItem.Reset
	 */
	struct UPageViewItem_Reset_Params
	{	};

	/**
	 * Function OrionGame.PageViewItem.RegisterOnUnhover
	 */
	struct UPageViewItem_RegisterOnUnhover_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageViewItem.RegisterOnSelected
	 */
	struct UPageViewItem_RegisterOnSelected_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageViewItem.RegisterOnHover
	 */
	struct UPageViewItem_RegisterOnHover_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageViewItem.RegisterOnClicked
	 */
	struct UPageViewItem_RegisterOnClicked_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageViewItem.Initialize
	 */
	struct UPageViewItem_Initialize_Params
	{	};

	/**
	 * Function OrionGame.PageViewItem.GetData
	 */
	struct UPageViewItem_GetData_Params
	{	};

	/**
	 * Function OrionGame.PageView.SetPage
	 */
	struct UPageView_SetPage_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageView.RequestRefresh
	 */
	struct UPageView_RequestRefresh_Params
	{	};

	/**
	 * DelegateFunction OrionGame.PageView.PageViewOnItemSelected__DelegateSignature
	 */
	struct UPageView_PageViewOnItemSelected__DelegateSignature_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.PageView.PageViewOnItemHovered__DelegateSignature
	 */
	struct UPageView_PageViewOnItemHovered__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction OrionGame.PageView.PageViewOnItemClicked__DelegateSignature
	 */
	struct UPageView_PageViewOnItemClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OrionGame.PageView.GetPage
	 */
	struct UPageView_GetPage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageView.DynamicOnPageRight
	 */
	struct UPageView_DynamicOnPageRight_Params
	{	};

	/**
	 * Function OrionGame.PageView.DynamicOnPagePicked
	 */
	struct UPageView_DynamicOnPagePicked_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageView.DynamicOnPageLeft
	 */
	struct UPageView_DynamicOnPageLeft_Params
	{	};

	/**
	 * Function OrionGame.PageView.DynamicOnItemUnhover
	 */
	struct UPageView_DynamicOnItemUnhover_Params
	{	};

	/**
	 * Function OrionGame.PageView.DynamicOnItemSelected
	 */
	struct UPageView_DynamicOnItemSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PageView.DynamicOnItemHover
	 */
	struct UPageView_DynamicOnItemHover_Params
	{	};

	/**
	 * Function OrionGame.PageView.DynamicOnItemClicked
	 */
	struct UPageView_DynamicOnItemClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardMenuCard.OnStateChanged
	 */
	struct UOrionCardMenuCard_OnStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              OldState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardMenuCard.BP_ShowActionPompt
	 */
	struct UOrionCardMenuCard_BP_ShowActionPompt_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardMenuCard.BP_Reset
	 */
	struct UOrionCardMenuCard_BP_Reset_Params
	{	};

	/**
	 * Function OrionGame.OrionCardMenuCard.BP_ChangeRecentlyUnlocked
	 */
	struct UOrionCardMenuCard_BP_ChangeRecentlyUnlocked_Params
	{
	public:
		bool                                                       bIsRecentlyUnlocked;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardPointsWidget.ShowWidget
	 */
	struct UOrionCardPointsWidget_ShowWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCardPointsWidget.HideWidget
	 */
	struct UOrionCardPointsWidget_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.IsSelected
	 */
	struct UOrionCardShopBuildPip_IsSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.IsHighlighted
	 */
	struct UOrionCardShopBuildPip_IsHighlighted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.IsConsumed
	 */
	struct UOrionCardShopBuildPip_IsConsumed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.BP_OnSelected
	 */
	struct UOrionCardShopBuildPip_BP_OnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.BP_OnInfoChanged
	 */
	struct UOrionCardShopBuildPip_BP_OnInfoChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.BP_OnHighlighted
	 */
	struct UOrionCardShopBuildPip_BP_OnHighlighted_Params
	{
	public:
		bool                                                       bHighlighted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.BP_OnConsumedChanged
	 */
	struct UOrionCardShopBuildPip_BP_OnConsumedChanged_Params
	{
	public:
		bool                                                       bIsConsumed;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopBuildPip.BP_OnClicked
	 */
	struct UOrionCardShopBuildPip_BP_OnClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.TrashCard
	 */
	struct UOrionCardSlotWidget_TrashCard_Params
	{	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.SetSelected
	 */
	struct UOrionCardSlotWidget_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.OnSelectionChanged
	 */
	struct UOrionCardSlotWidget_OnSelectionChanged_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.OnCardChanged
	 */
	struct UOrionCardSlotWidget_OnCardChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.IsSelected
	 */
	struct UOrionCardSlotWidget_IsSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.GetCardForSlot
	 */
	struct UOrionCardSlotWidget_GetCardForSlot_Params
	{	};

	/**
	 * Function OrionGame.OrionCardSlotWidget.GetActionForSlot
	 */
	struct UOrionCardSlotWidget_GetActionForSlot_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.UpdateForCard
	 */
	struct UOrionHandSlotWidget_UpdateForCard_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.PreviewCard
	 */
	struct UOrionHandSlotWidget_PreviewCard_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.OnTrashButtonClicked
	 */
	struct UOrionHandSlotWidget_OnTrashButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.OnTrashAnimComplete
	 */
	struct UOrionHandSlotWidget_OnTrashAnimComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.OnSpendAnimComplete
	 */
	struct UOrionHandSlotWidget_OnSpendAnimComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.OnReadOnlyChanged
	 */
	struct UOrionHandSlotWidget_OnReadOnlyChanged_Params
	{
	public:
		bool                                                       bIsReadOnly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.OnClicked
	 */
	struct UOrionHandSlotWidget_OnClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.HandleRemoveCardAnimComplete
	 */
	struct UOrionHandSlotWidget_HandleRemoveCardAnimComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.HandleAddCardAnimComplete
	 */
	struct UOrionHandSlotWidget_HandleAddCardAnimComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.BP_OnCardUpgraded
	 */
	struct UOrionHandSlotWidget_BP_OnCardUpgraded_Params
	{
	public:
		int32_t                                                    UpgradeSlot;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.BP_OnCardStateChanged
	 */
	struct UOrionHandSlotWidget_BP_OnCardStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHandSlotWidget.BP_OnCardPreviewChanged
	 */
	struct UOrionHandSlotWidget_BP_OnCardPreviewChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.TrashCardInSlot
	 */
	struct UOrionCardShopWidget_TrashCardInSlot_Params
	{
	public:
		unsigned char                                              SlotIndex;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.SetSuggestionModeActive
	 */
	struct UOrionCardShopWidget_SetSuggestionModeActive_Params
	{
	public:
		bool                                                       bInSuggestionMode;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.SetActiveCategory
	 */
	struct UOrionCardShopWidget_SetActiveCategory_Params
	{
	public:
		unsigned char                                              InCategory;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.RegisterHandSlot
	 */
	struct UOrionCardShopWidget_RegisterHandSlot_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.Open
	 */
	struct UOrionCardShopWidget_Open_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnUndoClicked
	 */
	struct UOrionCardShopWidget_OnUndoClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnSummonTutorialClicked
	 */
	struct UOrionCardShopWidget_OnSummonTutorialClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnSuggestionModeClicked
	 */
	struct UOrionCardShopWidget_OnSuggestionModeClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnStateChanged
	 */
	struct UOrionCardShopWidget_OnStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnSlotFilterChanged
	 */
	struct UOrionCardShopWidget_OnSlotFilterChanged_Params
	{
	public:
		class FText                                                FilterText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnReadOnlyStateChanged
	 */
	struct UOrionCardShopWidget_OnReadOnlyStateChanged_Params
	{
	public:
		bool                                                       bIsReadOnly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnHelpTextUpdated
	 */
	struct UOrionCardShopWidget_OnHelpTextUpdated_Params
	{
	public:
		class FText                                                NewHelpText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnFilterIndexChanged
	 */
	struct UOrionCardShopWidget_OnFilterIndexChanged_Params
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnDeckSelected
	 */
	struct UOrionCardShopWidget_OnDeckSelected_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnConfirmDeckSelection
	 */
	struct UOrionCardShopWidget_OnConfirmDeckSelection_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnChangesDiscarded
	 */
	struct UOrionCardShopWidget_OnChangesDiscarded_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnChangesCommitted
	 */
	struct UOrionCardShopWidget_OnChangesCommitted_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnCardSourceChanged
	 */
	struct UOrionCardShopWidget_OnCardSourceChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnCardHovered
	 */
	struct UOrionCardShopWidget_OnCardHovered_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.OnActiveCategoryChanged
	 */
	struct UOrionCardShopWidget_OnActiveCategoryChanged_Params
	{
	public:
		unsigned char                                              Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.IsSuggestionModeActive
	 */
	struct UOrionCardShopWidget_IsSuggestionModeActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.HandleCanShopChange
	 */
	struct UOrionCardShopWidget_HandleCanShopChange_Params
	{
	public:
		bool                                                       bCanShop;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.GetHandSlots
	 */
	struct UOrionCardShopWidget_GetHandSlots_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.FilterBySlot
	 */
	struct UOrionCardShopWidget_FilterBySlot_Params
	{
	public:
		unsigned char                                              SlotIndex;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCardShopWidget.Exit
	 */
	struct UOrionCardShopWidget_Exit_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.Close
	 */
	struct UOrionCardShopWidget_Close_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.ClearSlotFilter
	 */
	struct UOrionCardShopWidget_ClearSlotFilter_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.BP_OnDeckChanged
	 */
	struct UOrionCardShopWidget_BP_OnDeckChanged_Params
	{	};

	/**
	 * Function OrionGame.OrionCardShopWidget.AddPendingCardToSlot
	 */
	struct UOrionCardShopWidget_AddPendingCardToSlot_Params
	{
	public:
		unsigned char                                              SlotIndex;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageManagerWidget.OnIsInBaseChange
	 */
	struct UOrionCombatMessageManagerWidget_OnIsInBaseChange_Params
	{
	public:
		bool                                                       bIsInBase;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageManagerWidget.OnCanShopChange
	 */
	struct UOrionCombatMessageManagerWidget_OnCanShopChange_Params
	{
	public:
		bool                                                       bCanShop;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageManagerWidget.OnBuffInfoRemoved
	 */
	struct UOrionCombatMessageManagerWidget_OnBuffInfoRemoved_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageManagerWidget.OnBuffInfoAdded
	 */
	struct UOrionCombatMessageManagerWidget_OnBuffInfoAdded_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageManagerWidget.AddCombatMessageWidget
	 */
	struct UOrionCombatMessageManagerWidget_AddCombatMessageWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.SetUsingGamepad
	 */
	struct UOrionCombatMessageWidget_SetUsingGamepad_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.OnIdleFinished
	 */
	struct UOrionCombatMessageWidget_OnIdleFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.OnExitFinished
	 */
	struct UOrionCombatMessageWidget_OnExitFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.OnEnterFinished
	 */
	struct UOrionCombatMessageWidget_OnEnterFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.IsPersistentMessage
	 */
	struct UOrionCombatMessageWidget_IsPersistentMessage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.Idle
	 */
	struct UOrionCombatMessageWidget_Idle_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.GetCombatMessageType
	 */
	struct UOrionCombatMessageWidget_GetCombatMessageType_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.GetCombatMessageState
	 */
	struct UOrionCombatMessageWidget_GetCombatMessageState_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.Exit
	 */
	struct UOrionCombatMessageWidget_Exit_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.Enter
	 */
	struct UOrionCombatMessageWidget_Enter_Params
	{	};

	/**
	 * Function OrionGame.OrionCombatMessageWidget.AttemptExit
	 */
	struct UOrionCombatMessageWidget_AttemptExit_Params
	{	};

	/**
	 * Function OrionGame.OrionCoreWidget.TeamsAreReady
	 */
	struct UOrionCoreWidget_TeamsAreReady_Params
	{
	public:
		unsigned char                                              MyTeam;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              EnemyTeam;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionCoreWidget.OnCoreExposed
	 */
	struct UOrionCoreWidget_OnCoreExposed_Params
	{	};

	/**
	 * Function OrionGame.OrionCoreWidget.OnCoreDamaged
	 */
	struct UOrionCoreWidget_OnCoreDamaged_Params
	{	};

	/**
	 * Function OrionGame.OrionCoreWidget.OnCoreCritical
	 */
	struct UOrionCoreWidget_OnCoreCritical_Params
	{	};

	/**
	 * Function OrionGame.OrionCustomStoreContentWidget.SetOffer
	 */
	struct UOrionCustomStoreContentWidget_SetOffer_Params
	{	};

	/**
	 * Function OrionGame.OrionCustomStoreContentWidget.OnOfferSet
	 */
	struct UOrionCustomStoreContentWidget_OnOfferSet_Params
	{	};

	/**
	 * Function OrionGame.OrionDeathRecapPanel.OnLocalHeroSpawn
	 */
	struct UOrionDeathRecapPanel_OnLocalHeroSpawn_Params
	{	};

	/**
	 * Function OrionGame.OrionDeathRecapPanel.OnLocalHeroDeath
	 */
	struct UOrionDeathRecapPanel_OnLocalHeroDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckRenderer.SetSelected
	 */
	struct UOrionDeckRenderer_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDeckRenderer.DidRequestDeleteDeck
	 */
	struct UOrionDeckRenderer_DidRequestDeleteDeck_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckRenderer.CreateDeckTooltip
	 */
	struct UOrionDeckRenderer_CreateDeckTooltip_Params
	{	};

	/**
	 * Function OrionGame.OrionDeckRenderer.BP_DeckLockedChanged
	 */
	struct UOrionDeckRenderer_BP_DeckLockedChanged_Params
	{
	public:
		bool                                                       bIsLocked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTeamMember.OnPickStatusChanged
	 */
	struct UOrionDraftTeamMember_OnPickStatusChanged_Params
	{
	public:
		unsigned char                                              PickStatus;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionDraftTeamMember.OnMemberSet
	 */
	struct UOrionDraftTeamMember_OnMemberSet_Params
	{
	public:
		bool                                                       bIsLocalPlayer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMarkingMenuLayerWidget_TeamComms.ShowEmoteTogglePrompt
	 */
	struct UOrionMarkingMenuLayerWidget_TeamComms_ShowEmoteTogglePrompt_Params
	{
	public:
		bool                                                       bShowPrompt;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMarkingMenuLayerWidget_TeamComms.SetInEmoteMode
	 */
	struct UOrionMarkingMenuLayerWidget_TeamComms_SetInEmoteMode_Params
	{
	public:
		bool                                                       bInEmoteMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenu_TeamComms.ToggleEmoteMode
	 */
	struct UOrionGenericMarkingMenu_TeamComms_ToggleEmoteMode_Params
	{	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenu_TeamComms.SetEmoteMode
	 */
	struct UOrionGenericMarkingMenu_TeamComms_SetEmoteMode_Params
	{
	public:
		bool                                                       bNewInEmoteMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenu_TeamComms.GetInEmoteMode
	 */
	struct UOrionGenericMarkingMenu_TeamComms_GetInEmoteMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionGenericMarkingMenu_TeamComms.DisableEmoteToggle
	 */
	struct UOrionGenericMarkingMenu_TeamComms_DisableEmoteToggle_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroAbilityDisplay.SetHero
	 */
	struct UOrionHeroAbilityDisplay_SetHero_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroAbilityWidget.SetAbilityInfoSimple
	 */
	struct UOrionHeroAbilityWidget_SetAbilityInfoSimple_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroAbilityWidget.SetAbilityInfo
	 */
	struct UOrionHeroAbilityWidget_SetAbilityInfo_Params
	{
	public:
		int32_t                                                    HeroLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHeroDeckListItem.OnDeckSet
	 */
	struct UOrionHeroDeckListItem_OnDeckSet_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroPathCluster.OnClusterInitialized
	 */
	struct UOrionHeroPathCluster_OnClusterInitialized_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroPath.InitializeForHero
	 */
	struct UOrionHeroPath_InitializeForHero_Params
	{	};

	/**
	 * Function OrionGame.OrionHomeTileCarousel.PreviousPage
	 */
	struct UOrionHomeTileCarousel_PreviousPage_Params
	{	};

	/**
	 * Function OrionGame.OrionHomeTileCarousel.NextPage
	 */
	struct UOrionHomeTileCarousel_NextPage_Params
	{	};

	/**
	 * Function OrionGame.OrionHomeTileCarousel.NavigationVisibilityChanged
	 */
	struct UOrionHomeTileCarousel_NavigationVisibilityChanged_Params
	{
	public:
		bool                                                       bShowNavigation;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHUDRespawnTimer.ShowWidget
	 */
	struct UOrionHUDRespawnTimer_ShowWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDRespawnTimer.HideWidget
	 */
	struct UOrionHUDRespawnTimer_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityConfirmWidget.ShowConfirmWidget
	 */
	struct UOrionAbilityConfirmWidget_ShowConfirmWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityConfirmWidget.HideConfirmWidget
	 */
	struct UOrionAbilityConfirmWidget_HideConfirmWidget_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityLayoutWidget.SetParentRetainerBox
	 */
	struct UOrionAbilityLayoutWidget_SetParentRetainerBox_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityLayoutWidget.OnSpectatorWatchedHeroChange
	 */
	struct UOrionAbilityLayoutWidget_OnSpectatorWatchedHeroChange_Params
	{
	public:
		unsigned char                                              HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HeroIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityLayoutWidget.InitInHUD
	 */
	struct UOrionAbilityLayoutWidget_InitInHUD_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityLayoutWidget.AddWidgetComponent
	 */
	struct UOrionAbilityLayoutWidget_AddWidgetComponent_Params
	{	};

	/**
	 * Function OrionGame.OrionMiscAbilityWidget.ShowAbilityWidget
	 */
	struct UOrionMiscAbilityWidget_ShowAbilityWidget_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionMiscAbilityWidget.HideAbilityWidget
	 */
	struct UOrionMiscAbilityWidget_HideAbilityWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionMiscAbilityWidget.CannotActivate
	 */
	struct UOrionMiscAbilityWidget_CannotActivate_Params
	{	};

	/**
	 * Function OrionGame.OrionMiscAbilityWidget.CanActivate
	 */
	struct UOrionMiscAbilityWidget_CanActivate_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.StopCooldown
	 */
	struct UOrionAbilityWidget_StopCooldown_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.StartCooldown
	 */
	struct UOrionAbilityWidget_StartCooldown_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.ShowUpgrades
	 */
	struct UOrionAbilityWidget_ShowUpgrades_Params
	{
	public:
		int32_t                                                    CurrentLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityWidget.ShowStacks
	 */
	struct UOrionAbilityWidget_ShowStacks_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.OnUnSilenced
	 */
	struct UOrionAbilityWidget_OnUnSilenced_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.OnStackAdded
	 */
	struct UOrionAbilityWidget_OnStackAdded_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.OnSilenced
	 */
	struct UOrionAbilityWidget_OnSilenced_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.OnAbilityLevelUp
	 */
	struct UOrionAbilityWidget_OnAbilityLevelUp_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    LevelMax;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanStillUpgrade;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityWidget.OnAbilityEngaged
	 */
	struct UOrionAbilityWidget_OnAbilityEngaged_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.OnAbilityDisengaged
	 */
	struct UOrionAbilityWidget_OnAbilityDisengaged_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.HideUpgrades
	 */
	struct UOrionAbilityWidget_HideUpgrades_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.HideStacks
	 */
	struct UOrionAbilityWidget_HideStacks_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.HideLock
	 */
	struct UOrionAbilityWidget_HideLock_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.CannotActivate
	 */
	struct UOrionAbilityWidget_CannotActivate_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.CanActivate
	 */
	struct UOrionAbilityWidget_CanActivate_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.AbilityFail_Generic
	 */
	struct UOrionAbilityWidget_AbilityFail_Generic_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.AbilityFail_Energy
	 */
	struct UOrionAbilityWidget_AbilityFail_Energy_Params
	{	};

	/**
	 * Function OrionGame.OrionAbilityWidget.AbilityFail_Cooldown
	 */
	struct UOrionAbilityWidget_AbilityFail_Cooldown_Params
	{	};

	/**
	 * Function OrionGame.OrionAFKWarning.ShowAFKWarning
	 */
	struct UOrionAFKWarning_ShowAFKWarning_Params
	{	};

	/**
	 * Function OrionGame.OrionAFKWarning.HideAFKWarning
	 */
	struct UOrionAFKWarning_HideAFKWarning_Params
	{	};

	/**
	 * Function OrionGame.OrionGameplayEffectsWidget.TimerStarted
	 */
	struct UOrionGameplayEffectsWidget_TimerStarted_Params
	{
	public:
		float                                                      TimerLength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHUDVictoryScreen.ShowVictory
	 */
	struct UOrionHUDVictoryScreen_ShowVictory_Params
	{	};

	/**
	 * Function OrionGame.OrionHUDVictoryScreen.ShowDefeat
	 */
	struct UOrionHUDVictoryScreen_ShowDefeat_Params
	{	};

	/**
	 * Function OrionGame.OrionJungleBuffWidgetContainer.OnBuffUpdated
	 */
	struct UOrionJungleBuffWidgetContainer_OnBuffUpdated_Params
	{	};

	/**
	 * Function OrionGame.OrionJungleBuffWidgetContainer.OnBuffRemoved
	 */
	struct UOrionJungleBuffWidgetContainer_OnBuffRemoved_Params
	{	};

	/**
	 * Function OrionGame.OrionJungleBuffWidgetContainer.OnBuffAdded
	 */
	struct UOrionJungleBuffWidgetContainer_OnBuffAdded_Params
	{	};

	/**
	 * Function OrionGame.OrionKDAWidget.OnKDAUpdate
	 */
	struct UOrionKDAWidget_OnKDAUpdate_Params
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Deaths;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Assists;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minions;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionQuestAlert.ShowAlert
	 */
	struct UOrionQuestAlert_ShowAlert_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestAlert.AlertFinished
	 */
	struct UOrionQuestAlert_AlertFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestWidget.ShowQuestWidget
	 */
	struct UOrionQuestWidget_ShowQuestWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestWidget.OnProgressBarUpdated
	 */
	struct UOrionQuestWidget_OnProgressBarUpdated_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestWidget.HideQuestWidget
	 */
	struct UOrionQuestWidget_HideQuestWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestWidget.CompleteQuest
	 */
	struct UOrionQuestWidget_CompleteQuest_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestLog.UpdateRandomQuest
	 */
	struct UOrionQuestLog_UpdateRandomQuest_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestLog.OnLocalHeroSpawn
	 */
	struct UOrionQuestLog_OnLocalHeroSpawn_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestLog.OnLocalHeroDeath
	 */
	struct UOrionQuestLog_OnLocalHeroDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestLog.CompleteRandomTest
	 */
	struct UOrionQuestLog_CompleteRandomTest_Params
	{	};

	/**
	 * Function OrionGame.OrionQuestLog.AddRandomQuest
	 */
	struct UOrionQuestLog_AddRandomQuest_Params
	{	};

	/**
	 * Function OrionGame.OrionReticleContainer.UpdateVisuals
	 */
	struct UOrionReticleContainer_UpdateVisuals_Params
	{	};

	/**
	 * Function OrionGame.OrionReticleContainer.SetupDefaultReticle
	 */
	struct UOrionReticleContainer_SetupDefaultReticle_Params
	{	};

	/**
	 * Function OrionGame.OrionReticleContainer.OnAddedNewReticle
	 */
	struct UOrionReticleContainer_OnAddedNewReticle_Params
	{	};

	/**
	 * Function OrionGame.OrionSprintIndicator.OnSprintStartFill
	 */
	struct UOrionSprintIndicator_OnSprintStartFill_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSprintIndicator.OnSprintFull
	 */
	struct UOrionSprintIndicator_OnSprintFull_Params
	{	};

	/**
	 * Function OrionGame.OrionSprintIndicator.OnSprintEmpty
	 */
	struct UOrionSprintIndicator_OnSprintEmpty_Params
	{	};

	/**
	 * Function OrionGame.OrionLightBox.OverrideContentActivation
	 */
	struct UOrionLightBox_OverrideContentActivation_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLightBox.IsContentActive
	 */
	struct UOrionLightBox_IsContentActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionLightBox.EstablishActivatableContent
	 */
	struct UOrionLightBox_EstablishActivatableContent_Params
	{	};

	/**
	 * Function OrionGame.OrionLightBox.DynamicHandleContentDeactivated
	 */
	struct UOrionLightBox_DynamicHandleContentDeactivated_Params
	{	};

	/**
	 * Function OrionGame.OrionLightBox.DynamicHandleContentActivated
	 */
	struct UOrionLightBox_DynamicHandleContentActivated_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerStatusWidget.InitInHUD
	 */
	struct UOrionPlayerStatusWidget_InitInHUD_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayCurrentlySelected.OnPlayClicked
	 */
	struct UOrionReplayCurrentlySelected_OnPlayClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayCurrentlySelected.OnCancelClicked
	 */
	struct UOrionReplayCurrentlySelected_OnCancelClicked_Params
	{	};

	/**
	 * Function OrionGame.TimeAgoLibrary.RegisterTextBox
	 */
	struct UTimeAgoLibrary_RegisterTextBox_Params
	{	};

	/**
	 * Function OrionGame.TimeAgoLibrary.RegisterText
	 */
	struct UTimeAgoLibrary_RegisterText_Params
	{	};

	/**
	 * Function OrionGame.TimeAgoLibrary.RegisterEditableText
	 */
	struct UTimeAgoLibrary_RegisterEditableText_Params
	{	};

	/**
	 * Function OrionGame.TimeAgoLibrary.RefreshTime
	 */
	struct UTimeAgoLibrary_RefreshTime_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayWidget.SetShowSpoilers
	 */
	struct UOrionReplayWidget_SetShowSpoilers_Params
	{
	public:
		bool                                                       InShowSpoilers;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplayWidget.SetReplayStream
	 */
	struct UOrionReplayWidget_SetReplayStream_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayWidget.OnReplayClicked
	 */
	struct UOrionReplayWidget_OnReplayClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionReplayWidget.OnDetailStateChanged
	 */
	struct UOrionReplayWidget_OnDetailStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplayWidget.GetPlayerName
	 */
	struct UOrionReplayWidget_GetPlayerName_Params
	{
	public:
		unsigned char                                              Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplayWidget.GetName
	 */
	struct UOrionReplayWidget_GetName_Params
	{
	public:
		class FString                                              ResultString;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplayWidget.GetKDA
	 */
	struct UOrionReplayWidget_GetKDA_Params
	{
	public:
		unsigned char                                              Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplayWidget.GetHeroData
	 */
	struct UOrionReplayWidget_GetHeroData_Params
	{
	public:
		unsigned char                                              Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRespawnTimerHeroIconWidget.StartRemoving
	 */
	struct UOrionRespawnTimerHeroIconWidget_StartRemoving_Params
	{	};

	/**
	 * Function OrionGame.OrionRespawnTimerHeroIconWidget.SetIsFriendly
	 */
	struct UOrionRespawnTimerHeroIconWidget_SetIsFriendly_Params
	{
	public:
		bool                                                       bIsFriendly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRespawnTimerHeroIconWidget.SetHeroIcon
	 */
	struct UOrionRespawnTimerHeroIconWidget_SetHeroIcon_Params
	{	};

	/**
	 * Function OrionGame.OrionRespawnTimerHeroIconWidget.SetCountdownText
	 */
	struct UOrionRespawnTimerHeroIconWidget_SetCountdownText_Params
	{
	public:
		float                                                      SecondsRemaining;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionRespawnTimerWidget.OnHeroDeath
	 */
	struct UOrionRespawnTimerWidget_OnHeroDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionRewardCarouselItem.RefreshLayout
	 */
	struct UOrionRewardCarouselItem_RefreshLayout_Params
	{	};

	/**
	 * Function OrionGame.OrionRewardCarouselItem.OnRewardEarned
	 */
	struct UOrionRewardCarouselItem_OnRewardEarned_Params
	{	};

	/**
	 * Function OrionGame.OrionRewardChestBase.OnSetup
	 */
	struct UOrionRewardChestBase_OnSetup_Params
	{	};

	/**
	 * Function OrionGame.OrionScoreboardRow.UpdateVisibleToLocalPlayer
	 */
	struct UOrionScoreboardRow_UpdateVisibleToLocalPlayer_Params
	{
	public:
		bool                                                       bVisibleToLocalPlayer;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionScoreboardRow.UpdateIsLocalPlayer
	 */
	struct UOrionScoreboardRow_UpdateIsLocalPlayer_Params
	{
	public:
		bool                                                       bIsLocalPlayer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionScoreboardRow.ShowAddFriendButton
	 */
	struct UOrionScoreboardRow_ShowAddFriendButton_Params
	{	};

	/**
	 * Function OrionGame.OrionScoreboardRow.OnRespawned
	 */
	struct UOrionScoreboardRow_OnRespawned_Params
	{	};

	/**
	 * Function OrionGame.OrionScoreboardRow.OnDisconnectedChange
	 */
	struct UOrionScoreboardRow_OnDisconnectedChange_Params
	{
	public:
		bool                                                       bIsDisconnected;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionScoreboardRow.OnDeath
	 */
	struct UOrionScoreboardRow_OnDeath_Params
	{	};

	/**
	 * Function OrionGame.OrionScoreboardRow.OnAddFriendPressed
	 */
	struct UOrionScoreboardRow_OnAddFriendPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionScoreboardWidget.HideCardTooltips
	 */
	struct UOrionScoreboardWidget_HideCardTooltips_Params
	{	};

	/**
	 * Function OrionGame.OrionReplaySpectator.WatchHero
	 */
	struct AOrionReplaySpectator_WatchHero_Params
	{
	public:
		unsigned char                                              Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HeroIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.WatchActor
	 */
	struct AOrionReplaySpectator_WatchActor_Params
	{	};

	/**
	 * Function OrionGame.OrionReplaySpectator.StopWatchingActor
	 */
	struct AOrionReplaySpectator_StopWatchingActor_Params
	{	};

	/**
	 * Function OrionGame.OrionReplaySpectator.StartWatchingActor
	 */
	struct AOrionReplaySpectator_StartWatchingActor_Params
	{	};

	/**
	 * Function OrionGame.OrionReplaySpectator.SetSpectatorCameraType
	 */
	struct AOrionReplaySpectator_SetSpectatorCameraType_Params
	{
	public:
		unsigned char                                              NewCameraType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.SetHUDVisibility
	 */
	struct AOrionReplaySpectator_SetHUDVisibility_Params
	{
	public:
		bool                                                       bShowHUD;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.ReplaceSpectatorPawn
	 */
	struct AOrionReplaySpectator_ReplaceSpectatorPawn_Params
	{	};

	/**
	 * Function OrionGame.OrionReplaySpectator.NotifyHeroPortraitClicked
	 */
	struct AOrionReplaySpectator_NotifyHeroPortraitClicked_Params
	{
	public:
		unsigned char                                              HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.IsShowingDebugCameraOptions
	 */
	struct AOrionReplaySpectator_IsShowingDebugCameraOptions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.IsForPlayback
	 */
	struct AOrionReplaySpectator_IsForPlayback_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.GetWatchedActor
	 */
	struct AOrionReplaySpectator_GetWatchedActor_Params
	{	};

	/**
	 * Function OrionGame.OrionReplaySpectator.GetCurrentCameraType
	 */
	struct AOrionReplaySpectator_GetCurrentCameraType_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionReplaySpectator.DebugSetSpectatorCameraType
	 */
	struct AOrionReplaySpectator_DebugSetSpectatorCameraType_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.OrionSpectatorViewOptions.OnSetButtonSelected__DelegateSignature
	 */
	struct UOrionSpectatorViewOptions_OnSetButtonSelected__DelegateSignature_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSpectatorViewOptions.OnRefreshButtonStateFromSpectator
	 */
	struct UOrionSpectatorViewOptions_OnRefreshButtonStateFromSpectator_Params
	{	};

	/**
	 * Function OrionGame.OrionSpectatorViewOptions.OnButtonClicked
	 */
	struct UOrionSpectatorViewOptions_OnButtonClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionSurrenderWidget.ShowWidget
	 */
	struct UOrionSurrenderWidget_ShowWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionSurrenderWidget.OnTeamSurrenderStatusChange
	 */
	struct UOrionSurrenderWidget_OnTeamSurrenderStatusChange_Params
	{
	public:
		unsigned char                                              TeamVoteStatus;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSurrenderWidget.OnPlayerSurrenderStatusChange
	 */
	struct UOrionSurrenderWidget_OnPlayerSurrenderStatusChange_Params
	{
	public:
		unsigned char                                              Vote;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionSurrenderWidget.HideWidget
	 */
	struct UOrionSurrenderWidget_HideWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionTabListWidget.UpdateTabInputSettings
	 */
	struct UOrionTabListWidget_UpdateTabInputSettings_Params
	{
	public:
		unsigned char                                              InListType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InInputPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.SetTabEnabled
	 */
	struct UOrionTabListWidget_SetTabEnabled_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.SetListeningForInput
	 */
	struct UOrionTabListWidget_SetListeningForInput_Params
	{
	public:
		bool                                                       bShouldListen;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.SetLinkedSwitcher
	 */
	struct UOrionTabListWidget_SetLinkedSwitcher_Params
	{	};

	/**
	 * Function OrionGame.OrionTabListWidget.SelectTabByID
	 */
	struct UOrionTabListWidget_SelectTabByID_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.RegisterInstance
	 */
	struct UOrionTabListWidget_RegisterInstance_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                TabName;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FName                                                SceneName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.RegisterAssetID
	 */
	struct UOrionTabListWidget_RegisterAssetID_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                TabName;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FName                                                SceneName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoadNow;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.OnCreateNewTab
	 */
	struct UOrionTabListWidget_OnCreateNewTab_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.HandleTabRight
	 */
	struct UOrionTabListWidget_HandleTabRight_Params
	{	};

	/**
	 * Function OrionGame.OrionTabListWidget.HandleTabLeft
	 */
	struct UOrionTabListWidget_HandleTabLeft_Params
	{	};

	/**
	 * Function OrionGame.OrionTabListWidget.HandleTabButtonSelected
	 */
	struct UOrionTabListWidget_HandleTabButtonSelected_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.GetTabButtonByID
	 */
	struct UOrionTabListWidget_GetTabButtonByID_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.GetActiveTab
	 */
	struct UOrionTabListWidget_GetActiveTab_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTabListWidget.DisableTabWithReason
	 */
	struct UOrionTabListWidget_DisableTabWithReason_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Reason;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.SetRange
	 */
	struct UOrionTimedFillWidget_SetRange_Params
	{
	public:
		int32_t                                                    StartValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EndValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.SetMaxFillTime
	 */
	struct UOrionTimedFillWidget_SetMaxFillTime_Params
	{
	public:
		float                                                      InMaxFillTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.Reset
	 */
	struct UOrionTimedFillWidget_Reset_Params
	{	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.OnUpdateCurrentValue
	 */
	struct UOrionTimedFillWidget_OnUpdateCurrentValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.OnReset
	 */
	struct UOrionTimedFillWidget_OnReset_Params
	{	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.OnFillCompleted
	 */
	struct UOrionTimedFillWidget_OnFillCompleted_Params
	{	};

	/**
	 * Function OrionGame.OrionTimedFillWidget.BeginFill
	 */
	struct UOrionTimedFillWidget_BeginFill_Params
	{	};

	/**
	 * Function OrionGame.OrionXPFillWidget.SetLevelRange
	 */
	struct UOrionXPFillWidget_SetLevelRange_Params
	{
	public:
		int32_t                                                    InBoostXP;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionXPFillWidget.OnShowLevelUp
	 */
	struct UOrionXPFillWidget_OnShowLevelUp_Params
	{
	public:
		bool                                                       bAtMaxLevel;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionXPFillWidget.OnOwningHeroSet
	 */
	struct UOrionXPFillWidget_OnOwningHeroSet_Params
	{	};

	/**
	 * Function OrionGame.OrionXPFillWidget.IsAtMaxLevel
	 */
	struct UOrionXPFillWidget_IsAtMaxLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionAbilityTooltip.SetAbility
	 */
	struct UOrionAbilityTooltip_SetAbility_Params
	{	};

	/**
	 * Function OrionGame.OrionBasicTooltipWidget.UpdateTooltipText
	 */
	struct UOrionBasicTooltipWidget_UpdateTooltipText_Params
	{
	public:
		class FText                                                NewTooltipText;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionBasicTooltipWidget.UpdateTitleText
	 */
	struct UOrionBasicTooltipWidget_UpdateTitleText_Params
	{
	public:
		class FText                                                NewTitleText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHeroTooltip.SetHero
	 */
	struct UOrionHeroTooltip_SetHero_Params
	{	};

	/**
	 * Function OrionGame.OrionHeroRewardTooltip.OnUpdateXPBonuses
	 */
	struct UOrionHeroRewardTooltip_OnUpdateXPBonuses_Params
	{
	public:
		float                                                      SelfBonus;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TeammateBonus;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionHeroRewardTooltip.OnUpdateLock
	 */
	struct UOrionHeroRewardTooltip_OnUpdateLock_Params
	{
	public:
		bool                                                       bIsOwned;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionBadgeTooltip.OnUpdateLock
	 */
	struct UOrionBadgeTooltip_OnUpdateLock_Params
	{
	public:
		bool                                                       bIsOwned;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionTutorialMessageWidget.OnShowNewStage
	 */
	struct UOrionTutorialMessageWidget_OnShowNewStage_Params
	{	};

	/**
	 * Function OrionGame.OrionTutorialMessageWidget.HandlePreviousClicked
	 */
	struct UOrionTutorialMessageWidget_HandlePreviousClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionTutorialMessageWidget.HandleNextClicked
	 */
	struct UOrionTutorialMessageWidget_HandleNextClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.ShowModalContent
	 */
	struct UOrionUIManagerWidget_ShowModalContent_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.ShowLoadingScreen
	 */
	struct UOrionUIManagerWidget_ShowLoadingScreen_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIsPregame;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.ShowErrorNotification
	 */
	struct UOrionUIManagerWidget_ShowErrorNotification_Params
	{
	public:
		class FText                                                DisplayMessage;                                          // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bClearExistingErrors;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.SetStateContentDisplayed
	 */
	struct UOrionUIManagerWidget_SetStateContentDisplayed_Params
	{
	public:
		bool                                                       bDisplay;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.SetActiveTutorial
	 */
	struct UOrionUIManagerWidget_SetActiveTutorial_Params
	{
	public:
		bool                                                       bOverrideTutorialInProgress;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.RouteBackAction
	 */
	struct UOrionUIManagerWidget_RouteBackAction_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.OnStateTransitionComplete
	 */
	struct UOrionUIManagerWidget_OnStateTransitionComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.OnShowError
	 */
	struct UOrionUIManagerWidget_OnShowError_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.OnSetMatchInfoVisibility
	 */
	struct UOrionUIManagerWidget_OnSetMatchInfoVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.OnSetMatchInfoText
	 */
	struct UOrionUIManagerWidget_OnSetMatchInfoText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.OrionUIManagerWidget.OnPreMatchLoadingProgressUpdated__DelegateSignature
	 */
	struct UOrionUIManagerWidget_OnPreMatchLoadingProgressUpdated__DelegateSignature_Params
	{
	public:
		float                                                      LoadingPercent;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.KillConfirmationDialog
	 */
	struct UOrionUIManagerWidget_KillConfirmationDialog_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.KillConfirmation
	 */
	struct UOrionUIManagerWidget_KillConfirmation_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.IsStateContentDisplayed
	 */
	struct UOrionUIManagerWidget_IsStateContentDisplayed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.HandleExitModalMode
	 */
	struct UOrionUIManagerWidget_HandleExitModalMode_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.HandleEnterModalMode
	 */
	struct UOrionUIManagerWidget_HandleEnterModalMode_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.GetUIManagerWidget
	 */
	struct UOrionUIManagerWidget_GetUIManagerWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.GetCurrentUIStateWidget
	 */
	struct UOrionUIManagerWidget_GetCurrentUIStateWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.GetCurrentUIState
	 */
	struct UOrionUIManagerWidget_GetCurrentUIState_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.EstablishCurrentBackHandlerStack
	 */
	struct UOrionUIManagerWidget_EstablishCurrentBackHandlerStack_Params
	{
	public:
		class FName                                                StackName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.BP_UnregisterInputHandlerWidget
	 */
	struct UOrionUIManagerWidget_BP_UnregisterInputHandlerWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionUIManagerWidget.BP_RegisterInputHandlerWidget
	 */
	struct UOrionUIManagerWidget_BP_RegisterInputHandlerWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnTurnStarted
	 */
	struct UOrionStateWidget_DraftLobby_OnTurnStarted_Params
	{
	public:
		unsigned char                                              PickingMemberType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnTurnComplete
	 */
	struct UOrionStateWidget_DraftLobby_OnTurnComplete_Params
	{
	public:
		unsigned char                                              FinishedMemberType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnLockInFailed
	 */
	struct UOrionStateWidget_DraftLobby_OnLockInFailed_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnLockInButtonEnabledChanged
	 */
	struct UOrionStateWidget_DraftLobby_OnLockInButtonEnabledChanged_Params
	{
	public:
		bool                                                       bLockInEnabled;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnLocalPlayerTurnUpNext
	 */
	struct UOrionStateWidget_DraftLobby_OnLocalPlayerTurnUpNext_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnHeroLockedIn
	 */
	struct UOrionStateWidget_DraftLobby_OnHeroLockedIn_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnFirstHeroSelected
	 */
	struct UOrionStateWidget_DraftLobby_OnFirstHeroSelected_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnEndLocalPlayerTurn
	 */
	struct UOrionStateWidget_DraftLobby_OnEndLocalPlayerTurn_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnDraftStarted
	 */
	struct UOrionStateWidget_DraftLobby_OnDraftStarted_Params
	{
	public:
		unsigned char                                              FirstPickerType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnDraftComplete
	 */
	struct UOrionStateWidget_DraftLobby_OnDraftComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.OnBeginLocalPlayerTurn
	 */
	struct UOrionStateWidget_DraftLobby_OnBeginLocalPlayerTurn_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.HandleSummonTutorialClicked
	 */
	struct UOrionStateWidget_DraftLobby_HandleSummonTutorialClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.HandleRoleSelected
	 */
	struct UOrionStateWidget_DraftLobby_HandleRoleSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.HandlePositionSelected
	 */
	struct UOrionStateWidget_DraftLobby_HandlePositionSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.HandleLockInHeroClicked
	 */
	struct UOrionStateWidget_DraftLobby_HandleLockInHeroClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.HandleHeroSelected
	 */
	struct UOrionStateWidget_DraftLobby_HandleHeroSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_DraftLobby.HandleCustomizeClicked
	 */
	struct UOrionStateWidget_DraftLobby_HandleCustomizeClicked_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_FrontEnd.OnMatchmakingStateChanged
	 */
	struct UOrionStateWidget_FrontEnd_OnMatchmakingStateChanged_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_FrontEnd.DynamicHandlePurchaseConfirmationMTXReplenish
	 */
	struct UOrionStateWidget_FrontEnd_DynamicHandlePurchaseConfirmationMTXReplenish_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_FrontEnd.DynamicHandlePurchaseConfirmationDeactivated
	 */
	struct UOrionStateWidget_FrontEnd_DynamicHandlePurchaseConfirmationDeactivated_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_FrontEnd.DynamicHandlePurchaseConfirmationActivated
	 */
	struct UOrionStateWidget_FrontEnd_DynamicHandlePurchaseConfirmationActivated_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.ShowLoginPlatformUI
	 */
	struct UOrionStateWidget_UpdateBase_ShowLoginPlatformUI_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateSuccess_NoChange_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateSuccess_NoChange_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateSuccess_NeedsReload_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateSuccess_NeedsReload_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateSuccess_NeedsRelaunch_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateSuccess_NeedsRelaunch_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateSuccess_NeedsPatch_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateSuccess_NeedsPatch_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateSuccess_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateSuccess_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateStateChange
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateStateChange_Params
	{
	public:
		unsigned char                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateHotfixProgress
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateHotfixProgress_Params
	{
	public:
		int32_t                                                    NumDownloaded;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalFiles;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumBytes;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalBytes;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateHotfixFileProcessed
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateHotfixFileProcessed_Params
	{
	public:
		class FString                                              FriendlyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CachedName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateFailed_NotLoggedIn_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateFailed_NotLoggedIn_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.OnUpdateFailed_Blueprint
	 */
	struct UOrionStateWidget_UpdateBase_OnUpdateFailed_Blueprint_Params
	{	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.IsUpdatingEnabled
	 */
	struct UOrionStateWidget_UpdateBase_IsUpdatingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.IsBlockingForInitialLoadEnabled
	 */
	struct UOrionStateWidget_UpdateBase_IsBlockingForInitialLoadEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.GetUpdateState
	 */
	struct UOrionStateWidget_UpdateBase_GetUpdateState_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_UpdateBase.GetLoadProgress
	 */
	struct UOrionStateWidget_UpdateBase_GetLoadProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionStateWidget_HotfixAndLoad.HotfixFinished
	 */
	struct UOrionStateWidget_HotfixAndLoad_HotfixFinished_Params
	{	};

	/**
	 * Function OrionGame.OrionWellProgressWidget.OnWellProgressTextSet
	 */
	struct UOrionWellProgressWidget_OnWellProgressTextSet_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionWellProgressWidget.OnWellProgressPercentSet
	 */
	struct UOrionWellProgressWidget_OnWellProgressPercentSet_Params
	{
	public:
		float                                                      NewPercent;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionWellProgressWidget.Exit
	 */
	struct UOrionWellProgressWidget_Exit_Params
	{	};

	/**
	 * Function OrionGame.OrionWellProgressWidget.Enter
	 */
	struct UOrionWellProgressWidget_Enter_Params
	{	};

	/**
	 * Function OrionGame.OrionXPWidget.SetPrimaryColor
	 */
	struct UOrionXPWidget_SetPrimaryColor_Params
	{	};

	/**
	 * Function OrionGame.OrionXpAssembly.OnPlayerXPUpdate
	 */
	struct UOrionXpAssembly_OnPlayerXPUpdate_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxXP;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionXpAssembly.OnPlayerLevelUp
	 */
	struct UOrionXpAssembly_OnPlayerLevelUp_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionXpAssembly.OnCardXPUpdate
	 */
	struct UOrionXpAssembly_OnCardXPUpdate_Params
	{
	public:
		float                                                      XP;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxXP;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionXpAssembly.OnCardPointsUpdate
	 */
	struct UOrionXpAssembly_OnCardPointsUpdate_Params
	{
	public:
		int32_t                                                    NewCardPointsSpent;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCardPointsMax;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionXpAssembly.InitInHUD
	 */
	struct UOrionXpAssembly_InitInHUD_Params
	{	};

	/**
	 * Function OrionGame.OrionXPOverview.SetAccountLevelInfo
	 */
	struct UOrionXPOverview_SetAccountLevelInfo_Params
	{
	public:
		class FText                                                OwnerName;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PlayerActionWidget.SetSlotIndex
	 */
	struct UPlayerActionWidget_SetSlotIndex_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModelInterface_EndGame.OnContinueButtonPressed
	 */
	struct UOrionViewModelInterface_EndGame_OnContinueButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModelInterface_EndGame.GetMyTeam
	 */
	struct UOrionViewModelInterface_EndGame_GetMyTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModelInterface_EndGame.GetEnemyTeam
	 */
	struct UOrionViewModelInterface_EndGame_GetEnemyTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_EndGame.OnContinueButtonPressed
	 */
	struct UOrionViewModel_EndGame_OnContinueButtonPressed_Params
	{	};

	/**
	 * Function OrionGame.OrionViewModel_EndGame.GetMyTeam
	 */
	struct UOrionViewModel_EndGame_GetMyTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionViewModel_EndGame.GetEnemyTeam
	 */
	struct UOrionViewModel_EndGame_GetEnemyTeam_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionWidget_HUDIndicatorOverlay.SetLocalPlayerController
	 */
	struct UOrionWidget_HUDIndicatorOverlay_SetLocalPlayerController_Params
	{	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.SetActiveWidgetIndex
	 */
	struct UOrionWidgetCarousel_SetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.SetActiveWidget
	 */
	struct UOrionWidgetCarousel_SetActiveWidget_Params
	{	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.PreviousPage
	 */
	struct UOrionWidgetCarousel_PreviousPage_Params
	{	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.NextPage
	 */
	struct UOrionWidgetCarousel_NextPage_Params
	{	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.GetWidgetAtIndex
	 */
	struct UOrionWidgetCarousel_GetWidgetAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.GetActiveWidgetIndex
	 */
	struct UOrionWidgetCarousel_GetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.EndAutoScrolling
	 */
	struct UOrionWidgetCarousel_EndAutoScrolling_Params
	{	};

	/**
	 * Function OrionGame.OrionWidgetCarousel.BeginAutoScrolling
	 */
	struct UOrionWidgetCarousel_BeginAutoScrolling_Params
	{
	public:
		float                                                      ScrollInterval;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OutlinePanel.SetOutlineSize
	 */
	struct UOutlinePanel_SetOutlineSize_Params
	{	};

	/**
	 * Function OrionGame.OutlinePanel.AddChildToOutline
	 */
	struct UOutlinePanel_AddChildToOutline_Params
	{	};

	/**
	 * Function OrionGame.PlayerBotSpawner.Spawn
	 */
	struct APlayerBotSpawner_Spawn_Params
	{	};

	/**
	 * Function OrionGame.PlayerBotSpawner.HandleMatchStarted
	 */
	struct APlayerBotSpawner_HandleMatchStarted_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerSetSelectedHero
	 */
	struct AOrionPlayerController_DraftLobby_ServerSetSelectedHero_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerSetDesiredRole
	 */
	struct AOrionPlayerController_DraftLobby_ServerSetDesiredRole_Params
	{
	public:
		unsigned char                                              DesiredRole;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerSetDesiredPosition
	 */
	struct AOrionPlayerController_DraftLobby_ServerSetDesiredPosition_Params
	{
	public:
		unsigned char                                              Position;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerSendQuickChatMessage
	 */
	struct AOrionPlayerController_DraftLobby_ServerSendQuickChatMessage_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerRequestDraftTutorial
	 */
	struct AOrionPlayerController_DraftLobby_ServerRequestDraftTutorial_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerNotifyTutorialComplete
	 */
	struct AOrionPlayerController_DraftLobby_ServerNotifyTutorialComplete_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ServerAttemptLockInHeroChoice
	 */
	struct AOrionPlayerController_DraftLobby_ServerAttemptLockInHeroChoice_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientUpNextNotification
	 */
	struct AOrionPlayerController_DraftLobby_ClientUpNextNotification_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientReceiveQuickChatMessage
	 */
	struct AOrionPlayerController_DraftLobby_ClientReceiveQuickChatMessage_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientPickNotification
	 */
	struct AOrionPlayerController_DraftLobby_ClientPickNotification_Params
	{	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientJoinTeamChatRoom
	 */
	struct AOrionPlayerController_DraftLobby_ClientJoinTeamChatRoom_Params
	{
	public:
		class FString                                              ChatRoomId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientHeroSelectionStatus
	 */
	struct AOrionPlayerController_DraftLobby_ClientHeroSelectionStatus_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientCreateTeamChatRoom
	 */
	struct AOrionPlayerController_DraftLobby_ClientCreateTeamChatRoom_Params
	{
	public:
		class FString                                              ChatRoomId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.OrionPlayerController_DraftLobby.ClientBeginDraftTutorial
	 */
	struct AOrionPlayerController_DraftLobby_ClientBeginDraftTutorial_Params
	{	};

	/**
	 * Function OrionGame.PopupAnchor.Open
	 */
	struct UPopupAnchor_Open_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction OrionGame.PopupAnchor.OnPopupOpenChanged__DelegateSignature
	 */
	struct UPopupAnchor_OnPopupOpenChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PopupAnchor.IsOpen
	 */
	struct UPopupAnchor_IsOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.PopupAnchor.Close
	 */
	struct UPopupAnchor_Close_Params
	{	};

	/**
	 * Function OrionGame.ScalableFloatUtils.ToSimpleString
	 */
	struct UScalableFloatUtils_ToSimpleString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.ScalableFloatUtils.SetValue
	 */
	struct UScalableFloatUtils_SetValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.ScalableFloatUtils.SetScalingValue
	 */
	struct UScalableFloatUtils_SetScalingValue_Params
	{
	public:
		float                                                      InCoeffecient;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InRowName;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.ScalableFloatUtils.IsStatic
	 */
	struct UScalableFloatUtils_IsStatic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.ScalableFloatUtils.GetValueAtLevel
	 */
	struct UScalableFloatUtils_GetValueAtLevel_Params
	{
	public:
		float                                                      Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.ScalableFloatUtils.GetValue
	 */
	struct UScalableFloatUtils_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.TooltipWidget.Show
	 */
	struct UTooltipWidget_Show_Params
	{	};

	/**
	 * Function OrionGame.TooltipWidget.SetAdditionalContent
	 */
	struct UTooltipWidget_SetAdditionalContent_Params
	{	};

	/**
	 * Function OrionGame.TooltipWidget.Hide
	 */
	struct UTooltipWidget_Hide_Params
	{	};

	/**
	 * Function OrionGame.WidgetStack.PushWidget
	 */
	struct UWidgetStack_PushWidget_Params
	{	};

	/**
	 * Function OrionGame.WidgetStack.PopWidget
	 */
	struct UWidgetStack_PopWidget_Params
	{	};

	/**
	 * Function OrionGame.WidgetStack.NumWidgets
	 */
	struct UWidgetStack_NumWidgets_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionGame.WidgetStack.Clear
	 */
	struct UWidgetStack_Clear_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
