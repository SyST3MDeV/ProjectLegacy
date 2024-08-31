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
	 * 		Name   -> Function MatchTimerWidget-V4.MatchTimerWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMatchTimerWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchTimerWidget-V4.MatchTimerWidget-V4_C.Construct");
		
		UMatchTimerWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MatchTimerWidget-V4.MatchTimerWidget-V4_C.ExecuteUbergraph_MatchTimerWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatchTimerWidgetV4_C::ExecuteUbergraph_MatchTimerWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchTimerWidget-V4.MatchTimerWidget-V4_C.ExecuteUbergraph_MatchTimerWidget-V4");
		
		UMatchTimerWidgetV4_C_ExecuteUbergraph_MatchTimerWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchTimerWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchTimerWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchTimerWidget_V4.MatchTimerWidget-V4_C");
		return ptr;
	}

}


