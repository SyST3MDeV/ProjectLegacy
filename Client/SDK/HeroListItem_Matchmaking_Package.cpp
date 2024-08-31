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
	 * 		Name   -> Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnHovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroListItem_Matchmaking_C::BP_OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnHovered");
		
		UHeroListItem_Matchmaking_C_BP_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnUnhovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroListItem_Matchmaking_C::BP_OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnUnhovered");
		
		UHeroListItem_Matchmaking_C_BP_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroListItem_Matchmaking_C::BP_OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnSelected");
		
		UHeroListItem_Matchmaking_C_BP_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroListItem_Matchmaking_C::BP_OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.BP_OnDeselected");
		
		UHeroListItem_Matchmaking_C_BP_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.ExecuteUbergraph_HeroListItem_Matchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroListItem_Matchmaking_C::ExecuteUbergraph_HeroListItem_Matchmaking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroListItem_Matchmaking.HeroListItem_Matchmaking_C.ExecuteUbergraph_HeroListItem_Matchmaking");
		
		UHeroListItem_Matchmaking_C_ExecuteUbergraph_HeroListItem_Matchmaking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroListItem_Matchmaking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroListItem_Matchmaking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroListItem_Matchmaking.HeroListItem_Matchmaking_C");
		return ptr;
	}

}


