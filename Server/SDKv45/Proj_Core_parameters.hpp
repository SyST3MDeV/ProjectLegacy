#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Proj_Core

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Proj_Core.Proj_Core_C.ExecuteUbergraph_Proj_Core
// 0x01A0 (0x01A0 - 0x0000)
struct Proj_Core_C_ExecuteUbergraph_Proj_Core final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetTeamColorFromMPC_ReturnValue;          // 0x0008(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0018(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0040(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00D4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00E0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00EC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00F8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0130(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x013C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionChar*                             K2Node_DynamicCast_AsOrion_Char;                   // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0154(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x016C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0178(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0184(0x000C)(IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Proj_Core_C_ExecuteUbergraph_Proj_Core) == 0x000008, "Wrong alignment on Proj_Core_C_ExecuteUbergraph_Proj_Core");
static_assert(sizeof(Proj_Core_C_ExecuteUbergraph_Proj_Core) == 0x0001A0, "Wrong size on Proj_Core_C_ExecuteUbergraph_Proj_Core");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, EntryPoint) == 0x000000, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::EntryPoint' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_GetTeamColorFromMPC_ReturnValue) == 0x000008, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_GetTeamColorFromMPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000018, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000024, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, K2Node_Event_Hit) == 0x000040, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_bBlockingHit) == 0x0000C8, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000C9, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_Time) == 0x0000CC, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_Distance) == 0x0000D0, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_Location) == 0x0000D4, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_ImpactPoint) == 0x0000E0, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_Normal) == 0x0000EC, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_ImpactNormal) == 0x0000F8, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_PhysMat) == 0x000108, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_HitActor) == 0x000110, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_HitComponent) == 0x000118, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_HitBoneName) == 0x000120, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_HitItem) == 0x000128, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_FaceIndex) == 0x00012C, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_TraceStart) == 0x000130, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_BreakHitResult_TraceEnd) == 0x00013C, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, K2Node_DynamicCast_AsOrion_Char) == 0x000148, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::K2Node_DynamicCast_AsOrion_Char' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000154, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_VSize_ReturnValue) == 0x000160, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_DoesSocketExist_ReturnValue) == 0x000164, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000168, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_MakeVector_ReturnValue) == 0x00016C, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_GetSocketLocation_ReturnValue) == 0x000178, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_MakeRotFromX_ReturnValue) == 0x000184, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000190, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Proj_Core_C_ExecuteUbergraph_Proj_Core, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'Proj_Core_C_ExecuteUbergraph_Proj_Core::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Proj_Core.Proj_Core_C.OnHitActor
// 0x0088 (0x0088 - 0x0000)
struct Proj_Core_C_OnHitActor final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Proj_Core_C_OnHitActor) == 0x000008, "Wrong alignment on Proj_Core_C_OnHitActor");
static_assert(sizeof(Proj_Core_C_OnHitActor) == 0x000088, "Wrong size on Proj_Core_C_OnHitActor");
static_assert(offsetof(Proj_Core_C_OnHitActor, Hit) == 0x000000, "Member 'Proj_Core_C_OnHitActor::Hit' has a wrong offset!");

}
