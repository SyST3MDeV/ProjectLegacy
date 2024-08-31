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
	 * WidgetBlueprintGeneratedClass ToggleEmotesPrompt.ToggleEmotesPrompt_C
	 * Size -> 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
	 */
	class UToggleEmotesPrompt_C : public UOrionUserWidget_HUD
	{
	public:
		class UWidgetAnimation*                                    BounceIn;                                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionInputVisualizer*                               CancelInputPrompt;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             HighlightBorder;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LabelText;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             WhiteBorder;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetEmoteMode(bool InEmoteMode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
