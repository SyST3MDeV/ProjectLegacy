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
	 * 		Name   -> Function AutobuyHUDWidget.AutobuyHUDWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAutobuyHUDWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyHUDWidget.AutobuyHUDWidget_C.Construct");
		
		UAutobuyHUDWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AutobuyHUDWidget.AutobuyHUDWidget_C.RefreshAutobuy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAutobuyHUDWidget_C::RefreshAutobuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyHUDWidget.AutobuyHUDWidget_C.RefreshAutobuy");
		
		UAutobuyHUDWidget_C_RefreshAutobuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AutobuyHUDWidget.AutobuyHUDWidget_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAutobuyHUDWidget_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyHUDWidget.AutobuyHUDWidget_C.OnDeactivated");
		
		UAutobuyHUDWidget_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AutobuyHUDWidget.AutobuyHUDWidget_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAutobuyHUDWidget_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyHUDWidget.AutobuyHUDWidget_C.OnActivated");
		
		UAutobuyHUDWidget_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AutobuyHUDWidget.AutobuyHUDWidget_C.ExecuteUbergraph_AutobuyHUDWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutobuyHUDWidget_C::ExecuteUbergraph_AutobuyHUDWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyHUDWidget.AutobuyHUDWidget_C.ExecuteUbergraph_AutobuyHUDWidget");
		
		UAutobuyHUDWidget_C_ExecuteUbergraph_AutobuyHUDWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutobuyHUDWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutobuyHUDWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AutobuyHUDWidget.AutobuyHUDWidget_C");
		return ptr;
	}

}


