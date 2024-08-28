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
	 * 		Name   -> Function CardPointsWidget-V4.CardPointsWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardPointsWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPointsWidget-V4.CardPointsWidget-V4_C.Construct");
		
		UCardPointsWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPointsWidget-V4.CardPointsWidget-V4_C.ShowWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardPointsWidgetV4_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPointsWidget-V4.CardPointsWidget-V4_C.ShowWidget");
		
		UCardPointsWidgetV4_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPointsWidget-V4.CardPointsWidget-V4_C.HideWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardPointsWidgetV4_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPointsWidget-V4.CardPointsWidget-V4_C.HideWidget");
		
		UCardPointsWidgetV4_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPointsWidget-V4.CardPointsWidget-V4_C.ExecuteUbergraph_CardPointsWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPointsWidgetV4_C::ExecuteUbergraph_CardPointsWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPointsWidget-V4.CardPointsWidget-V4_C.ExecuteUbergraph_CardPointsWidget-V4");
		
		UCardPointsWidgetV4_C_ExecuteUbergraph_CardPointsWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardPointsWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardPointsWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardPointsWidget_V4.CardPointsWidget-V4_C");
		return ptr;
	}

}


