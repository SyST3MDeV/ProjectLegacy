#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_SentryTurret_Dmg_02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_SentryTurret_Dmg_02.GC_SentryTurret_Dmg_02_C
// 0x0010 (0x0850 - 0x0840)
class AGC_SentryTurret_Dmg_02_C final : public AOrionGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0840(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GC_SentryTurret_Dmg_02(int32 EntryPoint);
	void K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UNiagaraComponent* RemovalNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems);
	void K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystem, class UNiagaraComponent* LoopingNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems);
	void K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance, class UNiagaraComponent* ApplicationNiagaraParticleSystem, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_SentryTurret_Dmg_02_C">();
	}
	static class AGC_SentryTurret_Dmg_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_SentryTurret_Dmg_02_C>();
	}
};
static_assert(alignof(AGC_SentryTurret_Dmg_02_C) == 0x000010, "Wrong alignment on AGC_SentryTurret_Dmg_02_C");
static_assert(sizeof(AGC_SentryTurret_Dmg_02_C) == 0x000850, "Wrong size on AGC_SentryTurret_Dmg_02_C");
static_assert(offsetof(AGC_SentryTurret_Dmg_02_C, UberGraphFrame) == 0x000840, "Member 'AGC_SentryTurret_Dmg_02_C::UberGraphFrame' has a wrong offset!");

}
