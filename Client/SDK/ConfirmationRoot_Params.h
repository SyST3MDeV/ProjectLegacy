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
	 * Function ConfirmationRoot.ConfirmationRoot_C.SetErrorMode
	 */
	struct UConfirmationRoot_C_SetErrorMode_Params
	{
	public:
		bool                                                       InErrorMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.HandleTimeOut
	 */
	struct UConfirmationRoot_C_HandleTimeOut_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.HandleResult
	 */
	struct UConfirmationRoot_C_HandleResult_Params
	{
	public:
		EOrionDialogResult                                         Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.UpdateButton
	 */
	struct UConfirmationRoot_C_UpdateButton_Params
	{
	public:
		class UDefaultButton_C*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.Is Timer Visible
	 */
	struct UConfirmationRoot_C_IsTimerVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.Get Timer
	 */
	struct UConfirmationRoot_C_GetTimer_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.Construct
	 */
	struct UConfirmationRoot_C_Construct_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.OnShow
	 */
	struct UConfirmationRoot_C_OnShow_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.OnKill
	 */
	struct UConfirmationRoot_C_OnKill_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.Destruct
	 */
	struct UConfirmationRoot_C_Destruct_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Accept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UConfirmationRoot_C_BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Decline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UConfirmationRoot_C_BndEvt__DefaultButtonDecline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Cancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UConfirmationRoot_C_BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.OnDeactivated
	 */
	struct UConfirmationRoot_C_OnDeactivated_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.OnActivated
	 */
	struct UConfirmationRoot_C_OnActivated_Params
	{	};

	/**
	 * Function ConfirmationRoot.ConfirmationRoot_C.ExecuteUbergraph_ConfirmationRoot
	 */
	struct UConfirmationRoot_C_ExecuteUbergraph_ConfirmationRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
