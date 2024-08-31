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
	 * Function GA_GainMoveSpeed.GA_GainMoveSpeed_C.OnMinionKill_C866FAD6486496ACAD9A32983EA5B78F
	 */
	struct UGA_GainMoveSpeed_C_OnMinionKill_C866FAD6486496ACAD9A32983EA5B78F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BR61[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_GainMoveSpeed.GA_GainMoveSpeed_C.OnMinionAssist_C866FAD6486496ACAD9A32983EA5B78F
	 */
	struct UGA_GainMoveSpeed_C_OnMinionAssist_C866FAD6486496ACAD9A32983EA5B78F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TV3E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_GainMoveSpeed.GA_GainMoveSpeed_C.OnPlayerKill_C866FAD6486496ACAD9A32983EA5B78F
	 */
	struct UGA_GainMoveSpeed_C_OnPlayerKill_C866FAD6486496ACAD9A32983EA5B78F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YIML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_GainMoveSpeed.GA_GainMoveSpeed_C.OnPlayerAssist_C866FAD6486496ACAD9A32983EA5B78F
	 */
	struct UGA_GainMoveSpeed_C_OnPlayerAssist_C866FAD6486496ACAD9A32983EA5B78F_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_366V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_GainMoveSpeed.GA_GainMoveSpeed_C.K2_ActivateAbility
	 */
	struct UGA_GainMoveSpeed_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_GainMoveSpeed.GA_GainMoveSpeed_C.ExecuteUbergraph_GA_GainMoveSpeed
	 */
	struct UGA_GainMoveSpeed_C_ExecuteUbergraph_GA_GainMoveSpeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
