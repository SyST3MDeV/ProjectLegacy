#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gem_ManaReactor

#include "Basic.hpp"

#include "GA_Gem_ManaReactor_classes.hpp"
#include "GA_Gem_ManaReactor_parameters.hpp"


namespace SDK
{

// Function GA_Gem_ManaReactor.GA_Gem_ManaReactor_C.ExecuteUbergraph_GA_Gem_ManaReactor
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gem_ManaReactor_C::ExecuteUbergraph_GA_Gem_ManaReactor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Gem_ManaReactor_C", "ExecuteUbergraph_GA_Gem_ManaReactor");

	Params::GA_Gem_ManaReactor_C_ExecuteUbergraph_GA_Gem_ManaReactor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Gem_ManaReactor.GA_Gem_ManaReactor_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Gem_ManaReactor_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Gem_ManaReactor_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Gem_ManaReactor.GA_Gem_ManaReactor_C.OnDamage_6EF19C2A464A2B7F6F56B4ACFA6C9B39
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AuxillaryASC                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQualifierContextDamage          DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FGameplayEffectSpecHandle        SpecHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Gem_ManaReactor_C::OnDamage_6EF19C2A464A2B7F6F56B4ACFA6C9B39(class UAbilitySystemComponent* AuxillaryASC, const struct FQualifierContextDamage& DamageInfo, const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Gem_ManaReactor_C", "OnDamage_6EF19C2A464A2B7F6F56B4ACFA6C9B39");

	Params::GA_Gem_ManaReactor_C_OnDamage_6EF19C2A464A2B7F6F56B4ACFA6C9B39 Parms{};

	Parms.AuxillaryASC = AuxillaryASC;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.SpecHandle = std::move(SpecHandle);

	UObject::ProcessEvent(Func, &Parms);
}

}
