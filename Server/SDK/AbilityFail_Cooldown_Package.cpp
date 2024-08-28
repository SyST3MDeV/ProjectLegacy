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
	 * 		Name   -> Function AbilityFail_Cooldown.AbilityFail_Cooldown_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityFail_Cooldown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityFail_Cooldown.AbilityFail_Cooldown_C.Construct");
		
		UAbilityFail_Cooldown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityFail_Cooldown.AbilityFail_Cooldown_C.ExecuteUbergraph_AbilityFail_Cooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityFail_Cooldown_C::ExecuteUbergraph_AbilityFail_Cooldown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityFail_Cooldown.AbilityFail_Cooldown_C.ExecuteUbergraph_AbilityFail_Cooldown");
		
		UAbilityFail_Cooldown_C_ExecuteUbergraph_AbilityFail_Cooldown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityFail_Cooldown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityFail_Cooldown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityFail_Cooldown.AbilityFail_Cooldown_C");
		return ptr;
	}

}


