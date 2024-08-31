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
	 * 		Name   -> Function MuteMenuWidget.MuteMenuWidget_C.On Back Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMuteMenuWidget_C::OnBackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuWidget.MuteMenuWidget_C.On Back Pressed");
		
		UMuteMenuWidget_C_OnBackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MuteMenuWidget.MuteMenuWidget_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UMuteMenuWidget_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuWidget.MuteMenuWidget_C.OnActivated");
		
		UMuteMenuWidget_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MuteMenuWidget.MuteMenuWidget_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UMuteMenuWidget_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuWidget.MuteMenuWidget_C.OnDeactivated");
		
		UMuteMenuWidget_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MuteMenuWidget.MuteMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMuteMenuWidget_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuWidget.MuteMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature");
		
		UMuteMenuWidget_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MuteMenuWidget.MuteMenuWidget_C.ExecuteUbergraph_MuteMenuWidget
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMuteMenuWidget_C::ExecuteUbergraph_MuteMenuWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuWidget.MuteMenuWidget_C.ExecuteUbergraph_MuteMenuWidget");
		
		UMuteMenuWidget_C_ExecuteUbergraph_MuteMenuWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MuteMenuWidget.MuteMenuWidget_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UMuteMenuWidget_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuWidget.MuteMenuWidget_C.OnClosed__DelegateSignature");
		
		UMuteMenuWidget_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMuteMenuWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMuteMenuWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MuteMenuWidget.MuteMenuWidget_C");
		return ptr;
	}

}


