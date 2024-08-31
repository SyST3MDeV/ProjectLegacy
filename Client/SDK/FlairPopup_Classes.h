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
	 * WidgetBlueprintGeneratedClass FlairPopup.FlairPopup_C
	 * Size -> 0x0048 (FullSize[0x05D8] - InheritedSize[0x0590])
	 */
	class UFlairPopup_C : public UOrionFlairPopup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DailyChest;                                              // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Present;                                                 // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Background_Image;                                        // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_RandomLoot;                                        // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageDailyChest;                                         // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Reward_Sparkles;                                         // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              RewardDiamond;                                           // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		struct FSlateBrush GetBrush_1();
		void AnimateIn();
		void AnimateRandomChestOpen();
		void AnimateDailyChestOpen();
		void BndEvt__DailyChest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void ExecuteUbergraph_FlairPopup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
