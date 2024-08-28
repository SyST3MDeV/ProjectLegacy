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
	 * Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnMinionKill_E8EFD428448A47D1F42967A33E267392
	 */
	struct UGA_Card_Gain40PerHP_C_OnMinionKill_E8EFD428448A47D1F42967A33E267392_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GBD7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnMinionAssist_E8EFD428448A47D1F42967A33E267392
	 */
	struct UGA_Card_Gain40PerHP_C_OnMinionAssist_E8EFD428448A47D1F42967A33E267392_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PY8D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnPlayerKill_E8EFD428448A47D1F42967A33E267392
	 */
	struct UGA_Card_Gain40PerHP_C_OnPlayerKill_E8EFD428448A47D1F42967A33E267392_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SPRD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnPlayerAssist_E8EFD428448A47D1F42967A33E267392
	 */
	struct UGA_Card_Gain40PerHP_C_OnPlayerAssist_E8EFD428448A47D1F42967A33E267392_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHBV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.K2_ActivateAbility
	 */
	struct UGA_Card_Gain40PerHP_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.ExecuteUbergraph_GA_Card_Gain40PerHP
	 */
	struct UGA_Card_Gain40PerHP_C_ExecuteUbergraph_GA_Card_Gain40PerHP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
