#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ExecuteMinions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ExecuteMinions.GA_ExecuteMinions_C
// 0x00C0 (0x0C30 - 0x0B70)
class UGA_ExecuteMinions_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	struct FDamageQualifierKeywordsWithContext    Qualifier;                                         // 0x0B78(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         HPToExecute;                                       // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BF4[0x4];                                      // 0x0BF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_StandardExecute;                                // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseExecuteFlytext;                                // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C01[0x7];                                      // 0x0C01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         CullExecuteBonusValue;                             // 0x0C08(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_ExecuteMinions(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnDamage_3457F0334C44E736111C89AAE5498E5F(class UAbilitySystemComponent* AuxillaryASC, const struct FQualifierContextDamage& DamageInfo, const struct FGameplayEffectSpecHandle& SpecHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ExecuteMinions_C">();
	}
	static class UGA_ExecuteMinions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ExecuteMinions_C>();
	}
};
static_assert(alignof(UGA_ExecuteMinions_C) == 0x000010, "Wrong alignment on UGA_ExecuteMinions_C");
static_assert(sizeof(UGA_ExecuteMinions_C) == 0x000C30, "Wrong size on UGA_ExecuteMinions_C");
static_assert(offsetof(UGA_ExecuteMinions_C, UberGraphFrame) == 0x000B70, "Member 'UGA_ExecuteMinions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_ExecuteMinions_C, Qualifier) == 0x000B78, "Member 'UGA_ExecuteMinions_C::Qualifier' has a wrong offset!");
static_assert(offsetof(UGA_ExecuteMinions_C, HPToExecute) == 0x000BF0, "Member 'UGA_ExecuteMinions_C::HPToExecute' has a wrong offset!");
static_assert(offsetof(UGA_ExecuteMinions_C, GE_StandardExecute) == 0x000BF8, "Member 'UGA_ExecuteMinions_C::GE_StandardExecute' has a wrong offset!");
static_assert(offsetof(UGA_ExecuteMinions_C, bUseExecuteFlytext) == 0x000C00, "Member 'UGA_ExecuteMinions_C::bUseExecuteFlytext' has a wrong offset!");
static_assert(offsetof(UGA_ExecuteMinions_C, CullExecuteBonusValue) == 0x000C08, "Member 'UGA_ExecuteMinions_C::CullExecuteBonusValue' has a wrong offset!");

}
