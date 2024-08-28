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
	 * Function GA_Card_GainMana.GA_Card_GainMana_C.OnMinionKill_C866FAD6486496ACAD9A3298CD20BB3D
	 */
	struct UGA_Card_GainMana_C_OnMinionKill_C866FAD6486496ACAD9A3298CD20BB3D_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NBHF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_GainMana.GA_Card_GainMana_C.OnMinionAssist_C866FAD6486496ACAD9A3298CD20BB3D
	 */
	struct UGA_Card_GainMana_C_OnMinionAssist_C866FAD6486496ACAD9A3298CD20BB3D_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H55Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_GainMana.GA_Card_GainMana_C.OnPlayerKill_C866FAD6486496ACAD9A3298CD20BB3D
	 */
	struct UGA_Card_GainMana_C_OnPlayerKill_C866FAD6486496ACAD9A3298CD20BB3D_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NUCR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_GainMana.GA_Card_GainMana_C.OnPlayerAssist_C866FAD6486496ACAD9A3298CD20BB3D
	 */
	struct UGA_Card_GainMana_C_OnPlayerAssist_C866FAD6486496ACAD9A3298CD20BB3D_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTZA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_GainMana.GA_Card_GainMana_C.K2_ActivateAbility
	 */
	struct UGA_Card_GainMana_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_GainMana.GA_Card_GainMana_C.ExecuteUbergraph_GA_Card_GainMana
	 */
	struct UGA_Card_GainMana_C_ExecuteUbergraph_GA_Card_GainMana_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
