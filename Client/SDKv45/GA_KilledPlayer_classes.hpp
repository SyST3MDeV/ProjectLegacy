#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_KilledPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_KilledPlayer.GA_KilledPlayer_C
// 0x0020 (0x0B90 - 0x0B70)
class UGA_KilledPlayer_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	bool                                          IsDebug;                                           // 0x0B78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B79[0x3];                                      // 0x0B79(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeToWaitBeforeCelebration;                       // 0x0B7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenPossibleCelebrations;                   // 0x0B80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_KilledPlayer(int32 EntryPoint);
	void Event_ResetWaitingForKill();
	void K2_ActivateAbility();
	void OnBlendOut_85E4D7314684E5EDDCBE90BF79FCAA8A(class FName NotifyName);
	void OnCancelled_85E4D7314684E5EDDCBE90BF79FCAA8A(class FName NotifyName);
	void OnCompleted_85E4D7314684E5EDDCBE90BF79FCAA8A(class FName NotifyName);
	void OnFinish_B8712A844AA3F766296D879C903E48B3();
	void OnInterrupted_85E4D7314684E5EDDCBE90BF79FCAA8A(class FName NotifyName);
	void OnMinionAssist_2C22F3AC4F27DD144E0FB3847E760019(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnMinionKill_2C22F3AC4F27DD144E0FB3847E760019(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnNotifyBegin_85E4D7314684E5EDDCBE90BF79FCAA8A(class FName NotifyName);
	void OnNotifyEnd_85E4D7314684E5EDDCBE90BF79FCAA8A(class FName NotifyName);
	void OnPlayerAssist_2C22F3AC4F27DD144E0FB3847E760019(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnPlayerKill_2C22F3AC4F27DD144E0FB3847E760019(int32 NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
	void OnSync_C53470D5432D248CD09B2BA3F6C7CEB5();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_KilledPlayer_C">();
	}
	static class UGA_KilledPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_KilledPlayer_C>();
	}
};
static_assert(alignof(UGA_KilledPlayer_C) == 0x000010, "Wrong alignment on UGA_KilledPlayer_C");
static_assert(sizeof(UGA_KilledPlayer_C) == 0x000B90, "Wrong size on UGA_KilledPlayer_C");
static_assert(offsetof(UGA_KilledPlayer_C, UberGraphFrame) == 0x000B70, "Member 'UGA_KilledPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_KilledPlayer_C, IsDebug) == 0x000B78, "Member 'UGA_KilledPlayer_C::IsDebug' has a wrong offset!");
static_assert(offsetof(UGA_KilledPlayer_C, TimeToWaitBeforeCelebration) == 0x000B7C, "Member 'UGA_KilledPlayer_C::TimeToWaitBeforeCelebration' has a wrong offset!");
static_assert(offsetof(UGA_KilledPlayer_C, TimeBetweenPossibleCelebrations) == 0x000B80, "Member 'UGA_KilledPlayer_C::TimeBetweenPossibleCelebrations' has a wrong offset!");

}
