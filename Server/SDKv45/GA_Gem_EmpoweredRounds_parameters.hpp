#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gem_EmpoweredRounds

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "OrionGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Gem_EmpoweredRounds.GA_Gem_EmpoweredRounds_C.ExecuteUbergraph_GA_Gem_EmpoweredRounds
// 0x01E0 (0x01E0 - 0x0000)
struct GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Temp_struct_Variable;                              // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              Temp_struct_Variable2;                             // 0x0010(0x0018)()
	class AActor*                                 Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOrionTeam                                    Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0038(0x0020)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Target;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              K2Node_CustomEvent_SpecHandle;                     // 0x0088(0x0018)()
	struct FActiveGameplayEffectHandle            K2Node_CustomEvent_ActiveHandle;                   // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x00B0(0x0040)(ContainsInstancedReference)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue2;                // 0x00F0(0x0040)(ContainsInstancedReference)
	TDelegate<void(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0148(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IOrionTeamActorInterface> K2Node_DynamicCast_AsOrion_Team_Actor_Interface;   // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EOrionTeam                                    CallFunc_GetTeamNum_ReturnValue;                   // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17B[0x5];                                      // 0x017B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOrionAbilityTargetDataFilter          K2Node_MakeStruct_OrionAbilityTargetDataFilter;    // 0x0180(0x0030)()
	struct FGameplayTargetDataFilterHandle        CallFunc_MakeOrionFilterHandle_ReturnValue;        // 0x01B0(0x0010)()
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x01C4(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEffectApplied_Target* CallFunc_WaitGameplayEffectAppliedToTarget_ReturnValue; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue2;  // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds) == 0x000008, "Wrong alignment on GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds");
static_assert(sizeof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds) == 0x0001E0, "Wrong size on GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, EntryPoint) == 0x000000, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, Temp_struct_Variable) == 0x000004, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, Temp_struct_Variable2) == 0x000010, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, Temp_object_Variable) == 0x000028, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, Temp_byte_Variable) == 0x000030, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000038, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_CreateDelegate_OutputDelegate2) == 0x000068, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_StartAbilityState_ReturnValue) == 0x000078, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_CustomEvent_Target) == 0x000080, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_CustomEvent_SpecHandle) == 0x000088, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_CustomEvent_SpecHandle' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_CustomEvent_ActiveHandle) == 0x0000A0, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_CustomEvent_ActiveHandle' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_GetActorInfo_ReturnValue) == 0x0000B0, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_GetActorInfo_ReturnValue2) == 0x0000F0, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_GetActorInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_CreateDelegate_OutputDelegate3) == 0x000130, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000140, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_GetAbilityLevel_ReturnValue) == 0x000144, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000148, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000158, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_Less_FloatFloat_ReturnValue) == 0x000160, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_DynamicCast_AsOrion_Team_Actor_Interface) == 0x000168, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_DynamicCast_AsOrion_Team_Actor_Interface' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_DynamicCast_bSuccess) == 0x000178, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_GetTeamNum_ReturnValue) == 0x000179, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_GetTeamNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00017A, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, K2Node_MakeStruct_OrionAbilityTargetDataFilter) == 0x000180, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::K2Node_MakeStruct_OrionAbilityTargetDataFilter' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_MakeOrionFilterHandle_ReturnValue) == 0x0001B0, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_MakeOrionFilterHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001C0, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0001C4, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_WaitGameplayEffectAppliedToTarget_ReturnValue) == 0x0001D0, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_WaitGameplayEffectAppliedToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_IsValid_ReturnValue2) == 0x0001D8, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds, CallFunc_RemoveActiveGameplayEffect_ReturnValue2) == 0x0001D9, "Member 'GA_Gem_EmpoweredRounds_C_ExecuteUbergraph_GA_Gem_EmpoweredRounds::CallFunc_RemoveActiveGameplayEffect_ReturnValue2' has a wrong offset!");

// Function GA_Gem_EmpoweredRounds.GA_Gem_EmpoweredRounds_C.OnApplied_B27C2F564909BDCF16AB35B5B853AD39
// 0x0028 (0x0028 - 0x0000)
struct GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39 final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              SpecHandle;                                        // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle            ActiveHandle;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39) == 0x000008, "Wrong alignment on GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39");
static_assert(sizeof(GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39) == 0x000028, "Wrong size on GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39, Target) == 0x000000, "Member 'GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39::Target' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39, SpecHandle) == 0x000008, "Member 'GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39::SpecHandle' has a wrong offset!");
static_assert(offsetof(GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39, ActiveHandle) == 0x000020, "Member 'GA_Gem_EmpoweredRounds_C_OnApplied_B27C2F564909BDCF16AB35B5B853AD39::ActiveHandle' has a wrong offset!");

}
