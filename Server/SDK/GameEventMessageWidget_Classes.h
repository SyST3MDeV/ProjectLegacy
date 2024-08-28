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
	 * WidgetBlueprintGeneratedClass GameEventMessageWidget.GameEventMessageWidget_C
	 * Size -> 0x0030 (FullSize[0x0370] - InheritedSize[0x0340])
	 */
	class UGameEventMessageWidget_C : public UOrionGameEventMessageContainer
	{
	public:
		class UGesture_Message_WidgetV2_C*                         Gesture_Message_WidgetV2;                                // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UInvalidationBox*                                    InvalidationBox_127;                                     // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULevelupEventWidget_C*                               LevelupEventWidget;                                      // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlayer_Kill_Player_Widget_Template_C*               Player_Kill_Player_Widget_Template;                      // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPrime_Helix_Killed_C*                               Prime_Helix_Killed;                                      // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UStructure_Destroyed_C*                              Structure_Destroyed;                                     // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
