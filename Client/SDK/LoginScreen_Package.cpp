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
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply ULoginScreen_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnMouseButtonUp");
		
		ULoginScreen_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply ULoginScreen_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnMouseButtonDown");
		
		ULoginScreen_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoginScreen_C::OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098");
		
		ULoginScreen_C_OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnKilled_9B4AE3274E2C73847AC4CD823BF8C098
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoginScreen_C::OnKilled_9B4AE3274E2C73847AC4CD823BF8C098()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnKilled_9B4AE3274E2C73847AC4CD823BF8C098");
		
		ULoginScreen_C_OnKilled_9B4AE3274E2C73847AC4CD823BF8C098_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoginScreen_C::OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098");
		
		ULoginScreen_C_OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoginScreen_C::OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098");
		
		ULoginScreen_C_OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEnterState");
		
		ULoginScreen_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnLoginComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULoginScreen_C::OnLoginComplete(ELoginResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLoginComplete");
		
		ULoginScreen_C_OnLoginComplete_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Username                                                   (Parm)
	 * 		class FText                                        Password                                                   (Parm)
	 * 		bool                                               RememberMe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature");
		
		ULoginScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature_Params params {};
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
	 * 		Name   -> Function LoginScreen.LoginScreen_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature");
		
		ULoginScreen_C_BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature");
		
		ULoginScreen_C_BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Tick");
		
		ULoginScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnWebCreateAccountComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor)
	 */
	void ULoginScreen_C::OnWebCreateAccountComplete(bool bSuccess, const class FText& Message, const class FString& AuthCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnWebCreateAccountComplete");
		
		ULoginScreen_C_OnWebCreateAccountComplete_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		params.AuthCode = AuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnWebForgotPasswordComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULoginScreen_C::OnWebForgotPasswordComplete(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnWebForgotPasswordComplete");
		
		ULoginScreen_C_OnWebForgotPasswordComplete_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnLoginAuthCodeComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULoginScreen_C::OnLoginAuthCodeComplete(ELoginResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnLoginAuthCodeComplete");
		
		ULoginScreen_C_OnLoginAuthCodeComplete_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Email                                                      (Parm)
	 */
	void ULoginScreen_C::BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature(const class FText& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature");
		
		ULoginScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature");
		
		ULoginScreen_C_BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoginScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Construct");
		
		ULoginScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen");
		
		ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnAutoLoginFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULoginScreen_C::OnAutoLoginFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnAutoLoginFinished__DelegateSignature");
		
		ULoginScreen_C_OnAutoLoginFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LoginScreen.LoginScreen_C.OnAutoLoginStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULoginScreen_C::OnAutoLoginStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnAutoLoginStarted__DelegateSignature");
		
		ULoginScreen_C_OnAutoLoginStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C");
		return ptr;
	}

}


