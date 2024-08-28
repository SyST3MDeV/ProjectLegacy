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
	 * 		Name   -> Function CardAbilityKeyWidget-V4.CardAbilityKeyWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardAbilityKeyWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityKeyWidget-V4.CardAbilityKeyWidget-V4_C.Construct");
		
		UCardAbilityKeyWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityKeyWidget-V4.CardAbilityKeyWidget-V4_C.Refresh
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCardAbilityKeyWidgetV4_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityKeyWidget-V4.CardAbilityKeyWidget-V4_C.Refresh");
		
		UCardAbilityKeyWidgetV4_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityKeyWidget-V4.CardAbilityKeyWidget-V4_C.ExecuteUbergraph_CardAbilityKeyWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardAbilityKeyWidgetV4_C::ExecuteUbergraph_CardAbilityKeyWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityKeyWidget-V4.CardAbilityKeyWidget-V4_C.ExecuteUbergraph_CardAbilityKeyWidget-V4");
		
		UCardAbilityKeyWidgetV4_C_ExecuteUbergraph_CardAbilityKeyWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardAbilityKeyWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardAbilityKeyWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardAbilityKeyWidget_V4.CardAbilityKeyWidget-V4_C");
		return ptr;
	}

}


