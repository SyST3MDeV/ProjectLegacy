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
	 * 		Name   -> Function RespawnTimerWidget_V2.RespawnTimerWidget_V2_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URespawnTimerWidget_V2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerWidget_V2.RespawnTimerWidget_V2_C.Construct");
		
		URespawnTimerWidget_V2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerWidget_V2.RespawnTimerWidget_V2_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URespawnTimerWidget_V2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerWidget_V2.RespawnTimerWidget_V2_C.PreConstruct");
		
		URespawnTimerWidget_V2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerWidget_V2.RespawnTimerWidget_V2_C.ExecuteUbergraph_RespawnTimerWidget_V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URespawnTimerWidget_V2_C::ExecuteUbergraph_RespawnTimerWidget_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerWidget_V2.RespawnTimerWidget_V2_C.ExecuteUbergraph_RespawnTimerWidget_V2");
		
		URespawnTimerWidget_V2_C_ExecuteUbergraph_RespawnTimerWidget_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnTimerWidget_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnTimerWidget_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RespawnTimerWidget_V2.RespawnTimerWidget_V2_C");
		return ptr;
	}

}


