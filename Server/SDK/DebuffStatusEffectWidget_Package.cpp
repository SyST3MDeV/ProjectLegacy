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
	 * 		Name   -> Function DebuffStatusEffectWidget.DebuffStatusEffectWidget_C.TimerStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimerLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebuffStatusEffectWidget_C::TimerStarted(float TimerLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebuffStatusEffectWidget.DebuffStatusEffectWidget_C.TimerStarted");
		
		UDebuffStatusEffectWidget_C_TimerStarted_Params params {};
		params.TimerLength = TimerLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DebuffStatusEffectWidget.DebuffStatusEffectWidget_C.ExecuteUbergraph_DebuffStatusEffectWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebuffStatusEffectWidget_C::ExecuteUbergraph_DebuffStatusEffectWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebuffStatusEffectWidget.DebuffStatusEffectWidget_C.ExecuteUbergraph_DebuffStatusEffectWidget");
		
		UDebuffStatusEffectWidget_C_ExecuteUbergraph_DebuffStatusEffectWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebuffStatusEffectWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebuffStatusEffectWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebuffStatusEffectWidget.DebuffStatusEffectWidget_C");
		return ptr;
	}

}


