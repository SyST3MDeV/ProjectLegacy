#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Buff_River_DoT

#include "Basic.hpp"

#include "GC_Buff_River_DoT_classes.hpp"
#include "GC_Buff_River_DoT_parameters.hpp"


namespace SDK
{

// Function GC_Buff_River_DoT.GC_Buff_River_DoT_C.ExecuteUbergraph_GC_Buff_River_DoT
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Buff_River_DoT_C::ExecuteUbergraph_GC_Buff_River_DoT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_River_DoT_C", "ExecuteUbergraph_GC_Buff_River_DoT");

	Params::GC_Buff_River_DoT_C_ExecuteUbergraph_GC_Buff_River_DoT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_River_DoT.GC_Buff_River_DoT_C.K2_WhileActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         LoopingParticleSystem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystem                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                LoopingNiagaraParticleSystem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Buff_River_DoT_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystem, class UNiagaraComponent* LoopingNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_River_DoT_C", "K2_WhileActive");

	Params::GC_Buff_River_DoT_C_K2_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.LoopingParticleSystem = LoopingParticleSystem;
	Parms.AdditionalParticleSystem = std::move(AdditionalParticleSystem);
	Parms.LoopingNiagaraParticleSystem = LoopingNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_River_DoT.GC_Buff_River_DoT_C.K2_OnActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         ApplicationParticleSystem                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystems                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     ApplicationCameraShakeInstance                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*                ApplicationNiagaraParticleSystem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Buff_River_DoT_C::K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance, class UNiagaraComponent* ApplicationNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_River_DoT_C", "K2_OnActive");

	Params::GC_Buff_River_DoT_C_K2_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ApplicationParticleSystem = ApplicationParticleSystem;
	Parms.AdditionalParticleSystems = std::move(AdditionalParticleSystems);
	Parms.ApplicationCameraShakeInstance = ApplicationCameraShakeInstance;
	Parms.ApplicationNiagaraParticleSystem = ApplicationNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_River_DoT.GC_Buff_River_DoT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Buff_River_DoT_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_River_DoT_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
