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
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.GetWinningTeamNum
	 */
	struct ABP_GMM_BaseMOBA_C_GetWinningTeamNum_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHB9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.IsMatchObjectiveCompleted
	 */
	struct ABP_GMM_BaseMOBA_C_IsMatchObjectiveCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GXWE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.IsMatchTimeBased
	 */
	struct ABP_GMM_BaseMOBA_C_IsMatchTimeBased_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.UserConstructionScript
	 */
	struct ABP_GMM_BaseMOBA_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceiveBeginPlay
	 */
	struct ABP_GMM_BaseMOBA_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceivePlayerKilled
	 */
	struct ABP_GMM_BaseMOBA_C_ReceivePlayerKilled_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         KilledPlayer;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APawn*                                               KilledPawn;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MultiKillCount;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    KillStreakCount;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.OnMatchStarted_Bind
	 */
	struct ABP_GMM_BaseMOBA_C_OnMatchStarted_Bind_Params
	{	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckFirstBlood
	 */
	struct ABP_GMM_BaseMOBA_C_CheckFirstBlood_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         KilledPlayer;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APawn*                                               KilledPawn;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckAce
	 */
	struct ABP_GMM_BaseMOBA_C_CheckAce_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         KilledPlayer;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ForceMatchWinCondition
	 */
	struct ABP_GMM_BaseMOBA_C_ForceMatchWinCondition_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckMultiOrStreak
	 */
	struct ABP_GMM_BaseMOBA_C_CheckMultiOrStreak_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MultiKillCount;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    KillStreakCount;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.OnMatchEnded_Bind
	 */
	struct ABP_GMM_BaseMOBA_C_OnMatchEnded_Bind_Params
	{	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceivePlayerKillStreakShutdown
	 */
	struct ABP_GMM_BaseMOBA_C_ReceivePlayerKillStreakShutdown_Params
	{
	public:
		class AController*                                         Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         Killer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    KillStreakCount;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ExecuteUbergraph_BP_GMM_BaseMOBA
	 */
	struct ABP_GMM_BaseMOBA_C_ExecuteUbergraph_BP_GMM_BaseMOBA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PlayerKilled__DelegateSignature
	 */
	struct ABP_GMM_BaseMOBA_C_PlayerKilled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixDestroyed__DelegateSignature
	 */
	struct ABP_GMM_BaseMOBA_C_PrimeHelixDestroyed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixDropped__DelegateSignature
	 */
	struct ABP_GMM_BaseMOBA_C_PrimeHelixDropped__DelegateSignature_Params
	{
	public:
		class AOrionChar*                                          Dropper;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixPickedUp__DelegateSignature
	 */
	struct ABP_GMM_BaseMOBA_C_PrimeHelixPickedUp__DelegateSignature_Params
	{
	public:
		class AOrionChar*                                          Carrier;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
