﻿/**
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
	 * 		Name   -> Function RenderResolutionStatusIcon.RenderResolutionStatusIcon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URenderResolutionStatusIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderResolutionStatusIcon.RenderResolutionStatusIcon_C.Construct");
		
		URenderResolutionStatusIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RenderResolutionStatusIcon.RenderResolutionStatusIcon_C.ExecuteUbergraph_RenderResolutionStatusIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URenderResolutionStatusIcon_C::ExecuteUbergraph_RenderResolutionStatusIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderResolutionStatusIcon.RenderResolutionStatusIcon_C.ExecuteUbergraph_RenderResolutionStatusIcon");
		
		URenderResolutionStatusIcon_C_ExecuteUbergraph_RenderResolutionStatusIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderResolutionStatusIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderResolutionStatusIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RenderResolutionStatusIcon.RenderResolutionStatusIcon_C");
		return ptr;
	}

}

