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
	 * WidgetBlueprintGeneratedClass RespawnTimerContaier_V2.RespawnTimerContaier_V2_C
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	class URespawnTimerContaier_V2_C : public UOrionHUDWidgetBase
	{
	public:
		class URespawnTimerWidget_V2_C*                            Enemy;                                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URespawnTimerWidget_V2_C*                            Friendly;                                                // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMatchTimerWidgetV4_C*                               MatchTimerWidgetV4;                                      // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
