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
	 * 		Name   -> Function DeckTooltip.DeckTooltip_C.SetDeck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           DeckItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckTooltip_C::SetDeck(class UOrionMcpDeckItem* DeckItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckTooltip.DeckTooltip_C.SetDeck");
		
		UDeckTooltip_C_SetDeck_Params params {};
		params.DeckItem = DeckItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckTooltip.DeckTooltip_C.HandleDeckUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDeckTooltip_C::HandleDeckUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckTooltip.DeckTooltip_C.HandleDeckUpdated");
		
		UDeckTooltip_C_HandleDeckUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckTooltip.DeckTooltip_C.Hide
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDeckTooltip_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckTooltip.DeckTooltip_C.Hide");
		
		UDeckTooltip_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckTooltip.DeckTooltip_C.SetAdditionalContent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckTooltip_C::SetAdditionalContent(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckTooltip.DeckTooltip_C.SetAdditionalContent");
		
		UDeckTooltip_C_SetAdditionalContent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckTooltip.DeckTooltip_C.Show
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDeckTooltip_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckTooltip.DeckTooltip_C.Show");
		
		UDeckTooltip_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckTooltip.DeckTooltip_C.ExecuteUbergraph_DeckTooltip
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckTooltip_C::ExecuteUbergraph_DeckTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckTooltip.DeckTooltip_C.ExecuteUbergraph_DeckTooltip");
		
		UDeckTooltip_C_ExecuteUbergraph_DeckTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeckTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeckTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeckTooltip.DeckTooltip_C");
		return ptr;
	}

}


