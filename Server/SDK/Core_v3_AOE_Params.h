#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.CheckHealthPercentage
	 */
	struct ACore_v3_AOE_C_CheckHealthPercentage_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.GetTargetingLocation
	 */
	struct ACore_v3_AOE_C_GetTargetingLocation_Params
	{
	public:
		struct FVector                                             OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.OnRep_Dead
	 */
	struct ACore_v3_AOE_C_OnRep_Dead_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.HandleTeamColors
	 */
	struct ACore_v3_AOE_C_HandleTeamColors_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.GetNumberPopLocation
	 */
	struct ACore_v3_AOE_C_GetNumberPopLocation_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.GetAimTargetSensingLocation
	 */
	struct ACore_v3_AOE_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FVector                                             AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.UserConstructionScript
	 */
	struct ACore_v3_AOE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_0__FinishedFunc
	 */
	struct ACore_v3_AOE_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_0__UpdateFunc
	 */
	struct ACore_v3_AOE_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_1__FinishedFunc
	 */
	struct ACore_v3_AOE_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_1__UpdateFunc
	 */
	struct ACore_v3_AOE_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__FinishedFunc
	 */
	struct ACore_v3_AOE_C_CoreDeathTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__UpdateFunc
	 */
	struct ACore_v3_AOE_C_CoreDeathTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__ExplosionCue__EventFunc
	 */
	struct ACore_v3_AOE_C_CoreDeathTimeline__ExplosionCue__EventFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__EffectMeshVis__EventFunc
	 */
	struct ACore_v3_AOE_C_CoreDeathTimeline__EffectMeshVis__EventFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__FinishedFunc
	 */
	struct ACore_v3_AOE_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__UpdateFunc
	 */
	struct ACore_v3_AOE_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__ExplosionCue__EventFunc
	 */
	struct ACore_v3_AOE_C_Timeline_2__ExplosionCue__EventFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__EffectMeshVis__EventFunc
	 */
	struct ACore_v3_AOE_C_Timeline_2__EffectMeshVis__EventFunc_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.ReceiveBeginPlay
	 */
	struct ACore_v3_AOE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.OnDeath
	 */
	struct ACore_v3_AOE_C_OnDeath_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.DoDeath
	 */
	struct ACore_v3_AOE_C_DoDeath_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.GameplayCue.Core.Recharge
	 */
	struct ACore_v3_AOE_C_GameplayCue_Core_Recharge_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DG4C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.OnTeamChanged
	 */
	struct ACore_v3_AOE_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.WarmUpRunes
	 */
	struct ACore_v3_AOE_C_WarmUpRunes_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.FadeOutRunes
	 */
	struct ACore_v3_AOE_C_FadeOutRunes_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.BREAK_InhibitorStatusCheck
	 */
	struct ACore_v3_AOE_C_BREAK_InhibitorStatusCheck_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.InhibitorStatusCheck
	 */
	struct ACore_v3_AOE_C_InhibitorStatusCheck_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.GameplayCue.Damage.Core
	 */
	struct ACore_v3_AOE_C_GameplayCue_Damage_Core_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X4GT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.CoreFinale
	 */
	struct ACore_v3_AOE_C_CoreFinale_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.OnDamageTaken
	 */
	struct ACore_v3_AOE_C_OnDamageTaken_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRZR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.OnSelfRevive
	 */
	struct ACore_v3_AOE_C_OnSelfRevive_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.ObjectiveStartUp
	 */
	struct ACore_v3_AOE_C_ObjectiveStartUp_Params
	{	};

	/**
	 * Function Core_v3_AOE.Core_v3_AOE_C.ExecuteUbergraph_Core_v3_AOE
	 */
	struct ACore_v3_AOE_C_ExecuteUbergraph_Core_v3_AOE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
