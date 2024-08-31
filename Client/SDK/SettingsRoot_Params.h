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
	 * Function SettingsRoot.SettingsRoot_C.Input Stub
	 */
	struct USettingsRoot_C_InputStub_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.GetCancelButtonVisibility
	 */
	struct USettingsRoot_C_GetCancelButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.GetAutoDetectButtonVisibility
	 */
	struct USettingsRoot_C_GetAutoDetectButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.GetApplyButtonVisibility
	 */
	struct USettingsRoot_C_GetApplyButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.GetResetToDefaultsButtonVisibility
	 */
	struct USettingsRoot_C_GetResetToDefaultsButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.SetActiveTab
	 */
	struct USettingsRoot_C_SetActiveTab_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.ApplySettings
	 */
	struct USettingsRoot_C_ApplySettings_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.ResetActiveMenu
	 */
	struct USettingsRoot_C_ResetActiveMenu_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.OnHandleBackAction
	 */
	struct USettingsRoot_C_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.Construct
	 */
	struct USettingsRoot_C_Construct_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Cancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USettingsRoot_C_BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.BndEvt__[Default Button] Reset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USettingsRoot_C_BndEvt__DefaultButtonReset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Apply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USettingsRoot_C_BndEvt__DefaultButtonApply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Accept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USettingsRoot_C_BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.OnActivated
	 */
	struct USettingsRoot_C_OnActivated_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.OnDeactivated
	 */
	struct USettingsRoot_C_OnDeactivated_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.On Back Pressed
	 */
	struct USettingsRoot_C_OnBackPressed_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USettingsRoot_C_BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.CustomEvent_1
	 */
	struct USettingsRoot_C_CustomEvent_1_Params
	{	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.ExecuteUbergraph_SettingsRoot
	 */
	struct USettingsRoot_C_ExecuteUbergraph_SettingsRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFYG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SettingsRoot.SettingsRoot_C.OnClosed__DelegateSignature
	 */
	struct USettingsRoot_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
