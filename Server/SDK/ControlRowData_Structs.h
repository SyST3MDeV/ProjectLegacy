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
	 * UserDefinedStruct ControlRowData.ControlRowData
	 * Size -> 0x0160
	 */
	struct FControlRowData
	{
	public:
		class FText                                                BindingDisplayName_8_BEFD0D72416E50780D91C0A7C4155327;   // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                BindingKey_9_AFC6A5284BBFDFDB709A6D8E3F22E0D9;           // 0x0018(0x0018) Edit, BlueprintVisible
		struct FSlateBrush                                         KeyboardBrush_14_C8139B184325C4CF2B6B8885679C301A;       // 0x0030(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         GamepadBrush_18_D6F6C77449FEB5AE2459F09D5A3D27CC;        // 0x00C0(0x0090) Edit, BlueprintVisible
		bool                                                       NotVisibleOnConsole_21_085C34E1499792A228C889A51671F5CC; // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NMQ7[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CustomWidget_26_F3CB021F488B121AD830F49DC910B456;        // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
