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
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.Input Stub
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USettingsRoot_C::InputStub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.Input Stub");
		
		USettingsRoot_C_InputStub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.GetCancelButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility USettingsRoot_C::GetCancelButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.GetCancelButtonVisibility");
		
		USettingsRoot_C_GetCancelButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.GetAutoDetectButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility USettingsRoot_C::GetAutoDetectButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.GetAutoDetectButtonVisibility");
		
		USettingsRoot_C_GetAutoDetectButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.GetApplyButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility USettingsRoot_C::GetApplyButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.GetApplyButtonVisibility");
		
		USettingsRoot_C_GetApplyButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.GetResetToDefaultsButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility USettingsRoot_C::GetResetToDefaultsButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.GetResetToDefaultsButtonVisibility");
		
		USettingsRoot_C_GetResetToDefaultsButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.SetActiveTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::SetActiveTab(const class FName& TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.SetActiveTab");
		
		USettingsRoot_C_SetActiveTab_Params params {};
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.ApplySettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USettingsRoot_C::ApplySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.ApplySettings");
		
		USettingsRoot_C_ApplySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.ResetActiveMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USettingsRoot_C::ResetActiveMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.ResetActiveMenu");
		
		USettingsRoot_C_ResetActiveMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.OnHandleBackAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool USettingsRoot_C::OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.OnHandleBackAction");
		
		USettingsRoot_C_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USettingsRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.Construct");
		
		USettingsRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Cancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Cancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature");
		
		USettingsRoot_C_BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.BndEvt__[Default Button] Reset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::BndEvt__DefaultButtonReset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.BndEvt__[Default Button] Reset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature");
		
		USettingsRoot_C_BndEvt__DefaultButtonReset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Apply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::BndEvt__DefaultButtonApply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Apply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature");
		
		USettingsRoot_C_BndEvt__DefaultButtonApply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Accept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.BndEvt__Default Button] Accept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature");
		
		USettingsRoot_C_BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USettingsRoot_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.OnActivated");
		
		USettingsRoot_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USettingsRoot_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.OnDeactivated");
		
		USettingsRoot_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.On Back Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USettingsRoot_C::OnBackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.On Back Pressed");
		
		USettingsRoot_C_OnBackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature");
		
		USettingsRoot_C_BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USettingsRoot_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.CustomEvent_1");
		
		USettingsRoot_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.ExecuteUbergraph_SettingsRoot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsRoot_C::ExecuteUbergraph_SettingsRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.ExecuteUbergraph_SettingsRoot");
		
		USettingsRoot_C_ExecuteUbergraph_SettingsRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsRoot.SettingsRoot_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USettingsRoot_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsRoot.SettingsRoot_C.OnClosed__DelegateSignature");
		
		USettingsRoot_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USettingsRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingsRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsRoot.SettingsRoot_C");
		return ptr;
	}

}


