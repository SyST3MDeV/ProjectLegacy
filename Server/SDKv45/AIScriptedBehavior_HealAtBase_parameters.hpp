#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIScriptedBehavior_HealAtBase

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AIScriptedBehavior_HealAtBase.AIScriptedBehavior_HealAtBase_C.ExecuteUbergraph_AIScriptedBehavior_HealAtBase
// 0x0050 (0x0050 - 0x0000)
struct AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AOrionAIController*                     K2Node_Event_AIController;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_K2_GetEnemyCharacter_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEnergyPercent_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHealthPercent_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue2;     // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_ClaimResource_InTaskOwner_CastInput;      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameplayTask_ClaimResource*            CallFunc_ClaimResource_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase) == 0x000008, "Wrong alignment on AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase");
static_assert(sizeof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase) == 0x000050, "Wrong size on AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, EntryPoint) == 0x000000, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, K2Node_Event_AIController) == 0x000008, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::K2Node_Event_AIController' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_K2_GetEnemyCharacter_ReturnValue) == 0x000018, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_K2_GetEnemyCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_GetEnergyPercent_ReturnValue) == 0x000020, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_GetEnergyPercent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_GetHealthPercent_ReturnValue) == 0x000028, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_GetHealthPercent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00002C, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_GreaterEqual_FloatFloat_ReturnValue2) == 0x00002D, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_GreaterEqual_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_ClaimResource_InTaskOwner_CastInput) == 0x000030, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_ClaimResource_InTaskOwner_CastInput' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_ClaimResource_ReturnValue) == 0x000040, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_ClaimResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase, CallFunc_IsValid_ReturnValue2) == 0x000049, "Member 'AIScriptedBehavior_HealAtBase_C_ExecuteUbergraph_AIScriptedBehavior_HealAtBase::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function AIScriptedBehavior_HealAtBase.AIScriptedBehavior_HealAtBase_C.BehaviorFinished
// 0x0008 (0x0008 - 0x0000)
struct AIScriptedBehavior_HealAtBase_C_BehaviorFinished final
{
public:
	class AOrionAIController*                     AIController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIScriptedBehavior_HealAtBase_C_BehaviorFinished) == 0x000008, "Wrong alignment on AIScriptedBehavior_HealAtBase_C_BehaviorFinished");
static_assert(sizeof(AIScriptedBehavior_HealAtBase_C_BehaviorFinished) == 0x000008, "Wrong size on AIScriptedBehavior_HealAtBase_C_BehaviorFinished");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_BehaviorFinished, AIController) == 0x000000, "Member 'AIScriptedBehavior_HealAtBase_C_BehaviorFinished::AIController' has a wrong offset!");

// Function AIScriptedBehavior_HealAtBase.AIScriptedBehavior_HealAtBase_C.RunBehavior
// 0x0058 (0x0058 - 0x0000)
struct AIScriptedBehavior_HealAtBase_C_RunBehavior final
{
public:
	class AOrionAIController*                     AIController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class AOrionAIBot*                            K2Node_DynamicCast_AsOrion_AIBot;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor)
	bool                                          CallFunc_RunBehavior_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0x0050(0x0008)(NoDestructor)
};
static_assert(alignof(AIScriptedBehavior_HealAtBase_C_RunBehavior) == 0x000008, "Wrong alignment on AIScriptedBehavior_HealAtBase_C_RunBehavior");
static_assert(sizeof(AIScriptedBehavior_HealAtBase_C_RunBehavior) == 0x000058, "Wrong size on AIScriptedBehavior_HealAtBase_C_RunBehavior");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, AIController) == 0x000000, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::AIController' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, ReturnValue) == 0x000008, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, K2Node_DynamicCast_AsOrion_AIBot) == 0x000020, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::K2Node_DynamicCast_AsOrion_AIBot' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, CallFunc_RunBehavior_ReturnValue) == 0x000038, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::CallFunc_RunBehavior_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, K2Node_CreateDelegate_OutputDelegate2) == 0x000040, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(AIScriptedBehavior_HealAtBase_C_RunBehavior, CallFunc_K2_SetTimerDelegate_ReturnValue2) == 0x000050, "Member 'AIScriptedBehavior_HealAtBase_C_RunBehavior::CallFunc_K2_SetTimerDelegate_ReturnValue2' has a wrong offset!");

}
