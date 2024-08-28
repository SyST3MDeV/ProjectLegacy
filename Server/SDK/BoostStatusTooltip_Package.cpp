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
	 * 		Name   -> Function BoostStatusTooltip.BoostStatusTooltip_C.Refresh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBoostStatusTooltip_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoostStatusTooltip.BoostStatusTooltip_C.Refresh");
		
		UBoostStatusTooltip_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BoostStatusTooltip.BoostStatusTooltip_C.SetAdditionalContent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoostStatusTooltip_C::SetAdditionalContent(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoostStatusTooltip.BoostStatusTooltip_C.SetAdditionalContent");
		
		UBoostStatusTooltip_C_SetAdditionalContent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BoostStatusTooltip.BoostStatusTooltip_C.Show
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBoostStatusTooltip_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoostStatusTooltip.BoostStatusTooltip_C.Show");
		
		UBoostStatusTooltip_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BoostStatusTooltip.BoostStatusTooltip_C.Hide
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBoostStatusTooltip_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoostStatusTooltip.BoostStatusTooltip_C.Hide");
		
		UBoostStatusTooltip_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BoostStatusTooltip.BoostStatusTooltip_C.ExecuteUbergraph_BoostStatusTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBoostStatusTooltip_C::ExecuteUbergraph_BoostStatusTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BoostStatusTooltip.BoostStatusTooltip_C.ExecuteUbergraph_BoostStatusTooltip");
		
		UBoostStatusTooltip_C_ExecuteUbergraph_BoostStatusTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoostStatusTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoostStatusTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BoostStatusTooltip.BoostStatusTooltip_C");
		return ptr;
	}

}


