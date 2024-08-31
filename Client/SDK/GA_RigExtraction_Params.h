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
	 * Function GA_RigExtraction.GA_RigExtraction_C.Cancelled_2395268F4C49BECCCD431FAC9723ED13
	 */
	struct UGA_RigExtraction_C_Cancelled_2395268F4C49BECCCD431FAC9723ED13_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_RigExtraction.GA_RigExtraction_C.ValidData_2395268F4C49BECCCD431FAC9723ED13
	 */
	struct UGA_RigExtraction_C_ValidData_2395268F4C49BECCCD431FAC9723ED13_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_RigExtraction.GA_RigExtraction_C.K2_ActivateAbility
	 */
	struct UGA_RigExtraction_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_RigExtraction.GA_RigExtraction_C.ExecuteUbergraph_GA_RigExtraction
	 */
	struct UGA_RigExtraction_C_ExecuteUbergraph_GA_RigExtraction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PV1G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
