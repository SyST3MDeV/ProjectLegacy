#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Minion_Lane_Siege

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Minion_Lane_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Minion_Lane_Siege.BP_Minion_Lane_Siege_C
// 0x0020 (0x0F30 - 0x0F10)
class ABP_Minion_Lane_Siege_C final : public ABP_Minion_Lane_C
{
public:
	uint8                                         Pad_F0C[0x4];                                      // 0x0F0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Minion_Lane_Siege_C;             // 0x0F10(0x0008)(Transient, DuplicateTransient)
	bool                                          IsTargetingTower;                                  // 0x0F18(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bGameplayEffectHandleSet;                          // 0x0F19(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1A[0x2];                                      // 0x0F1A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            GameplayEffectHandle;                              // 0x0F1C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Minion_Lane_Siege(int32 EntryPoint);
	void NewFunction_0_0();
	void OnNewTargetAcquired(class AActor* NewTarget);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Minion_Lane_Siege_C">();
	}
	static class ABP_Minion_Lane_Siege_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Minion_Lane_Siege_C>();
	}
};
static_assert(alignof(ABP_Minion_Lane_Siege_C) == 0x000010, "Wrong alignment on ABP_Minion_Lane_Siege_C");
static_assert(sizeof(ABP_Minion_Lane_Siege_C) == 0x000F30, "Wrong size on ABP_Minion_Lane_Siege_C");
static_assert(offsetof(ABP_Minion_Lane_Siege_C, UberGraphFrame_BP_Minion_Lane_Siege_C) == 0x000F10, "Member 'ABP_Minion_Lane_Siege_C::UberGraphFrame_BP_Minion_Lane_Siege_C' has a wrong offset!");
static_assert(offsetof(ABP_Minion_Lane_Siege_C, IsTargetingTower) == 0x000F18, "Member 'ABP_Minion_Lane_Siege_C::IsTargetingTower' has a wrong offset!");
static_assert(offsetof(ABP_Minion_Lane_Siege_C, bGameplayEffectHandleSet) == 0x000F19, "Member 'ABP_Minion_Lane_Siege_C::bGameplayEffectHandleSet' has a wrong offset!");
static_assert(offsetof(ABP_Minion_Lane_Siege_C, GameplayEffectHandle) == 0x000F1C, "Member 'ABP_Minion_Lane_Siege_C::GameplayEffectHandle' has a wrong offset!");

}
