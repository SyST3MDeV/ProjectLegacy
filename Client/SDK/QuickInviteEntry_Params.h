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
	 * Function QuickInviteEntry.QuickInviteEntry_C.DoesItemHaveChildren
	 */
	struct UQuickInviteEntry_C_DoesItemHaveChildren_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.GetIndentLevel
	 */
	struct UQuickInviteEntry_C_GetIndentLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.GetSelectionMode
	 */
	struct UQuickInviteEntry_C_GetSelectionMode_Params
	{
	public:
		ESelectionMode                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.IsItemExpanded
	 */
	struct UQuickInviteEntry_C_IsItemExpanded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.GetData
	 */
	struct UQuickInviteEntry_C_GetData_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.Private_OnExpanderArrowShiftClicked
	 */
	struct UQuickInviteEntry_C_Private_OnExpanderArrowShiftClicked_Params
	{	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.SetIndexInList
	 */
	struct UQuickInviteEntry_C_SetIndexInList_Params
	{
	public:
		int32_t                                                    InIndexInList;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.SetSelected
	 */
	struct UQuickInviteEntry_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.ToggleExpansion
	 */
	struct UQuickInviteEntry_C_ToggleExpansion_Params
	{	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.Reset
	 */
	struct UQuickInviteEntry_C_Reset_Params
	{	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UQuickInviteEntry_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.SetData
	 */
	struct UQuickInviteEntry_C_SetData_Params
	{
	public:
		class UObject*                                             InData;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.RegisterOnClicked
	 */
	struct UQuickInviteEntry_C_RegisterOnClicked_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.ExecuteUbergraph_QuickInviteEntry
	 */
	struct UQuickInviteEntry_C_ExecuteUbergraph_QuickInviteEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WKOH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuickInviteEntry.QuickInviteEntry_C.OnInviteClicked__DelegateSignature
	 */
	struct UQuickInviteEntry_C_OnInviteClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
