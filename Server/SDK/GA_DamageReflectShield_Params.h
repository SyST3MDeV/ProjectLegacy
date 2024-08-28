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
	 * Function GA_DamageReflectShield.GA_DamageReflectShield_C.OnApplied_8758D8584F272E3A942EC6B2E7E3368A
	 */
	struct UGA_DamageReflectShield_C_OnApplied_8758D8584F272E3A942EC6B2E7E3368A_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_DamageReflectShield.GA_DamageReflectShield_C.K2_ActivateAbility
	 */
	struct UGA_DamageReflectShield_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_DamageReflectShield.GA_DamageReflectShield_C.ExecuteUbergraph_GA_DamageReflectShield
	 */
	struct UGA_DamageReflectShield_C_ExecuteUbergraph_GA_DamageReflectShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HHTQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
