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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass CombatMessageManagerWidget_V4.CombatMessageManagerWidget-V4_C
	 * Size -> 0x0078 (FullSize[0x0390] - InheritedSize[0x0318])
	 */
	class UCombatMessageManagerWidgetV4_C : public UOrionCombatMessageManagerWidget
	{
	public:
		class UAbilityFail_Cooldown_C*                             AbilityFail_Cooldown;                                    // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityFail_Energy_C*                               AbilityFail_Energy;                                      // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityFail_Generic_C*                              AbilityFail_Generic;                                     // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            BlackBuffMessage;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            BlueBuffMessage;                                         // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCollectingFromRig_CombatMessage_C*                  CollectingFromRig_CombatMessage;                         // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            GoldBuffMessage;                                         // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            GreenBuffMessage;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UInBaseCombatMessage_C*                              InBaseCombatMessage;                                     // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UInvalidationBox*                                    InvalidationBox_3;                                       // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            MidLaneBuffMessage;                                      // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UNoEmoteCombatMessage_C*                             NoEmoteCombatMessage;                                    // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            OrbPrimeMessage;                                         // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            PrimeCardMessage;                                        // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGotBuff_CombatMessage_C*                            RedBuffMessage;                                          // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
