#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_ReplenishCardHand

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_ReplenishCardHand.GE_ReplenishCardHand_C
// 0x0000 (0x0670 - 0x0670)
class UGE_ReplenishCardHand_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ReplenishCardHand_C">();
	}
	static class UGE_ReplenishCardHand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ReplenishCardHand_C>();
	}
};
static_assert(alignof(UGE_ReplenishCardHand_C) == 0x000010, "Wrong alignment on UGE_ReplenishCardHand_C");
static_assert(sizeof(UGE_ReplenishCardHand_C) == 0x000670, "Wrong size on UGE_ReplenishCardHand_C");

}
