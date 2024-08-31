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
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.RegisterTeamTowers
	 */
	struct ABP_GSM_Trainer_C_RegisterTeamTowers_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.IsMatchOver
	 */
	struct ABP_GSM_Trainer_C_IsMatchOver_Params
	{
	public:
		bool                                                       GameOver;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JIDC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GetWinningTeamNum
	 */
	struct ABP_GSM_Trainer_C_GetWinningTeamNum_Params
	{
	public:
		EOrionTeam                                                 WinningTeam;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.Register Team Objective
	 */
	struct ABP_GSM_Trainer_C_RegisterTeamObjective_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      InObjective;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.UserConstructionScript
	 */
	struct ABP_GSM_Trainer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayWelcome
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayWelcome_Params
	{	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMinions30s
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayMinions30s_Params
	{	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMinionsSpawned
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayMinionsSpawned_Params
	{	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayAce
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayAce_Params
	{	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayKilledDialog
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayKilledDialog_Params
	{
	public:
		class AOrionPlayerController_Game*                         KilledPlayerController;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APawn*                                               KilledPawn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMultiKillVO
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayMultiKillVO_Params
	{
	public:
		class AController*                                         KillerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayKillingSpreeVO
	 */
	struct ABP_GSM_Trainer_C_GSM_PlayKillingSpreeVO_Params
	{
	public:
		class AController*                                         KillerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.InitialPlayerLevelUp
	 */
	struct ABP_GSM_Trainer_C_InitialPlayerLevelUp_Params
	{
	public:
		class AOrionPlayerState_Game*                              OrionPlayerStateGame;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_Trainer.BP_GSM_Trainer_C.ExecuteUbergraph_BP_GSM_Trainer
	 */
	struct ABP_GSM_Trainer_C_ExecuteUbergraph_BP_GSM_Trainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XHSJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
