#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_LevelUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_LevelUp.GC_LevelUp_C
// 0x0030 (0x0740 - 0x0710)
class AGC_LevelUp_C final : public AOrionGameplayCueNotify_Burst_Latent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Weight_D727B6F94D024D459364F5A94B45806C; // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_D727B6F94D024D459364F5A94B45806C; // 0x0724(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_725[0x3];                                      // 0x0725(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LevelUpAnnouncerDialog;                            // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_LevelUp(int32 EntryPoint);
	void K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystems, const TArray<class UParticleSystemComponent*>& AdditionalParticleSystems, class UNiagaraComponent* BurstNiagaraParticleSystems, const TArray<class UNiagaraComponent*>& AdditionalNiagaraParticleSystems);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UserConstructionScript();
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_LevelUp_C">();
	}
	static class AGC_LevelUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_LevelUp_C>();
	}
};
static_assert(alignof(AGC_LevelUp_C) == 0x000010, "Wrong alignment on AGC_LevelUp_C");
static_assert(sizeof(AGC_LevelUp_C) == 0x000740, "Wrong size on AGC_LevelUp_C");
static_assert(offsetof(AGC_LevelUp_C, UberGraphFrame) == 0x000710, "Member 'AGC_LevelUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_LevelUp_C, PostProcess) == 0x000718, "Member 'AGC_LevelUp_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGC_LevelUp_C, Timeline_0_Weight_D727B6F94D024D459364F5A94B45806C) == 0x000720, "Member 'AGC_LevelUp_C::Timeline_0_Weight_D727B6F94D024D459364F5A94B45806C' has a wrong offset!");
static_assert(offsetof(AGC_LevelUp_C, Timeline_0__Direction_D727B6F94D024D459364F5A94B45806C) == 0x000724, "Member 'AGC_LevelUp_C::Timeline_0__Direction_D727B6F94D024D459364F5A94B45806C' has a wrong offset!");
static_assert(offsetof(AGC_LevelUp_C, Timeline_0) == 0x000728, "Member 'AGC_LevelUp_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AGC_LevelUp_C, LevelUpAnnouncerDialog) == 0x000730, "Member 'AGC_LevelUp_C::LevelUpAnnouncerDialog' has a wrong offset!");

}
