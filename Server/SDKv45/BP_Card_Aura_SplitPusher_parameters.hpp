#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Card_Aura_SplitPusher

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_Card_Aura_SplitPusher.BP_Card_Aura_SplitPusher_C.ExecuteUbergraph_BP_Card_Aura_SplitPusher
// 0x0068 (0x0068 - 0x0000)
struct BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue2;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue2;   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor2;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AOrionCharHero*                         K2Node_DynamicCast_AsOrion_Char_Hero;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionCharHero*                         K2Node_DynamicCast_AsOrion_Char_Hero2;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher) == 0x000008, "Wrong alignment on BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher");
static_assert(sizeof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher) == 0x000068, "Wrong size on BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, EntryPoint) == 0x000000, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, CallFunc_GetOwner_ReturnValue2) == 0x000018, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::CallFunc_GetOwner_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000020, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, CallFunc_GetAbilitySystemComponent_ReturnValue2) == 0x000028, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::CallFunc_GetAbilitySystemComponent_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, K2Node_Event_OtherActor2) == 0x000030, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::K2Node_Event_OtherActor2' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000038, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, K2Node_DynamicCast_AsOrion_Char_Hero) == 0x000040, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::K2Node_DynamicCast_AsOrion_Char_Hero' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, K2Node_Event_OtherActor) == 0x000050, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, K2Node_DynamicCast_AsOrion_Char_Hero2) == 0x000058, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::K2Node_DynamicCast_AsOrion_Char_Hero2' has a wrong offset!");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher, K2Node_DynamicCast_bSuccess2) == 0x000060, "Member 'BP_Card_Aura_SplitPusher_C_ExecuteUbergraph_BP_Card_Aura_SplitPusher::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

// Function BP_Card_Aura_SplitPusher.BP_Card_Aura_SplitPusher_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_Card_Aura_SplitPusher_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_Card_Aura_SplitPusher.BP_Card_Aura_SplitPusher_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_Card_Aura_SplitPusher_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

}
