#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Banner_Spawn_Ascended

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GC_Banner_Spawn_Ascended.GC_Banner_Spawn_Ascended_C.ExecuteUbergraph_GC_Banner_Spawn_Ascended
// 0x0208 (0x0208 - 0x0000)
struct GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00B8)(ContainsInstancedReference)
	class UParticleSystemComponent*               K2Node_Event_BurstParticleSystems;                 // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       K2Node_Event_AdditionalParticleSystems;            // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	class UNiagaraComponent*                      K2Node_Event_BurstNiagaraParticleSystems;          // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              K2Node_Event_AdditionalNiagaraParticleSystems;     // 0x00E8(0x0010)(ZeroConstructor, ReferenceParm)
	class AOrionBanner*                           K2Node_DynamicCast_AsOrion_Banner;                 // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0104(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0110(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetTeamColorFromMPC_ReturnValue;          // 0x012C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x0140(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x014C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddLocalOffset_SweepHitResult;         // 0x0158(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x01E0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue3;                  // 0x01EC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01F8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended) == 0x000008, "Wrong alignment on GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended");
static_assert(sizeof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended) == 0x000208, "Wrong size on GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, EntryPoint) == 0x000000, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_Event_MyTarget) == 0x000008, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_Event_Parameters) == 0x000010, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_Event_BurstParticleSystems) == 0x0000C8, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_Event_BurstParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_Event_AdditionalParticleSystems) == 0x0000D0, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_Event_AdditionalParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_Event_BurstNiagaraParticleSystems) == 0x0000E0, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_Event_BurstNiagaraParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_Event_AdditionalNiagaraParticleSystems) == 0x0000E8, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_Event_AdditionalNiagaraParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_DynamicCast_AsOrion_Banner) == 0x0000F8, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_DynamicCast_AsOrion_Banner' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_GetComponentBounds_Origin) == 0x000104, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_GetComponentBounds_BoxExtent) == 0x000110, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_GetComponentBounds_SphereRadius) == 0x00011C, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_BreakVector_X) == 0x000120, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_BreakVector_Y) == 0x000124, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_BreakVector_Z) == 0x000128, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_GetTeamColorFromMPC_ReturnValue) == 0x00012C, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_GetTeamColorFromMPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00013C, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000140, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_MakeVector_ReturnValue) == 0x00014C, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_K2_AddLocalOffset_SweepHitResult) == 0x000158, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_K2_AddLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_MakeVector_ReturnValue2) == 0x0001E0, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_MakeVector_ReturnValue3) == 0x0001EC, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_MakeVector_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001F8, "Member 'GC_Banner_Spawn_Ascended_C_ExecuteUbergraph_GC_Banner_Spawn_Ascended::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function GC_Banner_Spawn_Ascended.GC_Banner_Spawn_Ascended_C.K2_OnExecute
// 0x00F0 (0x00F0 - 0x0000)
struct GC_Banner_Spawn_Ascended_C_K2_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UParticleSystemComponent*               BurstParticleSystems;                              // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       AdditionalParticleSystems;                         // 0x00C8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UNiagaraComponent*                      BurstNiagaraParticleSystems;                       // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              AdditionalNiagaraParticleSystems;                  // 0x00E0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GC_Banner_Spawn_Ascended_C_K2_OnExecute) == 0x000008, "Wrong alignment on GC_Banner_Spawn_Ascended_C_K2_OnExecute");
static_assert(sizeof(GC_Banner_Spawn_Ascended_C_K2_OnExecute) == 0x0000F0, "Wrong size on GC_Banner_Spawn_Ascended_C_K2_OnExecute");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_K2_OnExecute, MyTarget) == 0x000000, "Member 'GC_Banner_Spawn_Ascended_C_K2_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_K2_OnExecute, Parameters) == 0x000008, "Member 'GC_Banner_Spawn_Ascended_C_K2_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_K2_OnExecute, BurstParticleSystems) == 0x0000C0, "Member 'GC_Banner_Spawn_Ascended_C_K2_OnExecute::BurstParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_K2_OnExecute, AdditionalParticleSystems) == 0x0000C8, "Member 'GC_Banner_Spawn_Ascended_C_K2_OnExecute::AdditionalParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_K2_OnExecute, BurstNiagaraParticleSystems) == 0x0000D8, "Member 'GC_Banner_Spawn_Ascended_C_K2_OnExecute::BurstNiagaraParticleSystems' has a wrong offset!");
static_assert(offsetof(GC_Banner_Spawn_Ascended_C_K2_OnExecute, AdditionalNiagaraParticleSystems) == 0x0000E0, "Member 'GC_Banner_Spawn_Ascended_C_K2_OnExecute::AdditionalNiagaraParticleSystems' has a wrong offset!");

}
