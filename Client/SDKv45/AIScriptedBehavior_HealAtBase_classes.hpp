#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIScriptedBehavior_HealAtBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIScriptedBehavior_HealAtBase.AIScriptedBehavior_HealAtBase_C
// 0x0030 (0x0070 - 0x0040)
class UAIScriptedBehavior_HealAtBase_C final : public UAIScriptedBehavior
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(Transient, DuplicateTransient)
	struct FTimerHandle                           BehTickTimer;                                      // 0x0048(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AOrionAIBot*                            AIBot;                                             // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayTask_ClaimResource*            LogicLockTask;                                     // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionAIBot*                            NewVar_0;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RequiredHealthPct;                                 // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RequiredEnergyPct;                                 // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIScriptedBehavior_HealAtBase(int32 EntryPoint);
	void Setup();
	void BehTick();
	void BehaviorFinished(class AOrionAIController* AIController);
	bool RunBehavior(class AOrionAIController* AIController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIScriptedBehavior_HealAtBase_C">();
	}
	static class UAIScriptedBehavior_HealAtBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIScriptedBehavior_HealAtBase_C>();
	}
};
static_assert(alignof(UAIScriptedBehavior_HealAtBase_C) == 0x000008, "Wrong alignment on UAIScriptedBehavior_HealAtBase_C");
static_assert(sizeof(UAIScriptedBehavior_HealAtBase_C) == 0x000070, "Wrong size on UAIScriptedBehavior_HealAtBase_C");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, UberGraphFrame) == 0x000040, "Member 'UAIScriptedBehavior_HealAtBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, BehTickTimer) == 0x000048, "Member 'UAIScriptedBehavior_HealAtBase_C::BehTickTimer' has a wrong offset!");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, AIBot) == 0x000050, "Member 'UAIScriptedBehavior_HealAtBase_C::AIBot' has a wrong offset!");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, LogicLockTask) == 0x000058, "Member 'UAIScriptedBehavior_HealAtBase_C::LogicLockTask' has a wrong offset!");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, NewVar_0) == 0x000060, "Member 'UAIScriptedBehavior_HealAtBase_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, RequiredHealthPct) == 0x000068, "Member 'UAIScriptedBehavior_HealAtBase_C::RequiredHealthPct' has a wrong offset!");
static_assert(offsetof(UAIScriptedBehavior_HealAtBase_C, RequiredEnergyPct) == 0x00006C, "Member 'UAIScriptedBehavior_HealAtBase_C::RequiredEnergyPct' has a wrong offset!");

}
