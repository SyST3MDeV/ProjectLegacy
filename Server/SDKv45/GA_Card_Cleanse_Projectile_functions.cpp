#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Cleanse_Projectile

#include "Basic.hpp"

#include "GA_Card_Cleanse_Projectile_classes.hpp"
#include "GA_Card_Cleanse_Projectile_parameters.hpp"


namespace SDK
{

// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.ExecuteUbergraph_GA_Card_Cleanse_Projectile
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Cleanse_Projectile_C::ExecuteUbergraph_GA_Card_Cleanse_Projectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "ExecuteUbergraph_GA_Card_Cleanse_Projectile");

	Params::GA_Card_Cleanse_Projectile_C_ExecuteUbergraph_GA_Card_Cleanse_Projectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.Cancelled_9F48394E40C4A9F60F08188CEE97E418
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Targets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Card_Cleanse_Projectile_C::Cancelled_9F48394E40C4A9F60F08188CEE97E418(const struct FGameplayAbilityTargetDataHandle& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "Cancelled_9F48394E40C4A9F60F08188CEE97E418");

	Params::GA_Card_Cleanse_Projectile_C_Cancelled_9F48394E40C4A9F60F08188CEE97E418 Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.Confirmed_9F48394E40C4A9F60F08188CEE97E418
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Targets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Card_Cleanse_Projectile_C::Confirmed_9F48394E40C4A9F60F08188CEE97E418(const struct FGameplayAbilityTargetDataHandle& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "Confirmed_9F48394E40C4A9F60F08188CEE97E418");

	Params::GA_Card_Cleanse_Projectile_C_Confirmed_9F48394E40C4A9F60F08188CEE97E418 Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.FailedToSpawn_B27DC10B4A143B07A055FF82AB905F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Cleanse_Projectile_C::FailedToSpawn_B27DC10B4A143B07A055FF82AB905F2D(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "FailedToSpawn_B27DC10B4A143B07A055FF82AB905F2D");

	Params::GA_Card_Cleanse_Projectile_C_FailedToSpawn_B27DC10B4A143B07A055FF82AB905F2D Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Card_Cleanse_Projectile_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.NotAuthority_B27DC10B4A143B07A055FF82AB905F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Cleanse_Projectile_C::NotAuthority_B27DC10B4A143B07A055FF82AB905F2D(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "NotAuthority_B27DC10B4A143B07A055FF82AB905F2D");

	Params::GA_Card_Cleanse_Projectile_C_NotAuthority_B27DC10B4A143B07A055FF82AB905F2D Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.PreSpawned_B27DC10B4A143B07A055FF82AB905F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Cleanse_Projectile_C::PreSpawned_B27DC10B4A143B07A055FF82AB905F2D(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "PreSpawned_B27DC10B4A143B07A055FF82AB905F2D");

	Params::GA_Card_Cleanse_Projectile_C_PreSpawned_B27DC10B4A143B07A055FF82AB905F2D Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Cleanse_Projectile.GA_Card_Cleanse_Projectile_C.Success_B27DC10B4A143B07A055FF82AB905F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Cleanse_Projectile_C::Success_B27DC10B4A143B07A055FF82AB905F2D(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Cleanse_Projectile_C", "Success_B27DC10B4A143B07A055FF82AB905F2D");

	Params::GA_Card_Cleanse_Projectile_C_Success_B27DC10B4A143B07A055FF82AB905F2D Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}

}
