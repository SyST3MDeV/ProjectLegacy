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
	 * 		Name   -> Function GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C.K2_CanActivateAbility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UGA_Card_Convert_3x_MPS_to_HPS_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C.K2_CanActivateAbility");
		
		UGA_Card_Convert_3x_MPS_to_HPS_C_K2_CanActivateAbility_Params params {};
		params.ActorInfo = ActorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RelevantTags != nullptr)
			*RelevantTags = params.RelevantTags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Convert_3x_MPS_to_HPS_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C.K2_ActivateAbility");
		
		UGA_Card_Convert_3x_MPS_to_HPS_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C.ExecuteUbergraph_GA_Card_Convert_3x_MPS_to_HPS
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Convert_3x_MPS_to_HPS_C::ExecuteUbergraph_GA_Card_Convert_3x_MPS_to_HPS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C.ExecuteUbergraph_GA_Card_Convert_3x_MPS_to_HPS");
		
		UGA_Card_Convert_3x_MPS_to_HPS_C_ExecuteUbergraph_GA_Card_Convert_3x_MPS_to_HPS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Convert_3x_MPS_to_HPS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Convert_3x_MPS_to_HPS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Convert_3x_MPS_to_HPS.GA_Card_Convert_3x_MPS_to_HPS_C");
		return ptr;
	}

}


