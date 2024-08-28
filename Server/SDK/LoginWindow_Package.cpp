/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.Reset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ULoginWindow_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Reset");
		
		ULoginWindow_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.GetLoggingInText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ULoginWindow_C::GetLoggingInText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.GetLoggingInText");
		
		ULoginWindow_C_GetLoggingInText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.HideLoginThrobber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoginWindow_C::HideLoginThrobber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.HideLoginThrobber");
		
		ULoginWindow_C_HideLoginThrobber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.ShowLoginThrobber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoginWindow_C::ShowLoginThrobber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.ShowLoginThrobber");
		
		ULoginWindow_C_ShowLoginThrobber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.GetRememberMeVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility ULoginWindow_C::GetRememberMeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.GetRememberMeVisible");
		
		ULoginWindow_C_GetRememberMeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.ShowErrorMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Message                                                    (Parm)
	 * 		bool                                               PlaySoundOnError                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::ShowErrorMessage(const class FText& Message, bool PlaySoundOnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.ShowErrorMessage");
		
		ULoginWindow_C_ShowErrorMessage_Params params {};
		params.Message = Message;
		params.PlaySoundOnError = PlaySoundOnError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.IsInteractable
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ULoginWindow_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.IsInteractable");
		
		ULoginWindow_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.GetErrorMessageText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ULoginWindow_C::GetErrorMessageText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.GetErrorMessageText");
		
		ULoginWindow_C_GetErrorMessageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature");
		
		ULoginWindow_C_BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_219_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULoginWindow_C::BndEvt__Password_K2Node_ComponentBoundEvent_219_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_219_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_219_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_213_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULoginWindow_C::BndEvt__Email_K2Node_ComponentBoundEvent_213_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_213_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_213_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_74_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::BndEvt__Email_K2Node_ComponentBoundEvent_74_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_74_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_74_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_78_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::BndEvt__Password_K2Node_ComponentBoundEvent_78_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_78_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_78_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature");
		
		ULoginWindow_C_BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		ULoginWindow_C_BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoginWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Construct");
		
		ULoginWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.ExecuteUbergraph_LoginWindow
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::ExecuteUbergraph_LoginWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.ExecuteUbergraph_LoginWindow");
		
		ULoginWindow_C_ExecuteUbergraph_LoginWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.OnForgotPasswordRequest__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Email                                                      (Parm)
	 */
	void ULoginWindow_C::OnForgotPasswordRequest__DelegateSignature(const class FText& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnForgotPasswordRequest__DelegateSignature");
		
		ULoginWindow_C_OnForgotPasswordRequest__DelegateSignature_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginWindow.LoginWindow_C.OnLoginRequest__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Username                                                   (Parm)
	 * 		class FText                                        Password                                                   (Parm)
	 * 		bool                                               RememberMe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWindow_C::OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnLoginRequest__DelegateSignature");
		
		ULoginWindow_C_OnLoginRequest__DelegateSignature_Params params {};
		params.Username = Username;
		params.Password = Password;
		params.RememberMe = RememberMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginWindow.LoginWindow_C");
		return ptr;
	}

}


