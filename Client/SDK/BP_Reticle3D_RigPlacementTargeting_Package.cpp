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
	 * 		Name   -> Function BP_Reticle3D_RigPlacementTargeting.BP_Reticle3D_RigPlacementTargeting_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Reticle3D_RigPlacementTargeting_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Reticle3D_RigPlacementTargeting.BP_Reticle3D_RigPlacementTargeting_C.UserConstructionScript");
		
		ABP_Reticle3D_RigPlacementTargeting_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Reticle3D_RigPlacementTargeting.BP_Reticle3D_RigPlacementTargeting_C.ExecuteUbergraph_BP_Reticle3D_RigPlacementTargeting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Reticle3D_RigPlacementTargeting_C::ExecuteUbergraph_BP_Reticle3D_RigPlacementTargeting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Reticle3D_RigPlacementTargeting.BP_Reticle3D_RigPlacementTargeting_C.ExecuteUbergraph_BP_Reticle3D_RigPlacementTargeting");
		
		ABP_Reticle3D_RigPlacementTargeting_C_ExecuteUbergraph_BP_Reticle3D_RigPlacementTargeting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Reticle3D_RigPlacementTargeting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Reticle3D_RigPlacementTargeting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Reticle3D_RigPlacementTargeting.BP_Reticle3D_RigPlacementTargeting_C");
		return ptr;
	}

}


