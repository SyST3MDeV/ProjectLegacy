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
	 * Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.OnApplied_5E0AB5954050FE2E537882A1985AE628
	 */
	struct UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_OnApplied_5E0AB5954050FE2E537882A1985AE628_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.OnFinish_CF56A64144C46819C653A18DD5AA8B72
	 */
	struct UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_OnFinish_CF56A64144C46819C653A18DD5AA8B72_Params
	{	};

	/**
	 * Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.K2_ActivateAbility
	 */
	struct UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Physical_Armor
	 */
	struct UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Physical_Armor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E2MP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
