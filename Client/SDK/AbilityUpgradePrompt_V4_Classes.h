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
	 * WidgetBlueprintGeneratedClass AbilityUpgradePrompt_V4.AbilityUpgradePrompt-V4_C
	 * Size -> 0x0018 (FullSize[0x0320] - InheritedSize[0x0308])
	 */
	class UAbilityUpgradePromptV4_C : public UOrionAbilityUpgradePromptWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideWidgetAnimation;                                     // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    ShowWidgetAnimation;                                     // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void ShowWidget();
		void HideWidget();
		void ExecuteUbergraph_AbilityUpgradePromptV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
