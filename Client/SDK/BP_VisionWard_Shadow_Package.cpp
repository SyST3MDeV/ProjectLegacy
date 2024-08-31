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
	 * 		Name   -> Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VisionWard_Shadow_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.UserConstructionScript");
		
		ABP_VisionWard_Shadow_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VisionWard_Shadow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.ReceiveBeginPlay");
		
		ABP_VisionWard_Shadow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.GameplayCue.Damage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ABP_VisionWard_Shadow_C::GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.GameplayCue.Damage");
		
		ABP_VisionWard_Shadow_C_GameplayCue_Damage_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.ExecuteUbergraph_BP_VisionWard_Shadow
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VisionWard_Shadow_C::ExecuteUbergraph_BP_VisionWard_Shadow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VisionWard_Shadow.BP_VisionWard_Shadow_C.ExecuteUbergraph_BP_VisionWard_Shadow");
		
		ABP_VisionWard_Shadow_C_ExecuteUbergraph_BP_VisionWard_Shadow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VisionWard_Shadow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VisionWard_Shadow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VisionWard_Shadow.BP_VisionWard_Shadow_C");
		return ptr;
	}

}


