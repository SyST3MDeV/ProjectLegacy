#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyleMinusBorder

#include "Basic.hpp"

#include "ButtonStyleMinusBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle-Border.ButtonStyle-Border_C
// 0x0000 (0x0AA8 - 0x0AA8)
class UButtonStyleMinusBorder_C : public UButtonStyleMinusBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-Border_C">();
	}
	static class UButtonStyleMinusBorder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleMinusBorder_C>();
	}
};
static_assert(alignof(UButtonStyleMinusBorder_C) == 0x000008, "Wrong alignment on UButtonStyleMinusBorder_C");
static_assert(sizeof(UButtonStyleMinusBorder_C) == 0x000AA8, "Wrong size on UButtonStyleMinusBorder_C");

}
