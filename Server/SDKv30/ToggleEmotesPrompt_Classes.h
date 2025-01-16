#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * Size -> 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
	 */
	class UToggleEmotesPrompt_C : public UOrionUserWidget_HUD
	{
	public:
		unsigned char                                              UnknownData_IDXE[0x28];                                  // 0x0250(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetEmoteMode(bool InEmoteMode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
