#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControllerDisconnectWarning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ControllerDisconnectWarning.ControllerDisconnectWarning_C
// 0x0010 (0x0458 - 0x0448)
class UControllerDisconnectWarning_C final : public UOrionActivatableWidget
{
public:
	uint8                                         Pad_448[0x8];                                      // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ControllerDisconnectWarning(int32 EntryPoint);
	void OnActivated();
	void OnDeactivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControllerDisconnectWarning_C">();
	}
	static class UControllerDisconnectWarning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerDisconnectWarning_C>();
	}
};
static_assert(alignof(UControllerDisconnectWarning_C) == 0x000008, "Wrong alignment on UControllerDisconnectWarning_C");
static_assert(sizeof(UControllerDisconnectWarning_C) == 0x000458, "Wrong size on UControllerDisconnectWarning_C");
static_assert(offsetof(UControllerDisconnectWarning_C, UberGraphFrame) == 0x000450, "Member 'UControllerDisconnectWarning_C::UberGraphFrame' has a wrong offset!");

}
