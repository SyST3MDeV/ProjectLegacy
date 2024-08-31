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
	 * 		Name   -> Function RegionList.RegionList_C.Fill Region List
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMatchmakingContext*                         self2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URegionList_C::FillRegionList(class UMatchmakingContext* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionList.RegionList_C.Fill Region List");
		
		URegionList_C_FillRegionList_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionList.RegionList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URegionList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionList.RegionList_C.Construct");
		
		URegionList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionList.RegionList_C.BndEvt__RegionList_K2Node_ComponentBoundEvent_10_ListViewEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URegionList_C::BndEvt__RegionList_K2Node_ComponentBoundEvent_10_ListViewEvent__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionList.RegionList_C.BndEvt__RegionList_K2Node_ComponentBoundEvent_10_ListViewEvent__DelegateSignature");
		
		URegionList_C_BndEvt__RegionList_K2Node_ComponentBoundEvent_10_ListViewEvent__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionList.RegionList_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_31_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URegionList_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_31_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionList.RegionList_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_31_OrionBaseButtonClicked__DelegateSignature");
		
		URegionList_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_31_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionList.RegionList_C.OnRefreshPingComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URegionList_C::OnRefreshPingComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionList.RegionList_C.OnRefreshPingComplete");
		
		URegionList_C_OnRefreshPingComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RegionList.RegionList_C.ExecuteUbergraph_RegionList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URegionList_C::ExecuteUbergraph_RegionList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RegionList.RegionList_C.ExecuteUbergraph_RegionList");
		
		URegionList_C_ExecuteUbergraph_RegionList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URegionList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URegionList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RegionList.RegionList_C");
		return ptr;
	}

}


