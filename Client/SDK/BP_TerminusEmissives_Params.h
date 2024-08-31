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
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.OnRep_bMatchEnded
	 */
	struct ABP_TerminusEmissives_C_OnRep_bMatchEnded_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.OnRep_bMatchStarted
	 */
	struct ABP_TerminusEmissives_C_OnRep_bMatchStarted_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.HandleTeamColors
	 */
	struct ABP_TerminusEmissives_C_HandleTeamColors_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.UserConstructionScript
	 */
	struct ABP_TerminusEmissives_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.Timeline_0__FinishedFunc
	 */
	struct ABP_TerminusEmissives_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.Timeline_0__UpdateFunc
	 */
	struct ABP_TerminusEmissives_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.Timeline_1__FinishedFunc
	 */
	struct ABP_TerminusEmissives_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.Timeline_1__UpdateFunc
	 */
	struct ABP_TerminusEmissives_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.ReceiveBeginPlay
	 */
	struct ABP_TerminusEmissives_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.MatchStarted
	 */
	struct ABP_TerminusEmissives_C_MatchStarted_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.OnTeamChanged
	 */
	struct ABP_TerminusEmissives_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.MatchEnded
	 */
	struct ABP_TerminusEmissives_C_MatchEnded_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.WarmupUpdate
	 */
	struct ABP_TerminusEmissives_C_WarmupUpdate_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.PlayWarmup
	 */
	struct ABP_TerminusEmissives_C_PlayWarmup_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.EndMatch
	 */
	struct ABP_TerminusEmissives_C_EndMatch_Params
	{	};

	/**
	 * Function BP_TerminusEmissives.BP_TerminusEmissives_C.ExecuteUbergraph_BP_TerminusEmissives
	 */
	struct ABP_TerminusEmissives_C_ExecuteUbergraph_BP_TerminusEmissives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
