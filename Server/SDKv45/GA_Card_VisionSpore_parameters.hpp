#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_VisionSpore

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "OrionGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.ExecuteUbergraph_GA_Card_VisionSpore
// 0x01B0 (0x01B0 - 0x0000)
struct GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets2;                       // 0x0008(0x0020)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Targets;                        // 0x0028(0x0020)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0048(0x0020)()
	class UOrionAbilityTask_StartTargeting*       CallFunc_StartTargeting_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOrionAbilityTask_SpawnProjectile*      CallFunc_SpawnProjectile_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOrionAbilityTask_SpawnOrionActor*      CallFunc_SpawnOrionActorTargetData_ReturnValue;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionProjectile*                       CallFunc_BeginSpawningActor_SpawnedActor;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginSpawningActor_SpawnedActor2;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue2;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A3[0x5];                                       // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AOrionProjectile*                       K2Node_CustomEvent_SpawnedProjectile4;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AOrionProjectile* SpawnedProjectile)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AOrionProjectile* SpawnedProjectile)> K2Node_CreateDelegate_OutputDelegate2;             // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class AOrionProjectile*                       K2Node_CustomEvent_SpawnedProjectile3;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionProjectile*                       K2Node_CustomEvent_SpawnedProjectile2;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AOrionProjectile* SpawnedProjectile)> K2Node_CreateDelegate_OutputDelegate3;             // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AOrionProjectile* SpawnedProjectile)> K2Node_CreateDelegate_OutputDelegate4;             // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	class AOrionProjectile*                       K2Node_CustomEvent_SpawnedProjectile;              // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionProjectile*                       Temp_object_Variable;                              // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	class UOrionAbilityTask_WaitProjectileShutdown* CallFunc_WaitProjectileShutdown_ReturnValue;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue4;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate6;             // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor3;                  // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor2;                  // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate7;             // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AActor* SpawnedActor)>   K2Node_CreateDelegate_OutputDelegate8;             // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 K2Node_CustomEvent_SpawnedActor;                   // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Temp_object_Variable2;                             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate9;             // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	class AOrionCharHero*                         CallFunc_GetOrionCharHeroFromActorInfo_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOrionTeam                                    CallFunc_GetTeamNum_ReturnValue;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x6];                                      // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Targets)> K2Node_CreateDelegate_OutputDelegate10;            // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore");
