#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NVShieldTextPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NVShieldTextPopup.NVShieldTextPopup_C
// 0x0020 (0x0300 - 0x02E0)
class UNVShieldTextPopup_C final : public UOrionEditableTextPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(Transient, DuplicateTransient)
	class UDefaultButton_C*                       CancelButton;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultButton_C*                       CommitButton;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_125_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
	void BndEvt__CommitButton_K2Node_ComponentBoundEvent_111_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
	void ExecuteUbergraph_NVShieldTextPopup(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NVShieldTextPopup_C">();
	}
	static class UNVShieldTextPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNVShieldTextPopup_C>();
	}
};
static_assert(alignof(UNVShieldTextPopup_C) == 0x000008, "Wrong alignment on UNVShieldTextPopup_C");
static_assert(sizeof(UNVShieldTextPopup_C) == 0x000300, "Wrong size on UNVShieldTextPopup_C");
static_assert(offsetof(UNVShieldTextPopup_C, UberGraphFrame) == 0x0002E0, "Member 'UNVShieldTextPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNVShieldTextPopup_C, CancelButton) == 0x0002E8, "Member 'UNVShieldTextPopup_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UNVShieldTextPopup_C, CommitButton) == 0x0002F0, "Member 'UNVShieldTextPopup_C::CommitButton' has a wrong offset!");
static_assert(offsetof(UNVShieldTextPopup_C, Image_0) == 0x0002F8, "Member 'UNVShieldTextPopup_C::Image_0' has a wrong offset!");

}
