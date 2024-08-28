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
	 * WidgetBlueprintGeneratedClass RewardsToday.RewardsToday_C
	 * Size -> 0x0008 (FullSize[0x0468] - InheritedSize[0x0460])
	 */
	class URewardsToday_C : public UOrionRewardsToday
	{
	public:
		class UHomeBox_C*                                          HomeBox;                                                 // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
