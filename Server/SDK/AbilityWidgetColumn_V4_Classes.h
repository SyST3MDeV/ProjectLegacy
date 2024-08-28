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
	 * WidgetBlueprintGeneratedClass AbilityWidgetColumn_V4.AbilityWidgetColumn-V4_C
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UAbilityWidgetColumnV4_C : public UOrionAbilityWidgetColumn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    UpgradeImageFadeOut;                                     // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityWidget_UpgradePips_Five_C*                   AbilityWidget_UpgradePips_Five;                          // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              UpgradeImage;                                            // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              UpgradeImagePulse;                                       // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void ShowLevelUp();
		void HideLevelUp();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_AbilityWidgetColumnV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
