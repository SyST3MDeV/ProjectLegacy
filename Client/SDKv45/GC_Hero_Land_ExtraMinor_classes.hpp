#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Hero_Land_ExtraMinor

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Hero_Land_ExtraMinor.GC_Hero_Land_ExtraMinor_C
// 0x0000 (0x0640 - 0x0640)
class UGC_Hero_Land_ExtraMinor_C final : public UOrionGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Hero_Land_ExtraMinor_C">();
	}
	static class UGC_Hero_Land_ExtraMinor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Hero_Land_ExtraMinor_C>();
	}
};
static_assert(alignof(UGC_Hero_Land_ExtraMinor_C) == 0x000010, "Wrong alignment on UGC_Hero_Land_ExtraMinor_C");
static_assert(sizeof(UGC_Hero_Land_ExtraMinor_C) == 0x000640, "Wrong size on UGC_Hero_Land_ExtraMinor_C");

}
