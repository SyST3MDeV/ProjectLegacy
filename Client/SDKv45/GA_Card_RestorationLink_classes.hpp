#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_RestorationLink

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_RestorationLink.GA_Card_RestorationLink_C
// 0x0070 (0x0BE0 - 0x0B70)
class UGA_Card_RestorationLink_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	float                                         PercentToRestore;                                  // 0x0B78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0B7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         PercentToRestore_Value;                            // 0x0B80(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Duration_Value;                                    // 0x0BA8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           GameplayCueRestoreHP;                              // 0x0BD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_RestorationLink(int32 EntryPoint);
	void Cancelled_B855B6584A6B2CD978FFDE90EE2009D5(const struct FGameplayAbilityTargetDataHandle& Targets);
	void Confirmed_B855B6584A6B2CD978FFDE90EE2009D5(const struct FGameplayAbilityTargetDataHandle& Targets);
	void K2_ActivateAbility();
	void OnStateEnded_EF485970434C086596E968B73B64A3FC();
	void OnStateInterrupted_EF485970434C086596E968B73B64A3FC();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_RestorationLink_C">();
	}
	static class UGA_Card_RestorationLink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_RestorationLink_C>();
	}
};
static_assert(alignof(UGA_Card_RestorationLink_C) == 0x000010, "Wrong alignment on UGA_Card_RestorationLink_C");
static_assert(sizeof(UGA_Card_RestorationLink_C) == 0x000BE0, "Wrong size on UGA_Card_RestorationLink_C");
static_assert(offsetof(UGA_Card_RestorationLink_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_RestorationLink_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_RestorationLink_C, PercentToRestore) == 0x000B78, "Member 'UGA_Card_RestorationLink_C::PercentToRestore' has a wrong offset!");
static_assert(offsetof(UGA_Card_RestorationLink_C, Duration) == 0x000B7C, "Member 'UGA_Card_RestorationLink_C::Duration' has a wrong offset!");
static_assert(offsetof(UGA_Card_RestorationLink_C, PercentToRestore_Value) == 0x000B80, "Member 'UGA_Card_RestorationLink_C::PercentToRestore_Value' has a wrong offset!");
static_assert(offsetof(UGA_Card_RestorationLink_C, Duration_Value) == 0x000BA8, "Member 'UGA_Card_RestorationLink_C::Duration_Value' has a wrong offset!");
static_assert(offsetof(UGA_Card_RestorationLink_C, GameplayCueRestoreHP) == 0x000BD0, "Member 'UGA_Card_RestorationLink_C::GameplayCueRestoreHP' has a wrong offset!");

}
