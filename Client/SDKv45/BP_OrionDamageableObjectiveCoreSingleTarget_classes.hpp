#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OrionDamageableObjectiveCoreSingleTarget

#include "Basic.hpp"

#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OrionDamageableObjectiveCoreSingleTarget.BP_OrionDamageableObjectiveCoreSingleTarget_C
// 0x0010 (0x09D0 - 0x09C0)
class ABP_OrionDamageableObjectiveCoreSingleTarget_C : public AOrionDamageableObjective_CoreSingleTarget
{
public:
	class UAIInfluenceSourceComponent*            AIInfluenceSource;                                 // 0x09C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          RangeHidden;                                       // 0x09C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();
	void ReturnValidOverlapActor(class AActor* OverlapActor, class AActor** ReturnActor, bool* IsValid);
	void HandlePerfSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OrionDamageableObjectiveCoreSingleTarget_C">();
	}
	static class ABP_OrionDamageableObjectiveCoreSingleTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OrionDamageableObjectiveCoreSingleTarget_C>();
	}
};
static_assert(alignof(ABP_OrionDamageableObjectiveCoreSingleTarget_C) == 0x000008, "Wrong alignment on ABP_OrionDamageableObjectiveCoreSingleTarget_C");
static_assert(sizeof(ABP_OrionDamageableObjectiveCoreSingleTarget_C) == 0x0009D0, "Wrong size on ABP_OrionDamageableObjectiveCoreSingleTarget_C");
static_assert(offsetof(ABP_OrionDamageableObjectiveCoreSingleTarget_C, AIInfluenceSource) == 0x0009C0, "Member 'ABP_OrionDamageableObjectiveCoreSingleTarget_C::AIInfluenceSource' has a wrong offset!");
static_assert(offsetof(ABP_OrionDamageableObjectiveCoreSingleTarget_C, RangeHidden) == 0x0009C8, "Member 'ABP_OrionDamageableObjectiveCoreSingleTarget_C::RangeHidden' has a wrong offset!");

}
