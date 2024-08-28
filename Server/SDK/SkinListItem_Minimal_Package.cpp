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
	 * 		Name   -> Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USkinListItem_Minimal_C::BP_OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnSelected");
		
		USkinListItem_Minimal_C_BP_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USkinListItem_Minimal_C::BP_OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnDeselected");
		
		USkinListItem_Minimal_C_BP_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkinListItem_Minimal.SkinListItem_Minimal_C.OnSkinDefinitionSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkinListItem_Minimal_C::OnSkinDefinitionSet(class UOrionSkinItemDefinition* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinListItem_Minimal.SkinListItem_Minimal_C.OnSkinDefinitionSet");
		
		USkinListItem_Minimal_C_OnSkinDefinitionSet_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnSkinPurchased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USkinListItem_Minimal_C::BP_OnSkinPurchased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinListItem_Minimal.SkinListItem_Minimal_C.BP_OnSkinPurchased");
		
		USkinListItem_Minimal_C_BP_OnSkinPurchased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SkinListItem_Minimal.SkinListItem_Minimal_C.ExecuteUbergraph_SkinListItem_Minimal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkinListItem_Minimal_C::ExecuteUbergraph_SkinListItem_Minimal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinListItem_Minimal.SkinListItem_Minimal_C.ExecuteUbergraph_SkinListItem_Minimal");
		
		USkinListItem_Minimal_C_ExecuteUbergraph_SkinListItem_Minimal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinListItem_Minimal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinListItem_Minimal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkinListItem_Minimal.SkinListItem_Minimal_C");
		return ptr;
	}

}


