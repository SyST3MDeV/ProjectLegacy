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
	 * 		Name   -> Function DeckBuilderRoot.DeckBuilderRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDeckBuilderRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckBuilderRoot.DeckBuilderRoot_C.Construct");
		
		UDeckBuilderRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckBuilderRoot.DeckBuilderRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_11_OnBackClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDeckBuilderRoot_C::BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_11_OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckBuilderRoot.DeckBuilderRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_11_OnBackClicked__DelegateSignature");
		
		UDeckBuilderRoot_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_11_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckBuilderRoot.DeckBuilderRoot_C.ExecuteUbergraph_DeckBuilderRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckBuilderRoot_C::ExecuteUbergraph_DeckBuilderRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckBuilderRoot.DeckBuilderRoot_C.ExecuteUbergraph_DeckBuilderRoot");
		
		UDeckBuilderRoot_C_ExecuteUbergraph_DeckBuilderRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeckBuilderRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeckBuilderRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeckBuilderRoot.DeckBuilderRoot_C");
		return ptr;
	}

}


