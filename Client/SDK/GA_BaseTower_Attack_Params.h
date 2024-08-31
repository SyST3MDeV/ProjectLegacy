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
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.K2_CanActivateAbility
	 */
	struct UGA_BaseTower_Attack_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0040(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 */
	struct UGA_BaseTower_Attack_C_FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 */
	struct UGA_BaseTower_Attack_C_NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 */
	struct UGA_BaseTower_Attack_C_PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.Success_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 */
	struct UGA_BaseTower_Attack_C_Success_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params
	{
	public:
		class AOrionProjectile*                                    SpawnedProjectile;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.FireProjectile_C8E17D43434B4E962A909A912ECB41C0
	 */
	struct UGA_BaseTower_Attack_C_FireProjectile_C8E17D43434B4E962A909A912ECB41C0_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.K2_ActivateAbility
	 */
	struct UGA_BaseTower_Attack_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.ExecuteUbergraph_GA_BaseTower_Attack
	 */
	struct UGA_BaseTower_Attack_C_ExecuteUbergraph_GA_BaseTower_Attack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TZHQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
