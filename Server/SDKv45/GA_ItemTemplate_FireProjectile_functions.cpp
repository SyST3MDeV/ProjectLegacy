#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ItemTemplate_FireProjectile

#include "Basic.hpp"

#include "GA_ItemTemplate_FireProjectile_classes.hpp"
#include "GA_ItemTemplate_FireProjectile_parameters.hpp"


namespace SDK
{

// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.ExecuteUbergraph_GA_ItemTemplate_FireProjectile
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemTemplate_FireProjectile_C::ExecuteUbergraph_GA_ItemTemplate_FireProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "ExecuteUbergraph_GA_ItemTemplate_FireProjectile");

	Params::GA_ItemTemplate_FireProjectile_C_ExecuteUbergraph_GA_ItemTemplate_FireProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.Cancelled_C8E50A814B8FF579612738835FE6D1E0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Targets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ItemTemplate_FireProjectile_C::Cancelled_C8E50A814B8FF579612738835FE6D1E0(const struct FGameplayAbilityTargetDataHandle& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "Cancelled_C8E50A814B8FF579612738835FE6D1E0");

	Params::GA_ItemTemplate_FireProjectile_C_Cancelled_C8E50A814B8FF579612738835FE6D1E0 Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.Confirmed_C8E50A814B8FF579612738835FE6D1E0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Targets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ItemTemplate_FireProjectile_C::Confirmed_C8E50A814B8FF579612738835FE6D1E0(const struct FGameplayAbilityTargetDataHandle& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "Confirmed_C8E50A814B8FF579612738835FE6D1E0");

	Params::GA_ItemTemplate_FireProjectile_C_Confirmed_C8E50A814B8FF579612738835FE6D1E0 Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.FailedToSpawn_47C8A86E4AA8223A7110FFBC491E1302
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemTemplate_FireProjectile_C::FailedToSpawn_47C8A86E4AA8223A7110FFBC491E1302(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "FailedToSpawn_47C8A86E4AA8223A7110FFBC491E1302");

	Params::GA_ItemTemplate_FireProjectile_C_FailedToSpawn_47C8A86E4AA8223A7110FFBC491E1302 Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ItemTemplate_FireProjectile_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.NotAuthority_47C8A86E4AA8223A7110FFBC491E1302
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemTemplate_FireProjectile_C::NotAuthority_47C8A86E4AA8223A7110FFBC491E1302(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "NotAuthority_47C8A86E4AA8223A7110FFBC491E1302");

	Params::GA_ItemTemplate_FireProjectile_C_NotAuthority_47C8A86E4AA8223A7110FFBC491E1302 Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.PreSpawned_47C8A86E4AA8223A7110FFBC491E1302
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemTemplate_FireProjectile_C::PreSpawned_47C8A86E4AA8223A7110FFBC491E1302(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "PreSpawned_47C8A86E4AA8223A7110FFBC491E1302");

	Params::GA_ItemTemplate_FireProjectile_C_PreSpawned_47C8A86E4AA8223A7110FFBC491E1302 Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ItemTemplate_FireProjectile.GA_ItemTemplate_FireProjectile_C.Success_47C8A86E4AA8223A7110FFBC491E1302
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionProjectile*                 SpawnedProjectile                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemTemplate_FireProjectile_C::Success_47C8A86E4AA8223A7110FFBC491E1302(class AOrionProjectile* SpawnedProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTemplate_FireProjectile_C", "Success_47C8A86E4AA8223A7110FFBC491E1302");

	Params::GA_ItemTemplate_FireProjectile_C_Success_47C8A86E4AA8223A7110FFBC491E1302 Parms{};

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);
}

}
