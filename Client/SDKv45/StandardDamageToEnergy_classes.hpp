#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StandardDamageToEnergy

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StandardDamageToEnergy.StandardDamageToEnergy_C
// 0x0000 (0x0670 - 0x0670)
class UStandardDamageToEnergy_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StandardDamageToEnergy_C">();
	}
	static class UStandardDamageToEnergy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandardDamageToEnergy_C>();
	}
};
static_assert(alignof(UStandardDamageToEnergy_C) == 0x000010, "Wrong alignment on UStandardDamageToEnergy_C");
static_assert(sizeof(UStandardDamageToEnergy_C) == 0x000670, "Wrong size on UStandardDamageToEnergy_C");

}
