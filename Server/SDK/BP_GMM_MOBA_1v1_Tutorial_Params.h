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
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.GetWinningTeamNum
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_GetWinningTeamNum_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.IsMatchObjectiveCompleted
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_IsMatchObjectiveCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OEU4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.IsMatchTimeBased
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_IsMatchTimeBased_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.UserConstructionScript
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ReceiveBeginPlay
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.OnMatchStarted_Bind
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_OnMatchStarted_Bind_Params
	{	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.OnMatchEnded_Bind
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_OnMatchEnded_Bind_Params
	{	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ApplyGEsOnSpawn
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_ApplyGEsOnSpawn_Params
	{	};

	/**
	 * Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial
	 */
	struct ABP_GMM_MOBA_1v1_Tutorial_C_ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L0NY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
