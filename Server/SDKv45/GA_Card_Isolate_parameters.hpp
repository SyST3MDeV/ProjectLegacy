#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Isolate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_Isolate.GA_Card_Isolate_C.ExecuteUbergraph_GA_Card_Isolate
// 0x0140 (0x0140 - 0x0000)
struct GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_SpawnedActor3;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor2;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate2;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate3;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 Temp_object_Variable;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0080(0x0040)(ContainsInstancedReference)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue2; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0114(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOrionAbilityTask_SpawnOrionActor*      CallFunc_SpawnOrionActorTransform_ReturnValue;     // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginSpawningActor_SpawnedActor;          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate) == 0x000010, "Wrong alignment on GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate");
static_assert(sizeof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate) == 0x000140, "Wrong size on GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, EntryPoint) == 0x000000, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CustomEvent_SpawnedActor3) == 0x000008, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CustomEvent_SpawnedActor3' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CustomEvent_SpawnedActor2) == 0x000020, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CustomEvent_SpawnedActor2' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CreateDelegate_OutputDelegate2) == 0x000028, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CustomEvent_SpawnedActor) == 0x000038, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CustomEvent_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CreateDelegate_OutputDelegate3) == 0x000040, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, Temp_object_Variable) == 0x000050, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CreateDelegate_OutputDelegate4) == 0x000058, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, K2Node_CreateDelegate_OutputDelegate5) == 0x000068, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_StartAbilityState_ReturnValue) == 0x000078, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_GetActorInfo_ReturnValue) == 0x000080, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x0000C0, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C8, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_GetAvatarActorFromActorInfo_ReturnValue2) == 0x0000D0, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_GetAvatarActorFromActorInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_GetTransform_ReturnValue) == 0x0000E0, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_GetAbilityLevel_ReturnValue) == 0x000110, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000114, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_SpawnOrionActorTransform_ReturnValue) == 0x000120, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_SpawnOrionActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_BeginSpawningActor_SpawnedActor) == 0x000128, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_BeginSpawningActor_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_BeginSpawningActor_ReturnValue) == 0x000130, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_BeginSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_IsValid_ReturnValue2) == 0x000131, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate, CallFunc_IsValid_ReturnValue3) == 0x000132, "Member 'GA_Card_Isolate_C_ExecuteUbergraph_GA_Card_Isolate::CallFunc_IsValid_ReturnValue3' has a wrong offset!");

// Function GA_Card_Isolate.GA_Card_Isolate_C.FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B final
{
public:
	class AActor*                                 SpawnedActor_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B) == 0x000008, "Wrong alignment on GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B");
static_assert(sizeof(GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B) == 0x000008, "Wrong size on GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B");
static_assert(offsetof(GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B, SpawnedActor_0) == 0x000000, "Member 'GA_Card_Isolate_C_FailedToSpawn_B0DC49B642A6BDBB9CCBBFBAF49B571B::SpawnedActor_0' has a wrong offset!");

// Function GA_Card_Isolate.GA_Card_Isolate_C.NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B final
{
public:
	class AActor*                                 SpawnedActor_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B) == 0x000008, "Wrong alignment on GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B");
static_assert(sizeof(GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B) == 0x000008, "Wrong size on GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B");
static_assert(offsetof(GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B, SpawnedActor_0) == 0x000000, "Member 'GA_Card_Isolate_C_NotAuthority_B0DC49B642A6BDBB9CCBBFBAF49B571B::SpawnedActor_0' has a wrong offset!");

// Function GA_Card_Isolate.GA_Card_Isolate_C.Success_B0DC49B642A6BDBB9CCBBFBAF49B571B
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B final
{
public:
	class AActor*                                 SpawnedActor_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B) == 0x000008, "Wrong alignment on GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B");
static_assert(sizeof(GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B) == 0x000008, "Wrong size on GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B");
static_assert(offsetof(GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B, SpawnedActor_0) == 0x000000, "Member 'GA_Card_Isolate_C_Success_B0DC49B642A6BDBB9CCBBFBAF49B571B::SpawnedActor_0' has a wrong offset!");

}
