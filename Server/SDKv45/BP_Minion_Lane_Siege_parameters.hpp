#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Minion_Lane_Siege

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_Minion_Lane_Siege.BP_Minion_Lane_Siege_C.ExecuteUbergraph_BP_Minion_Lane_Siege
// 0x0078 (0x0078 - 0x0000)
struct BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_NewTarget;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionDamageableObjective_Base*         K2Node_DynamicCast_AsOrion_Damageable_Objective_Base; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AOrionCharHero*                         K2Node_DynamicCast_AsOrion_Char_Hero;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingSpec_ReturnValue;             // 0x0030(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingSpec_ReturnValue2;            // 0x0050(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue2; // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege) == 0x000008, "Wrong alignment on BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege");
static_assert(sizeof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege) == 0x000078, "Wrong size on BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, EntryPoint) == 0x000000, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, K2Node_Event_NewTarget) == 0x000008, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::K2Node_Event_NewTarget' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, K2Node_DynamicCast_AsOrion_Damageable_Objective_Base) == 0x000010, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::K2Node_DynamicCast_AsOrion_Damageable_Objective_Base' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, K2Node_DynamicCast_AsOrion_Char_Hero) == 0x000020, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::K2Node_DynamicCast_AsOrion_Char_Hero' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, K2Node_DynamicCast_bSuccess2) == 0x000028, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, CallFunc_MakeOutgoingSpec_ReturnValue) == 0x000030, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::CallFunc_MakeOutgoingSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue) == 0x000048, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, CallFunc_MakeOutgoingSpec_ReturnValue2) == 0x000050, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::CallFunc_MakeOutgoingSpec_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue2) == 0x000068, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000070, "Member 'BP_Minion_Lane_Siege_C_ExecuteUbergraph_BP_Minion_Lane_Siege::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");

// Function BP_Minion_Lane_Siege.BP_Minion_Lane_Siege_C.OnNewTargetAcquired
// 0x0008 (0x0008 - 0x0000)
struct BP_Minion_Lane_Siege_C_OnNewTargetAcquired final
{
public:
	class AActor*                                 NewTarget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Minion_Lane_Siege_C_OnNewTargetAcquired) == 0x000008, "Wrong alignment on BP_Minion_Lane_Siege_C_OnNewTargetAcquired");
static_assert(sizeof(BP_Minion_Lane_Siege_C_OnNewTargetAcquired) == 0x000008, "Wrong size on BP_Minion_Lane_Siege_C_OnNewTargetAcquired");
static_assert(offsetof(BP_Minion_Lane_Siege_C_OnNewTargetAcquired, NewTarget) == 0x000000, "Member 'BP_Minion_Lane_Siege_C_OnNewTargetAcquired::NewTarget' has a wrong offset!");

}
