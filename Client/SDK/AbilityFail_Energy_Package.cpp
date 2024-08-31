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
	 * 		Name   -> Function AbilityFail_Energy.AbilityFail_Energy_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityFail_Energy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityFail_Energy.AbilityFail_Energy_C.Construct");
		
		UAbilityFail_Energy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityFail_Energy.AbilityFail_Energy_C.ExecuteUbergraph_AbilityFail_Energy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityFail_Energy_C::ExecuteUbergraph_AbilityFail_Energy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityFail_Energy.AbilityFail_Energy_C.ExecuteUbergraph_AbilityFail_Energy");
		
		UAbilityFail_Energy_C_ExecuteUbergraph_AbilityFail_Energy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityFail_Energy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityFail_Energy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityFail_Energy.AbilityFail_Energy_C");
		return ptr;
	}

}


