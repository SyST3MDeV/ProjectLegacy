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
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.OnStateInterrupted_35E27A9542FA294DD0CC1581C4BD3489
	 */
	struct UGA_EnemyRetreat_LowHealth_C_OnStateInterrupted_35E27A9542FA294DD0CC1581C4BD3489_Params
	{	};

	/**
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.OnStateEnded_35E27A9542FA294DD0CC1581C4BD3489
	 */
	struct UGA_EnemyRetreat_LowHealth_C_OnStateEnded_35E27A9542FA294DD0CC1581C4BD3489_Params
	{	};

	/**
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.OnFail_38E815854EEFEFE422F1D7AB1AA6FE79
	 */
	struct UGA_EnemyRetreat_LowHealth_C_OnFail_38E815854EEFEFE422F1D7AB1AA6FE79_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.OnSuccess_38E815854EEFEFE422F1D7AB1AA6FE79
	 */
	struct UGA_EnemyRetreat_LowHealth_C_OnSuccess_38E815854EEFEFE422F1D7AB1AA6FE79_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.OnChange_3DDD16F3407972D89A03E9B40D05A4E2
	 */
	struct UGA_EnemyRetreat_LowHealth_C_OnChange_3DDD16F3407972D89A03E9B40D05A4E2_Params
	{
	public:
		bool                                                       bMatchesComparison;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1QLJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentValue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.K2_ActivateAbility
	 */
	struct UGA_EnemyRetreat_LowHealth_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C.ExecuteUbergraph_GA_EnemyRetreat_LowHealth
	 */
	struct UGA_EnemyRetreat_LowHealth_C_ExecuteUbergraph_GA_EnemyRetreat_LowHealth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRAU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
