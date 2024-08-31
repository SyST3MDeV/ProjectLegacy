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
	 * 		Name   -> Function CardSelectionWidget.CardSelectionWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardSelectionWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardSelectionWidget.CardSelectionWidget_C.Construct");
		
		UCardSelectionWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardSelectionWidget.CardSelectionWidget_C.ExitSelectionMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardSelectionWidget_C::ExitSelectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardSelectionWidget.CardSelectionWidget_C.ExitSelectionMode");
		
		UCardSelectionWidget_C_ExitSelectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardSelectionWidget.CardSelectionWidget_C.EnterSelectionMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardSelectionWidget_C::EnterSelectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardSelectionWidget.CardSelectionWidget_C.EnterSelectionMode");
		
		UCardSelectionWidget_C_EnterSelectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardSelectionWidget.CardSelectionWidget_C.ExecuteUbergraph_CardSelectionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardSelectionWidget_C::ExecuteUbergraph_CardSelectionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardSelectionWidget.CardSelectionWidget_C.ExecuteUbergraph_CardSelectionWidget");
		
		UCardSelectionWidget_C_ExecuteUbergraph_CardSelectionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardSelectionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardSelectionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardSelectionWidget.CardSelectionWidget_C");
		return ptr;
	}

}


