#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gem_ConsumeTheDead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Gem_ConsumeTheDead.GA_Gem_ConsumeTheDead_C
// 0x0070 (0x0BE0 - 0x0B70)
class UGA_Gem_ConsumeTheDead_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	float                                         HPPercent;                                         // 0x0B78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B7C[0x4];                                      // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_ToApply;                                        // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NumTicks;                                          // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B8C[0x4];                                      // 0x0B8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Duration_Value;                                    // 0x0B90(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         HPPercent_Value;                                   // 0x0BB8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Gem_ConsumeTheDead(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnMinionAssist_C866FAD6486496ACAD9A3298176C0E08(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnMinionKill_C866FAD6486496ACAD9A3298176C0E08(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnPlayerAssist_C866FAD6486496ACAD9A3298176C0E08(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnPlayerKill_C866FAD6486496ACAD9A3298176C0E08(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Gem_ConsumeTheDead_C">();
	}
	static class UGA_Gem_ConsumeTheDead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Gem_ConsumeTheDead_C>();
	}
};
static_assert(alignof(UGA_Gem_ConsumeTheDead_C) == 0x000010, "Wrong alignment on UGA_Gem_ConsumeTheDead_C");
static_assert(sizeof(UGA_Gem_ConsumeTheDead_C) == 0x000BE0, "Wrong size on UGA_Gem_ConsumeTheDead_C");
static_assert(offsetof(UGA_Gem_ConsumeTheDead_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Gem_ConsumeTheDead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Gem_ConsumeTheDead_C, HPPercent) == 0x000B78, "Member 'UGA_Gem_ConsumeTheDead_C::HPPercent' has a wrong offset!");
static_assert(offsetof(UGA_Gem_ConsumeTheDead_C, GE_ToApply) == 0x000B80, "Member 'UGA_Gem_ConsumeTheDead_C::GE_ToApply' has a wrong offset!");
static_assert(offsetof(UGA_Gem_ConsumeTheDead_C, NumTicks) == 0x000B88, "Member 'UGA_Gem_ConsumeTheDead_C::NumTicks' has a wrong offset!");
static_assert(offsetof(UGA_Gem_ConsumeTheDead_C, Duration_Value) == 0x000B90, "Member 'UGA_Gem_ConsumeTheDead_C::Duration_Value' has a wrong offset!");
static_assert(offsetof(UGA_Gem_ConsumeTheDead_C, HPPercent_Value) == 0x000BB8, "Member 'UGA_Gem_ConsumeTheDead_C::HPPercent_Value' has a wrong offset!");

}
