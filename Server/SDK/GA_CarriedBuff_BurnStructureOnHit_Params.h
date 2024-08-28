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
	 * Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.OnApplied_5096090645BC58FAB37B5CACC775BEF7
	 */
	struct UGA_CarriedBuff_BurnStructureOnHit_C_OnApplied_5096090645BC58FAB37B5CACC775BEF7_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.K2_ActivateAbility
	 */
	struct UGA_CarriedBuff_BurnStructureOnHit_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit
	 */
	struct UGA_CarriedBuff_BurnStructureOnHit_C_ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N23Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
