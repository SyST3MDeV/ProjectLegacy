#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JumpPad_RootMotion_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JumpPad_RootMotion_Master.BP_JumpPad_RootMotion_Master_C
// 0x00C8 (0x04B0 - 0x03E8)
class ABP_JumpPad_RootMotion_Master_C final : public AOrionBaseActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               Particle_TopFlowRight;                             // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_TopFlowLeft;                              // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_BottomFoam;                               // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_TopDrips;                                 // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_BottomLeftSplash;                         // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle_BottomRIghtSplash;                        // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Launcher_EmissTop_Optional;                     // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Launcher_Optional;                              // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOrionGameplayVolumeComponent*          OrionGameplayVolume_Abilities;                     // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOrionGameplayVolumeComponent*          OrionGameplayVolume;                               // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Shape_Cylinder;                                    // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DestinationActor;                                  // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UCurveVector*                           Jump_PathOffset_Curve;                             // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UCurveFloat*                            Jump_TimeMapping_Curve;                            // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Jump_Duration;                                     // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Jump_FinishVelocityClamp;                          // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShouldBeDead;                                      // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDead;                                            // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsActive;                                          // 0x048A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B[0x1];                                      // 0x048B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Width;                                             // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TeamColorOffset_Amount;                            // 0x0490(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AOrionToggleableNavLinkProxy*           ToggleableNavLink;                                 // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityJumps;                                      // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_JumpPad_RootMotion_Master(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Update_Activation_State();
	void On_Controlling_Actor_Destroyed();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JumpPad_RootMotion_Master_C">();
	}
	static class ABP_JumpPad_RootMotion_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_JumpPad_RootMotion_Master_C>();
	}
};
static_assert(alignof(ABP_JumpPad_RootMotion_Master_C) == 0x000008, "Wrong alignment on ABP_JumpPad_RootMotion_Master_C");
static_assert(sizeof(ABP_JumpPad_RootMotion_Master_C) == 0x0004B0, "Wrong size on ABP_JumpPad_RootMotion_Master_C");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, UberGraphFrame) == 0x0003E8, "Member 'ABP_JumpPad_RootMotion_Master_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Particle_TopFlowRight) == 0x0003F0, "Member 'ABP_JumpPad_RootMotion_Master_C::Particle_TopFlowRight' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Particle_TopFlowLeft) == 0x0003F8, "Member 'ABP_JumpPad_RootMotion_Master_C::Particle_TopFlowLeft' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Particle_BottomFoam) == 0x000400, "Member 'ABP_JumpPad_RootMotion_Master_C::Particle_BottomFoam' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Particle_TopDrips) == 0x000408, "Member 'ABP_JumpPad_RootMotion_Master_C::Particle_TopDrips' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Particle_BottomLeftSplash) == 0x000410, "Member 'ABP_JumpPad_RootMotion_Master_C::Particle_BottomLeftSplash' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Particle_BottomRIghtSplash) == 0x000418, "Member 'ABP_JumpPad_RootMotion_Master_C::Particle_BottomRIghtSplash' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, SM_Launcher_EmissTop_Optional) == 0x000420, "Member 'ABP_JumpPad_RootMotion_Master_C::SM_Launcher_EmissTop_Optional' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, SM_Launcher_Optional) == 0x000428, "Member 'ABP_JumpPad_RootMotion_Master_C::SM_Launcher_Optional' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Root) == 0x000430, "Member 'ABP_JumpPad_RootMotion_Master_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, OrionGameplayVolume_Abilities) == 0x000438, "Member 'ABP_JumpPad_RootMotion_Master_C::OrionGameplayVolume_Abilities' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, ParticleSystem) == 0x000440, "Member 'ABP_JumpPad_RootMotion_Master_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, OrionGameplayVolume) == 0x000448, "Member 'ABP_JumpPad_RootMotion_Master_C::OrionGameplayVolume' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Arrow) == 0x000450, "Member 'ABP_JumpPad_RootMotion_Master_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Sphere) == 0x000458, "Member 'ABP_JumpPad_RootMotion_Master_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Shape_Cylinder) == 0x000460, "Member 'ABP_JumpPad_RootMotion_Master_C::Shape_Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, DestinationActor) == 0x000468, "Member 'ABP_JumpPad_RootMotion_Master_C::DestinationActor' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Jump_PathOffset_Curve) == 0x000470, "Member 'ABP_JumpPad_RootMotion_Master_C::Jump_PathOffset_Curve' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Jump_TimeMapping_Curve) == 0x000478, "Member 'ABP_JumpPad_RootMotion_Master_C::Jump_TimeMapping_Curve' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Jump_Duration) == 0x000480, "Member 'ABP_JumpPad_RootMotion_Master_C::Jump_Duration' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Jump_FinishVelocityClamp) == 0x000484, "Member 'ABP_JumpPad_RootMotion_Master_C::Jump_FinishVelocityClamp' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, ShouldBeDead) == 0x000488, "Member 'ABP_JumpPad_RootMotion_Master_C::ShouldBeDead' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, IsDead) == 0x000489, "Member 'ABP_JumpPad_RootMotion_Master_C::IsDead' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, IsActive) == 0x00048A, "Member 'ABP_JumpPad_RootMotion_Master_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, Width) == 0x00048C, "Member 'ABP_JumpPad_RootMotion_Master_C::Width' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, TeamColorOffset_Amount) == 0x000490, "Member 'ABP_JumpPad_RootMotion_Master_C::TeamColorOffset_Amount' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, ToggleableNavLink) == 0x0004A0, "Member 'ABP_JumpPad_RootMotion_Master_C::ToggleableNavLink' has a wrong offset!");
static_assert(offsetof(ABP_JumpPad_RootMotion_Master_C, AbilityJumps) == 0x0004A8, "Member 'ABP_JumpPad_RootMotion_Master_C::AbilityJumps' has a wrong offset!");

}
