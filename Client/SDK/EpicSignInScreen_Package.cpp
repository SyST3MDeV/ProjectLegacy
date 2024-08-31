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
	 * 		Name   -> Function EpicSignInScreen.EpicSignInScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Username                                                   (Parm)
	 * 		class FText                                        Password                                                   (Parm)
	 * 		bool                                               RememberMe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEpicSignInScreen_C::BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicSignInScreen.EpicSignInScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature");
		
		UEpicSignInScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature_Params params {};
		params.Username = Username;
		params.Password = Password;
		params.RememberMe = RememberMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicSignInScreen.EpicSignInScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Email                                                      (Parm)
	 */
	void UEpicSignInScreen_C::BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature(const class FText& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicSignInScreen.EpicSignInScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature");
		
		UEpicSignInScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicSignInScreen.EpicSignInScreen_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEpicSignInScreen_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicSignInScreen.EpicSignInScreen_C.NavigateBack");
		
		UEpicSignInScreen_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicSignInScreen.EpicSignInScreen_C.ExecuteUbergraph_EpicSignInScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEpicSignInScreen_C::ExecuteUbergraph_EpicSignInScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicSignInScreen.EpicSignInScreen_C.ExecuteUbergraph_EpicSignInScreen");
		
		UEpicSignInScreen_C_ExecuteUbergraph_EpicSignInScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicSignInScreen.EpicSignInScreen_C.OnForgotPasswordRequest__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Email                                                      (Parm)
	 */
	void UEpicSignInScreen_C::OnForgotPasswordRequest__DelegateSignature(const class FText& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicSignInScreen.EpicSignInScreen_C.OnForgotPasswordRequest__DelegateSignature");
		
		UEpicSignInScreen_C_OnForgotPasswordRequest__DelegateSignature_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicSignInScreen.EpicSignInScreen_C.OnLoginRequest__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Username                                                   (Parm)
	 * 		class FText                                        Password                                                   (Parm)
	 * 		bool                                               RememberMe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEpicSignInScreen_C::OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicSignInScreen.EpicSignInScreen_C.OnLoginRequest__DelegateSignature");
		
		UEpicSignInScreen_C_OnLoginRequest__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction UEpicSignInScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEpicSignInScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EpicSignInScreen.EpicSignInScreen_C");
		return ptr;
	}

}


