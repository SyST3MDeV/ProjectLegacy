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
	 * 		Name   -> Function BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CameraLens_DirtPrimeDebris_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C.UserConstructionScript");
		
		ABP_CameraLens_DirtPrimeDebris_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CameraLens_DirtPrimeDebris_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C.ReceiveBeginPlay");
		
		ABP_CameraLens_DirtPrimeDebris_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C.ExecuteUbergraph_BP_CameraLens_DirtPrimeDebris
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CameraLens_DirtPrimeDebris_C::ExecuteUbergraph_BP_CameraLens_DirtPrimeDebris(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C.ExecuteUbergraph_BP_CameraLens_DirtPrimeDebris");
		
		ABP_CameraLens_DirtPrimeDebris_C_ExecuteUbergraph_BP_CameraLens_DirtPrimeDebris_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CameraLens_DirtPrimeDebris_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraLens_DirtPrimeDebris_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_DirtPrimeDebris.BP_CameraLens_DirtPrimeDebris_C");
		return ptr;
	}

}