static_assert(sizeof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore) == 0x0001B0, "Wrong size on GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, EntryPoint) == 0x000000, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_Targets2) == 0x000008, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_Targets2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_Targets) == 0x000028, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_Targets' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, Temp_struct_Variable) == 0x000048, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_StartTargeting_ReturnValue) == 0x000068, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_StartTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_SpawnProjectile_ReturnValue) == 0x000078, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_SpawnOrionActorTargetData_ReturnValue) == 0x000080, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_SpawnOrionActorTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_BeginSpawningActor_SpawnedActor) == 0x000088, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_BeginSpawningActor_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_BeginSpawningActor_ReturnValue) == 0x000090, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_BeginSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_BeginSpawningActor_SpawnedActor2) == 0x000098, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_BeginSpawningActor_SpawnedActor2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_BeginSpawningActor_ReturnValue2) == 0x0000A0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_BeginSpawningActor_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_IsValid_ReturnValue2) == 0x0000A1, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_IsValid_ReturnValue3) == 0x0000A2, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedProjectile4) == 0x0000A8, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedProjectile4' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate) == 0x0000B0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate2) == 0x0000C0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedProjectile3) == 0x0000D0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedProjectile3' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedProjectile2) == 0x0000D8, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedProjectile2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate3) == 0x0000E0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate4) == 0x0000F0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedProjectile) == 0x000100, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedProjectile' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, Temp_object_Variable) == 0x000108, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate5) == 0x000110, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_WaitProjectileShutdown_ReturnValue) == 0x000120, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_WaitProjectileShutdown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_IsValid_ReturnValue4) == 0x000128, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_IsValid_ReturnValue4' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate6) == 0x000130, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate6' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedActor3) == 0x000140, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedActor3' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedActor2) == 0x000148, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedActor2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate7) == 0x000150, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate7' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate8) == 0x000160, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate8' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CustomEvent_SpawnedActor) == 0x000170, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CustomEvent_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, Temp_object_Variable2) == 0x000178, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate9) == 0x000180, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate9' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_GetOrionCharHeroFromActorInfo_ReturnValue) == 0x000190, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_GetOrionCharHeroFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_GetTeamNum_ReturnValue) == 0x000198, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_GetTeamNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, CallFunc_K2_CommitAbility_ReturnValue) == 0x000199, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore, K2Node_CreateDelegate_OutputDelegate10) == 0x0001A0, "Member 'GA_Card_VisionSpore_C_ExecuteUbergraph_GA_Card_VisionSpore::K2Node_CreateDelegate_OutputDelegate10' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB");
static_assert(sizeof(GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB) == 0x000020, "Wrong size on GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB");
static_assert(offsetof(GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB, Targets) == 0x000000, "Member 'GA_Card_VisionSpore_C_Cancelled_49072C4F4EE52EE487BD5E9E60A4EEBB::Targets' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB
// 0x0020 (0x0020 - 0x0000)
struct GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB final
{
public:
	struct FGameplayAbilityTargetDataHandle       Targets;                                           // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB");
static_assert(sizeof(GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB) == 0x000020, "Wrong size on GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB");
static_assert(offsetof(GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB, Targets) == 0x000000, "Member 'GA_Card_VisionSpore_C_Confirmed_49072C4F4EE52EE487BD5E9E60A4EEBB::Targets' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6 final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6");
static_assert(sizeof(GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6");
static_assert(offsetof(GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6, SpawnedActor) == 0x000000, "Member 'GA_Card_VisionSpore_C_FailedToSpawn_047C4C824BE42B24A14BB5A4F72FF3B6::SpawnedActor' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D final
{
public:
	class AOrionProjectile*                       SpawnedProjectile;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D");
static_assert(sizeof(GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D");
static_assert(offsetof(GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D, SpawnedProjectile) == 0x000000, "Member 'GA_Card_VisionSpore_C_FailedToSpawn_F6134A1B495CA443835518B7FDB61C5D::SpawnedProjectile' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6 final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6");
static_assert(sizeof(GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6");
static_assert(offsetof(GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6, SpawnedActor) == 0x000000, "Member 'GA_Card_VisionSpore_C_NotAuthority_047C4C824BE42B24A14BB5A4F72FF3B6::SpawnedActor' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.NotAuthority_F6134A1B495CA443835518B7FDB61C5D
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D final
{
public:
	class AOrionProjectile*                       SpawnedProjectile;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D");
static_assert(sizeof(GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D");
static_assert(offsetof(GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D, SpawnedProjectile) == 0x000000, "Member 'GA_Card_VisionSpore_C_NotAuthority_F6134A1B495CA443835518B7FDB61C5D::SpawnedProjectile' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.PreSpawned_F6134A1B495CA443835518B7FDB61C5D
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D final
{
public:
	class AOrionProjectile*                       SpawnedProjectile;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D");
static_assert(sizeof(GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D");
static_assert(offsetof(GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D, SpawnedProjectile) == 0x000000, "Member 'GA_Card_VisionSpore_C_PreSpawned_F6134A1B495CA443835518B7FDB61C5D::SpawnedProjectile' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.Success_047C4C824BE42B24A14BB5A4F72FF3B6
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6 final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6");
static_assert(sizeof(GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6");
static_assert(offsetof(GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6, SpawnedActor) == 0x000000, "Member 'GA_Card_VisionSpore_C_Success_047C4C824BE42B24A14BB5A4F72FF3B6::SpawnedActor' has a wrong offset!");

// Function GA_Card_VisionSpore.GA_Card_VisionSpore_C.Success_F6134A1B495CA443835518B7FDB61C5D
// 0x0008 (0x0008 - 0x0000)
struct GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D final
{
public:
	class AOrionProjectile*                       SpawnedProjectile;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong alignment on GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D");
static_assert(sizeof(GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D) == 0x000008, "Wrong size on GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D");
static_assert(offsetof(GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D, SpawnedProjectile) == 0x000000, "Member 'GA_Card_VisionSpore_C_Success_F6134A1B495CA443835518B7FDB61C5D::SpawnedProjectile' has a wrong offset!");

}
