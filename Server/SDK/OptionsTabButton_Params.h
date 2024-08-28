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
	 * Function OptionsTabButton.OptionsTabButton_C.UpdateSizeBox
	 */
	struct UOptionsTabButton_C_UpdateSizeBox_Params
	{	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.UpdatePadding
	 */
	struct UOptionsTabButton_C_UpdatePadding_Params
	{	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.UpdateIcon
	 */
	struct UOptionsTabButton_C_UpdateIcon_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.UpdateText
	 */
	struct UOptionsTabButton_C_UpdateText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.PreConstruct
	 */
	struct UOptionsTabButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.BP_OnSelected
	 */
	struct UOptionsTabButton_C_BP_OnSelected_Params
	{	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.BP_OnDeselected
	 */
	struct UOptionsTabButton_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.BP_OnClicked
	 */
	struct UOptionsTabButton_C_BP_OnClicked_Params
	{	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.OnMouseEnter
	 */
	struct UOptionsTabButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UBNY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.OnMouseLeave
	 */
	struct UOptionsTabButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OptionsTabButton.OptionsTabButton_C.ExecuteUbergraph_OptionsTabButton
	 */
	struct UOptionsTabButton_C_ExecuteUbergraph_OptionsTabButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
