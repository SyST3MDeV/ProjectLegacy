#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TencentSensitivityBrowser

#include "Basic.hpp"


namespace SDK::Params
{

// Function TencentSensitivityBrowser.TencentSensitivityBrowser_C.ExecuteUbergraph_TencentSensitivityBrowser
// 0x0090 (0x0090 - 0x0000)
struct TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWidget* WebWidget, class FText Title, class FText Text)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTencentContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOrionBaseButton*                       K2Node_ComponentBoundEvent_Button2;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_CustomEvent_WebWidget;                      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Title;                          // 0x0038(0x0018)()
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0050(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue2;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOrionBaseButton*                       K2Node_ComponentBoundEvent_Button;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTencentContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser) == 0x000008, "Wrong alignment on TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser");
static_assert(sizeof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser) == 0x000090, "Wrong size on TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, EntryPoint) == 0x000000, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::EntryPoint' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, K2Node_ComponentBoundEvent_Button2) == 0x000028, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, K2Node_CustomEvent_WebWidget) == 0x000030, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::K2Node_CustomEvent_WebWidget' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, K2Node_CustomEvent_Title) == 0x000038, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::K2Node_CustomEvent_Title' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, K2Node_CustomEvent_Text) == 0x000050, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_TextIsEmpty_ReturnValue) == 0x000068, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_TextIsEmpty_ReturnValue2) == 0x000069, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_TextIsEmpty_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_AddChild_ReturnValue) == 0x000070, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, K2Node_ComponentBoundEvent_Button) == 0x000080, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser, CallFunc_GetContext_ReturnValue2) == 0x000088, "Member 'TencentSensitivityBrowser_C_ExecuteUbergraph_TencentSensitivityBrowser::CallFunc_GetContext_ReturnValue2' has a wrong offset!");

// Function TencentSensitivityBrowser.TencentSensitivityBrowser_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature final
{
public:
	class UOrionBaseButton*                       Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature");
static_assert(sizeof(TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature");
static_assert(offsetof(TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TencentSensitivityBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function TencentSensitivityBrowser.TencentSensitivityBrowser_C.BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature final
{
public:
	class UOrionBaseButton*                       Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature");
static_assert(sizeof(TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature");
static_assert(offsetof(TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TencentSensitivityBrowser_C_BndEvt__CloseDialogButton_K2Node_ComponentBoundEvent_137_OrionBaseButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function TencentSensitivityBrowser.TencentSensitivityBrowser_C.Display Widget
// 0x0038 (0x0038 - 0x0000)
struct TencentSensitivityBrowser_C_Display_Widget final
{
public:
	class UWidget*                                WebWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Text;                                              // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TencentSensitivityBrowser_C_Display_Widget) == 0x000008, "Wrong alignment on TencentSensitivityBrowser_C_Display_Widget");
static_assert(sizeof(TencentSensitivityBrowser_C_Display_Widget) == 0x000038, "Wrong size on TencentSensitivityBrowser_C_Display_Widget");
static_assert(offsetof(TencentSensitivityBrowser_C_Display_Widget, WebWidget) == 0x000000, "Member 'TencentSensitivityBrowser_C_Display_Widget::WebWidget' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_Display_Widget, Title) == 0x000008, "Member 'TencentSensitivityBrowser_C_Display_Widget::Title' has a wrong offset!");
static_assert(offsetof(TencentSensitivityBrowser_C_Display_Widget, Text) == 0x000020, "Member 'TencentSensitivityBrowser_C_Display_Widget::Text' has a wrong offset!");

}
