#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_LevelUp

#include "Basic.hpp"

#include "GC_LevelUp_classes.hpp"
#include "GC_LevelUp_parameters.hpp"


namespace SDK
{

// Function GC_LevelUp.GC_LevelUp_C.ExecuteUbergraph_GC_LevelUp
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_LevelUp_C::ExecuteUbergraph_GC_LevelUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_LevelUp_C", "ExecuteUbergraph_GC_LevelUp");

	Params::GC_LevelUp_C_ExecuteUbergraph_GC_LevelUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_LevelUp.GC_LevelUp_C.K2_OnExecute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         BurstParticleSystems                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystems                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                BurstNiagaraParticleSystems                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_LevelUp_C::K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystems, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UNiagaraComponent* BurstNiagaraParticleSystems, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_LevelUp_C", "K2_OnExecute");

	Params::GC_LevelUp_C_K2_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.BurstParticleSystems = BurstParticleSystems;
	Parms.AdditionalParticleSystems = std::move(AdditionalParticleSystems);
	Parms.BurstNiagaraParticleSystems = BurstNiagaraParticleSystems;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_LevelUp.GC_LevelUp_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGC_LevelUp_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_LevelUp_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_LevelUp.GC_LevelUp_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGC_LevelUp_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_LevelUp_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_LevelUp.GC_LevelUp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_LevelUp_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_LevelUp_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_LevelUp.GC_LevelUp_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_LevelUp_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_LevelUp_C", "OnRemove");

	Params::GC_LevelUp_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	Parameters = std::move(Parms.Parameters);

	return Parms.ReturnValue;
}

}
