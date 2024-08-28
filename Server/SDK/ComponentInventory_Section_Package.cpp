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
	 * 		Name   -> Function ComponentInventory_Section.ComponentInventory_Section_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UComponentInventory_Section_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentInventory_Section.ComponentInventory_Section_C.Construct");
		
		UComponentInventory_Section_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ComponentInventory_Section.ComponentInventory_Section_C.ExecuteUbergraph_ComponentInventory_Section
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UComponentInventory_Section_C::ExecuteUbergraph_ComponentInventory_Section(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentInventory_Section.ComponentInventory_Section_C.ExecuteUbergraph_ComponentInventory_Section");
		
		UComponentInventory_Section_C_ExecuteUbergraph_ComponentInventory_Section_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComponentInventory_Section_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComponentInventory_Section_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ComponentInventory_Section.ComponentInventory_Section_C");
		return ptr;
	}

}


