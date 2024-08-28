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
	 * WidgetBlueprintGeneratedClass AbilityUpgradePanel_V4.AbilityUpgradePanel-V4_C
	 * Size -> 0x0050 (FullSize[0x0338] - InheritedSize[0x02E8])
	 */
	class UAbilityUpgradePanelV4_C : public UOrionAbilityUpgradePanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    BP_ExitAnimation;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    BP_EnterAnimation;                                       // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradeRowV4_C*                              AbilityUpgradeRowE;                                      // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradeRowV4_C*                              AbilityUpgradeRowLMB;                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradeRow_PassiveV4_C*                      AbilityUpgradeRowPassive;                                // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradeRowV4_C*                              AbilityUpgradeRowQ;                                      // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradeRowV4_C*                              AbilityUpgradeRowR;                                      // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradeRowV4_C*                              AbilityUpgradeRowRMB;                                    // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_3;                                              // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void OnOpen();
		void OnClose();
		void ExecuteUbergraph_AbilityUpgradePanelV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
