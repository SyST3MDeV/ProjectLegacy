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
	 * 		Name   -> Function AutobuyCardWidget.AutobuyCardWidget_C.OnIsSlottingChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAutobuyCardWidget_C::OnIsSlottingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyCardWidget.AutobuyCardWidget_C.OnIsSlottingChanged");
		
		UAutobuyCardWidget_C_OnIsSlottingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AutobuyCardWidget.AutobuyCardWidget_C.OnIsSlottedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAutobuyCardWidget_C::OnIsSlottedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyCardWidget.AutobuyCardWidget_C.OnIsSlottedChanged");
		
		UAutobuyCardWidget_C_OnIsSlottedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AutobuyCardWidget.AutobuyCardWidget_C.ExecuteUbergraph_AutobuyCardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAutobuyCardWidget_C::ExecuteUbergraph_AutobuyCardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutobuyCardWidget.AutobuyCardWidget_C.ExecuteUbergraph_AutobuyCardWidget");
		
		UAutobuyCardWidget_C_ExecuteUbergraph_AutobuyCardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutobuyCardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutobuyCardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AutobuyCardWidget.AutobuyCardWidget_C");
		return ptr;
	}

}


