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
	 * 		Name   -> Function BP_AI_Spawner_Jungle_Black.BP_AI_Spawner_Jungle_Black_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_AI_Spawner_Jungle_Black_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Spawner_Jungle_Black.BP_AI_Spawner_Jungle_Black_C.UserConstructionScript");
		
		ABP_AI_Spawner_Jungle_Black_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AI_Spawner_Jungle_Black_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AI_Spawner_Jungle_Black_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_Spawner_Jungle_Black.BP_AI_Spawner_Jungle_Black_C");
		return ptr;
	}

}


