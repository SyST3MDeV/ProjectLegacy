#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Proj_Gem_Multishot_SideBolt

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Proj_Gem_Multishot_SideBolt.Proj_Gem_Multishot_SideBolt_C.ExecuteUbergraph_Proj_Gem_Multishot_SideBolt
// 0x0058 (0x0058 - 0x0000)
struct Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0014(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x002C(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x004C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt) == 0x000008, "Wrong alignment on Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt");
static_assert(sizeof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt) == 0x000058, "Wrong size on Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, EntryPoint) == 0x000000, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::EntryPoint' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000014, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000020, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_MakeRotFromX_ReturnValue) == 0x00002C, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000040, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000048, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt, CallFunc_MakeVector_ReturnValue) == 0x00004C, "Member 'Proj_Gem_Multishot_SideBolt_C_ExecuteUbergraph_Proj_Gem_Multishot_SideBolt::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

}
