/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
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
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnItemSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 */
	void UInventoryItem_Charm_C::BP_OnItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnItemSet");
		
		UInventoryItem_Charm_C_BP_OnItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMouseEvent                                 MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 */
	void UInventoryItem_Charm_C::OnMouseEnter(const struct FMouseEvent& MyGeometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseEnter");
		
		UInventoryItem_Charm_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 */
	void UInventoryItem_Charm_C::OnMouseLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseLeave");
		
		UInventoryItem_Charm_C_OnMouseLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
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


