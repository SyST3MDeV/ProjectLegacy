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
	 * 		Name   -> Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.UserConstructionScript");
		
		ABP_OrionCharAISpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.OnPostSpawnedAI
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionCharAI*                                SpawnedAI                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_C::OnPostSpawnedAI(class AOrionCharAI* SpawnedAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.OnPostSpawnedAI");
		
		ABP_OrionCharAISpawner_C_OnPostSpawnedAI_Params params {};
		params.SpawnedAI = SpawnedAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.ExecuteUbergraph_BP_OrionCharAISpawner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_C::ExecuteUbergraph_BP_OrionCharAISpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.ExecuteUbergraph_BP_OrionCharAISpawner");
		
		ABP_OrionCharAISpawner_C_ExecuteUbergraph_BP_OrionCharAISpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrionCharAISpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionCharAISpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionCharAISpawner.BP_OrionCharAISpawner_C");
		return ptr;
	}

}


