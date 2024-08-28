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
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Cancelled_29228A92469B41C80817C0B6EA29B720
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_OrionWardPlacement_C::Cancelled_29228A92469B41C80817C0B6EA29B720(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Cancelled_29228A92469B41C80817C0B6EA29B720");
		
		UGA_OrionWardPlacement_C_Cancelled_29228A92469B41C80817C0B6EA29B720_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Confirmed_29228A92469B41C80817C0B6EA29B720
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_OrionWardPlacement_C::Confirmed_29228A92469B41C80817C0B6EA29B720(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Confirmed_29228A92469B41C80817C0B6EA29B720");
		
		UGA_OrionWardPlacement_C_Confirmed_29228A92469B41C80817C0B6EA29B720_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.FailedToSpawn_0164359A400FCE2709A82EA5FFE30436
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionVisionWard*                            SpawnedWard                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OrionWardPlacement_C::FailedToSpawn_0164359A400FCE2709A82EA5FFE30436(class AOrionVisionWard* SpawnedWard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.FailedToSpawn_0164359A400FCE2709A82EA5FFE30436");
		
		UGA_OrionWardPlacement_C_FailedToSpawn_0164359A400FCE2709A82EA5FFE30436_Params params {};
		params.SpawnedWard = SpawnedWard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.NotAuthority_0164359A400FCE2709A82EA5FFE30436
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionVisionWard*                            SpawnedWard                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OrionWardPlacement_C::NotAuthority_0164359A400FCE2709A82EA5FFE30436(class AOrionVisionWard* SpawnedWard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.NotAuthority_0164359A400FCE2709A82EA5FFE30436");
		
		UGA_OrionWardPlacement_C_NotAuthority_0164359A400FCE2709A82EA5FFE30436_Params params {};
		params.SpawnedWard = SpawnedWard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Success_0164359A400FCE2709A82EA5FFE30436
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionVisionWard*                            SpawnedWard                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OrionWardPlacement_C::Success_0164359A400FCE2709A82EA5FFE30436(class AOrionVisionWard* SpawnedWard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.Success_0164359A400FCE2709A82EA5FFE30436");
		
		UGA_OrionWardPlacement_C_Success_0164359A400FCE2709A82EA5FFE30436_Params params {};
		params.SpawnedWard = SpawnedWard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_OrionWardPlacement_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.K2_ActivateAbility");
		
		UGA_OrionWardPlacement_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.ExecuteUbergraph_GA_OrionWardPlacement
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_OrionWardPlacement_C::ExecuteUbergraph_GA_OrionWardPlacement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_OrionWardPlacement.GA_OrionWardPlacement_C.ExecuteUbergraph_GA_OrionWardPlacement");
		
		UGA_OrionWardPlacement_C_ExecuteUbergraph_GA_OrionWardPlacement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_OrionWardPlacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_OrionWardPlacement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_OrionWardPlacement.GA_OrionWardPlacement_C");
		return ptr;
	}

}


