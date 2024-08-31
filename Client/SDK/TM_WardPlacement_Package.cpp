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
	 * 		Name   -> Function TM_WardPlacement.TM_WardPlacement_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATM_WardPlacement_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_WardPlacement.TM_WardPlacement_C.UserConstructionScript");
		
		ATM_WardPlacement_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_WardPlacement.TM_WardPlacement_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_WardPlacement_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_WardPlacement.TM_WardPlacement_C.ReceiveBeginPlay");
		
		ATM_WardPlacement_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_WardPlacement_C::OnTargetingModeActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeActivate");
		
		ATM_WardPlacement_C_OnTargetingModeActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeCancel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_WardPlacement_C::OnTargetingModeCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeCancel");
		
		ATM_WardPlacement_C_OnTargetingModeCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeConfirm
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_WardPlacement_C::OnTargetingModeConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeConfirm");
		
		ATM_WardPlacement_C_OnTargetingModeConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_WardPlacement.TM_WardPlacement_C.ExecuteUbergraph_TM_WardPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_WardPlacement_C::ExecuteUbergraph_TM_WardPlacement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_WardPlacement.TM_WardPlacement_C.ExecuteUbergraph_TM_WardPlacement");
		
		ATM_WardPlacement_C_ExecuteUbergraph_TM_WardPlacement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATM_WardPlacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_WardPlacement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_WardPlacement.TM_WardPlacement_C");
		return ptr;
	}

}


