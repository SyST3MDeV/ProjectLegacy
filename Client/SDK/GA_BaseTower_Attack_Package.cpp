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
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.K2_CanActivateAbility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UGA_BaseTower_Attack_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.K2_CanActivateAbility");
		
		UGA_BaseTower_Attack_C_K2_CanActivateAbility_Params params {};
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
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_BaseTower_Attack_C::FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2");
		
		UGA_BaseTower_Attack_C_FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_BaseTower_Attack_C::NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2");
		
		UGA_BaseTower_Attack_C_NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_BaseTower_Attack_C::PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2");
		
		UGA_BaseTower_Attack_C_PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.Success_B4839A3A4217E05AD9A9DDBD12EF2DA2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionProjectile*                            SpawnedProjectile                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_BaseTower_Attack_C::Success_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.Success_B4839A3A4217E05AD9A9DDBD12EF2DA2");
		
		UGA_BaseTower_Attack_C_Success_B4839A3A4217E05AD9A9DDBD12EF2DA2_Params params {};
		params.SpawnedProjectile = SpawnedProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.FireProjectile_C8E17D43434B4E962A909A912ECB41C0
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_BaseTower_Attack_C::FireProjectile_C8E17D43434B4E962A909A912ECB41C0(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.FireProjectile_C8E17D43434B4E962A909A912ECB41C0");
		
		UGA_BaseTower_Attack_C_FireProjectile_C8E17D43434B4E962A909A912ECB41C0_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_BaseTower_Attack_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.K2_ActivateAbility");
		
		UGA_BaseTower_Attack_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.ExecuteUbergraph_GA_BaseTower_Attack
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_BaseTower_Attack_C::ExecuteUbergraph_GA_BaseTower_Attack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BaseTower_Attack.GA_BaseTower_Attack_C.ExecuteUbergraph_GA_BaseTower_Attack");
		
		UGA_BaseTower_Attack_C_ExecuteUbergraph_GA_BaseTower_Attack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_BaseTower_Attack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_BaseTower_Attack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_BaseTower_Attack.GA_BaseTower_Attack_C");
		return ptr;
	}

}


