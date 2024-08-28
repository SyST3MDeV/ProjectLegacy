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
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.Update Stack Count
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::UpdateStackCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.Update Stack Count");
		
		UInventoryItem_Charm_C_UpdateStackCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInventoryItem_Charm_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.Construct");
		
		UInventoryItem_Charm_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnItemSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FInventoryItemDisplayData                   DisplayData                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryItem_Charm_C::BP_OnItemSet(const struct FInventoryItemDisplayData& DisplayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnItemSet");
		
		UInventoryItem_Charm_C_BP_OnItemSet_Params params {};
		params.DisplayData = DisplayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryItem_Charm_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseEnter");
		
		UInventoryItem_Charm_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UInventoryItem_Charm_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseLeave");
		
		UInventoryItem_Charm_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInventoryItem_Charm_C::BP_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnReset");
		
		UInventoryItem_Charm_C_BP_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::BP_OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnSelectionChanged");
		
		UInventoryItem_Charm_C_BP_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnSetItemInUse
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::BP_OnSetItemInUse(bool bInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnSetItemInUse");
		
		UInventoryItem_Charm_C_BP_OnSetItemInUse_Params params {};
		params.bInUse = bInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnStackCountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::BP_OnStackCountChanged(int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnStackCountChanged");
		
		UInventoryItem_Charm_C_BP_OnStackCountChanged_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnDyesLoading
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInventoryItem_Charm_C::BP_OnDyesLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnDyesLoading");
		
		UInventoryItem_Charm_C_BP_OnDyesLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnDyeLoaded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Dye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  DyeTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::BP_OnDyeLoaded(int32_t Dye, class UTexture2D* DyeTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnDyeLoaded");
		
		UInventoryItem_Charm_C_BP_OnDyeLoaded_Params params {};
		params.Dye = Dye;
		params.DyeTexture = DyeTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.ExecuteUbergraph_InventoryItem_Charm
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::ExecuteUbergraph_InventoryItem_Charm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.ExecuteUbergraph_InventoryItem_Charm");
		
		UInventoryItem_Charm_C_ExecuteUbergraph_InventoryItem_Charm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryItem_Charm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryItem_Charm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryItem_Charm.InventoryItem_Charm_C");
		return ptr;
	}

}


