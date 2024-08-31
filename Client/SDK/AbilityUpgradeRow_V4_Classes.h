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
	 * WidgetBlueprintGeneratedClass AbilityUpgradeRow_V4.AbilityUpgradeRow-V4_C
	 * Size -> 0x0088 (FullSize[0x0488] - InheritedSize[0x0400])
	 */
	class UAbilityUpgradeRowV4_C : public UOrionAbilityUpgradeRowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FlashOnUpgrade;                                          // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Border_Header;                                           // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderBody;                                              // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderUpgrade;                                           // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BPAbilityName;                                           // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BPLevelText;                                             // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageDefault;                                            // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageUpgrade;                                            // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              LockImage;                                               // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SizeBox_1;                                               // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SwitcherBgnd;                                            // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     UnlockAbilityText;                                       // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityValueRowWidgetV4_C*                          UpgradeRow_1;                                            // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityValueRowWidgetV4_C*                          UpgradeRow_2;                                            // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityValueRowWidgetV4_C*                          UpgradeRow_3;                                            // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        UpgradeRowVertBox;                                       // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void OnAbilityUpgraded();
		void ShowUpgrades();
		void HideUpgrades();
		void HideLocks();
		void ExecuteUbergraph_AbilityUpgradeRowV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
