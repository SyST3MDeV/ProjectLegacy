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
	 * Function HandSlot.HandSlot_C.On Action Pressed
	 */
	struct UHandSlot_C_OnActionPressed_Params
	{	};

	/**
	 * Function HandSlot.HandSlot_C.Apply Upgrade or Replace
	 */
	struct UHandSlot_C_ApplyUpgradeorReplace_Params
	{	};

	/**
	 * Function HandSlot.HandSlot_C.OnMouseButtonUp
	 */
	struct UHandSlot_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XAJS[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HandSlot.HandSlot_C.OnMouseButtonDown
	 */
	struct UHandSlot_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2JS8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HandSlot.HandSlot_C.Update Passive or Action
	 */
	struct UHandSlot_C_UpdatePassiveorAction_Params
	{	};

	/**
	 * Function HandSlot.HandSlot_C.Construct
	 */
	struct UHandSlot_C_Construct_Params
	{	};

	/**
	 * Function HandSlot.HandSlot_C.PreConstruct
	 */
	struct UHandSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HandSlot.HandSlot_C.OnMouseEnter
	 */
	struct UHandSlot_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZRZE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HandSlot.HandSlot_C.OnMouseLeave
	 */
	struct UHandSlot_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HandSlot.HandSlot_C.BP_OnCardStateChanged
	 */
	struct UHandSlot_C_BP_OnCardStateChanged_Params
	{
	public:
		EOrionHandSlotState                                        NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HandSlot.HandSlot_C.BndEvt__Card_K2Node_ComponentBoundEvent_44_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UHandSlot_C_BndEvt__Card_K2Node_ComponentBoundEvent_44_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HandSlot.HandSlot_C.OnSelectionChanged
	 */
	struct UHandSlot_C_OnSelectionChanged_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HandSlot.HandSlot_C.OnReadOnlyChanged
	 */
	struct UHandSlot_C_OnReadOnlyChanged_Params
	{
	public:
		bool                                                       bIsReadOnly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HandSlot.HandSlot_C.ExecuteUbergraph_HandSlot
	 */
	struct UHandSlot_C_ExecuteUbergraph_HandSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HandSlot.HandSlot_C.On Click__DelegateSignature
	 */
	struct UHandSlot_C_OnClick__DelegateSignature_Params
	{
	public:
		class UHandSlot_C*                                         HandSlot;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
