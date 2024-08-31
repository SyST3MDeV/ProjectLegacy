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
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAI_JungleCreep_Blue_V2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C.UserConstructionScript");
		
		ABP_OrionCharAI_JungleCreep_Blue_V2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C.GameplayCue.Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ABP_OrionCharAI_JungleCreep_Blue_V2_C::GameplayCue_Death(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C.GameplayCue.Death");
		
		ABP_OrionCharAI_JungleCreep_Blue_V2_C_GameplayCue_Death_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C.ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Blue_V2
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAI_JungleCreep_Blue_V2_C::ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Blue_V2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C.ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Blue_V2");
		
		ABP_OrionCharAI_JungleCreep_Blue_V2_C_ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Blue_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrionCharAI_JungleCreep_Blue_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionCharAI_JungleCreep_Blue_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionCharAI_JungleCreep_Blue_V2.BP_OrionCharAI_JungleCreep_Blue_V2_C");
		return ptr;
	}

}


