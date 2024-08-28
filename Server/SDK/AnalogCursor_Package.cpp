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
	 * 		Name   -> Function AnalogCursor.AnalogCursor_C.Hover Happened
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHovering                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnalogCursor_C::HoverHappened(bool IsHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalogCursor.AnalogCursor_C.Hover Happened");
		
		UAnalogCursor_C_HoverHappened_Params params {};
		params.IsHovering = IsHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AnalogCursor.AnalogCursor_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAnalogCursor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalogCursor.AnalogCursor_C.Construct");
		
		UAnalogCursor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AnalogCursor.AnalogCursor_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnalogCursor_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalogCursor.AnalogCursor_C.CustomEvent_1");
		
		UAnalogCursor_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AnalogCursor.AnalogCursor_C.OnFaceButtonClick_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnalogCursor_C::OnFaceButtonClick_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalogCursor.AnalogCursor_C.OnFaceButtonClick_Event_1");
		
		UAnalogCursor_C_OnFaceButtonClick_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AnalogCursor.AnalogCursor_C.ExecuteUbergraph_AnalogCursor
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnalogCursor_C::ExecuteUbergraph_AnalogCursor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalogCursor.AnalogCursor_C.ExecuteUbergraph_AnalogCursor");
		
		UAnalogCursor_C_ExecuteUbergraph_AnalogCursor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalogCursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalogCursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AnalogCursor.AnalogCursor_C");
		return ptr;
	}

}


