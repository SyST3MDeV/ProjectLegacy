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
	 * 		Name   -> Function LargeMap.LargeMap_C.MapModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLargeMap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULargeMap_C::MapModeChanged(bool IsLargeMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LargeMap.LargeMap_C.MapModeChanged");
		
		ULargeMap_C_MapModeChanged_Params params {};
		params.IsLargeMap = IsLargeMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LargeMap.LargeMap_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULargeMap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LargeMap.LargeMap_C.Construct");
		
		ULargeMap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LargeMap.LargeMap_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULargeMap_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LargeMap.LargeMap_C.On Open");
		
		ULargeMap_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LargeMap.LargeMap_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULargeMap_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LargeMap.LargeMap_C.On Close");
		
		ULargeMap_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LargeMap.LargeMap_C.ExecuteUbergraph_LargeMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULargeMap_C::ExecuteUbergraph_LargeMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LargeMap.LargeMap_C.ExecuteUbergraph_LargeMap");
		
		ULargeMap_C_ExecuteUbergraph_LargeMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULargeMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULargeMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LargeMap.LargeMap_C");
		return ptr;
	}

}


