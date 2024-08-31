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
	 * 		Name   -> Function ConfirmLinkScreen.ConfirmLinkScreen_C.GetUserNameText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UConfirmLinkScreen_C::GetUserNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmLinkScreen.ConfirmLinkScreen_C.GetUserNameText");
		
		UConfirmLinkScreen_C_GetUserNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmLinkScreen.ConfirmLinkScreen_C.BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_25_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmLinkScreen_C::BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_25_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmLinkScreen.ConfirmLinkScreen_C.BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_25_OrionBaseButtonClicked__DelegateSignature");
		
		UConfirmLinkScreen_C_BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_25_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmLinkScreen.ConfirmLinkScreen_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmLinkScreen_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmLinkScreen.ConfirmLinkScreen_C.NavigateBack");
		
		UConfirmLinkScreen_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmLinkScreen.ConfirmLinkScreen_C.ExecuteUbergraph_ConfirmLinkScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmLinkScreen_C::ExecuteUbergraph_ConfirmLinkScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmLinkScreen.ConfirmLinkScreen_C.ExecuteUbergraph_ConfirmLinkScreen");
		
		UConfirmLinkScreen_C_ExecuteUbergraph_ConfirmLinkScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfirmLinkScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmLinkScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmLinkScreen.ConfirmLinkScreen_C");
		return ptr;
	}

}


