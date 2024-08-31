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
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.Get_ContinuePlayButton_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool USkipSignInScreen_C::Get_ContinuePlayButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.Get_ContinuePlayButton_bIsEnabled_1");
		
		USkipSignInScreen_C_Get_ContinuePlayButton_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkipSignInScreen_C::BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature");
		
		USkipSignInScreen_C_BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkipSignInScreen_C::BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature");
		
		USkipSignInScreen_C_BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USkipSignInScreen_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.NavigateBack");
		
		USkipSignInScreen_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USkipSignInScreen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.OnActivated");
		
		USkipSignInScreen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.OnDoneWaiting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USkipSignInScreen_C::OnDoneWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.OnDoneWaiting");
		
		USkipSignInScreen_C_OnDoneWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkipSignInScreen_C::BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature");
		
		USkipSignInScreen_C_BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkipSignInScreen.SkipSignInScreen_C.ExecuteUbergraph_SkipSignInScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkipSignInScreen_C::ExecuteUbergraph_SkipSignInScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkipSignInScreen.SkipSignInScreen_C.ExecuteUbergraph_SkipSignInScreen");
		
		USkipSignInScreen_C_ExecuteUbergraph_SkipSignInScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkipSignInScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkipSignInScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkipSignInScreen.SkipSignInScreen_C");
		return ptr;
	}

}


