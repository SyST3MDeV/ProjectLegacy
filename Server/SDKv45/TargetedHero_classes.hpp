#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetedHero

#include "Basic.hpp"

#include "StandardCustom_Hero_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TargetedHero.TargetedHero_C
// 0x0000 (0x0670 - 0x0670)
class UTargetedHero_C final : public UStandardCustom_Hero_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetedHero_C">();
	}
	static class UTargetedHero_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetedHero_C>();
	}
};
static_assert(alignof(UTargetedHero_C) == 0x000010, "Wrong alignment on UTargetedHero_C");
static_assert(sizeof(UTargetedHero_C) == 0x000670, "Wrong size on UTargetedHero_C");

}
