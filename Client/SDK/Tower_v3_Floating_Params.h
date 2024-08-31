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
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GetTargetingLocation
	 */
	struct ATower_v3_Floating_C_GetTargetingLocation_Params
	{
	public:
		struct FVector                                             OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.IsTargetable
	 */
	struct ATower_v3_Floating_C_IsTargetable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.OnRep_Dead
	 */
	struct ATower_v3_Floating_C_OnRep_Dead_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.HandleTeamColors
	 */
	struct ATower_v3_Floating_C_HandleTeamColors_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GetNumberPopLocation
	 */
	struct ATower_v3_Floating_C_GetNumberPopLocation_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.DecalsOn
	 */
	struct ATower_v3_Floating_C_DecalsOn_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.SetComponentLocationAndRotation
	 */
	struct ATower_v3_Floating_C_SetComponentLocationAndRotation_Params
	{
	public:
		class AStaticMeshActor*                                    AttachToStaticMesh;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ASkeletalMeshActor*                                  AttachToSkeletalMesh;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     SceneComponent;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                PositionSocketName;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ExtraRotation;                                           // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GetAimTargetSensingLocation
	 */
	struct ATower_v3_Floating_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FVector                                             AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GetBaseAttackingMesh
	 */
	struct ATower_v3_Floating_C_GetBaseAttackingMesh_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.SetGoalWaypoint
	 */
	struct ATower_v3_Floating_C_SetGoalWaypoint_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.HandleGoalWaypoint
	 */
	struct ATower_v3_Floating_C_HandleGoalWaypoint_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.UserConstructionScript
	 */
	struct ATower_v3_Floating_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Turret Rise Timeline__FinishedFunc
	 */
	struct ATower_v3_Floating_C_TurretRiseTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Turret Rise Timeline__UpdateFunc
	 */
	struct ATower_v3_Floating_C_TurretRiseTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Fade Out Timeline__FinishedFunc
	 */
	struct ATower_v3_Floating_C_RuneFadeOutTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Fade Out Timeline__UpdateFunc
	 */
	struct ATower_v3_Floating_C_RuneFadeOutTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Warm Up Timeline__FinishedFunc
	 */
	struct ATower_v3_Floating_C_RuneWarmUpTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Warm Up Timeline__UpdateFunc
	 */
	struct ATower_v3_Floating_C_RuneWarmUpTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Death Anticipation Timeline__FinishedFunc
	 */
	struct ATower_v3_Floating_C_HeartDeathAnticipationTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Death Anticipation Timeline__UpdateFunc
	 */
	struct ATower_v3_Floating_C_HeartDeathAnticipationTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Damage Timeline__FinishedFunc
	 */
	struct ATower_v3_Floating_C_HeartDamageTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Damage Timeline__UpdateFunc
	 */
	struct ATower_v3_Floating_C_HeartDamageTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Shield Damage Timeline__FinishedFunc
	 */
	struct ATower_v3_Floating_C_HeartShieldDamageTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Shield Damage Timeline__UpdateFunc
	 */
	struct ATower_v3_Floating_C_HeartShieldDamageTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.OnDeath
	 */
	struct ATower_v3_Floating_C_OnDeath_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.OnTeamChanged
	 */
	struct ATower_v3_Floating_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.ReceiveBeginPlay
	 */
	struct ATower_v3_Floating_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.OnActorBeginOverlap_TargetingVolume_Bind
	 */
	struct ATower_v3_Floating_C_OnActorBeginOverlap_TargetingVolume_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.WarmUpRunes
	 */
	struct ATower_v3_Floating_C_WarmUpRunes_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.Death
	 */
	struct ATower_v3_Floating_C_GameplayCue_Tower_Death_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPDD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.DeathAfterMath
	 */
	struct ATower_v3_Floating_C_GameplayCue_Tower_DeathAfterMath_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9M0I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.OnSelfRevive
	 */
	struct ATower_v3_Floating_C_OnSelfRevive_Params
	{	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.DeathHandler_Bind
	 */
	struct ATower_v3_Floating_C_DeathHandler_Bind_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Objectives.Shared.Immunity
	 */
	struct ATower_v3_Floating_C_GameplayCue_Objectives_Shared_Immunity_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BA7P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.OnDamageTaken
	 */
	struct ATower_v3_Floating_C_OnDamageTaken_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75F7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.TakeDamage
	 */
	struct ATower_v3_Floating_C_GameplayCue_Tower_TakeDamage_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VM3E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function Tower_v3_Floating.Tower_v3_Floating_C.ExecuteUbergraph_Tower_v3_Floating
	 */
	struct ATower_v3_Floating_C_ExecuteUbergraph_Tower_v3_Floating_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H7GL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
