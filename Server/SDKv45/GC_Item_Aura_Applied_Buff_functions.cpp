#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Item_Aura_Applied_Buff

#include "Basic.hpp"

#include "GC_Item_Aura_Applied_Buff_classes.hpp"
#include "GC_Item_Aura_Applied_Buff_parameters.hpp"


namespace SDK
{

// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.ExecuteUbergraph_GC_Item_Aura_Applied_Buff
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Item_Aura_Applied_Buff_C::ExecuteUbergraph_GC_Item_Aura_Applied_Buff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "ExecuteUbergraph_GC_Item_Aura_Applied_Buff");

	Params::GC_Item_Aura_Applied_Buff_C_ExecuteUbergraph_GC_Item_Aura_Applied_Buff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.Repeat
// (BlueprintCallable, BlueprintEvent)

void AGC_Item_Aura_Applied_Buff_C::Repeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "Repeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.K2_OnRemove
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         RemovalParticleSystem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystems                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                RemovalNiagaraParticleSystem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Item_Aura_Applied_Buff_C::K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UNiagaraComponent* RemovalNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "K2_OnRemove");

	Params::GC_Item_Aura_Applied_Buff_C_K2_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.RemovalParticleSystem = RemovalParticleSystem;
	Parms.AdditionalParticleSystems = std::move(AdditionalParticleSystems);
	Parms.RemovalNiagaraParticleSystem = RemovalNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.K2_WhileActive
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*         LoopingParticleSystem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*> AdditionalParticleSystem                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraComponent*                LoopingNiagaraParticleSystem                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UNiagaraComponent*>        AdditionalNiagaraParticleSystems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Item_Aura_Applied_Buff_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystem, class UNiagaraComponent* LoopingNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "K2_WhileActive");

	Params::GC_Item_Aura_Applied_Buff_C_K2_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.LoopingParticleSystem = LoopingParticleSystem;
	Parms.AdditionalParticleSystem = std::move(AdditionalParticleSystem);
	Parms.LoopingNiagaraParticleSystem = LoopingNiagaraParticleSystem;
	Parms.AdditionalNiagaraParticleSystems = std::move(AdditionalNiagaraParticleSystems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.Pulse_Control__FinishedFunc
// (BlueprintEvent)

void AGC_Item_Aura_Applied_Buff_C::Pulse_Control__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "Pulse_Control__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.Pulse_Control__UpdateFunc
// (BlueprintEvent)

void AGC_Item_Aura_Applied_Buff_C::Pulse_Control__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "Pulse_Control__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Item_Aura_Applied_Buff.GC_Item_Aura_Applied_Buff_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGC_Item_Aura_Applied_Buff_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_Applied_Buff_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
