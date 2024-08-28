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
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ForceDestroyCore
	 */
	struct ABP_GSM_BaseMOBA_C_ForceDestroyCore_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterWells
	 */
	struct ABP_GSM_BaseMOBA_C_RegisterWells_Params
	{
	public:
		class AOrionWell_Base*                                     NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterTeamTowers
	 */
	struct ABP_GSM_BaseMOBA_C_RegisterTeamTowers_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.IsMatchOver
	 */
	struct ABP_GSM_BaseMOBA_C_IsMatchOver_Params
	{
	public:
		bool                                                       GameOver;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GetWinningTeamNum
	 */
	struct ABP_GSM_BaseMOBA_C_GetWinningTeamNum_Params
	{
	public:
		EOrionTeam                                                 WinningTeam;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.Register Team Objective
	 */
	struct ABP_GSM_BaseMOBA_C_RegisterTeamObjective_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      InObjective;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.UserConstructionScript
	 */
	struct ABP_GSM_BaseMOBA_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpTowers
	 */
	struct ABP_GSM_BaseMOBA_C_GSM_LevelUpTowers_Params
	{	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpWells
	 */
	struct ABP_GSM_BaseMOBA_C_GSM_LevelUpWells_Params
	{	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled
	 */
	struct ABP_GSM_BaseMOBA_C_HeroHasRecalled_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.PlayEndMatchSequence
	 */
	struct ABP_GSM_BaseMOBA_C_PlayEndMatchSequence_Params
	{
	public:
		EOrionTeam                                                 WinningTeamNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.MinionsSpawning
	 */
	struct ABP_GSM_BaseMOBA_C_MinionsSpawning_Params
	{	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ExecuteUbergraph_BP_GSM_BaseMOBA
	 */
	struct ABP_GSM_BaseMOBA_C_ExecuteUbergraph_BP_GSM_BaseMOBA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TriggerVictoryEvent__DelegateSignature
	 */
	struct ABP_GSM_BaseMOBA_C_TriggerVictoryEvent__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 WinningTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled_Dispatch__DelegateSignature
	 */
	struct ABP_GSM_BaseMOBA_C_HeroHasRecalled_Dispatch__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TestPlayMatinee__DelegateSignature
	 */
	struct ABP_GSM_BaseMOBA_C_TestPlayMatinee__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
