#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CoreBoss_WatchHealth

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_CoreBoss_WatchHealth.GA_CoreBoss_WatchHealth_C.ExecuteUbergraph_GA_CoreBoss_WatchHealth
// 0x0060 (0x0060 - 0x0000)
struct GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitAttributeChange*       CallFunc_WaitForAttributeChange_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHealthPCT_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2; // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3; // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue4; // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth) == 0x000008, "Wrong alignment on GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth");
static_assert(sizeof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth) == 0x000060, "Wrong size on GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, EntryPoint) == 0x000000, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_WaitForAttributeChange_ReturnValue) == 0x000018, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_WaitForAttributeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000028, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000030, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_GetHealthPCT_ReturnValue) == 0x000038, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_GetHealthPCT_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00003C, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000040, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2) == 0x000048, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3) == 0x000050, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue4) == 0x000058, "Member 'GA_CoreBoss_WatchHealth_C_ExecuteUbergraph_GA_CoreBoss_WatchHealth::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue4' has a wrong offset!");

}
