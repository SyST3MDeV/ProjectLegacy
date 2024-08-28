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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
	 * Size -> 0x0888 (FullSize[0x0890] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HighlightBrush;                                          // 0x0008(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        LeftButtonStyle;                                         // 0x0098(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CenterButtonStyle;                                       // 0x0340(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RightButtonStyle;                                        // 0x05E8(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
	 * Size -> 0x03C8 (FullSize[0x03D0] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        InnerButtonStyle;                                        // 0x0008(0x02A8) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonLeftImage;                               // 0x02B0(0x0090) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonRightImage;                              // 0x0340(0x0090) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
