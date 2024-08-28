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
	 * 		Name   -> Function HeroDeckListItem.HeroDeckListItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHeroDeckListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDeckListItem.HeroDeckListItem_C.Construct");
		
		UHeroDeckListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDeckListItem.HeroDeckListItem_C.OnDeckSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroDeckListItem_C::OnDeckSet(class UOrionMcpDeckItem* Deck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDeckListItem.HeroDeckListItem_C.OnDeckSet");
		
		UHeroDeckListItem_C_OnDeckSet_Params params {};
		params.Deck = Deck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDeckListItem.HeroDeckListItem_C.ExecuteUbergraph_HeroDeckListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroDeckListItem_C::ExecuteUbergraph_HeroDeckListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDeckListItem.HeroDeckListItem_C.ExecuteUbergraph_HeroDeckListItem");
		
		UHeroDeckListItem_C_ExecuteUbergraph_HeroDeckListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroDeckListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroDeckListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroDeckListItem.HeroDeckListItem_C");
		return ptr;
	}

}


