#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_PurifyingStrikes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_PurifyingStrikes.GA_Card_PurifyingStrikes_C
// 0x0030 (0x0BA0 - 0x0B70)
class UGA_Card_PurifyingStrikes_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                  TagContainter;                                     // 0x0B78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Card_PurifyingStrikes(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_PurifyingStrikes_C">();
	}
	static class UGA_Card_PurifyingStrikes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_PurifyingStrikes_C>();
	}
};
static_assert(alignof(UGA_Card_PurifyingStrikes_C) == 0x000010, "Wrong alignment on UGA_Card_PurifyingStrikes_C");
static_assert(sizeof(UGA_Card_PurifyingStrikes_C) == 0x000BA0, "Wrong size on UGA_Card_PurifyingStrikes_C");
static_assert(offsetof(UGA_Card_PurifyingStrikes_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_PurifyingStrikes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_PurifyingStrikes_C, TagContainter) == 0x000B78, "Member 'UGA_Card_PurifyingStrikes_C::TagContainter' has a wrong offset!");

}
