#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_KnockUp

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_KnockUp.GC_KnockUp_C
// 0x0000 (0x0840 - 0x0840)
class AGC_KnockUp_C final : public AOrionGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_KnockUp_C">();
	}
	static class AGC_KnockUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_KnockUp_C>();
	}
};
static_assert(alignof(AGC_KnockUp_C) == 0x000010, "Wrong alignment on AGC_KnockUp_C");
static_assert(sizeof(AGC_KnockUp_C) == 0x000840, "Wrong size on AGC_KnockUp_C");

}
