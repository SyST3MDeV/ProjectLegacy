#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_UnstablePurification

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_UnstablePurification.GA_Card_UnstablePurification_C.ExecuteUbergraph_GA_Card_UnstablePurification
// 0x00C0 (0x00C0 - 0x0000)
struct GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0028(0x0018)()
	int32                                         CallFunc_GetAbilityLevel_ReturnValue2;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue2; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x0060(0x0018)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRowHandle_OutResult;    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRowHandle_OutXY;        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_SphereAroundActor_ReturnValue;            // 0x0080(0x0020)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x00A8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_K2_CheckAbilityCost_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification) == 0x000008, "Wrong alignment on GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification");
static_assert(sizeof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification) == 0x0000C0, "Wrong size on GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, EntryPoint) == 0x000000, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_GetAbilityLevel_ReturnValue) == 0x000018, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_RemoveActiveEffectsWithTags_ReturnValue) == 0x00001C, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_RemoveActiveEffectsWithTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x000024, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000028, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_GetAbilityLevel_ReturnValue2) == 0x000040, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_GetAbilityLevel_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_GetValueAtLevel_ReturnValue) == 0x000044, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000048, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_GetAvatarActorFromActorInfo_ReturnValue2) == 0x000058, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_GetAvatarActorFromActorInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000060, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_K2_CommitAbility_ReturnValue) == 0x000078, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_EvaluateCurveTableRowHandle_OutResult) == 0x000079, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_EvaluateCurveTableRowHandle_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_EvaluateCurveTableRowHandle_OutXY) == 0x00007C, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_EvaluateCurveTableRowHandle_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_SphereAroundActor_ReturnValue) == 0x000080, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_SphereAroundActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, K2Node_SwitchEnum_CmpSuccess) == 0x0000A0, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue) == 0x0000A8, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification, CallFunc_K2_CheckAbilityCost_ReturnValue) == 0x0000B8, "Member 'GA_Card_UnstablePurification_C_ExecuteUbergraph_GA_Card_UnstablePurification::CallFunc_K2_CheckAbilityCost_ReturnValue' has a wrong offset!");

}
