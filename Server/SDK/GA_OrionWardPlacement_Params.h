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
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Cancelled_29228A92469B41C80817C0B6EA29B720
	 */
	struct UGA_OrionWardPlacement_C_Cancelled_29228A92469B41C80817C0B6EA29B720_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Confirmed_29228A92469B41C80817C0B6EA29B720
	 */
	struct UGA_OrionWardPlacement_C_Confirmed_29228A92469B41C80817C0B6EA29B720_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.FailedToSpawn_0164359A400FCE2709A82EA5FFE30436
	 */
	struct UGA_OrionWardPlacement_C_FailedToSpawn_0164359A400FCE2709A82EA5FFE30436_Params
	{
	public:
		class AOrionVisionWard*                                    SpawnedWard;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.NotAuthority_0164359A400FCE2709A82EA5FFE30436
	 */
	struct UGA_OrionWardPlacement_C_NotAuthority_0164359A400FCE2709A82EA5FFE30436_Params
	{
	public:
		class AOrionVisionWard*                                    SpawnedWard;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Success_0164359A400FCE2709A82EA5FFE30436
	 */
	struct UGA_OrionWardPlacement_C_Success_0164359A400FCE2709A82EA5FFE30436_Params
	{
	public:
		class AOrionVisionWard*                                    SpawnedWard;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.K2_ActivateAbility
	 */
	struct UGA_OrionWardPlacement_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.ExecuteUbergraph_GA_OrionWardPlacement
	 */
	struct UGA_OrionWardPlacement_C_ExecuteUbergraph_GA_OrionWardPlacement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HE4E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
