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
	 * 		Name   -> Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.Cancelled_75FE8E7B40CB7ACD5D969E92E72C83AA
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Card_Shred_Nearby_Enemies_C::Cancelled_75FE8E7B40CB7ACD5D969E92E72C83AA(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.Cancelled_75FE8E7B40CB7ACD5D969E92E72C83AA");
		
		UGA_Card_Shred_Nearby_Enemies_C_Cancelled_75FE8E7B40CB7ACD5D969E92E72C83AA_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.Confirmed_75FE8E7B40CB7ACD5D969E92E72C83AA
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Card_Shred_Nearby_Enemies_C::Confirmed_75FE8E7B40CB7ACD5D969E92E72C83AA(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.Confirmed_75FE8E7B40CB7ACD5D969E92E72C83AA");
		
		UGA_Card_Shred_Nearby_Enemies_C_Confirmed_75FE8E7B40CB7ACD5D969E92E72C83AA_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Shred_Nearby_Enemies_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.K2_ActivateAbility");
		
		UGA_Card_Shred_Nearby_Enemies_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.ExecuteUbergraph_GA_Card_Shred_Nearby_Enemies
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Shred_Nearby_Enemies_C::ExecuteUbergraph_GA_Card_Shred_Nearby_Enemies(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C.ExecuteUbergraph_GA_Card_Shred_Nearby_Enemies");
		
		UGA_Card_Shred_Nearby_Enemies_C_ExecuteUbergraph_GA_Card_Shred_Nearby_Enemies_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Shred_Nearby_Enemies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Shred_Nearby_Enemies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C");
		return ptr;
	}

}


