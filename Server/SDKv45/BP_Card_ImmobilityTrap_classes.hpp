#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Card_ImmobilityTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Card_ImmobilityTrap.BP_Card_ImmobilityTrap_C
// 0x00A8 (0x05D0 - 0x0528)
class ABP_Card_ImmobilityTrap_C final : public AOrionDamageableActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(Transient, DuplicateTransient)
	class UDecalComponent*                        FadeDecal;                                         // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        CountDownDecal;                                    // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       TrapSweep;                                         // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PostSphere;                                        // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOrionGameplayVolumeComponent*          OrionGameplayVolume;                               // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereCollision;                                   // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MineMesh;                                          // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeActivation;                             // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpireDelayBeforeDestroy;                          // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MineMaterial;                                      // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     ShadowPlaneMaterial;                               // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         TrapDuration;                                      // 0x0590(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               CountDownDecalMat;                                 // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FadeDecalMat;                                      // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Idx_Local;                                         // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Card_ImmobilityTrap(int32 EntryPoint);
	void ReceiveBeginPlay();
	void LifeSpanExpired();
	void OnTeamChanged(EOrionTeam NewTeamIdx);
	void MineOverlap();
	void RemoveShadowPlaneMaterials();
	void ApplyShadowPlaneMaterials();
	void BndEvt__OrionGameplayVolume_K2Node_ComponentBoundEvent_0_ContainerEffectApplied__DelegateSignature(class AActor* Target);
	void UserConstructionScript();
	void GetTargetingLocation(struct FVector* OutPosition);
	void GetAimTargetSensingLocation(struct FVector* AimPosition);
	bool IsTargetable();
	void DeleteActorOnOverlap(TArray<class AActor*>& TargetArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Card_ImmobilityTrap_C">();
	}
	static class ABP_Card_ImmobilityTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Card_ImmobilityTrap_C>();
	}
};
static_assert(alignof(ABP_Card_ImmobilityTrap_C) == 0x000008, "Wrong alignment on ABP_Card_ImmobilityTrap_C");
static_assert(sizeof(ABP_Card_ImmobilityTrap_C) == 0x0005D0, "Wrong size on ABP_Card_ImmobilityTrap_C");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, UberGraphFrame) == 0x000528, "Member 'ABP_Card_ImmobilityTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, FadeDecal) == 0x000530, "Member 'ABP_Card_ImmobilityTrap_C::FadeDecal' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, CountDownDecal) == 0x000538, "Member 'ABP_Card_ImmobilityTrap_C::CountDownDecal' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, TrapSweep) == 0x000540, "Member 'ABP_Card_ImmobilityTrap_C::TrapSweep' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, Capsule) == 0x000548, "Member 'ABP_Card_ImmobilityTrap_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, PostProcess) == 0x000550, "Member 'ABP_Card_ImmobilityTrap_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, PostSphere) == 0x000558, "Member 'ABP_Card_ImmobilityTrap_C::PostSphere' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, OrionGameplayVolume) == 0x000560, "Member 'ABP_Card_ImmobilityTrap_C::OrionGameplayVolume' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, SphereCollision) == 0x000568, "Member 'ABP_Card_ImmobilityTrap_C::SphereCollision' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, MineMesh) == 0x000570, "Member 'ABP_Card_ImmobilityTrap_C::MineMesh' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, DelayBeforeActivation) == 0x000578, "Member 'ABP_Card_ImmobilityTrap_C::DelayBeforeActivation' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, ExpireDelayBeforeDestroy) == 0x00057C, "Member 'ABP_Card_ImmobilityTrap_C::ExpireDelayBeforeDestroy' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, MineMaterial) == 0x000580, "Member 'ABP_Card_ImmobilityTrap_C::MineMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, ShadowPlaneMaterial) == 0x000588, "Member 'ABP_Card_ImmobilityTrap_C::ShadowPlaneMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, TrapDuration) == 0x000590, "Member 'ABP_Card_ImmobilityTrap_C::TrapDuration' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, CountDownDecalMat) == 0x0005B8, "Member 'ABP_Card_ImmobilityTrap_C::CountDownDecalMat' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, FadeDecalMat) == 0x0005C0, "Member 'ABP_Card_ImmobilityTrap_C::FadeDecalMat' has a wrong offset!");
static_assert(offsetof(ABP_Card_ImmobilityTrap_C, Idx_Local) == 0x0005C8, "Member 'ABP_Card_ImmobilityTrap_C::Idx_Local' has a wrong offset!");

}
