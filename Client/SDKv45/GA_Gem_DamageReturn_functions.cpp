#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gem_DamageReturn

#include "Basic.hpp"

#include "GA_Gem_DamageReturn_classes.hpp"
#include "GA_Gem_DamageReturn_parameters.hpp"


namespace SDK
{

// Function GA_Gem_DamageReturn.GA_Gem_DamageReturn_C.ExecuteUbergraph_GA_Gem_DamageReturn
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gem_DamageReturn_C::ExecuteUbergraph_GA_Gem_DamageReturn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Gem_DamageReturn_C", "ExecuteUbergraph_GA_Gem_DamageReturn");

	Params::GA_Gem_DamageReturn_C_ExecuteUbergraph_GA_Gem_DamageReturn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Gem_DamageReturn.GA_Gem_DamageReturn_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Gem_DamageReturn_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Gem_DamageReturn_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Gem_DamageReturn.GA_Gem_DamageReturn_C.OnDamage_2DF2FF7E4856CDA789E23AB9C97C286A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AuxillaryASC                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQualifierContextDamage          DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FGameplayEffectSpecHandle        SpecHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Gem_DamageReturn_C::OnDamage_2DF2FF7E4856CDA789E23AB9C97C286A(class UAbilitySystemComponent* AuxillaryASC, const struct FQualifierContextDamage& DamageInfo, const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Gem_DamageReturn_C", "OnDamage_2DF2FF7E4856CDA789E23AB9C97C286A");

	Params::GA_Gem_DamageReturn_C_OnDamage_2DF2FF7E4856CDA789E23AB9C97C286A Parms{};

	Parms.AuxillaryASC = AuxillaryASC;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.SpecHandle = std::move(SpecHandle);

	UObject::ProcessEvent(Func, &Parms);
}

}
