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
	 * 		Name   -> Function RegionListItem.RegionListItem_C.DoesItemHaveChildren
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t URegionListItem_C::DoesItemHaveChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.DoesItemHaveChildren");
		
		URegionListItem_C_DoesItemHaveChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.GetIndentLevel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t URegionListItem_C::GetIndentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.GetIndentLevel");
		
		URegionListItem_C_GetIndentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.GetSelectionMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	ESelectionMode URegionListItem_C::GetSelectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.GetSelectionMode");
		
		URegionListItem_C_GetSelectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.IsItemExpanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool URegionListItem_C::IsItemExpanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.IsItemExpanded");
		
		URegionListItem_C_IsItemExpanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.GetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UObject* URegionListItem_C::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.GetData");
		
		URegionListItem_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.SetData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InData                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URegionListItem_C::SetData(class UObject* InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.SetData");
		
		URegionListItem_C_SetData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.BP_OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void URegionListItem_C::BP_OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.BP_OnSelected");
		
		URegionListItem_C_BP_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.BP_OnDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void URegionListItem_C::BP_OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.BP_OnDeselected");
		
		URegionListItem_C_BP_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.Reset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void URegionListItem_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.Reset");
		
		URegionListItem_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionListItem.RegionListItem_C.ExecuteUbergraph_RegionListItem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URegionListItem_C::ExecuteUbergraph_RegionListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionListItem.RegionListItem_C.ExecuteUbergraph_RegionListItem");
		
		URegionListItem_C_ExecuteUbergraph_RegionListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RegionListItem.RegionListItem_C");
		return ptr;
	}

}


