#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenShotComparisonTools

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct ScreenShotComparisonTools.ImageTolerance
// 0x0010 (0x0010 - 0x0000)
struct FImageTolerance final
{
public:
	uint8                                         Red;                                               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Green;                                             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Blue;                                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Alpha;                                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MinBrightness;                                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MaxBrightness;                                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IgnoreAntiAliasing;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IgnoreColors;                                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumLocalError;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumGlobalError;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FImageTolerance) == 0x000004, "Wrong alignment on FImageTolerance");
static_assert(sizeof(FImageTolerance) == 0x000010, "Wrong size on FImageTolerance");
static_assert(offsetof(FImageTolerance, Red) == 0x000000, "Member 'FImageTolerance::Red' has a wrong offset!");
static_assert(offsetof(FImageTolerance, Green) == 0x000001, "Member 'FImageTolerance::Green' has a wrong offset!");
static_assert(offsetof(FImageTolerance, Blue) == 0x000002, "Member 'FImageTolerance::Blue' has a wrong offset!");
static_assert(offsetof(FImageTolerance, Alpha) == 0x000003, "Member 'FImageTolerance::Alpha' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MinBrightness) == 0x000004, "Member 'FImageTolerance::MinBrightness' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MaxBrightness) == 0x000005, "Member 'FImageTolerance::MaxBrightness' has a wrong offset!");
static_assert(offsetof(FImageTolerance, IgnoreAntiAliasing) == 0x000006, "Member 'FImageTolerance::IgnoreAntiAliasing' has a wrong offset!");
static_assert(offsetof(FImageTolerance, IgnoreColors) == 0x000007, "Member 'FImageTolerance::IgnoreColors' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MaximumLocalError) == 0x000008, "Member 'FImageTolerance::MaximumLocalError' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MaximumGlobalError) == 0x00000C, "Member 'FImageTolerance::MaximumGlobalError' has a wrong offset!");

// ScriptStruct ScreenShotComparisonTools.ImageComparisonResult
// 0x0098 (0x0098 - 0x0000)
struct FImageComparisonResult final
{
public:
	class FString                                 ApprovedFile;                                      // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 IncomingFile;                                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ComparisonFile;                                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReportApprovedFile;                                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReportIncomingFile;                                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReportComparisonFile;                              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MaxLocalDifference;                                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        GlobalDifference;                                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ErrorMessage;                                      // 0x0070(0x0018)(NativeAccessSpecifierPublic)
	struct FImageTolerance                        Tolerance;                                         // 0x0088(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FImageComparisonResult) == 0x000008, "Wrong alignment on FImageComparisonResult");
static_assert(sizeof(FImageComparisonResult) == 0x000098, "Wrong size on FImageComparisonResult");
static_assert(offsetof(FImageComparisonResult, ApprovedFile) == 0x000000, "Member 'FImageComparisonResult::ApprovedFile' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, IncomingFile) == 0x000010, "Member 'FImageComparisonResult::IncomingFile' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ComparisonFile) == 0x000020, "Member 'FImageComparisonResult::ComparisonFile' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ReportApprovedFile) == 0x000030, "Member 'FImageComparisonResult::ReportApprovedFile' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ReportIncomingFile) == 0x000040, "Member 'FImageComparisonResult::ReportIncomingFile' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ReportComparisonFile) == 0x000050, "Member 'FImageComparisonResult::ReportComparisonFile' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, MaxLocalDifference) == 0x000060, "Member 'FImageComparisonResult::MaxLocalDifference' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, GlobalDifference) == 0x000068, "Member 'FImageComparisonResult::GlobalDifference' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ErrorMessage) == 0x000070, "Member 'FImageComparisonResult::ErrorMessage' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, Tolerance) == 0x000088, "Member 'FImageComparisonResult::Tolerance' has a wrong offset!");

}
