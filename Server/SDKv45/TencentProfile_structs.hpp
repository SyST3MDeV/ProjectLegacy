#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TencentProfile

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct TencentProfile.SensitiveManagementUrlResponse
// 0x0018 (0x0018 - 0x0000)
struct FSensitiveManagementUrlResponse final
{
public:
	uint32                                        Uin;                                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 URL;                                               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSensitiveManagementUrlResponse) == 0x000008, "Wrong alignment on FSensitiveManagementUrlResponse");
static_assert(sizeof(FSensitiveManagementUrlResponse) == 0x000018, "Wrong size on FSensitiveManagementUrlResponse");
static_assert(offsetof(FSensitiveManagementUrlResponse, Uin) == 0x000000, "Member 'FSensitiveManagementUrlResponse::Uin' has a wrong offset!");
static_assert(offsetof(FSensitiveManagementUrlResponse, URL) == 0x000008, "Member 'FSensitiveManagementUrlResponse::URL' has a wrong offset!");

// ScriptStruct TencentProfile.SensitiveOperationResponse
// 0x0058 (0x0058 - 0x0000)
struct FSensitiveOperationResponse final
{
public:
	class FString                                 Result;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Seq;                                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TssToken;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 VerifyUrl;                                         // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Title;                                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Tips;                                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSensitiveOperationResponse) == 0x000008, "Wrong alignment on FSensitiveOperationResponse");
static_assert(sizeof(FSensitiveOperationResponse) == 0x000058, "Wrong size on FSensitiveOperationResponse");
static_assert(offsetof(FSensitiveOperationResponse, Result) == 0x000000, "Member 'FSensitiveOperationResponse::Result' has a wrong offset!");
static_assert(offsetof(FSensitiveOperationResponse, Seq) == 0x000010, "Member 'FSensitiveOperationResponse::Seq' has a wrong offset!");
static_assert(offsetof(FSensitiveOperationResponse, TssToken) == 0x000018, "Member 'FSensitiveOperationResponse::TssToken' has a wrong offset!");
static_assert(offsetof(FSensitiveOperationResponse, VerifyUrl) == 0x000028, "Member 'FSensitiveOperationResponse::VerifyUrl' has a wrong offset!");
static_assert(offsetof(FSensitiveOperationResponse, Title) == 0x000038, "Member 'FSensitiveOperationResponse::Title' has a wrong offset!");
static_assert(offsetof(FSensitiveOperationResponse, Tips) == 0x000048, "Member 'FSensitiveOperationResponse::Tips' has a wrong offset!");

// ScriptStruct TencentProfile.SensitiveOperationRequestPhase2
// 0x0018 (0x0018 - 0x0000)
struct FSensitiveOperationRequestPhase2 final
{
public:
	class FString                                 Op;                                                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Seq;                                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSensitiveOperationRequestPhase2) == 0x000008, "Wrong alignment on FSensitiveOperationRequestPhase2");
static_assert(sizeof(FSensitiveOperationRequestPhase2) == 0x000018, "Wrong size on FSensitiveOperationRequestPhase2");
static_assert(offsetof(FSensitiveOperationRequestPhase2, Op) == 0x000000, "Member 'FSensitiveOperationRequestPhase2::Op' has a wrong offset!");
static_assert(offsetof(FSensitiveOperationRequestPhase2, Seq) == 0x000010, "Member 'FSensitiveOperationRequestPhase2::Seq' has a wrong offset!");

// ScriptStruct TencentProfile.SensitiveOperationRequestPhase1
// 0x0010 (0x0010 - 0x0000)
struct FSensitiveOperationRequestPhase1 final
{
public:
	class FString                                 Op;                                                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSensitiveOperationRequestPhase1) == 0x000008, "Wrong alignment on FSensitiveOperationRequestPhase1");
static_assert(sizeof(FSensitiveOperationRequestPhase1) == 0x000010, "Wrong size on FSensitiveOperationRequestPhase1");
static_assert(offsetof(FSensitiveOperationRequestPhase1, Op) == 0x000000, "Member 'FSensitiveOperationRequestPhase1::Op' has a wrong offset!");

}
