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
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.K2_CanActivateAbility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UGA_Inhibitor_Attack_ProjectileBased_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.K2_CanActivateAbility");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_K2_CanActivateAbility_Params params {};
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
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.FailedToSpawn_255A7BC346BC68F413A297862E2768E7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::FailedToSpawn_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.FailedToSpawn_255A7BC346BC68F413A297862E2768E7");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_FailedToSpawn_255A7BC346BC68F413A297862E2768E7_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.NotAuthority_255A7BC346BC68F413A297862E2768E7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::NotAuthority_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.NotAuthority_255A7BC346BC68F413A297862E2768E7");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_NotAuthority_255A7BC346BC68F413A297862E2768E7_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.PreSpawned_255A7BC346BC68F413A297862E2768E7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::PreSpawned_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.PreSpawned_255A7BC346BC68F413A297862E2768E7");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_PreSpawned_255A7BC346BC68F413A297862E2768E7_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.Success_255A7BC346BC68F413A297862E2768E7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::Success_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.Success_255A7BC346BC68F413A297862E2768E7");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_Success_255A7BC346BC68F413A297862E2768E7_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.FireProjectile_213B73C2459417401171819153CA0663
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::FireProjectile_213B73C2459417401171819153CA0663(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.FireProjectile_213B73C2459417401171819153CA0663");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_FireProjectile_213B73C2459417401171819153CA0663_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.K2_ActivateAbility");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhibitor_Attack_ProjectileBased_C::ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C.ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased");
		
		UGA_Inhibitor_Attack_ProjectileBased_C_ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Inhibitor_Attack_ProjectileBased_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Inhibitor_Attack_ProjectileBased_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C");
		return ptr;
	}

}


