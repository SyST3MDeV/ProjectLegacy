#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_FleetFooted

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_FleetFooted.GA_Card_FleetFooted_C
// 0x0060 (0x0BD0 - 0x0B70)
class UGA_Card_FleetFooted_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            MovespeedGE;                                       // 0x0B78(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            OOCMovespeedGE;                                    // 0x0B80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Movespeed;                                      // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           OOCTimer;                                          // 0x0B90(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                 GE_OOCMovespeed;                                   // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OOCTime;                                           // 0x0BA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA4[0x4];                                      // 0x0BA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ValueTimer;                                        // 0x0BA8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Card_FleetFooted(int32 EntryPoint);
	void CanAddOOCMovespeed();
	void K2_ActivateAbility();
	void OnDamage_088212F74B980D68D44A59B439BB4367(class UAbilitySystemComponent* AuxillaryASC, const struct FQualifierContextDamage& DamageInfo, const struct FGameplayEffectSpecHandle& SpecHandle);
	void OnDamage_7F3EAB414AB938D713C6DA8DBAF77E92(class UAbilitySystemComponent* AuxillaryASC, const struct FQualifierContextDamage& DamageInfo, const struct FGameplayEffectSpecHandle& SpecHandle);
	void OnStateEnded_E5AC47D64193D4B3AD2604973E8E19C0();
	void OnStateInterrupted_E5AC47D64193D4B3AD2604973E8E19C0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_FleetFooted_C">();
	}
	static class UGA_Card_FleetFooted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_FleetFooted_C>();
	}
};
static_assert(alignof(UGA_Card_FleetFooted_C) == 0x000010, "Wrong alignment on UGA_Card_FleetFooted_C");
static_assert(sizeof(UGA_Card_FleetFooted_C) == 0x000BD0, "Wrong size on UGA_Card_FleetFooted_C");
static_assert(offsetof(UGA_Card_FleetFooted_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_FleetFooted_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, MovespeedGE) == 0x000B78, "Member 'UGA_Card_FleetFooted_C::MovespeedGE' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, OOCMovespeedGE) == 0x000B80, "Member 'UGA_Card_FleetFooted_C::OOCMovespeedGE' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, GE_Movespeed) == 0x000B88, "Member 'UGA_Card_FleetFooted_C::GE_Movespeed' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, OOCTimer) == 0x000B90, "Member 'UGA_Card_FleetFooted_C::OOCTimer' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, GE_OOCMovespeed) == 0x000B98, "Member 'UGA_Card_FleetFooted_C::GE_OOCMovespeed' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, OOCTime) == 0x000BA0, "Member 'UGA_Card_FleetFooted_C::OOCTime' has a wrong offset!");
static_assert(offsetof(UGA_Card_FleetFooted_C, ValueTimer) == 0x000BA8, "Member 'UGA_Card_FleetFooted_C::ValueTimer' has a wrong offset!");

}
