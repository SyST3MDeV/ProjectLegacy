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
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.UserConstructionScript
	 */
	struct ABP_PrimeHelix_v2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnObjectiveDropped
	 */
	struct ABP_PrimeHelix_v2_C_OnObjectiveDropped_Params
	{	};

	/**
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnScoredObjective
	 */
	struct ABP_PrimeHelix_v2_C_OnScoredObjective_Params
	{	};

	/**
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickedUp
	 */
	struct ABP_PrimeHelix_v2_C_OnPickedUp_Params
	{
	public:
		class AOrionChar*                                          Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickupActivated
	 */
	struct ABP_PrimeHelix_v2_C_OnPickupActivated_Params
	{	};

	/**
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickupDeactivated
	 */
	struct ABP_PrimeHelix_v2_C_OnPickupDeactivated_Params
	{	};

	/**
	 * Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.ExecuteUbergraph_BP_PrimeHelix_v2
	 */
	struct ABP_PrimeHelix_v2_C_ExecuteUbergraph_BP_PrimeHelix_v2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P89D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
