#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Aura_Minion_Death_Explode_Minions

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_Aura_Minion_Death_Explode_Minions.GA_Card_Aura_Minion_Death_Explode_Minions_C.ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions
// 0x01C8 (0x01C8 - 0x0000)
struct GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AOrionCharAI*                           CallFunc_GetOrionCharAIFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOrionAbilityTask_WaitKilled*           CallFunc_WaitActorKilled_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Source;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              K2Node_CustomEvent_SpecHandle;                     // 0x0038(0x0018)()
	struct FGameplayEffectSpecHandle              Temp_struct_Variable;                              // 0x0050(0x0018)()
	class AActor*                                 Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets2;                       // 0x0070(0x0020)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets;                        // 0x00A0(0x0020)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate3;             // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable2;                             // 0x00D0(0x0020)()
	class UOrionAbilityTask_StartTargeting*       CallFunc_StartTargeting_ReturnValue;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0100(0x00A8)()
	struct FGameplayEffectContextHandle           CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x01A8(0x0018)()
	class AActor*                                 CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions) == 0x000008, "Wrong alignment on GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions");
static_assert(sizeof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions) == 0x0001C8, "Wrong size on GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, EntryPoint) == 0x000000, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_GetOrionCharAIFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_GetOrionCharAIFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_WaitActorKilled_ReturnValue) == 0x000010, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_WaitActorKilled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CustomEvent_Source) == 0x000030, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CustomEvent_Source' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CustomEvent_SpecHandle) == 0x000038, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CustomEvent_SpecHandle' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, Temp_struct_Variable) == 0x000050, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, Temp_object_Variable) == 0x000068, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CustomEvent_Targets2) == 0x000070, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CustomEvent_Targets2' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CreateDelegate_OutputDelegate2) == 0x000090, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CustomEvent_Targets) == 0x0000A0, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CustomEvent_Targets' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_CreateDelegate_OutputDelegate3) == 0x0000C0, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, Temp_struct_Variable2) == 0x0000D0, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_StartTargeting_ReturnValue) == 0x0000F0, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_StartTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_IsValid_ReturnValue2) == 0x0000F8, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, K2Node_MakeStruct_GameplayEventData) == 0x000100, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_GetGrantedByEffectContext_ReturnValue) == 0x0001A8, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_GetGrantedByEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions, CallFunc_EffectContextGetInstigatorActor_ReturnValue) == 0x0001C0, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_ExecuteUbergraph_GA_Card_Aura_Minion_Death_Explode_Minions::CallFunc_EffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");

// Function GA_Card_Aura_Minion_Death_Explode_Minions.GA_Card_Aura_Minion_Death_Explode_Minions_C.Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC) == 0x000008, "Wrong alignment on GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC");
static_assert(sizeof(GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC) == 0x000020, "Wrong size on GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC, Targets) == 0x000000, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_Cancelled_5A9EFA6E458F83C38FBCF880A855A3AC::Targets' has a wrong offset!");

// Function GA_Card_Aura_Minion_Death_Explode_Minions.GA_Card_Aura_Minion_Death_Explode_Minions_C.Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC) == 0x000008, "Wrong alignment on GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC");
static_assert(sizeof(GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC) == 0x000020, "Wrong size on GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC, Targets) == 0x000000, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_Confirmed_5A9EFA6E458F83C38FBCF880A855A3AC::Targets' has a wrong offset!");

// Function GA_Card_Aura_Minion_Death_Explode_Minions.GA_Card_Aura_Minion_Death_Explode_Minions_C.OnKilled_9DB5FC11463581BE86D3A6862E30B635
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635 final
{
public:
	class AActor*                                 Source;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              SpecHandle;                                        // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635) == 0x000008, "Wrong alignment on GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635");
static_assert(sizeof(GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635) == 0x000020, "Wrong size on GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635, Source) == 0x000000, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635::Source' has a wrong offset!");
static_assert(offsetof(GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635, SpecHandle) == 0x000008, "Member 'GA_Card_Aura_Minion_Death_Explode_Minions_C_OnKilled_9DB5FC11463581BE86D3A6862E30B635::SpecHandle' has a wrong offset!");

}
