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
	 * WidgetBlueprintGeneratedClass RewardCarousel.RewardCarousel_C
	 * Size -> 0x0020 (FullSize[0x04A0] - InheritedSize[0x0480])
	 */
	class URewardCarousel_C : public UOrionRewardCarousel
	{
	public:
		class URewardCarouselItem_C*                               RewardCarouselItem;                                      // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URewardCarouselItem_C*                               RewardCarouselItem_1;                                    // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URewardCarouselItem_C*                               RewardCarouselItem_2;                                    // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URewardCarouselItem_C*                               RewardCarouselItem_C_1;                                  // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
