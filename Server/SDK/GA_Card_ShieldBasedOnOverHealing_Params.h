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
	 * Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF
	 */
	struct UGA_Card_ShieldBasedOnOverHealing_C_OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.K2_ActivateAbility
	 */
	struct UGA_Card_ShieldBasedOnOverHealing_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.AddShieldForRegen
	 */
	struct UGA_Card_ShieldBasedOnOverHealing_C_AddShieldForRegen_Params
	{	};

	/**
	 * Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing
	 */
	struct UGA_Card_ShieldBasedOnOverHealing_C_ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XGRZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
