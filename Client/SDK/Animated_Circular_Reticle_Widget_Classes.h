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
	 * WidgetBlueprintGeneratedClass Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class UAnimated_Circular_Reticle_Widget_C : public UOrionUserWidget_Reticle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              OutsideRing;                                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void OnActivelyTargetingDelegate_Event_1(bool CurrentlyTargeting);
		void ExecuteUbergraph_Animated_Circular_Reticle_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
