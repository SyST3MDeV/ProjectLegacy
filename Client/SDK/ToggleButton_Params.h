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
	 * Function ToggleButton.ToggleButton_C.SetSelected
	 */
	struct UToggleButton_C_SetSelected_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ToggleButton.ToggleButton_C.BndEvt__BgButton_K2Node_ComponentBoundEvent_481_OnButtonClickedEvent__DelegateSignature
	 */
	struct UToggleButton_C_BndEvt__BgButton_K2Node_ComponentBoundEvent_481_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ToggleButton.ToggleButton_C.OnMouseEnter
	 */
	struct UToggleButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MVXR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ToggleButton.ToggleButton_C.OnMouseLeave
	 */
	struct UToggleButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ToggleButton.ToggleButton_C.BndEvt__BgButton_K2Node_ComponentBoundEvent_147_OnButtonPressedEvent__DelegateSignature
	 */
	struct UToggleButton_C_BndEvt__BgButton_K2Node_ComponentBoundEvent_147_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ToggleButton.ToggleButton_C.PreConstruct
	 */
	struct UToggleButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ToggleButton.ToggleButton_C.ExecuteUbergraph_ToggleButton
	 */
	struct UToggleButton_C_ExecuteUbergraph_ToggleButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ToggleButton.ToggleButton_C.On Clicked__DelegateSignature
	 */
	struct UToggleButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
