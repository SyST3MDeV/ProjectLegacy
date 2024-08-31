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
	 * 		Name   -> Function HeroListItem_Minimal.HeroListItem_Minimal_C.BP_OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroListItem_Minimal_C::BP_OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Minimal.HeroListItem_Minimal_C.BP_OnSelected");
		
		UHeroListItem_Minimal_C_BP_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroListItem_Minimal.HeroListItem_Minimal_C.BP_OnDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroListItem_Minimal_C::BP_OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Minimal.HeroListItem_Minimal_C.BP_OnDeselected");
		
		UHeroListItem_Minimal_C_BP_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroListItem_Minimal.HeroListItem_Minimal_C.ExecuteUbergraph_HeroListItem_Minimal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroListItem_Minimal_C::ExecuteUbergraph_HeroListItem_Minimal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Minimal.HeroListItem_Minimal_C.ExecuteUbergraph_HeroListItem_Minimal");
		
		UHeroListItem_Minimal_C_ExecuteUbergraph_HeroListItem_Minimal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroListItem_Minimal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroListItem_Minimal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroListItem_Minimal.HeroListItem_Minimal_C");
		return ptr;
	}

}


