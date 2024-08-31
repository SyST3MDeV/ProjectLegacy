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
	 * 		Name   -> Function ConfirmCancelWidget.ConfirmCancelWidget_C.ShowConfirmWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UConfirmCancelWidget_C::ShowConfirmWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmCancelWidget.ConfirmCancelWidget_C.ShowConfirmWidget");
		
		UConfirmCancelWidget_C_ShowConfirmWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmCancelWidget.ConfirmCancelWidget_C.HideConfirmWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmCancelWidget_C::HideConfirmWidget(bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmCancelWidget.ConfirmCancelWidget_C.HideConfirmWidget");
		
		UConfirmCancelWidget_C_HideConfirmWidget_Params params {};
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmCancelWidget.ConfirmCancelWidget_C.ExecuteUbergraph_ConfirmCancelWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmCancelWidget_C::ExecuteUbergraph_ConfirmCancelWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmCancelWidget.ConfirmCancelWidget_C.ExecuteUbergraph_ConfirmCancelWidget");
		
		UConfirmCancelWidget_C_ExecuteUbergraph_ConfirmCancelWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfirmCancelWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmCancelWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmCancelWidget.ConfirmCancelWidget_C");
		return ptr;
	}

}


