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
	 * Class EditorStyle.EditorStyleSettings
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UEditorStyleSettings : public UObject
	{
	public:
		struct FLinearColor                                        SelectionColor;                                          // 0x0028(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        PressedSelectionColor;                                   // 0x0038(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        InactiveSelectionColor;                                  // 0x0048(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        KeyboardFocusColor;                                      // 0x0058(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EColorVisionDeficiency                                     ColorVisionDeficiencyPreviewType;                        // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI7S[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseSmallToolBarIcons : 1;                               // 0x006C(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseGrid : 1;                                            // 0x006C(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N8P[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        RegularColor;                                            // 0x0070(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        RuleColor;                                               // 0x0080(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        CenterColor;                                             // 0x0090(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableWindowAnimations : 1;                             // 0x00A0(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowFriendlyNames : 1;                                  // 0x00A0(0x0001) BIT_FIELD Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bExpandConfigurationMenus : 1;                           // 0x00A0(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bShowProjectMenus : 1;                                   // 0x00A0(0x0001) BIT_FIELD Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowLaunchMenus : 1;                                    // 0x00A0(0x0001) BIT_FIELD Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PG2[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        LogBackgroundColor;                                      // 0x00A4(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        LogSelectionBackgroundColor;                             // 0x00B4(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        LogNormalColor;                                          // 0x00C4(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        LogCommandColor;                                         // 0x00D4(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        LogWarningColor;                                         // 0x00E4(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        LogErrorColor;                                           // 0x00F4(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowAllAdvancedDetails : 1;                             // 0x0104(0x0001) BIT_FIELD Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_589I[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LogFontSize;                                             // 0x0108(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELogTimes                                                  LogTimestampMode;                                        // 0x010C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPromoteOutputLogWarningsDuringPIE;                      // 0x010D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAssetEditorOpenLocation                                   AssetEditorOpenLocation;                                 // 0x010E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SF7M[0x71];                                  // 0x010F(0x0071) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
