#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_StoreHomeBaseLocation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_StoreHomeBaseLocation.BTTask_StoreHomeBaseLocation_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_StoreHomeBaseLocation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 DestBBKey;                                         // 0x00A8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_StoreHomeBaseLocation(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_StoreHomeBaseLocation_C">();
	}
	static class UBTTask_StoreHomeBaseLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_StoreHomeBaseLocation_C>();
	}
};
static_assert(alignof(UBTTask_StoreHomeBaseLocation_C) == 0x000008, "Wrong alignment on UBTTask_StoreHomeBaseLocation_C");
static_assert(sizeof(UBTTask_StoreHomeBaseLocation_C) == 0x0000D0, "Wrong size on UBTTask_StoreHomeBaseLocation_C");
static_assert(offsetof(UBTTask_StoreHomeBaseLocation_C, UberGraphFrame) == 0x0000A0, "Member 'UBTTask_StoreHomeBaseLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_StoreHomeBaseLocation_C, DestBBKey) == 0x0000A8, "Member 'UBTTask_StoreHomeBaseLocation_C::DestBBKey' has a wrong offset!");

}
