#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_ExecutionersRush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_ExecutionersRush.GA_Card_ExecutionersRush_C
// 0x0010 (0x0B80 - 0x0B70)
class UGA_Card_ExecutionersRush_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	float                                         DashStrength;                                      // 0x0B78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DashDuration;                                      // 0x0B7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_ExecutionersRush(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnFinish_3DB5536C45C58FF67F355EAEB3614575();
	void OnLanded_3DB5536C45C58FF67F355EAEB3614575();
	void OnPress_7BF7F73446E9EEF62B7AEAB2BAEFDBC7(float TimeWaited, const struct FVector& Acceleration);
	void OnStateEnded_0B1F53954DB3843A63497D826D7A4AB3();
	void OnStateInterrupted_0B1F53954DB3843A63497D826D7A4AB3();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_ExecutionersRush_C">();
	}
	static class UGA_Card_ExecutionersRush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_ExecutionersRush_C>();
	}
};
static_assert(alignof(UGA_Card_ExecutionersRush_C) == 0x000010, "Wrong alignment on UGA_Card_ExecutionersRush_C");
static_assert(sizeof(UGA_Card_ExecutionersRush_C) == 0x000B80, "Wrong size on UGA_Card_ExecutionersRush_C");
static_assert(offsetof(UGA_Card_ExecutionersRush_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_ExecutionersRush_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_ExecutionersRush_C, DashStrength) == 0x000B78, "Member 'UGA_Card_ExecutionersRush_C::DashStrength' has a wrong offset!");
static_assert(offsetof(UGA_Card_ExecutionersRush_C, DashDuration) == 0x000B7C, "Member 'UGA_Card_ExecutionersRush_C::DashDuration' has a wrong offset!");

}
