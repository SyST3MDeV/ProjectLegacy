#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Dmg_Drains_Mana_When_LowHP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_Dmg_Drains_Mana_When_LowHP.GA_Card_Dmg_Drains_Mana_When_LowHP_C
// 0x00C0 (0x0C30 - 0x0B70)
class UGA_Card_Dmg_Drains_Mana_When_LowHP_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	struct FDamageQualifierKeywordsWithContext    Qualifier;                                         // 0x0B78(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle            ImmortalGE;                                        // 0x0BF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ManaMultiplier;                                    // 0x0BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BFC[0x4];                                      // 0x0BFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ValueManaMultiplier;                               // 0x0C00(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Card_Dmg_Drains_Mana_When_LowHP(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnDamage_054B543046EAAC0287496C990D344B72(class UAbilitySystemComponent* AuxillaryASC, const struct FQualifierContextDamage& DamageInfo, const struct FGameplayEffectSpecHandle& SpecHandle);
	void OnKilled_159756EA472CD4BAEA1BB5A7A60E87AC(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle);
	void OnStateEnded_C75C992347E73F516E839F9BDB954BB5();
	void OnStateInterrupted_C75C992347E73F516E839F9BDB954BB5();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_Dmg_Drains_Mana_When_LowHP_C">();
	}
	static class UGA_Card_Dmg_Drains_Mana_When_LowHP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_Dmg_Drains_Mana_When_LowHP_C>();
	}
};
static_assert(alignof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C) == 0x000010, "Wrong alignment on UGA_Card_Dmg_Drains_Mana_When_LowHP_C");
static_assert(sizeof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C) == 0x000C30, "Wrong size on UGA_Card_Dmg_Drains_Mana_When_LowHP_C");
static_assert(offsetof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_Dmg_Drains_Mana_When_LowHP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C, Qualifier) == 0x000B78, "Member 'UGA_Card_Dmg_Drains_Mana_When_LowHP_C::Qualifier' has a wrong offset!");
static_assert(offsetof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C, ImmortalGE) == 0x000BF0, "Member 'UGA_Card_Dmg_Drains_Mana_When_LowHP_C::ImmortalGE' has a wrong offset!");
static_assert(offsetof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C, ManaMultiplier) == 0x000BF8, "Member 'UGA_Card_Dmg_Drains_Mana_When_LowHP_C::ManaMultiplier' has a wrong offset!");
static_assert(offsetof(UGA_Card_Dmg_Drains_Mana_When_LowHP_C, ValueManaMultiplier) == 0x000C00, "Member 'UGA_Card_Dmg_Drains_Mana_When_LowHP_C::ValueManaMultiplier' has a wrong offset!");

}
