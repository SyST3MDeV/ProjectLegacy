#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_UnstablePurification_Passive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_UnstablePurification_Passive.GA_Card_UnstablePurification_Passive_C
// 0x0060 (0x0BD0 - 0x0B70)
class UGA_Card_UnstablePurification_Passive_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 Unstoppable;                                       // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagRequirements               TagFilter;                                         // 0x0B80(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 UnstoppableBonus;                                  // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_UnstablePurification_Passive(int32 EntryPoint);
	void Blocked_4C5373B1400E47056BEDB7BB0F28A6A8(const struct FGameplayEffectSpecHandle& BlockedSpec, const struct FActiveGameplayEffectHandle& ImmunityGameplayEffectHandle);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_UnstablePurification_Passive_C">();
	}
	static class UGA_Card_UnstablePurification_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_UnstablePurification_Passive_C>();
	}
};
static_assert(alignof(UGA_Card_UnstablePurification_Passive_C) == 0x000010, "Wrong alignment on UGA_Card_UnstablePurification_Passive_C");
static_assert(sizeof(UGA_Card_UnstablePurification_Passive_C) == 0x000BD0, "Wrong size on UGA_Card_UnstablePurification_Passive_C");
static_assert(offsetof(UGA_Card_UnstablePurification_Passive_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_UnstablePurification_Passive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_UnstablePurification_Passive_C, Unstoppable) == 0x000B78, "Member 'UGA_Card_UnstablePurification_Passive_C::Unstoppable' has a wrong offset!");
static_assert(offsetof(UGA_Card_UnstablePurification_Passive_C, TagFilter) == 0x000B80, "Member 'UGA_Card_UnstablePurification_Passive_C::TagFilter' has a wrong offset!");
static_assert(offsetof(UGA_Card_UnstablePurification_Passive_C, UnstoppableBonus) == 0x000BC0, "Member 'UGA_Card_UnstablePurification_Passive_C::UnstoppableBonus' has a wrong offset!");

}
