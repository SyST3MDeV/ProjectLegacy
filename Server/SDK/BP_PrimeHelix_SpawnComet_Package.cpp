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
	 * 		Name   -> Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.LandingImpact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PrimeHelix_SpawnComet_C::LandingImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.LandingImpact");
		
		ABP_PrimeHelix_SpawnComet_C_LandingImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.FireSonicBoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PrimeHelix_SpawnComet_C::FireSonicBoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.FireSonicBoom");
		
		ABP_PrimeHelix_SpawnComet_C_FireSonicBoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PrimeHelix_SpawnComet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.UserConstructionScript");
		
		ABP_PrimeHelix_SpawnComet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PrimeHelix_SpawnComet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.ReceiveBeginPlay");
		
		ABP_PrimeHelix_SpawnComet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.ExecuteUbergraph_BP_PrimeHelix_SpawnComet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PrimeHelix_SpawnComet_C::ExecuteUbergraph_BP_PrimeHelix_SpawnComet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C.ExecuteUbergraph_BP_PrimeHelix_SpawnComet");
		
		ABP_PrimeHelix_SpawnComet_C_ExecuteUbergraph_BP_PrimeHelix_SpawnComet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PrimeHelix_SpawnComet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PrimeHelix_SpawnComet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrimeHelix_SpawnComet.BP_PrimeHelix_SpawnComet_C");
		return ptr;
	}

}


