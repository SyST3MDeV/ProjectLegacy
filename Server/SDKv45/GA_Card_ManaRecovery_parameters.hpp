#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_ManaRecovery

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_ManaRecovery.GA_Card_ManaRecovery_C.ExecuteUbergraph_GA_Card_ManaRecovery
// 0x0140 (0x0140 - 0x0000)
struct GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo2;     // 0x0048(0x0020)(ConstParm)
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo;      // 0x0068(0x0020)(ConstParm)
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEffectRemovalInfo             Temp_struct_Variable;                              // 0x0098(0x0020)()
	TDelegate<void(bool bMatchesComparison, float CurrentRatio)> K2Node_CreateDelegate_OutputDelegate2;             // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bMatchesComparison;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_CurrentRatio;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitAttributeChangeRatioThreshold* CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate5;             // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x2];                                      // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery) == 0x000008, "Wrong alignment on GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery");
static_assert(sizeof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery) == 0x000140, "Wrong size on GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, EntryPoint) == 0x000000, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CustomEvent_GameplayEffectRemovalInfo2) == 0x000048, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CustomEvent_GameplayEffectRemovalInfo2' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CustomEvent_GameplayEffectRemovalInfo) == 0x000068, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CustomEvent_GameplayEffectRemovalInfo' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, Temp_struct_Variable) == 0x000098, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CreateDelegate_OutputDelegate2) == 0x0000B8, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CustomEvent_bMatchesComparison) == 0x0000C8, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CustomEvent_bMatchesComparison' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CustomEvent_CurrentRatio) == 0x0000CC, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CustomEvent_CurrentRatio' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, Temp_float_Variable) == 0x0000D0, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, Temp_bool_Variable) == 0x0000D4, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue) == 0x0000D8, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CreateDelegate_OutputDelegate3) == 0x0000E0, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CreateDelegate_OutputDelegate4) == 0x0000F8, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_StartAbilityState_ReturnValue) == 0x000108, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_K2_CommitAbility_ReturnValue) == 0x000110, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_IsValid_ReturnValue2) == 0x000111, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, K2Node_CreateDelegate_OutputDelegate5) == 0x000118, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_WaitForGameplayEffectRemoved_ReturnValue) == 0x000128, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_WaitForGameplayEffectRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000130, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_IsValid_ReturnValue3) == 0x000131, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_GetAbilityLevel_ReturnValue) == 0x000134, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000138, "Member 'GA_Card_ManaRecovery_C_ExecuteUbergraph_GA_Card_ManaRecovery::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

// Function GA_Card_ManaRecovery.GA_Card_ManaRecovery_C.OnChange_AC79AE624BF4AF82C582628DA7601DCE
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE final
{
public:
	bool                                          bMatchesComparison;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentRatio;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE) == 0x000004, "Wrong alignment on GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE");
static_assert(sizeof(GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE) == 0x000008, "Wrong size on GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE");
static_assert(offsetof(GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE, bMatchesComparison) == 0x000000, "Member 'GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE::bMatchesComparison' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE, CurrentRatio) == 0x000004, "Member 'GA_Card_ManaRecovery_C_OnChange_AC79AE624BF4AF82C582628DA7601DCE::CurrentRatio' has a wrong offset!");

// Function GA_Card_ManaRecovery.GA_Card_ManaRecovery_C.OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F) == 0x000008, "Wrong alignment on GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F");
static_assert(sizeof(GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F) == 0x000020, "Wrong size on GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F");
static_assert(offsetof(GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F, GameplayEffectRemovalInfo) == 0x000000, "Member 'GA_Card_ManaRecovery_C_OnRemoved_A763E87147C4DB6E94C2EEADDCC5C29F::GameplayEffectRemovalInfo' has a wrong offset!");

// Function GA_Card_ManaRecovery.GA_Card_ManaRecovery_C.InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F) == 0x000008, "Wrong alignment on GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F");
static_assert(sizeof(GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F) == 0x000020, "Wrong size on GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F");
static_assert(offsetof(GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F, GameplayEffectRemovalInfo) == 0x000000, "Member 'GA_Card_ManaRecovery_C_InvalidHandle_A763E87147C4DB6E94C2EEADDCC5C29F::GameplayEffectRemovalInfo' has a wrong offset!");

// Function GA_Card_ManaRecovery.GA_Card_ManaRecovery_C.K2_CanActivateAbility
// 0x0080 (0x0080 - 0x0000)
struct GA_Card_ManaRecovery_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CanActivate_Local;                                 // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AOrionCharHero*                         K2Node_DynamicCast_AsOrion_Char_Hero;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEnergyPercent_ReturnValue;             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Card_ManaRecovery_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Card_ManaRecovery_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Card_ManaRecovery_C_K2_CanActivateAbility) == 0x000080, "Wrong size on GA_Card_ManaRecovery_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, RelevantTags) == 0x000040, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, ReturnValue) == 0x000060, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, CanActivate_Local) == 0x000061, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::CanActivate_Local' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, K2Node_DynamicCast_AsOrion_Char_Hero) == 0x000068, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::K2Node_DynamicCast_AsOrion_Char_Hero' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, CallFunc_GetEnergyPercent_ReturnValue) == 0x000074, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::CallFunc_GetEnergyPercent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_ManaRecovery_C_K2_CanActivateAbility, CallFunc_Less_FloatFloat_ReturnValue) == 0x000078, "Member 'GA_Card_ManaRecovery_C_K2_CanActivateAbility::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}
