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
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.Apply
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGameplaySettings_C::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.Apply");
		
		UGameplaySettings_C_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGameplaySettings_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.Reset");
		
		UGameplaySettings_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.Refresh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UGameplaySettings_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.Refresh");
		
		UGameplaySettings_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGameplaySettings_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.OnActivated");
		
		UGameplaySettings_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Health Over Head_K2Node_ComponentBoundEvent_943_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionHealthOverHead_K2Node_ComponentBoundEvent_943_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Health Over Head_K2Node_ComponentBoundEvent_943_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionHealthOverHead_K2Node_ComponentBoundEvent_943_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Invert Vertical_K2Node_ComponentBoundEvent_946_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_946_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Invert Vertical_K2Node_ComponentBoundEvent_946_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_946_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Invert Horizontal_K2Node_ComponentBoundEvent_950_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionInvertHorizontal_K2Node_ComponentBoundEvent_950_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Invert Horizontal_K2Node_ComponentBoundEvent_950_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionInvertHorizontal_K2Node_ComponentBoundEvent_950_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Sensitivity Vertical_K2Node_ComponentBoundEvent_955_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionSensitivityVertical_K2Node_ComponentBoundEvent_955_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Sensitivity Vertical_K2Node_ComponentBoundEvent_955_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionSensitivityVertical_K2Node_ComponentBoundEvent_955_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Sensitivity Horizontal_K2Node_ComponentBoundEvent_961_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionSensitivityHorizontal_K2Node_ComponentBoundEvent_961_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__[Option] Sensitivity Horizontal_K2Node_ComponentBoundEvent_961_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionSensitivityHorizontal_K2Node_ComponentBoundEvent_961_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGameplaySettings_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.Destruct");
		
		UGameplaySettings_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGameplaySettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.Construct");
		
		UGameplaySettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__ShowPing_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__ShowPing_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__ShowPing_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__ShowPing_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_392_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_392_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_392_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_392_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__OptionControllerRSItemUsage_K2Node_ComponentBoundEvent_1182_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionControllerRSItemUsage_K2Node_ComponentBoundEvent_1182_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__OptionControllerRSItemUsage_K2Node_ComponentBoundEvent_1182_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionControllerRSItemUsage_K2Node_ComponentBoundEvent_1182_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_567_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__Slider_1_K2Node_ComponentBoundEvent_567_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_567_OnFloatValueChangedEvent__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__Slider_1_K2Node_ComponentBoundEvent_567_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__SettingsOption_C_0_K2Node_ComponentBoundEvent_75_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__SettingsOption_C_0_K2Node_ComponentBoundEvent_75_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__SettingsOption_C_0_K2Node_ComponentBoundEvent_75_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__SettingsOption_C_0_K2Node_ComponentBoundEvent_75_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__OptionShowAbilityConfirm_K2Node_ComponentBoundEvent_188_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__OptionShowAbilityConfirm_K2Node_ComponentBoundEvent_188_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__OptionShowAbilityConfirm_K2Node_ComponentBoundEvent_188_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__OptionShowAbilityConfirm_K2Node_ComponentBoundEvent_188_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__SettingsOption_82_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__SettingsOption_82_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__SettingsOption_82_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__SettingsOption_82_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.BndEvt__SettingsOption_K2Node_ComponentBoundEvent_309_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::BndEvt__SettingsOption_K2Node_ComponentBoundEvent_309_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.BndEvt__SettingsOption_K2Node_ComponentBoundEvent_309_OnSelectionChanged__DelegateSignature");
		
		UGameplaySettings_C_BndEvt__SettingsOption_K2Node_ComponentBoundEvent_309_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplaySettings.GameplaySettings_C.ExecuteUbergraph_GameplaySettings
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplaySettings_C::ExecuteUbergraph_GameplaySettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplaySettings.GameplaySettings_C.ExecuteUbergraph_GameplaySettings");
		
		UGameplaySettings_C_ExecuteUbergraph_GameplaySettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplaySettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplaySettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameplaySettings.GameplaySettings_C");
		return ptr;
	}

}


