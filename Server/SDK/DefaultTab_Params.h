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
	 * Function DefaultTab.DefaultTab_C.ClearCallToAction
	 */
	struct UDefaultTab_C_ClearCallToAction_Params
	{	};

	/**
	 * Function DefaultTab.DefaultTab_C.SetCallToAction
	 */
	struct UDefaultTab_C_SetCallToAction_Params
	{
	public:
		class FText                                                Tooltip;                                                 // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function DefaultTab.DefaultTab_C.UpdatePadding
	 */
	struct UDefaultTab_C_UpdatePadding_Params
	{	};

	/**
	 * Function DefaultTab.DefaultTab_C.RefreshText
	 */
	struct UDefaultTab_C_RefreshText_Params
	{	};

	/**
	 * Function DefaultTab.DefaultTab_C.PreConstruct
	 */
	struct UDefaultTab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DefaultTab.DefaultTab_C.BP_OnSelected
	 */
	struct UDefaultTab_C_BP_OnSelected_Params
	{	};

	/**
	 * Function DefaultTab.DefaultTab_C.BP_OnDeselected
	 */
	struct UDefaultTab_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function DefaultTab.DefaultTab_C.OnMouseEnter
	 */
	struct UDefaultTab_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4IY2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DefaultTab.DefaultTab_C.OnMouseLeave
	 */
	struct UDefaultTab_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DefaultTab.DefaultTab_C.ExecuteUbergraph_DefaultTab
	 */
	struct UDefaultTab_C_ExecuteUbergraph_DefaultTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
