#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Item_Debuff_Minor_Burst_Growth

#include "Basic.hpp"

#include "GC_Item_Debuff_Minor_Burst_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Item_Debuff_Minor_Burst_Growth.GC_Item_Debuff_Minor_Burst_Growth_C
// 0x0000 (0x0850 - 0x0850)
class AGC_Item_Debuff_Minor_Burst_Growth_C final : public AGC_Item_Debuff_Minor_Burst_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Item_Debuff_Minor_Burst_Growth_C">();
	}
	static class AGC_Item_Debuff_Minor_Burst_Growth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Item_Debuff_Minor_Burst_Growth_C>();
	}
};
static_assert(alignof(AGC_Item_Debuff_Minor_Burst_Growth_C) == 0x000010, "Wrong alignment on AGC_Item_Debuff_Minor_Burst_Growth_C");
static_assert(sizeof(AGC_Item_Debuff_Minor_Burst_Growth_C) == 0x000850, "Wrong size on AGC_Item_Debuff_Minor_Burst_Growth_C");

}
