#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_PrimeHelix_Carried

#include "Basic.hpp"

#include "GC_PrimeHelix_Carried_classes.hpp"
#include "GC_PrimeHelix_Carried_parameters.hpp"


namespace SDK
{

// Function GC_PrimeHelix_Carried.GC_PrimeHelix_Carried_C.ExecuteUbergraph_GC_PrimeHelix_Carried
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_PrimeHelix_Carried_C::ExecuteUbergraph_GC_PrimeHelix_Carried(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_PrimeHelix_Carried_C", "ExecuteUbergraph_GC_PrimeHelix_Carried");

	Params::GC_PrimeHelix_Carried_C_ExecuteUbergraph_GC_PrimeHelix_Carried Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_PrimeHelix_Carried.GC_PrimeHelix_Carried_C.K2_WhileActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         LoopingParticleSystem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystem                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                LoopingNiagaraParticleSystem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_PrimeHelix_Carried_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystem, class UNiagaraComponent* LoopingNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_PrimeHelix_Carried_C", "K2_WhileActive");

	Params::GC_PrimeHelix_Carried_C_K2_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.LoopingParticleSystem = LoopingParticleSystem;
	Parms.AdditionalParticleSystem = std::move(AdditionalParticleSystem);
	Parms.LoopingNiagaraParticleSystem = LoopingNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_PrimeHelix_Carried.GC_PrimeHelix_Carried_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_PrimeHelix_Carried_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_PrimeHelix_Carried_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
