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
	 * WidgetBlueprintGeneratedClass XP_Overview.XP_Overview_C
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UXP_Overview_C : public UOrionXPOverview
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    LevelUp;                                                 // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SwitcherCarousel;                                        // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Reset();
		void SetOwnerName(const class FText& OwnerName);
		void BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature(int32_t NumRewardsDisplayed);
		void ExecuteUbergraph_XP_Overview(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
