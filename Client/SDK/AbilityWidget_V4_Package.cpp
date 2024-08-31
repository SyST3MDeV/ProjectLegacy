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
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.Construct");
		
		UAbilityWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.StartCooldown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::StartCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.StartCooldown");
		
		UAbilityWidgetV4_C_StartCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.StopCooldown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::StopCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.StopCooldown");
		
		UAbilityWidgetV4_C_StopCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.HideLock
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::HideLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.HideLock");
		
		UAbilityWidgetV4_C_HideLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.CanActivate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::CanActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.CanActivate");
		
		UAbilityWidgetV4_C_CanActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.CannotActivate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::CannotActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.CannotActivate");
		
		UAbilityWidgetV4_C_CannotActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Energy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::AbilityFail_Energy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Energy");
		
		UAbilityWidgetV4_C_AbilityFail_Energy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Generic
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::AbilityFail_Generic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Generic");
		
		UAbilityWidgetV4_C_AbilityFail_Generic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Cooldown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::AbilityFail_Cooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Cooldown");
		
		UAbilityWidgetV4_C_AbilityFail_Cooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.ShowStacks
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::ShowStacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.ShowStacks");
		
		UAbilityWidgetV4_C_ShowStacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.HideStacks
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetV4_C::HideStacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.HideStacks");
		
		UAbilityWidgetV4_C_HideStacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget-V4.AbilityWidget-V4_C.ExecuteUbergraph_AbilityWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityWidgetV4_C::ExecuteUbergraph_AbilityWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget-V4.AbilityWidget-V4_C.ExecuteUbergraph_AbilityWidget-V4");
		
		UAbilityWidgetV4_C_ExecuteUbergraph_AbilityWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityWidget_V4.AbilityWidget-V4_C");
		return ptr;
	}

}


