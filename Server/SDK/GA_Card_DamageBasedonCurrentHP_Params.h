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
	 * Function GA_Card_DamageBasedonCurrentHP.GA_Card_DamageBasedonCurrentHP_C.OnApplied_4F896E9F4F802B755F71D3BF33ED84E2
	 */
	struct UGA_Card_DamageBasedonCurrentHP_C_OnApplied_4F896E9F4F802B755F71D3BF33ED84E2_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_DamageBasedonCurrentHP.GA_Card_DamageBasedonCurrentHP_C.K2_ActivateAbility
	 */
	struct UGA_Card_DamageBasedonCurrentHP_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_DamageBasedonCurrentHP.GA_Card_DamageBasedonCurrentHP_C.ExecuteUbergraph_GA_Card_DamageBasedonCurrentHP
	 */
	struct UGA_Card_DamageBasedonCurrentHP_C_ExecuteUbergraph_GA_Card_DamageBasedonCurrentHP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJYL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
