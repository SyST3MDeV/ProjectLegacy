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
	 * Function GA_Card_Passive_OnAbilityHitPhysicalShred.GA_Card_Passive_OnAbilityHitPhysicalShred_C.OnApplied_F8D8D1CF494908AE35A3279D71D5C467
	 */
	struct UGA_Card_Passive_OnAbilityHitPhysicalShred_C_OnApplied_F8D8D1CF494908AE35A3279D71D5C467_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_Passive_OnAbilityHitPhysicalShred.GA_Card_Passive_OnAbilityHitPhysicalShred_C.K2_ActivateAbility
	 */
	struct UGA_Card_Passive_OnAbilityHitPhysicalShred_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_Passive_OnAbilityHitPhysicalShred.GA_Card_Passive_OnAbilityHitPhysicalShred_C.ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPhysicalShred
	 */
	struct UGA_Card_Passive_OnAbilityHitPhysicalShred_C_ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPhysicalShred_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HUT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
