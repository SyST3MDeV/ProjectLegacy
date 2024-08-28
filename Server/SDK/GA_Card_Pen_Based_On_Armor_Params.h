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
	 * Function GA_Card_Pen_Based_On_Armor.GA_Card_Pen_Based_On_Armor_C.OnApplied_06FF9A3D4ECEBF76962748A1503383A0
	 */
	struct UGA_Card_Pen_Based_On_Armor_C_OnApplied_06FF9A3D4ECEBF76962748A1503383A0_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_Pen_Based_On_Armor.GA_Card_Pen_Based_On_Armor_C.K2_ActivateAbility
	 */
	struct UGA_Card_Pen_Based_On_Armor_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_Pen_Based_On_Armor.GA_Card_Pen_Based_On_Armor_C.ExecuteUbergraph_GA_Card_Pen_Based_On_Armor
	 */
	struct UGA_Card_Pen_Based_On_Armor_C_ExecuteUbergraph_GA_Card_Pen_Based_On_Armor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWAF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
