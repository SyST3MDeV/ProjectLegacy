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
	 * 		Name   -> Function BuffStatusEffectWidget.BuffStatusEffectWidget_C.TimerStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimerLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuffStatusEffectWidget_C::TimerStarted(float TimerLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffStatusEffectWidget.BuffStatusEffectWidget_C.TimerStarted");
		
		UBuffStatusEffectWidget_C_TimerStarted_Params params {};
		params.TimerLength = TimerLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuffStatusEffectWidget.BuffStatusEffectWidget_C.ExecuteUbergraph_BuffStatusEffectWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuffStatusEffectWidget_C::ExecuteUbergraph_BuffStatusEffectWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffStatusEffectWidget.BuffStatusEffectWidget_C.ExecuteUbergraph_BuffStatusEffectWidget");
		
		UBuffStatusEffectWidget_C_ExecuteUbergraph_BuffStatusEffectWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffStatusEffectWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffStatusEffectWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuffStatusEffectWidget.BuffStatusEffectWidget_C");
		return ptr;
	}

}


