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
	 * Function LoginWindow.LoginWindow_C.Reset
	 */
	struct ULoginWindow_C_Reset_Params
	{	};

	/**
	 * Function LoginWindow.LoginWindow_C.GetLoggingInText
	 */
	struct ULoginWindow_C_GetLoggingInText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.HideLoginThrobber
	 */
	struct ULoginWindow_C_HideLoginThrobber_Params
	{	};

	/**
	 * Function LoginWindow.LoginWindow_C.ShowLoginThrobber
	 */
	struct ULoginWindow_C_ShowLoginThrobber_Params
	{	};

	/**
	 * Function LoginWindow.LoginWindow_C.GetRememberMeVisible
	 */
	struct ULoginWindow_C_GetRememberMeVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.ShowErrorMessage
	 */
	struct ULoginWindow_C_ShowErrorMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm)
		bool                                                       PlaySoundOnError;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.IsInteractable
	 */
	struct ULoginWindow_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.GetErrorMessageText
	 */
	struct ULoginWindow_C_GetErrorMessageText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_219_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_219_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_213_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_213_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_74_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_74_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_78_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_78_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct ULoginWindow_C_BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.Construct
	 */
	struct ULoginWindow_C_Construct_Params
	{	};

	/**
	 * Function LoginWindow.LoginWindow_C.ExecuteUbergraph_LoginWindow
	 */
	struct ULoginWindow_C_ExecuteUbergraph_LoginWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKXC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LoginWindow.LoginWindow_C.OnForgotPasswordRequest__DelegateSignature
	 */
	struct ULoginWindow_C_OnForgotPasswordRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function LoginWindow.LoginWindow_C.OnLoginRequest__DelegateSignature
	 */
	struct ULoginWindow_C_OnLoginRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Username;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                Password;                                                // 0x0018(0x0018)  (Parm)
		bool                                                       RememberMe;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
