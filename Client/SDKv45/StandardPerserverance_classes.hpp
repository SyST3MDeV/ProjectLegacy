#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StandardPerserverance

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StandardPerserverance.StandardPerserverance_C
// 0x0000 (0x0670 - 0x0670)
class UStandardPerserverance_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StandardPerserverance_C">();
	}
	static class UStandardPerserverance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandardPerserverance_C>();
	}
};
static_assert(alignof(UStandardPerserverance_C) == 0x000010, "Wrong alignment on UStandardPerserverance_C");
static_assert(sizeof(UStandardPerserverance_C) == 0x000670, "Wrong size on UStandardPerserverance_C");

}
