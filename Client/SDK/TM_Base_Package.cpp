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
	 * 		Name   -> Function TM_Base.TM_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATM_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Base.TM_Base_C.UserConstructionScript");
		
		ATM_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Base.TM_Base_C.OnTargetingModeConfirm
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Base_C::OnTargetingModeConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Base.TM_Base_C.OnTargetingModeConfirm");
		
		ATM_Base_C_OnTargetingModeConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Base.TM_Base_C.OnTargetingModeCancel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Base_C::OnTargetingModeCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Base.TM_Base_C.OnTargetingModeCancel");
		
		ATM_Base_C_OnTargetingModeCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Base.TM_Base_C.OnTargetingModeActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Base_C::OnTargetingModeActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Base.TM_Base_C.OnTargetingModeActivate");
		
		ATM_Base_C_OnTargetingModeActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Base.TM_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Base.TM_Base_C.ReceiveBeginPlay");
		
		ATM_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Base.TM_Base_C.ExecuteUbergraph_TM_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Base_C::ExecuteUbergraph_TM_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Base.TM_Base_C.ExecuteUbergraph_TM_Base");
		
		ATM_Base_C_ExecuteUbergraph_TM_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATM_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Base.TM_Base_C");
		return ptr;
	}

}


