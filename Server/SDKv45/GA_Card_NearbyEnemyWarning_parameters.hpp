#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_NearbyEnemyWarning

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.ExecuteUbergraph_GA_Card_NearbyEnemyWarning
// 0x00E0 (0x00E0 - 0x0000)
struct GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_SpawnedActor3;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor2;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate3;             // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate4;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 Temp_object_Variable;                              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class UOrionAbilityTask_SpawnOrionActor*      CallFunc_SpawnOrionActorTransform_ReturnValue;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginSpawningActor_SpawnedActor;          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning) == 0x000010, "Wrong alignment on GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning");
static_assert(sizeof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning) == 0x0000E0, "Wrong size on GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, EntryPoint) == 0x000000, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_StartAbilityState_ReturnValue) == 0x000018, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_IsValid_ReturnValue2) == 0x000030, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CustomEvent_SpawnedActor3) == 0x000038, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CustomEvent_SpawnedActor3' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CustomEvent_SpawnedActor2) == 0x000040, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CustomEvent_SpawnedActor2' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CreateDelegate_OutputDelegate3) == 0x000048, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CustomEvent_SpawnedActor) == 0x000058, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CustomEvent_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CreateDelegate_OutputDelegate4) == 0x000060, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, Temp_object_Variable) == 0x000070, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000078, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, K2Node_CreateDelegate_OutputDelegate5) == 0x000080, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_GetTransform_ReturnValue) == 0x000090, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_SpawnOrionActorTransform_ReturnValue) == 0x0000C0, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_SpawnOrionActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_IsValid_ReturnValue3) == 0x0000C8, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_BeginSpawningActor_SpawnedActor) == 0x0000D0, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_BeginSpawningActor_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning, CallFunc_BeginSpawningActor_ReturnValue) == 0x0000D8, "Member 'GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning::CallFunc_BeginSpawningActor_ReturnValue' has a wrong offset!");

// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7 final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7) == 0x000008, "Wrong alignment on GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7");
static_assert(sizeof(GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7) == 0x000008, "Wrong size on GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7, SpawnedActor) == 0x000000, "Member 'GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7::SpawnedActor' has a wrong offset!");

// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7 final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7) == 0x000008, "Wrong alignment on GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7");
static_assert(sizeof(GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7) == 0x000008, "Wrong size on GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7, SpawnedActor) == 0x000000, "Member 'GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7::SpawnedActor' has a wrong offset!");

// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.Success_FF25A69141E4AE39BFF6D9B868FAC6F7
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7 final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7) == 0x000008, "Wrong alignment on GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7");
static_assert(sizeof(GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7) == 0x000008, "Wrong size on GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7");
static_assert(offsetof(GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7, SpawnedActor) == 0x000000, "Member 'GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7::SpawnedActor' has a wrong offset!");

}
