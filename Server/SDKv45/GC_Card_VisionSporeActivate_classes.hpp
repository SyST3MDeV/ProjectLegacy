#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Card_VisionSporeActivate

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Card_VisionSporeActivate.GC_Card_VisionSporeActivate_C
// 0x0020 (0x0660 - 0x0640)
class UGC_Card_VisionSporeActivate_C final : public UOrionGameplayCueNotify_Burst
{
public:
	class UParticleSystem*                        EmitterTemplate;                                   // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttachPointName;                                   // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TeamColorName;                                     // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystem, TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UNiagaraComponent* BurstNiagaraParticleSystem, TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Card_VisionSporeActivate_C">();
	}
	static class UGC_Card_VisionSporeActivate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Card_VisionSporeActivate_C>();
	}
};
static_assert(alignof(UGC_Card_VisionSporeActivate_C) == 0x000010, "Wrong alignment on UGC_Card_VisionSporeActivate_C");
static_assert(sizeof(UGC_Card_VisionSporeActivate_C) == 0x000660, "Wrong size on UGC_Card_VisionSporeActivate_C");
static_assert(offsetof(UGC_Card_VisionSporeActivate_C, EmitterTemplate) == 0x000640, "Member 'UGC_Card_VisionSporeActivate_C::EmitterTemplate' has a wrong offset!");
static_assert(offsetof(UGC_Card_VisionSporeActivate_C, AttachPointName) == 0x000648, "Member 'UGC_Card_VisionSporeActivate_C::AttachPointName' has a wrong offset!");
static_assert(offsetof(UGC_Card_VisionSporeActivate_C, TeamColorName) == 0x000650, "Member 'UGC_Card_VisionSporeActivate_C::TeamColorName' has a wrong offset!");

}
