#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_LoneBonusGold

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_LoneBonusGold.GA_Card_LoneBonusGold_C
// 0x0010 (0x0B80 - 0x0B70)
class UGA_Card_LoneBonusGold_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 GE_ToApply;                                        // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_LoneBonusGold(int32 EntryPoint);
	void Cancelled_F6E462194E5B72D9F1FCE0A07F85A008(const struct FGameplayAbilityTargetDataHandle& Targets);
	void Confirmed_F6E462194E5B72D9F1FCE0A07F85A008(const struct FGameplayAbilityTargetDataHandle& Targets);
	void K2_ActivateAbility();
	void OnMinionAssist_E8EFD428448A47D1F42967A3FECC21BE(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnMinionKill_E8EFD428448A47D1F42967A3FECC21BE(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnPlayerAssist_E8EFD428448A47D1F42967A3FECC21BE(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnPlayerKill_E8EFD428448A47D1F42967A3FECC21BE(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_LoneBonusGold_C">();
	}
	static class UGA_Card_LoneBonusGold_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_LoneBonusGold_C>();
	}
};
static_assert(alignof(UGA_Card_LoneBonusGold_C) == 0x000010, "Wrong alignment on UGA_Card_LoneBonusGold_C");
static_assert(sizeof(UGA_Card_LoneBonusGold_C) == 0x000B80, "Wrong size on UGA_Card_LoneBonusGold_C");
static_assert(offsetof(UGA_Card_LoneBonusGold_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_LoneBonusGold_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_LoneBonusGold_C, GE_ToApply) == 0x000B78, "Member 'UGA_Card_LoneBonusGold_C::GE_ToApply' has a wrong offset!");

}
