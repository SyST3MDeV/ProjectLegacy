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
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.FailedToSpawn_31E0DE7D41D1CF73E2ECA78693214BEC
	 */
	struct UGA_OrionRigPlacement_C_FailedToSpawn_31E0DE7D41D1CF73E2ECA78693214BEC_Params
	{
	public:
		class AOrionRigs*                                          SpawnedRig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.NotAuthority_31E0DE7D41D1CF73E2ECA78693214BEC
	 */
	struct UGA_OrionRigPlacement_C_NotAuthority_31E0DE7D41D1CF73E2ECA78693214BEC_Params
	{
	public:
		class AOrionRigs*                                          SpawnedRig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.Success_31E0DE7D41D1CF73E2ECA78693214BEC
	 */
	struct UGA_OrionRigPlacement_C_Success_31E0DE7D41D1CF73E2ECA78693214BEC_Params
	{
	public:
		class AOrionRigs*                                          SpawnedRig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.Cancelled_BDDE6C974BE1D6254E1C6ABC381235EC
	 */
	struct UGA_OrionRigPlacement_C_Cancelled_BDDE6C974BE1D6254E1C6ABC381235EC_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.Confirmed_BDDE6C974BE1D6254E1C6ABC381235EC
	 */
	struct UGA_OrionRigPlacement_C_Confirmed_BDDE6C974BE1D6254E1C6ABC381235EC_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.K2_ActivateAbility
	 */
	struct UGA_OrionRigPlacement_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_OrionRigPlacement.GA_OrionRigPlacement_C.ExecuteUbergraph_GA_OrionRigPlacement
	 */
	struct UGA_OrionRigPlacement_C_ExecuteUbergraph_GA_OrionRigPlacement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3UNX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
