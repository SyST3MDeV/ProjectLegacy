#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_DealPBAOEDamage

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_DealPBAOEDamage.GC_DealPBAOEDamage_C
// 0x0010 (0x0090 - 0x0080)
class UGC_DealPBAOEDamage_C final : public UGameplayCueNotify_Static
{
public:
	class UParticleSystem*                        PS_AOEFX;                                          // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ThunderCleaverActivateSound;                       // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_DealPBAOEDamage_C">();
	}
	static class UGC_DealPBAOEDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_DealPBAOEDamage_C>();
	}
};
static_assert(alignof(UGC_DealPBAOEDamage_C) == 0x000010, "Wrong alignment on UGC_DealPBAOEDamage_C");
static_assert(sizeof(UGC_DealPBAOEDamage_C) == 0x000090, "Wrong size on UGC_DealPBAOEDamage_C");
static_assert(offsetof(UGC_DealPBAOEDamage_C, PS_AOEFX) == 0x000080, "Member 'UGC_DealPBAOEDamage_C::PS_AOEFX' has a wrong offset!");
static_assert(offsetof(UGC_DealPBAOEDamage_C, ThunderCleaverActivateSound) == 0x000088, "Member 'UGC_DealPBAOEDamage_C::ThunderCleaverActivateSound' has a wrong offset!");

}
