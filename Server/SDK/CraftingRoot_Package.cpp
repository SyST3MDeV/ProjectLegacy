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
	 * 		Name   -> Function CraftingRoot.CraftingRoot_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCraftingRoot_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingRoot.CraftingRoot_C.OnActivated");
		
		UCraftingRoot_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CraftingRoot.CraftingRoot_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCraftingRoot_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingRoot.CraftingRoot_C.OnDeactivated");
		
		UCraftingRoot_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CraftingRoot.CraftingRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_9_OnBackClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCraftingRoot_C::BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_9_OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingRoot.CraftingRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_9_OnBackClicked__DelegateSignature");
		
		UCraftingRoot_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_9_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CraftingRoot.CraftingRoot_C.OnCraftStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCraftingRoot_C::OnCraftStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingRoot.CraftingRoot_C.OnCraftStarted");
		
		UCraftingRoot_C_OnCraftStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CraftingRoot.CraftingRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCraftingRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingRoot.CraftingRoot_C.Construct");
		
		UCraftingRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CraftingRoot.CraftingRoot_C.ExecuteUbergraph_CraftingRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftingRoot_C::ExecuteUbergraph_CraftingRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingRoot.CraftingRoot_C.ExecuteUbergraph_CraftingRoot");
		
		UCraftingRoot_C_ExecuteUbergraph_CraftingRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftingRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftingRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingRoot.CraftingRoot_C");
		return ptr;
	}

}


