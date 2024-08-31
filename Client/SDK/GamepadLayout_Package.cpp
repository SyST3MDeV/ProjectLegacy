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
	 * 		Name   -> Function GamepadLayout.GamepadLayout_C.BndEvt__GamepadConfigSettings_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadLayout_C::BndEvt__GamepadConfigSettings_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadLayout.GamepadLayout_C.BndEvt__GamepadConfigSettings_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UGamepadLayout_C_BndEvt__GamepadConfigSettings_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GamepadLayout.GamepadLayout_C.OnConfigChange
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadLayout_C::OnConfigChange(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadLayout.GamepadLayout_C.OnConfigChange");
		
		UGamepadLayout_C_OnConfigChange_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GamepadLayout.GamepadLayout_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGamepadLayout_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadLayout.GamepadLayout_C.OnActivated");
		
		UGamepadLayout_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GamepadLayout.GamepadLayout_C.ExecuteUbergraph_GamepadLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadLayout_C::ExecuteUbergraph_GamepadLayout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadLayout.GamepadLayout_C.ExecuteUbergraph_GamepadLayout");
		
		UGamepadLayout_C_ExecuteUbergraph_GamepadLayout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGamepadLayout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadLayout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadLayout.GamepadLayout_C");
		return ptr;
	}

}


