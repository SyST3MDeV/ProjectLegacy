#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Active_Grant_Passive_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_Active_Grant_Passive_Parent.GA_Card_Active_Grant_Passive_Parent_C
// 0x0020 (0x0B90 - 0x0B70)
class UGA_Card_Active_Grant_Passive_Parent_C : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 GE_ToApply;                                        // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CardActivateSound;                                 // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stacks;                                            // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_Active_Grant_Passive_Parent(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_Active_Grant_Passive_Parent_C">();
	}
	static class UGA_Card_Active_Grant_Passive_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_Active_Grant_Passive_Parent_C>();
	}
};
static_assert(alignof(UGA_Card_Active_Grant_Passive_Parent_C) == 0x000010, "Wrong alignment on UGA_Card_Active_Grant_Passive_Parent_C");
static_assert(sizeof(UGA_Card_Active_Grant_Passive_Parent_C) == 0x000B90, "Wrong size on UGA_Card_Active_Grant_Passive_Parent_C");
static_assert(offsetof(UGA_Card_Active_Grant_Passive_Parent_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_Active_Grant_Passive_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_Active_Grant_Passive_Parent_C, GE_ToApply) == 0x000B78, "Member 'UGA_Card_Active_Grant_Passive_Parent_C::GE_ToApply' has a wrong offset!");
static_assert(offsetof(UGA_Card_Active_Grant_Passive_Parent_C, CardActivateSound) == 0x000B80, "Member 'UGA_Card_Active_Grant_Passive_Parent_C::CardActivateSound' has a wrong offset!");
static_assert(offsetof(UGA_Card_Active_Grant_Passive_Parent_C, Stacks) == 0x000B88, "Member 'UGA_Card_Active_Grant_Passive_Parent_C::Stacks' has a wrong offset!");

}
