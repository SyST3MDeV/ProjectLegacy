#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_CannibalizeMinion

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_CannibalizeMinion.GA_Card_CannibalizeMinion_C.ExecuteUbergraph_GA_Card_CannibalizeMinion
// 0x0140 (0x0140 - 0x0000)
struct GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets;                        // 0x0018(0x0020)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0038(0x0020)()
	class UOrionAbilityTask_StartTargeting*       CallFunc_StartTargeting_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetPrimaryActorFromTargetData_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_NetworkSyncPoint*          CallFunc_WaitNetSync_ReturnValue;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets2;                       // 0x0098(0x0020)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate3;             // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue2; // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_GetAbilityLevel_ReturnValue2;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityLevel_ReturnValue3;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0108(0x0018)()
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x0120(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion) == 0x000008, "Wrong alignment on GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion");
static_assert(sizeof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion) == 0x000140, "Wrong size on GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, EntryPoint) == 0x000000, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, K2Node_CustomEvent_Targets) == 0x000018, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::K2Node_CustomEvent_Targets' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, Temp_struct_Variable) == 0x000038, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_StartTargeting_ReturnValue) == 0x000058, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_StartTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetPrimaryActorFromTargetData_ReturnValue) == 0x000068, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetPrimaryActorFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000070, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetFloatAttribute_ReturnValue) == 0x000074, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, K2Node_CreateDelegate_OutputDelegate2) == 0x000078, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_WaitNetSync_ReturnValue) == 0x000088, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_WaitNetSync_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_IsValid_ReturnValue2) == 0x000090, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, K2Node_CustomEvent_Targets2) == 0x000098, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::K2Node_CustomEvent_Targets2' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, K2Node_CreateDelegate_OutputDelegate3) == 0x0000B8, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C8, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetAbilityLevel_ReturnValue) == 0x0000CC, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000D0, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue2) == 0x0000E0, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetAbilityLevel_ReturnValue2) == 0x0000F0, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetAbilityLevel_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000F4, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000F8, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000FC, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_GetAbilityLevel_ReturnValue3) == 0x000100, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_GetAbilityLevel_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x000104, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000108, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000120, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000138, "Member 'GA_Card_CannibalizeMinion_C_ExecuteUbergraph_GA_Card_CannibalizeMinion::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");

// Function GA_Card_CannibalizeMinion.GA_Card_CannibalizeMinion_C.Cancelled_E903F2DC4E81B0A00B22498C2110BF6B
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B) == 0x000008, "Wrong alignment on GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B");
static_assert(sizeof(GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B) == 0x000020, "Wrong size on GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B, Targets) == 0x000000, "Member 'GA_Card_CannibalizeMinion_C_Cancelled_E903F2DC4E81B0A00B22498C2110BF6B::Targets' has a wrong offset!");

// Function GA_Card_CannibalizeMinion.GA_Card_CannibalizeMinion_C.Confirmed_E903F2DC4E81B0A00B22498C2110BF6B
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B) == 0x000008, "Wrong alignment on GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B");
static_assert(sizeof(GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B) == 0x000020, "Wrong size on GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B");
static_assert(offsetof(GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B, Targets) == 0x000000, "Member 'GA_Card_CannibalizeMinion_C_Confirmed_E903F2DC4E81B0A00B22498C2110BF6B::Targets' has a wrong offset!");

}
