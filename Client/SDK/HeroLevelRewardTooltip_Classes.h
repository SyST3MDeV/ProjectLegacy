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
	 * WidgetBlueprintGeneratedClass HeroLevelRewardTooltip.HeroLevelRewardTooltip_C
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class UHeroLevelRewardTooltip_C : public UOrionHeroRewardTooltip
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBackgroundBlurWidget*                               BackgroundBlurWidget_1;                                  // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Border_OwnerRewards;                                     // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Overlay_Lock;                                            // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     Text_XPBoost;                                            // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        VBox_PurchasePrompt;                                     // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void OnUpdateLock(bool bIsOwned);
		void OnUpdateXPBonuses(float SelfBonus, float TeammateBonus);
		void ExecuteUbergraph_HeroLevelRewardTooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
