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
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.Escape Button Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UReplayEscapeMenu_C::EscapeButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.Escape Button Pressed");
		
		UReplayEscapeMenu_C_EscapeButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.Unregister for Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UReplayEscapeMenu_C::UnregisterforInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.Unregister for Input");
		
		UReplayEscapeMenu_C_UnregisterforInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.Register for Input
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UReplayEscapeMenu_C::RegisterforInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.Register for Input");
		
		UReplayEscapeMenu_C_RegisterforInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UReplayEscapeMenu_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.On Open");
		
		UReplayEscapeMenu_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UReplayEscapeMenu_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.On Close");
		
		UReplayEscapeMenu_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReplayEscapeMenu_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature");
		
		UReplayEscapeMenu_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReplayEscapeMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature");
		
		UReplayEscapeMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ReportBugButton_K2Node_ComponentBoundEvent_229_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReplayEscapeMenu_C::BndEvt__ReportBugButton_K2Node_ComponentBoundEvent_229_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ReportBugButton_K2Node_ComponentBoundEvent_229_OrionBaseButtonClicked__DelegateSignature");
		
		UReplayEscapeMenu_C_BndEvt__ReportBugButton_K2Node_ComponentBoundEvent_229_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReplayEscapeMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature");
		
		UReplayEscapeMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReplayEscapeMenu.ReplayEscapeMenu_C.ExecuteUbergraph_ReplayEscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReplayEscapeMenu_C::ExecuteUbergraph_ReplayEscapeMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplayEscapeMenu.ReplayEscapeMenu_C.ExecuteUbergraph_ReplayEscapeMenu");
		
		UReplayEscapeMenu_C_ExecuteUbergraph_ReplayEscapeMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplayEscapeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplayEscapeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReplayEscapeMenu.ReplayEscapeMenu_C");
		return ptr;
	}

}


