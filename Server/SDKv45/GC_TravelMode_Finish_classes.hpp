#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_TravelMode_Finish

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_TravelMode_Finish.GC_TravelMode_Finish_C
// 0x0000 (0x0640 - 0x0640)
class UGC_TravelMode_Finish_C final : public UOrionGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_TravelMode_Finish_C">();
	}
	static class UGC_TravelMode_Finish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_TravelMode_Finish_C>();
	}
};
static_assert(alignof(UGC_TravelMode_Finish_C) == 0x000010, "Wrong alignment on UGC_TravelMode_Finish_C");
static_assert(sizeof(UGC_TravelMode_Finish_C) == 0x000640, "Wrong size on UGC_TravelMode_Finish_C");

}
