#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Dragon_MuzzleFlash_Bite

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Dragon_MuzzleFlash_Bite.GC_Dragon_MuzzleFlash_Bite_C
// 0x0000 (0x0640 - 0x0640)
class UGC_Dragon_MuzzleFlash_Bite_C final : public UOrionGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Dragon_MuzzleFlash_Bite_C">();
	}
	static class UGC_Dragon_MuzzleFlash_Bite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Dragon_MuzzleFlash_Bite_C>();
	}
};
static_assert(alignof(UGC_Dragon_MuzzleFlash_Bite_C) == 0x000010, "Wrong alignment on UGC_Dragon_MuzzleFlash_Bite_C");
static_assert(sizeof(UGC_Dragon_MuzzleFlash_Bite_C) == 0x000640, "Wrong size on UGC_Dragon_MuzzleFlash_Bite_C");

}
