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
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATM_Sphere_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.UserConstructionScript");
		
		ATM_Sphere_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.OnTargetingModeConfirm
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sphere_C::OnTargetingModeConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.OnTargetingModeConfirm");
		
		ATM_Sphere_C_OnTargetingModeConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.OnTargetingModeCancel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sphere_C::OnTargetingModeCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.OnTargetingModeCancel");
		
		ATM_Sphere_C_OnTargetingModeCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.OnTargetingModeActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sphere_C::OnTargetingModeActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.OnTargetingModeActivate");
		
		ATM_Sphere_C_OnTargetingModeActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.OnFacetSphereBuilt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Sphere_C::OnFacetSphereBuilt(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.OnFacetSphereBuilt");
		
		ATM_Sphere_C_OnFacetSphereBuilt_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Sphere_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.ReceiveTick");
		
		ATM_Sphere_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sphere_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.ReceiveBeginPlay");
		
		ATM_Sphere_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sphere.TM_Sphere_C.ExecuteUbergraph_TM_Sphere
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Sphere_C::ExecuteUbergraph_TM_Sphere(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sphere.TM_Sphere_C.ExecuteUbergraph_TM_Sphere");
		
		ATM_Sphere_C_ExecuteUbergraph_TM_Sphere_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATM_Sphere_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Sphere_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Sphere.TM_Sphere_C");
		return ptr;
	}

}


