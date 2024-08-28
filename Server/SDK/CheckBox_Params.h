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
	 * Function CheckBox.CheckBox_C.UpdateSizeBox
	 */
	struct UCheckBox_C_UpdateSizeBox_Params
	{	};

	/**
	 * Function CheckBox.CheckBox_C.UpdatePadding
	 */
	struct UCheckBox_C_UpdatePadding_Params
	{	};

	/**
	 * Function CheckBox.CheckBox_C.PreConstruct
	 */
	struct UCheckBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CheckBox.CheckBox_C.BP_OnSelected
	 */
	struct UCheckBox_C_BP_OnSelected_Params
	{	};

	/**
	 * Function CheckBox.CheckBox_C.BP_OnDeselected
	 */
	struct UCheckBox_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function CheckBox.CheckBox_C.BP_OnClicked
	 */
	struct UCheckBox_C_BP_OnClicked_Params
	{	};

	/**
	 * Function CheckBox.CheckBox_C.OnMouseEnter
	 */
	struct UCheckBox_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ETR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CheckBox.CheckBox_C.OnMouseLeave
	 */
	struct UCheckBox_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CheckBox.CheckBox_C.Construct
	 */
	struct UCheckBox_C_Construct_Params
	{	};

	/**
	 * Function CheckBox.CheckBox_C.ExecuteUbergraph_CheckBox
	 */
	struct UCheckBox_C_ExecuteUbergraph_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
