#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_States_Debuff_Poison

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_States_Debuff_Poison.GC_States_Debuff_Poison_C
// 0x0000 (0x0840 - 0x0840)
class AGC_States_Debuff_Poison_C final : public AOrionGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_States_Debuff_Poison_C">();
	}
	static class AGC_States_Debuff_Poison_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_States_Debuff_Poison_C>();
	}
};
static_assert(alignof(AGC_States_Debuff_Poison_C) == 0x000010, "Wrong alignment on AGC_States_Debuff_Poison_C");
static_assert(sizeof(AGC_States_Debuff_Poison_C) == 0x000840, "Wrong size on AGC_States_Debuff_Poison_C");

}
