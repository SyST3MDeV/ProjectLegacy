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
	 * 		Name   -> Function TM_Beam.TM_Beam_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATM_Beam_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.UserConstructionScript");
		
		ATM_Beam_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.OnFacetBeamBuilt
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Beam_C::OnFacetBeamBuilt(const struct FVector& Start, const struct FVector& End, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.OnFacetBeamBuilt");
		
		ATM_Beam_C_OnFacetBeamBuilt_Params params {};
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.OnTargetingModeActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Beam_C::OnTargetingModeActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.OnTargetingModeActivate");
		
		ATM_Beam_C_OnTargetingModeActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.OnTargetingModeCancel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Beam_C::OnTargetingModeCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.OnTargetingModeCancel");
		
		ATM_Beam_C_OnTargetingModeCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.OnTargetingModeConfirm
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Beam_C::OnTargetingModeConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.OnTargetingModeConfirm");
		
		ATM_Beam_C_OnTargetingModeConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Beam_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.ReceiveBeginPlay");
		
		ATM_Beam_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.Value Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Beam_C::ValueChanged(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.Value Changed");
		
		ATM_Beam_C_ValueChanged_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Beam.TM_Beam_C.ExecuteUbergraph_TM_Beam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Beam_C::ExecuteUbergraph_TM_Beam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Beam.TM_Beam_C.ExecuteUbergraph_TM_Beam");
		
		ATM_Beam_C_ExecuteUbergraph_TM_Beam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATM_Beam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Beam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Beam.TM_Beam_C");
		return ptr;
	}

}


