#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_StoreHomeBaseLocation

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTTask_StoreHomeBaseLocation.BTTask_StoreHomeBaseLocation_C.ExecuteUbergraph_BTTask_StoreHomeBaseLocation
// 0x0028 (0x0028 - 0x0000)
struct BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionAIBot*                            K2Node_DynamicCast_AsOrion_AIBot;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation) == 0x000008, "Wrong alignment on BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation");
static_assert(sizeof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation) == 0x000028, "Wrong size on BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation, EntryPoint) == 0x000000, "Member 'BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation, K2Node_DynamicCast_AsOrion_AIBot) == 0x000018, "Member 'BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation::K2Node_DynamicCast_AsOrion_AIBot' has a wrong offset!");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTTask_StoreHomeBaseLocation_C_ExecuteUbergraph_BTTask_StoreHomeBaseLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BTTask_StoreHomeBaseLocation.BTTask_StoreHomeBaseLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_StoreHomeBaseLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}
