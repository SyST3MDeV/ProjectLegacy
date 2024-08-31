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
	 * 		Name   -> Function BP_FlowerTree01.BP_FlowerTree01_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FlowerTree01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlowerTree01.BP_FlowerTree01_C.UserConstructionScript");
		
		ABP_FlowerTree01_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_FlowerTree01.BP_FlowerTree01_C.SetupReplayMaterials
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FlowerTree01_C::SetupReplayMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlowerTree01.BP_FlowerTree01_C.SetupReplayMaterials");
		
		ABP_FlowerTree01_C_SetupReplayMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_FlowerTree01.BP_FlowerTree01_C.ExecuteUbergraph_BP_FlowerTree01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FlowerTree01_C::ExecuteUbergraph_BP_FlowerTree01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlowerTree01.BP_FlowerTree01_C.ExecuteUbergraph_BP_FlowerTree01");
		
		ABP_FlowerTree01_C_ExecuteUbergraph_BP_FlowerTree01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FlowerTree01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FlowerTree01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlowerTree01.BP_FlowerTree01_C");
		return ptr;
	}

}


