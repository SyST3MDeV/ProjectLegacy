#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginWindowTencent

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LoginWindowTencent.LoginWindowTencent_C.ExecuteUbergraph_LoginWindowTencent
// 0x0004 (0x0004 - 0x0000)
struct LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent) == 0x000004, "Wrong alignment on LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent");
static_assert(sizeof(LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent) == 0x000004, "Wrong size on LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent");
static_assert(offsetof(LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent, EntryPoint) == 0x000000, "Member 'LoginWindowTencent_C_ExecuteUbergraph_LoginWindowTencent::EntryPoint' has a wrong offset!");

// Function LoginWindowTencent.LoginWindowTencent_C.GetErrorMessageText
// 0x0038 (0x0038 - 0x0000)
struct LoginWindowTencent_C_GetErrorMessageText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UMcpContext*                            CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLoginStatus_ReturnValue;               // 0x0020(0x0018)()
};
static_assert(alignof(LoginWindowTencent_C_GetErrorMessageText) == 0x000008, "Wrong alignment on LoginWindowTencent_C_GetErrorMessageText");
static_assert(sizeof(LoginWindowTencent_C_GetErrorMessageText) == 0x000038, "Wrong size on LoginWindowTencent_C_GetErrorMessageText");
static_assert(offsetof(LoginWindowTencent_C_GetErrorMessageText, ReturnValue) == 0x000000, "Member 'LoginWindowTencent_C_GetErrorMessageText::ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetErrorMessageText, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'LoginWindowTencent_C_GetErrorMessageText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetErrorMessageText, CallFunc_GetLoginStatus_ReturnValue) == 0x000020, "Member 'LoginWindowTencent_C_GetErrorMessageText::CallFunc_GetLoginStatus_ReturnValue' has a wrong offset!");

// Function LoginWindowTencent.LoginWindowTencent_C.ShowErrorMessage
// 0x0020 (0x0020 - 0x0000)
struct LoginWindowTencent_C_ShowErrorMessage final
{
public:
	class FText                                   MESSAGE;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          PlaySoundOnError;                                  // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWindowTencent_C_ShowErrorMessage) == 0x000008, "Wrong alignment on LoginWindowTencent_C_ShowErrorMessage");
static_assert(sizeof(LoginWindowTencent_C_ShowErrorMessage) == 0x000020, "Wrong size on LoginWindowTencent_C_ShowErrorMessage");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, MESSAGE) == 0x000000, "Member 'LoginWindowTencent_C_ShowErrorMessage::MESSAGE' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, PlaySoundOnError) == 0x000018, "Member 'LoginWindowTencent_C_ShowErrorMessage::PlaySoundOnError' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, Temp_bool_Variable) == 0x000019, "Member 'LoginWindowTencent_C_ShowErrorMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, CallFunc_TextIsEmpty_ReturnValue) == 0x00001A, "Member 'LoginWindowTencent_C_ShowErrorMessage::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, Temp_byte_Variable) == 0x00001B, "Member 'LoginWindowTencent_C_ShowErrorMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, Temp_byte_Variable2) == 0x00001C, "Member 'LoginWindowTencent_C_ShowErrorMessage::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_ShowErrorMessage, K2Node_Select_Default) == 0x00001D, "Member 'LoginWindowTencent_C_ShowErrorMessage::K2Node_Select_Default' has a wrong offset!");

// Function LoginWindowTencent.LoginWindowTencent_C.GetLoggingInText
// 0x0078 (0x0078 - 0x0000)
struct LoginWindowTencent_C_GetLoggingInText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class UMcpContext*                            CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLoginStatus_ReturnValue;               // 0x0040(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};
static_assert(alignof(LoginWindowTencent_C_GetLoggingInText) == 0x000008, "Wrong alignment on LoginWindowTencent_C_GetLoggingInText");
static_assert(sizeof(LoginWindowTencent_C_GetLoggingInText) == 0x000078, "Wrong size on LoginWindowTencent_C_GetLoggingInText");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, ReturnValue) == 0x000000, "Member 'LoginWindowTencent_C_GetLoggingInText::ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, Temp_bool_Variable) == 0x000018, "Member 'LoginWindowTencent_C_GetLoggingInText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, Temp_text_Variable) == 0x000020, "Member 'LoginWindowTencent_C_GetLoggingInText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'LoginWindowTencent_C_GetLoggingInText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, CallFunc_GetLoginStatus_ReturnValue) == 0x000040, "Member 'LoginWindowTencent_C_GetLoggingInText::CallFunc_GetLoginStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, CallFunc_TextIsEmpty_ReturnValue) == 0x000058, "Member 'LoginWindowTencent_C_GetLoggingInText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWindowTencent_C_GetLoggingInText, K2Node_Select_Default) == 0x000060, "Member 'LoginWindowTencent_C_GetLoggingInText::K2Node_Select_Default' has a wrong offset!");

// Function LoginWindowTencent.LoginWindowTencent_C.IsInteractable
// 0x0001 (0x0001 - 0x0000)
struct LoginWindowTencent_C_IsInteractable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoginWindowTencent_C_IsInteractable) == 0x000001, "Wrong alignment on LoginWindowTencent_C_IsInteractable");
static_assert(sizeof(LoginWindowTencent_C_IsInteractable) == 0x000001, "Wrong size on LoginWindowTencent_C_IsInteractable");
static_assert(offsetof(LoginWindowTencent_C_IsInteractable, ReturnValue) == 0x000000, "Member 'LoginWindowTencent_C_IsInteractable::ReturnValue' has a wrong offset!");

}
