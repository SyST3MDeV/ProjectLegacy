#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VersionInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VersionInfo.VersionInfo_C
// 0x0028 (0x0228 - 0x0200)
class UVersionInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0200(0x0008)(Transient, DuplicateTransient)
	class UTextBlock*                             BuildDateText;                                     // 0x0208(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BuildVersionText;                                  // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsLiveEnv;                                         // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_VersionInfo(int32 EntryPoint);
	void Construct();
	void UpdateText();
	void SetStyle(bool ShowVersion, bool ShowExtra);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VersionInfo_C">();
	}
	static class UVersionInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVersionInfo_C>();
	}
};
static_assert(alignof(UVersionInfo_C) == 0x000008, "Wrong alignment on UVersionInfo_C");
static_assert(sizeof(UVersionInfo_C) == 0x000228, "Wrong size on UVersionInfo_C");
static_assert(offsetof(UVersionInfo_C, UberGraphFrame) == 0x000200, "Member 'UVersionInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVersionInfo_C, BuildDateText) == 0x000208, "Member 'UVersionInfo_C::BuildDateText' has a wrong offset!");
static_assert(offsetof(UVersionInfo_C, BuildVersionText) == 0x000210, "Member 'UVersionInfo_C::BuildVersionText' has a wrong offset!");
static_assert(offsetof(UVersionInfo_C, TextBlock_4) == 0x000218, "Member 'UVersionInfo_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UVersionInfo_C, IsLiveEnv) == 0x000220, "Member 'UVersionInfo_C::IsLiveEnv' has a wrong offset!");

}
