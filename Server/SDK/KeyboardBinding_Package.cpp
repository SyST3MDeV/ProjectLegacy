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
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.Refresh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UKeyboardBinding_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.Refresh");
		
		UKeyboardBinding_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UKeyboardBinding_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.Construct");
		
		UKeyboardBinding_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyboardBinding_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.PreConstruct");
		
		UKeyboardBinding_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (Parm)
	 */
	void UKeyboardBinding_C::BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature");
		
		UKeyboardBinding_C_BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (Parm)
	 */
	void UKeyboardBinding_C::BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature");
		
		UKeyboardBinding_C_BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKeyboardBinding_C::BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature");
		
		UKeyboardBinding_C_BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKeyboardBinding_C::BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature");
		
		UKeyboardBinding_C_BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardBinding.KeyboardBinding_C.ExecuteUbergraph_KeyboardBinding
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyboardBinding_C::ExecuteUbergraph_KeyboardBinding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardBinding.KeyboardBinding_C.ExecuteUbergraph_KeyboardBinding");
		
		UKeyboardBinding_C_ExecuteUbergraph_KeyboardBinding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyboardBinding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyboardBinding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyboardBinding.KeyboardBinding_C");
		return ptr;
	}

}


