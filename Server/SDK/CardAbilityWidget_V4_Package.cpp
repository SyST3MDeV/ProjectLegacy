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
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.Construct");
		
		UCardAbilityWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.IsSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::IsSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.IsSelected");
		
		UCardAbilityWidgetV4_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.IsUnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::IsUnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.IsUnSelected");
		
		UCardAbilityWidgetV4_C_IsUnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.ExitSelectionMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasHighlighted                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardAbilityWidgetV4_C::ExitSelectionMode(bool bWasHighlighted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.ExitSelectionMode");
		
		UCardAbilityWidgetV4_C_ExitSelectionMode_Params params {};
		params.bWasHighlighted = bWasHighlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.CanActivate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::CanActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.CanActivate");
		
		UCardAbilityWidgetV4_C_CanActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.CannotActivate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::CannotActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.CannotActivate");
		
		UCardAbilityWidgetV4_C_CannotActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.StartCooldown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::StartCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.StartCooldown");
		
		UCardAbilityWidgetV4_C_StartCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.StopCooldown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardAbilityWidgetV4_C::StopCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.StopCooldown");
		
		UCardAbilityWidgetV4_C_StopCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.ExecuteUbergraph_CardAbilityWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardAbilityWidgetV4_C::ExecuteUbergraph_CardAbilityWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.ExecuteUbergraph_CardAbilityWidget-V4");
		
		UCardAbilityWidgetV4_C_ExecuteUbergraph_CardAbilityWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardAbilityWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardAbilityWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardAbilityWidget_V4.CardAbilityWidget-V4_C");
		return ptr;
	}

}


