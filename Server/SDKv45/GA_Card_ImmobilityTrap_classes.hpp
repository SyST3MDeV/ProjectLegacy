#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_ImmobilityTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_ImmobilityTrap.GA_Card_ImmobilityTrap_C
// 0x0010 (0x0B80 - 0x0B70)
class UGA_Card_ImmobilityTrap_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 TargetingCamera;                                   // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_ImmobilityTrap(int32 EntryPoint);
	void Cancelled_501412314D809FCF9A90D2BC59DB4CFA(const struct FGameplayAbilityTargetDataHandle& Targets);
	void Confirmed_501412314D809FCF9A90D2BC59DB4CFA(const struct FGameplayAbilityTargetDataHandle& Targets);
	void FailedToSpawn_7451FBBD481E27539C49B8ACA5C94395(class AActor* SpawnedActor);
	void FailedToSpawn_986DD7034D98DE957CADECB2450760AF(class AOrionProjectile* SpawnedProjectile);
	void K2_ActivateAbility();
	void NotAuthority_7451FBBD481E27539C49B8ACA5C94395(class AActor* SpawnedActor);
	void NotAuthority_986DD7034D98DE957CADECB2450760AF(class AOrionProjectile* SpawnedProjectile);
	void OnShutdown_AF790A7044239C81441667BA07F4F79D();
	void OnSync_08416CBB4EA1030E0E48C7959EAE9DDE();
	void PreSpawned_986DD7034D98DE957CADECB2450760AF(class AOrionProjectile* SpawnedProjectile);
	void Success_7451FBBD481E27539C49B8ACA5C94395(class AActor* SpawnedActor);
	void Success_986DD7034D98DE957CADECB2450760AF(class AOrionProjectile* SpawnedProjectile);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_ImmobilityTrap_C">();
	}
	static class UGA_Card_ImmobilityTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_ImmobilityTrap_C>();
	}
};
static_assert(alignof(UGA_Card_ImmobilityTrap_C) == 0x000010, "Wrong alignment on UGA_Card_ImmobilityTrap_C");
static_assert(sizeof(UGA_Card_ImmobilityTrap_C) == 0x000B80, "Wrong size on UGA_Card_ImmobilityTrap_C");
static_assert(offsetof(UGA_Card_ImmobilityTrap_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_ImmobilityTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_ImmobilityTrap_C, TargetingCamera) == 0x000B78, "Member 'UGA_Card_ImmobilityTrap_C::TargetingCamera' has a wrong offset!");

}
