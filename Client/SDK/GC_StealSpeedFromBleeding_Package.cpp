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
	 * 		Name   -> Function GC_StealSpeedFromBleeding.GC_StealSpeedFromBleeding_C.OnExecute
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool UGC_StealSpeedFromBleeding_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_StealSpeedFromBleeding.GC_StealSpeedFromBleeding_C.OnExecute");
		
		UGC_StealSpeedFromBleeding_C_OnExecute_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGC_StealSpeedFromBleeding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_StealSpeedFromBleeding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_StealSpeedFromBleeding.GC_StealSpeedFromBleeding_C");
		return ptr;
	}

}

