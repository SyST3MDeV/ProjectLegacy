#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Shield_Self_Or_Ally

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_Shield_Self_Or_Ally.GA_Card_Shield_Self_Or_Ally_C.ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally
// 0x00E0 (0x00E0 - 0x0000)
struct GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets2;                       // 0x0008(0x0020)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets;                        // 0x0028(0x0020)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0058(0x0020)()
	class UOrionAbilityTask_StartTargeting*       CallFunc_StartTargeting_ReturnValue;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate4;             // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally) == 0x000008, "Wrong alignment on GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally");
static_assert(sizeof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally) == 0x0000E0, "Wrong size on GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, EntryPoint) == 0x000000, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, K2Node_CustomEvent_Targets2) == 0x000008, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::K2Node_CustomEvent_Targets2' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, K2Node_CustomEvent_Targets) == 0x000028, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::K2Node_CustomEvent_Targets' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, Temp_struct_Variable) == 0x000058, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_StartTargeting_ReturnValue) == 0x000078, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_StartTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, K2Node_CreateDelegate_OutputDelegate2) == 0x000088, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, K2Node_CreateDelegate_OutputDelegate3) == 0x000098, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_StartAbilityState_ReturnValue) == 0x0000A8, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_IsValid_ReturnValue2) == 0x0000B0, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, K2Node_CreateDelegate_OutputDelegate4) == 0x0000B8, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000C8, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_GetAbilityLevel_ReturnValue) == 0x0000CC, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000D0, "Member 'GA_Card_Shield_Self_Or_Ally_C_ExecuteUbergraph_GA_Card_Shield_Self_Or_Ally::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

// Function GA_Card_Shield_Self_Or_Ally.GA_Card_Shield_Self_Or_Ally_C.Cancelled_67B3C826479799D049A6259403E1213A
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A) == 0x000008, "Wrong alignment on GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A");
static_assert(sizeof(GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A) == 0x000020, "Wrong size on GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A, Targets) == 0x000000, "Member 'GA_Card_Shield_Self_Or_Ally_C_Cancelled_67B3C826479799D049A6259403E1213A::Targets' has a wrong offset!");

// Function GA_Card_Shield_Self_Or_Ally.GA_Card_Shield_Self_Or_Ally_C.Confirmed_67B3C826479799D049A6259403E1213A
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A) == 0x000008, "Wrong alignment on GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A");
static_assert(sizeof(GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A) == 0x000020, "Wrong size on GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A");
static_assert(offsetof(GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A, Targets) == 0x000000, "Member 'GA_Card_Shield_Self_Or_Ally_C_Confirmed_67B3C826479799D049A6259403E1213A::Targets' has a wrong offset!");

}
