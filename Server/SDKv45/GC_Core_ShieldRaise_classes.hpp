#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Core_ShieldRaise

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Core_ShieldRaise.GC_Core_ShieldRaise_C
// 0x0000 (0x0640 - 0x0640)
class UGC_Core_ShieldRaise_C final : public UOrionGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Core_ShieldRaise_C">();
	}
	static class UGC_Core_ShieldRaise_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Core_ShieldRaise_C>();
	}
};
static_assert(alignof(UGC_Core_ShieldRaise_C) == 0x000010, "Wrong alignment on UGC_Core_ShieldRaise_C");
static_assert(sizeof(UGC_Core_ShieldRaise_C) == 0x000640, "Wrong size on UGC_Core_ShieldRaise_C");

}
