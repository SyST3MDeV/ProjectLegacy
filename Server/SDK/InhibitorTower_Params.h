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
	 * Function InhibitorTower.InhibitorTower_C.GetTargetingLocation
	 */
	struct AInhibitorTower_C_GetTargetingLocation_Params
	{
	public:
		struct FVector                                             OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.HandleSuperMinionSelfDestruct
	 */
	struct AInhibitorTower_C_HandleSuperMinionSelfDestruct_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GetNumberPopLocation
	 */
	struct AInhibitorTower_C_GetNumberPopLocation_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GetAimTargetSensingLocation
	 */
	struct AInhibitorTower_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FVector                                             AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.OnRep_Dead
	 */
	struct AInhibitorTower_C_OnRep_Dead_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.HandleTeamColors
	 */
	struct AInhibitorTower_C_HandleTeamColors_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GetBaseAttackingMesh
	 */
	struct AInhibitorTower_C_GetBaseAttackingMesh_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.HandleSuperMinionSpawns
	 */
	struct AInhibitorTower_C_HandleSuperMinionSpawns_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XMHZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Set Goal Waypoint
	 */
	struct AInhibitorTower_C_SetGoalWaypoint_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.HandleGoalWaypoint
	 */
	struct AInhibitorTower_C_HandleGoalWaypoint_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GetAimTargetExtent
	 */
	struct AInhibitorTower_C_GetAimTargetExtent_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Width;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Height;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GetNumWeakSpot
	 */
	struct AInhibitorTower_C_GetNumWeakSpot_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GetWeakSpotData
	 */
	struct AInhibitorTower_C_GetWeakSpotData_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.UserConstructionScript
	 */
	struct AInhibitorTower_C_UserConstructionScript_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_1__FinishedFunc
	 */
	struct AInhibitorTower_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_1__UpdateFunc
	 */
	struct AInhibitorTower_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_2__FinishedFunc
	 */
	struct AInhibitorTower_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_2__UpdateFunc
	 */
	struct AInhibitorTower_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_3__FinishedFunc
	 */
	struct AInhibitorTower_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_3__UpdateFunc
	 */
	struct AInhibitorTower_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_4__FinishedFunc
	 */
	struct AInhibitorTower_C_Timeline_4__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_4__UpdateFunc
	 */
	struct AInhibitorTower_C_Timeline_4__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_5__FinishedFunc
	 */
	struct AInhibitorTower_C_Timeline_5__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Timeline_5__UpdateFunc
	 */
	struct AInhibitorTower_C_Timeline_5__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Heart Damage Timeline__FinishedFunc
	 */
	struct AInhibitorTower_C_HeartDamageTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Heart Damage Timeline__UpdateFunc
	 */
	struct AInhibitorTower_C_HeartDamageTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Heart Shield Damage Timeline__FinishedFunc
	 */
	struct AInhibitorTower_C_HeartShieldDamageTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.Heart Shield Damage Timeline__UpdateFunc
	 */
	struct AInhibitorTower_C_HeartShieldDamageTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.OnDeath
	 */
	struct AInhibitorTower_C_OnDeath_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.OnSelfRevive
	 */
	struct AInhibitorTower_C_OnSelfRevive_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.ReceiveBeginPlay
	 */
	struct AInhibitorTower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.OnTeamChanged
	 */
	struct AInhibitorTower_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.UnlockKeyhole
	 */
	struct AInhibitorTower_C_UnlockKeyhole_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.LockKeyhole
	 */
	struct AInhibitorTower_C_LockKeyhole_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.SetAlive
	 */
	struct AInhibitorTower_C_SetAlive_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.StopSpawningSuperMinions
	 */
	struct AInhibitorTower_C_StopSpawningSuperMinions_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.WarmUpRunes
	 */
	struct AInhibitorTower_C_WarmUpRunes_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.FadeOutRunes
	 */
	struct AInhibitorTower_C_FadeOutRunes_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.ReviveRunes
	 */
	struct AInhibitorTower_C_ReviveRunes_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GameplayCue.Inhibitor.Recharge
	 */
	struct AInhibitorTower_C_GameplayCue_Inhibitor_Recharge_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NJ9B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.AboutToRevive
	 */
	struct AInhibitorTower_C_AboutToRevive_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GameplayCue.Objectives.Shared.Immunity
	 */
	struct AInhibitorTower_C_GameplayCue_Objectives_Shared_Immunity_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BOBD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.OnDamageTaken
	 */
	struct AInhibitorTower_C_OnDamageTaken_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BNRJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.GameplayCue.Inhibitor.TakeDamage
	 */
	struct AInhibitorTower_C_GameplayCue_Inhibitor_TakeDamage_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HBZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.ObjectiveStartUp
	 */
	struct AInhibitorTower_C_ObjectiveStartUp_Params
	{	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.ExecuteUbergraph_InhibitorTower
	 */
	struct AInhibitorTower_C_ExecuteUbergraph_InhibitorTower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InhibitorTower.InhibitorTower_C.InhibitorStatus__DelegateSignature
	 */
	struct AInhibitorTower_C_InhibitorStatus__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
