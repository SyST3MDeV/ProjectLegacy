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
	 * 		Name   -> Function BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HelixDunk_CameraLens_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C.UserConstructionScript");
		
		ABP_HelixDunk_CameraLens_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_HelixDunk_CameraLens_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C.ReceiveBeginPlay");
		
		ABP_HelixDunk_CameraLens_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C.ExecuteUbergraph_BP_HelixDunk_CameraLens
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HelixDunk_CameraLens_C::ExecuteUbergraph_BP_HelixDunk_CameraLens(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C.ExecuteUbergraph_BP_HelixDunk_CameraLens");
		
		ABP_HelixDunk_CameraLens_C_ExecuteUbergraph_BP_HelixDunk_CameraLens_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HelixDunk_CameraLens_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HelixDunk_CameraLens_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelixDunk_CameraLens.BP_HelixDunk_CameraLens_C");
		return ptr;
	}

}


