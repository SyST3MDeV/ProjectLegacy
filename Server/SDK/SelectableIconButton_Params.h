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
	 * Function SelectableIconButton.SelectableIconButton_C.UpdateSizeBox
	 */
	struct USelectableIconButton_C_UpdateSizeBox_Params
	{	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.UpdatePadding
	 */
	struct USelectableIconButton_C_UpdatePadding_Params
	{	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.UpdateIcon
	 */
	struct USelectableIconButton_C_UpdateIcon_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.PreConstruct
	 */
	struct USelectableIconButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.BP_OnSelected
	 */
	struct USelectableIconButton_C_BP_OnSelected_Params
	{	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.BP_OnDeselected
	 */
	struct USelectableIconButton_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.OnMouseEnter
	 */
	struct USelectableIconButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IF5K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.OnMouseLeave
	 */
	struct USelectableIconButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.BP_OnClicked
	 */
	struct USelectableIconButton_C_BP_OnClicked_Params
	{	};

	/**
	 * Function SelectableIconButton.SelectableIconButton_C.ExecuteUbergraph_SelectableIconButton
	 */
	struct USelectableIconButton_C_ExecuteUbergraph_SelectableIconButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
