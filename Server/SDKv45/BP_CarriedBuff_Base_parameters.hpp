#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarriedBuff_Base

#include "Basic.hpp"

#include "OrionGame_structs.hpp"


namespace SDK::Params
{

// Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ExecuteUbergraph_BP_CarriedBuff_Base
// 0x0030 (0x0030 - 0x0000)
struct BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOrionTeam                                    CallFunc_GetTeamNum_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_NewAlpha;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionChar*                             K2Node_Event_Pawn;                                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxLifeSpan_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base) == 0x000008, "Wrong alignment on BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base");
static_assert(sizeof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base) == 0x000030, "Wrong size on BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, EntryPoint) == 0x000000, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, K2Node_CustomEvent_DeltaTime) == 0x000004, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_GetTeamNum_ReturnValue) == 0x00000C, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_GetTeamNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_HasAuthority_ReturnValue) == 0x00000D, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000E, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, K2Node_CustomEvent_NewAlpha) == 0x000010, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::K2Node_CustomEvent_NewAlpha' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, K2Node_Event_Pawn) == 0x000018, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::K2Node_Event_Pawn' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_GetMaxLifeSpan_ReturnValue) == 0x000020, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_GetMaxLifeSpan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base, CallFunc_MapRangeUnclamped_ReturnValue) == 0x000028, "Member 'BP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base::CallFunc_MapRangeUnclamped_ReturnValue' has a wrong offset!");

// Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickedUp
// 0x0008 (0x0008 - 0x0000)
struct BP_CarriedBuff_Base_C_OnPickedUp final
{
public:
	class AOrionChar*                             Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CarriedBuff_Base_C_OnPickedUp) == 0x000008, "Wrong alignment on BP_CarriedBuff_Base_C_OnPickedUp");
static_assert(sizeof(BP_CarriedBuff_Base_C_OnPickedUp) == 0x000008, "Wrong size on BP_CarriedBuff_Base_C_OnPickedUp");
static_assert(offsetof(BP_CarriedBuff_Base_C_OnPickedUp, Pawn) == 0x000000, "Member 'BP_CarriedBuff_Base_C_OnPickedUp::Pawn' has a wrong offset!");

// Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CarriedBuff_Base_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CarriedBuff_Base_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CarriedBuff_Base_C_ReceiveTick");
static_assert(sizeof(BP_CarriedBuff_Base_C_ReceiveTick) == 0x000004, "Wrong size on BP_CarriedBuff_Base_C_ReceiveTick");
static_assert(offsetof(BP_CarriedBuff_Base_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CarriedBuff_Base_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ChangeAlphaOnPickup
// 0x0004 (0x0004 - 0x0000)
struct BP_CarriedBuff_Base_C_ChangeAlphaOnPickup final
{
public:
	float                                         NewAlpha;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CarriedBuff_Base_C_ChangeAlphaOnPickup) == 0x000004, "Wrong alignment on BP_CarriedBuff_Base_C_ChangeAlphaOnPickup");
static_assert(sizeof(BP_CarriedBuff_Base_C_ChangeAlphaOnPickup) == 0x000004, "Wrong size on BP_CarriedBuff_Base_C_ChangeAlphaOnPickup");
static_assert(offsetof(BP_CarriedBuff_Base_C_ChangeAlphaOnPickup, NewAlpha) == 0x000000, "Member 'BP_CarriedBuff_Base_C_ChangeAlphaOnPickup::NewAlpha' has a wrong offset!");

// Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.RefreshDespawnTimer
// 0x0004 (0x0004 - 0x0000)
struct BP_CarriedBuff_Base_C_RefreshDespawnTimer final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CarriedBuff_Base_C_RefreshDespawnTimer) == 0x000004, "Wrong alignment on BP_CarriedBuff_Base_C_RefreshDespawnTimer");
static_assert(sizeof(BP_CarriedBuff_Base_C_RefreshDespawnTimer) == 0x000004, "Wrong size on BP_CarriedBuff_Base_C_RefreshDespawnTimer");
static_assert(offsetof(BP_CarriedBuff_Base_C_RefreshDespawnTimer, DeltaTime) == 0x000000, "Member 'BP_CarriedBuff_Base_C_RefreshDespawnTimer::DeltaTime' has a wrong offset!");

// Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.InitCarriedBuff
// 0x0008 (0x0008 - 0x0000)
struct BP_CarriedBuff_Base_C_InitCarriedBuff final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CarriedBuff_Base_C_InitCarriedBuff) == 0x000008, "Wrong alignment on BP_CarriedBuff_Base_C_InitCarriedBuff");
static_assert(sizeof(BP_CarriedBuff_Base_C_InitCarriedBuff) == 0x000008, "Wrong size on BP_CarriedBuff_Base_C_InitCarriedBuff");
static_assert(offsetof(BP_CarriedBuff_Base_C_InitCarriedBuff, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_CarriedBuff_Base_C_InitCarriedBuff::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
