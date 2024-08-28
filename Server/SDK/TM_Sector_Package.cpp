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
	 * 		Name   -> Function TM_Sector.TM_Sector_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATM_Sector_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sector.TM_Sector_C.UserConstructionScript");
		
		ATM_Sector_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sector.TM_Sector_C.OnFacetSectorBuilt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AngleHorizontal                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RadiusMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RadiusMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HeightMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HeightMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Sector_C::OnFacetSectorBuilt(float AngleHorizontal, float RadiusMin, float RadiusMax, float HeightMin, float HeightMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sector.TM_Sector_C.OnFacetSectorBuilt");
		
		ATM_Sector_C_OnFacetSectorBuilt_Params params {};
		params.AngleHorizontal = AngleHorizontal;
		params.RadiusMin = RadiusMin;
		params.RadiusMax = RadiusMax;
		params.HeightMin = HeightMin;
		params.HeightMax = HeightMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sector.TM_Sector_C.OnTargetingModeActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sector_C::OnTargetingModeActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sector.TM_Sector_C.OnTargetingModeActivate");
		
		ATM_Sector_C_OnTargetingModeActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sector.TM_Sector_C.OnTargetingModeCancel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sector_C::OnTargetingModeCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sector.TM_Sector_C.OnTargetingModeCancel");
		
		ATM_Sector_C_OnTargetingModeCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sector.TM_Sector_C.OnTargetingModeConfirm
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATM_Sector_C::OnTargetingModeConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sector.TM_Sector_C.OnTargetingModeConfirm");
		
		ATM_Sector_C_OnTargetingModeConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TM_Sector.TM_Sector_C.ExecuteUbergraph_TM_Sector
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATM_Sector_C::ExecuteUbergraph_TM_Sector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TM_Sector.TM_Sector_C.ExecuteUbergraph_TM_Sector");
		
		ATM_Sector_C_ExecuteUbergraph_TM_Sector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATM_Sector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Sector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Sector.TM_Sector_C");
		return ptr;
	}

}


