#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChestandCrate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OrionGame_structs.hpp"


namespace SDK::Params
{

// Function BP_ChestandCrate.BP_ChestandCrate_C.ExecuteUbergraph_BP_ChestandCrate
// 0x0050 (0x0050 - 0x0000)
struct BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOrionItemRarity                              K2Node_CustomEvent_Rarity;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x0014(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_SetFXAndAnimsByRarity_Open_Montage;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraShake*                           CallFunc_PlayCameraShake_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate) == 0x000008, "Wrong alignment on BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate");
static_assert(sizeof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate) == 0x000050, "Wrong size on BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, EntryPoint) == 0x000000, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, K2Node_CustomEvent_Rarity) == 0x000004, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::K2Node_CustomEvent_Rarity' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_K2_GetComponentLocation_ReturnValue2) == 0x000014, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_K2_GetComponentLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_K2_GetComponentLocation_ReturnValue3) == 0x000020, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_K2_GetComponentLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000030, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_SetFXAndAnimsByRarity_Open_Montage) == 0x000038, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_SetFXAndAnimsByRarity_Open_Montage' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_PlayCameraShake_ReturnValue) == 0x000040, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_PlayCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_ChestandCrate_C_ExecuteUbergraph_BP_ChestandCrate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ChestandCrate.BP_ChestandCrate_C.OpenChest
// 0x0001 (0x0001 - 0x0000)
struct BP_ChestandCrate_C_OpenChest final
{
public:
	EOrionItemRarity                              Rarity;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChestandCrate_C_OpenChest) == 0x000001, "Wrong alignment on BP_ChestandCrate_C_OpenChest");
static_assert(sizeof(BP_ChestandCrate_C_OpenChest) == 0x000001, "Wrong size on BP_ChestandCrate_C_OpenChest");
static_assert(offsetof(BP_ChestandCrate_C_OpenChest, Rarity) == 0x000000, "Member 'BP_ChestandCrate_C_OpenChest::Rarity' has a wrong offset!");

// Function BP_ChestandCrate.BP_ChestandCrate_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_ChestandCrate_C_UserConstructionScript final
{
public:
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x0000(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue2;  // 0x0010(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChestandCrate_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_ChestandCrate_C_UserConstructionScript");
static_assert(sizeof(BP_ChestandCrate_C_UserConstructionScript) == 0x000038, "Wrong size on BP_ChestandCrate_C_UserConstructionScript");
static_assert(offsetof(BP_ChestandCrate_C_UserConstructionScript, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000000, "Member 'BP_ChestandCrate_C_UserConstructionScript::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_UserConstructionScript, CallFunc_K2_GetVectorParameterValue_ReturnValue2) == 0x000010, "Member 'BP_ChestandCrate_C_UserConstructionScript::CallFunc_K2_GetVectorParameterValue_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x000020, "Member 'BP_ChestandCrate_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BP_ChestandCrate_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue2) == 0x000030, "Member 'BP_ChestandCrate_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue2' has a wrong offset!");

// Function BP_ChestandCrate.BP_ChestandCrate_C.SetFXAndAnimsByRarity
// 0x0058 (0x0058 - 0x0000)
struct BP_ChestandCrate_C_SetFXAndAnimsByRarity final
{
public:
	EOrionItemRarity                              Item_Rarity;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Open_Montage;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x0014(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item2;                          // 0x0024(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item3;                          // 0x0034(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item4;                          // 0x0044(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChestandCrate_C_SetFXAndAnimsByRarity) == 0x000008, "Wrong alignment on BP_ChestandCrate_C_SetFXAndAnimsByRarity");
static_assert(sizeof(BP_ChestandCrate_C_SetFXAndAnimsByRarity) == 0x000058, "Wrong size on BP_ChestandCrate_C_SetFXAndAnimsByRarity");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, Item_Rarity) == 0x000000, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::Item_Rarity' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, Open_Montage) == 0x000008, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::Open_Montage' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, CallFunc_Array_Get_Item) == 0x000014, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, CallFunc_Array_Get_Item2) == 0x000024, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, CallFunc_Array_Get_Item3) == 0x000034, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::CallFunc_Array_Get_Item3' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_SetFXAndAnimsByRarity, CallFunc_Array_Get_Item4) == 0x000044, "Member 'BP_ChestandCrate_C_SetFXAndAnimsByRarity::CallFunc_Array_Get_Item4' has a wrong offset!");

// Function BP_ChestandCrate.BP_ChestandCrate_C.ResetColorValuesToDefault
// 0x0010 (0x0010 - 0x0000)
struct BP_ChestandCrate_C_ResetColorValuesToDefault final
{
public:
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x0000(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChestandCrate_C_ResetColorValuesToDefault) == 0x000004, "Wrong alignment on BP_ChestandCrate_C_ResetColorValuesToDefault");
static_assert(sizeof(BP_ChestandCrate_C_ResetColorValuesToDefault) == 0x000010, "Wrong size on BP_ChestandCrate_C_ResetColorValuesToDefault");
static_assert(offsetof(BP_ChestandCrate_C_ResetColorValuesToDefault, CallFunc_Array_Get_Item) == 0x000000, "Member 'BP_ChestandCrate_C_ResetColorValuesToDefault::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_ChestandCrate.BP_ChestandCrate_C.GetFXColorForCurrentRarity
// 0x0074 (0x0074 - 0x0000)
struct BP_ChestandCrate_C_GetFXColorForCurrentRarity final
{
public:
	struct FLinearColor                           OutputColor;                                       // 0x0000(0x0010)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOrionItemRarity                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Array_Get_Item;                           // 0x0014(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item2;                          // 0x0024(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item3;                          // 0x0034(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item4;                          // 0x0044(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Array_Get_Item5;                          // 0x0054(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0064(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChestandCrate_C_GetFXColorForCurrentRarity) == 0x000004, "Wrong alignment on BP_ChestandCrate_C_GetFXColorForCurrentRarity");
static_assert(sizeof(BP_ChestandCrate_C_GetFXColorForCurrentRarity) == 0x000074, "Wrong size on BP_ChestandCrate_C_GetFXColorForCurrentRarity");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, OutputColor) == 0x000000, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::OutputColor' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, Temp_byte_Variable) == 0x000010, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, CallFunc_Array_Get_Item) == 0x000014, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, CallFunc_Array_Get_Item2) == 0x000024, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, CallFunc_Array_Get_Item3) == 0x000034, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::CallFunc_Array_Get_Item3' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, CallFunc_Array_Get_Item4) == 0x000044, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::CallFunc_Array_Get_Item4' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, CallFunc_Array_Get_Item5) == 0x000054, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::CallFunc_Array_Get_Item5' has a wrong offset!");
static_assert(offsetof(BP_ChestandCrate_C_GetFXColorForCurrentRarity, K2Node_Select_Default) == 0x000064, "Member 'BP_ChestandCrate_C_GetFXColorForCurrentRarity::K2Node_Select_Default' has a wrong offset!");

}
