#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIManager

#include "Basic.hpp"

#include "OrionGame_structs.hpp"


namespace SDK::Params
{

// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// 0x0140 (0x0140 - 0x0000)
struct UIManager_C_ExecuteUbergraph_UIManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UOrionAsyncAction_ShowConfirmation*     CallFunc_ShowConfirmationDialog_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOrionDialogDescription                K2Node_Event_Description;                          // 0x0050(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UConfirmationRoot_C*                    K2Node_DynamicCast_AsConfirmation_Root;            // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText;                               // 0x0118(0x0018)()
	bool                                          K2Node_Event_bVisible;                             // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRunningOnUnsupportedGraphicsCard_ReturnValue; // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIManager_C_ExecuteUbergraph_UIManager) == 0x000010, "Wrong alignment on UIManager_C_ExecuteUbergraph_UIManager");
static_assert(sizeof(UIManager_C_ExecuteUbergraph_UIManager) == 0x000140, "Wrong size on UIManager_C_ExecuteUbergraph_UIManager");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, EntryPoint) == 0x000000, "Member 'UIManager_C_ExecuteUbergraph_UIManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_CreateDelegate_OutputDelegate4) == 0x000038, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, CallFunc_ShowConfirmationDialog_ReturnValue) == 0x000048, "Member 'UIManager_C_ExecuteUbergraph_UIManager::CallFunc_ShowConfirmationDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_Event_Description) == 0x000050, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_Event_Description' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'UIManager_C_ExecuteUbergraph_UIManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_DynamicCast_AsConfirmation_Root) == 0x000108, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_DynamicCast_AsConfirmation_Root' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_Event_InText) == 0x000118, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, K2Node_Event_bVisible) == 0x000130, "Member 'UIManager_C_ExecuteUbergraph_UIManager::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(UIManager_C_ExecuteUbergraph_UIManager, CallFunc_IsRunningOnUnsupportedGraphicsCard_ReturnValue) == 0x000131, "Member 'UIManager_C_ExecuteUbergraph_UIManager::CallFunc_IsRunningOnUnsupportedGraphicsCard_ReturnValue' has a wrong offset!");

// Function UIManager.UIManager_C.OnSetMatchInfoVisibility
// 0x0001 (0x0001 - 0x0000)
struct UIManager_C_OnSetMatchInfoVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIManager_C_OnSetMatchInfoVisibility) == 0x000001, "Wrong alignment on UIManager_C_OnSetMatchInfoVisibility");
static_assert(sizeof(UIManager_C_OnSetMatchInfoVisibility) == 0x000001, "Wrong size on UIManager_C_OnSetMatchInfoVisibility");
static_assert(offsetof(UIManager_C_OnSetMatchInfoVisibility, bVisible) == 0x000000, "Member 'UIManager_C_OnSetMatchInfoVisibility::bVisible' has a wrong offset!");

// Function UIManager.UIManager_C.OnSetMatchInfoText
// 0x0018 (0x0018 - 0x0000)
struct UIManager_C_OnSetMatchInfoText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UIManager_C_OnSetMatchInfoText) == 0x000008, "Wrong alignment on UIManager_C_OnSetMatchInfoText");
static_assert(sizeof(UIManager_C_OnSetMatchInfoText) == 0x000018, "Wrong size on UIManager_C_OnSetMatchInfoText");
static_assert(offsetof(UIManager_C_OnSetMatchInfoText, InText) == 0x000000, "Member 'UIManager_C_OnSetMatchInfoText::InText' has a wrong offset!");

// Function UIManager.UIManager_C.OnShowError
// 0x00B0 (0x00B0 - 0x0000)
struct UIManager_C_OnShowError final
{
public:
	struct FOrionDialogDescription                Description;                                       // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UIManager_C_OnShowError) == 0x000010, "Wrong alignment on UIManager_C_OnShowError");
static_assert(sizeof(UIManager_C_OnShowError) == 0x0000B0, "Wrong size on UIManager_C_OnShowError");
static_assert(offsetof(UIManager_C_OnShowError, Description) == 0x000000, "Member 'UIManager_C_OnShowError::Description' has a wrong offset!");

// Function UIManager.UIManager_C.Set Box Content
// 0x0018 (0x0018 - 0x0000)
struct UIManager_C_Set_Box_Content final
{
public:
	class USizeBox*                               Box;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOrionUIStateWidget*                    Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIManager_C_Set_Box_Content) == 0x000008, "Wrong alignment on UIManager_C_Set_Box_Content");
static_assert(sizeof(UIManager_C_Set_Box_Content) == 0x000018, "Wrong size on UIManager_C_Set_Box_Content");
static_assert(offsetof(UIManager_C_Set_Box_Content, Box) == 0x000000, "Member 'UIManager_C_Set_Box_Content::Box' has a wrong offset!");
static_assert(offsetof(UIManager_C_Set_Box_Content, Widget) == 0x000008, "Member 'UIManager_C_Set_Box_Content::Widget' has a wrong offset!");
static_assert(offsetof(UIManager_C_Set_Box_Content, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'UIManager_C_Set_Box_Content::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}
