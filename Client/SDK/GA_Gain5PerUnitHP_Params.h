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
	 * Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F
	 */
	struct UGA_Gain5PerUnitHP_C_OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PN6M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F
	 */
	struct UGA_Gain5PerUnitHP_C_OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDC0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F
	 */
	struct UGA_Gain5PerUnitHP_C_OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A99R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F
	 */
	struct UGA_Gain5PerUnitHP_C_OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U84Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.K2_ActivateAbility
	 */
	struct UGA_Gain5PerUnitHP_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.ExecuteUbergraph_GA_Gain5PerUnitHP
	 */
	struct UGA_Gain5PerUnitHP_C_ExecuteUbergraph_GA_Gain5PerUnitHP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
