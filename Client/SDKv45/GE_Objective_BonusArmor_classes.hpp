#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Objective_BonusArmor

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Objective_BonusArmor.GE_Objective_BonusArmor_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Objective_BonusArmor_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Objective_BonusArmor_C">();
	}
	static class UGE_Objective_BonusArmor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Objective_BonusArmor_C>();
	}
};
static_assert(alignof(UGE_Objective_BonusArmor_C) == 0x000010, "Wrong alignment on UGE_Objective_BonusArmor_C");
static_assert(sizeof(UGE_Objective_BonusArmor_C) == 0x000670, "Wrong size on UGE_Objective_BonusArmor_C");

}
