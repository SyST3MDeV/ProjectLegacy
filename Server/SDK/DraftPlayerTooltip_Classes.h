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
	 * WidgetBlueprintGeneratedClass DraftPlayerTooltip.DraftPlayerTooltip_C
	 * Size -> 0x0010 (FullSize[0x03A0] - InheritedSize[0x0390])
	 */
	class UDraftPlayerTooltip_C : public UOrionDraftPlayerTooltip
	{
	public:
		class UBackgroundBlurWidget*                               BackgroundBlurWidget_1;                                  // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        VBox_StatusInfo;                                         // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
