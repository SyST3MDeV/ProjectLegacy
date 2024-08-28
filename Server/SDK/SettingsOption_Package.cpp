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
	 * 		Name   -> Function SettingsOption.SettingsOption_C.SetToggleButtonState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::SetToggleButtonState(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.SetToggleButtonState");
		
		USettingsOption_C_SetToggleButtonState_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.SelectIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::SelectIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.SelectIndex");
		
		USettingsOption_C_SelectIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USettingsOption_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.Construct");
		
		USettingsOption_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.PreConstruct");
		
		USettingsOption_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.ForwardSelectedButtonChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            SelectedButton                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::ForwardSelectedButtonChanged(class UOrionBaseButton* SelectedButton, int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.ForwardSelectedButtonChanged");
		
		USettingsOption_C_ForwardSelectedButtonChanged_Params params {};
		params.SelectedButton = SelectedButton;
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature");
		
		USettingsOption_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.ExecuteUbergraph_SettingsOption
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::ExecuteUbergraph_SettingsOption(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.ExecuteUbergraph_SettingsOption");
		
		USettingsOption_C_ExecuteUbergraph_SettingsOption_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SettingsOption.SettingsOption_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USettingsOption_C::OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SettingsOption.SettingsOption_C.OnSelectionChanged__DelegateSignature");
		
		USettingsOption_C_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USettingsOption_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingsOption_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsOption.SettingsOption_C");
		return ptr;
	}

}


