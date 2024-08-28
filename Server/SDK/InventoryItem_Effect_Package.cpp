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
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInventoryItem_Effect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.Construct");
		
		UInventoryItem_Effect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnItemSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FInventoryItemDisplayData                   DisplayData                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryItem_Effect_C::BP_OnItemSet(const struct FInventoryItemDisplayData& DisplayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnItemSet");
		
		UInventoryItem_Effect_C_BP_OnItemSet_Params params {};
		params.DisplayData = DisplayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryItem_Effect_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.OnMouseLeave");
		
		UInventoryItem_Effect_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryItem_Effect_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.OnMouseEnter");
		
		UInventoryItem_Effect_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnSetItemInUse
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Effect_C::BP_OnSetItemInUse(bool bInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnSetItemInUse");
		
		UInventoryItem_Effect_C_BP_OnSetItemInUse_Params params {};
		params.bInUse = bInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Effect_C::BP_OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnSelectionChanged");
		
		UInventoryItem_Effect_C_BP_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Effect.InventoryItem_Effect_C.ExecuteUbergraph_InventoryItem_Effect
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Effect_C::ExecuteUbergraph_InventoryItem_Effect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Effect.InventoryItem_Effect_C.ExecuteUbergraph_InventoryItem_Effect");
		
		UInventoryItem_Effect_C_ExecuteUbergraph_InventoryItem_Effect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryItem_Effect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryItem_Effect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryItem_Effect.InventoryItem_Effect_C");
		return ptr;
	}

}


