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
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.K2_CanActivateAbility
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0040(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.FailedToSpawn_255A7BC346BC68F413A297862E2768E7
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_FailedToSpawn_255A7BC346BC68F413A297862E2768E7_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.NotAuthority_255A7BC346BC68F413A297862E2768E7
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_NotAuthority_255A7BC346BC68F413A297862E2768E7_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.PreSpawned_255A7BC346BC68F413A297862E2768E7
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_PreSpawned_255A7BC346BC68F413A297862E2768E7_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.Success_255A7BC346BC68F413A297862E2768E7
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_Success_255A7BC346BC68F413A297862E2768E7_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.FireProjectile_213B73C2459417401171819153CA0663
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_FireProjectile_213B73C2459417401171819153CA0663_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.K2_ActivateAbility
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased
	 */
	struct UGA_Inhibitor_Attack_ProjectileBased_C_ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGTT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
