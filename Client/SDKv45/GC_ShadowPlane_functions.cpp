#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_ShadowPlane

#include "Basic.hpp"

#include "GC_ShadowPlane_classes.hpp"
#include "GC_ShadowPlane_parameters.hpp"


namespace SDK
{

// Function GC_ShadowPlane.GC_ShadowPlane_C.ExecuteUbergraph_GC_ShadowPlane
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_ShadowPlane_C::ExecuteUbergraph_GC_ShadowPlane(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "ExecuteUbergraph_GC_ShadowPlane");

	Params::GC_ShadowPlane_C_ExecuteUbergraph_GC_ShadowPlane Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_ShadowPlane.GC_ShadowPlane_C.K2_OnActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         ApplicationParticleSystem                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystems                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     ApplicationCameraShakeInstance                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*                ApplicationNiagaraParticleSystem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_ShadowPlane_C::K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance, class UNiagaraComponent* ApplicationNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "K2_OnActive");

	Params::GC_ShadowPlane_C_K2_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ApplicationParticleSystem = ApplicationParticleSystem;
	Parms.AdditionalParticleSystems = std::move(AdditionalParticleSystems);
	Parms.ApplicationCameraShakeInstance = ApplicationCameraShakeInstance;
	Parms.ApplicationNiagaraParticleSystem = ApplicationNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_ShadowPlane.GC_ShadowPlane_C.K2_OnExecute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         RecurringParticleSystem                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystems                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                RecurringNiagaraParticleSystem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_ShadowPlane_C::K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RecurringParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UNiagaraComponent* RecurringNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "K2_OnExecute");

	Params::GC_ShadowPlane_C_K2_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.RecurringParticleSystem = RecurringParticleSystem;
	Parms.AdditionalParticleSystems = std::move(AdditionalParticleSystems);
	Parms.RecurringNiagaraParticleSystem = RecurringNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_ShadowPlane.GC_ShadowPlane_C.K2_OnRemove
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         RemovalParticleSystem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystems                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                RemovalNiagaraParticleSystem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_ShadowPlane_C::K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UNiagaraComponent* RemovalNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "K2_OnRemove");

	Params::GC_ShadowPlane_C_K2_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.RemovalParticleSystem = RemovalParticleSystem;
	Parms.AdditionalParticleSystems = std::move(AdditionalParticleSystems);
	Parms.RemovalNiagaraParticleSystem = RemovalNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_ShadowPlane.GC_ShadowPlane_C.K2_WhileActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         LoopingParticleSystem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystem                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                LoopingNiagaraParticleSystem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_ShadowPlane_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystem, class UNiagaraComponent* LoopingNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "K2_WhileActive");

	Params::GC_ShadowPlane_C_K2_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.LoopingParticleSystem = LoopingParticleSystem;
	Parms.AdditionalParticleSystem = std::move(AdditionalParticleSystem);
	Parms.LoopingNiagaraParticleSystem = LoopingNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_ShadowPlane.GC_ShadowPlane_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_ShadowPlane_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_ShadowPlane.GC_ShadowPlane_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_ShadowPlane_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_ShadowPlane_C", "WhileActive");

	Params::GC_ShadowPlane_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	Parameters = std::move(Parms.Parameters);

	return Parms.ReturnValue;
}

}
