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
	 * WidgetBlueprintGeneratedClass TitleScreenBase.TitleScreenBase_C
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UTitleScreenBase_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_GB5D[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void NavigateBack();
		struct FCallFunc_GetKey_ReturnValue OnKeyDown(const struct FInKeyEvent& MyGeometry, const struct FReturnValue& InKeyEvent);
		void NavigateScreen();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
