#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Suppress_Enemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_Suppress_Enemy.GA_Card_Suppress_Enemy_C
// 0x0050 (0x0BC0 - 0x0B70)
class UGA_Card_Suppress_Enemy_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 TargetingCamera;                                   // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Suppress;                                          // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeToRise;                                        // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0B8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SuppressDuration;                                  // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B94[0x4];                                      // 0x0B94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CleanseGE;                                         // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Rise;                                              // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SuppressCamera;                                    // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            SilenceAndImmunityGE;                              // 0x0BB0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_Suppress_Enemy(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnStateEnded_091292484DB0A58F0478DF91B52A475E();
	void OnStateEnded_4D937EBC4E86A2B2FE00EC9C4BC2CA5A();
	void OnStateInterrupted_091292484DB0A58F0478DF91B52A475E();
	void OnStateInterrupted_4D937EBC4E86A2B2FE00EC9C4BC2CA5A();
	void OnTimedOut_7E3FB3EE4FF319630593DB92659D5B00();
	void OnTimedOut_7F088E8841E6F5D892DB36ADCBD63CC1();
	void OnTimedOutAndDestinationReached_7E3FB3EE4FF319630593DB92659D5B00();
	void OnTimedOutAndDestinationReached_7F088E8841E6F5D892DB36ADCBD63CC1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_Suppress_Enemy_C">();
	}
	static class UGA_Card_Suppress_Enemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_Suppress_Enemy_C>();
	}
};
static_assert(alignof(UGA_Card_Suppress_Enemy_C) == 0x000010, "Wrong alignment on UGA_Card_Suppress_Enemy_C");
static_assert(sizeof(UGA_Card_Suppress_Enemy_C) == 0x000BC0, "Wrong size on UGA_Card_Suppress_Enemy_C");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_Suppress_Enemy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, TargetingCamera) == 0x000B78, "Member 'UGA_Card_Suppress_Enemy_C::TargetingCamera' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, Suppress) == 0x000B80, "Member 'UGA_Card_Suppress_Enemy_C::Suppress' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, TimeToRise) == 0x000B88, "Member 'UGA_Card_Suppress_Enemy_C::TimeToRise' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, Height) == 0x000B8C, "Member 'UGA_Card_Suppress_Enemy_C::Height' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, SuppressDuration) == 0x000B90, "Member 'UGA_Card_Suppress_Enemy_C::SuppressDuration' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, CleanseGE) == 0x000B98, "Member 'UGA_Card_Suppress_Enemy_C::CleanseGE' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, Rise) == 0x000BA0, "Member 'UGA_Card_Suppress_Enemy_C::Rise' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, SuppressCamera) == 0x000BA8, "Member 'UGA_Card_Suppress_Enemy_C::SuppressCamera' has a wrong offset!");
static_assert(offsetof(UGA_Card_Suppress_Enemy_C, SilenceAndImmunityGE) == 0x000BB0, "Member 'UGA_Card_Suppress_Enemy_C::SilenceAndImmunityGE' has a wrong offset!");

}
