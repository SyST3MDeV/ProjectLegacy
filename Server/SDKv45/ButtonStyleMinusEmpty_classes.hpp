#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyleMinusEmpty

#include "Basic.hpp"

#include "ButtonStyleMinusBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-Empty.ButtonStyle-Empty_C
// 0x0000 (0x0AA8 - 0x0AA8)
class UButtonStyleMinusEmpty_C final : public UButtonStyleMinusBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Empty_C">();
	}
	static class UButtonStyleMinusEmpty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleMinusEmpty_C>();
	}
};
static_assert(alignof(UButtonStyleMinusEmpty_C) == 0x000008, "Wrong alignment on UButtonStyleMinusEmpty_C");
static_assert(sizeof(UButtonStyleMinusEmpty_C) == 0x000AA8, "Wrong size on UButtonStyleMinusEmpty_C");

}
