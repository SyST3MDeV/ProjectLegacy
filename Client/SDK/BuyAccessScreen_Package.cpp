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
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.Get_SignInForAccessButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBuyAccessScreen_C::Get_SignInForAccessButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.Get_SignInForAccessButton_Visibility_1");
		
		UBuyAccessScreen_C_Get_SignInForAccessButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuyAccessScreen_C::BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature");
		
		UBuyAccessScreen_C_BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBuyAccessScreen_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.NavigateBack");
		
		UBuyAccessScreen_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuyAccessScreen_C::BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature");
		
		UBuyAccessScreen_C_BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.OnStoreClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPurchased                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuyAccessScreen_C::OnStoreClosed(bool bPurchased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.OnStoreClosed");
		
		UBuyAccessScreen_C_OnStoreClosed_Params params {};
		params.bPurchased = bPurchased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBuyAccessScreen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.OnActivated");
		
		UBuyAccessScreen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuyAccessScreen.BuyAccessScreen_C.ExecuteUbergraph_BuyAccessScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuyAccessScreen_C::ExecuteUbergraph_BuyAccessScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuyAccessScreen.BuyAccessScreen_C.ExecuteUbergraph_BuyAccessScreen");
		
		UBuyAccessScreen_C_ExecuteUbergraph_BuyAccessScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuyAccessScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuyAccessScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuyAccessScreen.BuyAccessScreen_C");
		return ptr;
	}

}


