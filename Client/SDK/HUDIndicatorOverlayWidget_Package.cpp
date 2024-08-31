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
	 * 		Name   -> Function HUDIndicatorOverlayWidget.HUDIndicatorOverlayWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDIndicatorOverlayWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDIndicatorOverlayWidget.HUDIndicatorOverlayWidget_C.Construct");
		
		UHUDIndicatorOverlayWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDIndicatorOverlayWidget.HUDIndicatorOverlayWidget_C.ExecuteUbergraph_HUDIndicatorOverlayWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDIndicatorOverlayWidget_C::ExecuteUbergraph_HUDIndicatorOverlayWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDIndicatorOverlayWidget.HUDIndicatorOverlayWidget_C.ExecuteUbergraph_HUDIndicatorOverlayWidget");
		
		UHUDIndicatorOverlayWidget_C_ExecuteUbergraph_HUDIndicatorOverlayWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDIndicatorOverlayWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDIndicatorOverlayWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDIndicatorOverlayWidget.HUDIndicatorOverlayWidget_C");
		return ptr;
	}

}


