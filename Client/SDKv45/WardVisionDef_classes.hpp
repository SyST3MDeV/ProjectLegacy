#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WardVisionDef

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WardVisionDef.WardVisionDef_C
// 0x0000 (0x0068 - 0x0068)
class UWardVisionDef_C final : public UOrionVisionDef
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WardVisionDef_C">();
	}
	static class UWardVisionDef_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWardVisionDef_C>();
	}
};
static_assert(alignof(UWardVisionDef_C) == 0x000008, "Wrong alignment on UWardVisionDef_C");
static_assert(sizeof(UWardVisionDef_C) == 0x000068, "Wrong size on UWardVisionDef_C");

}
