#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraLensTimer_Countdown

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraLensTimer_Countdown.BP_CameraLensTimer_Countdown_C
// 0x0010 (0x03E0 - 0x03D0)
class ABP_CameraLensTimer_Countdown_C final : public AEmitterCameraLensEffectBase
{
public:
	float                                         TimerDuration;                                     // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraLensTimer_Countdown_C">();
	}
	static class ABP_CameraLensTimer_Countdown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraLensTimer_Countdown_C>();
	}
};
static_assert(alignof(ABP_CameraLensTimer_Countdown_C) == 0x000010, "Wrong alignment on ABP_CameraLensTimer_Countdown_C");
static_assert(sizeof(ABP_CameraLensTimer_Countdown_C) == 0x0003E0, "Wrong size on ABP_CameraLensTimer_Countdown_C");
static_assert(offsetof(ABP_CameraLensTimer_Countdown_C, TimerDuration) == 0x0003D0, "Member 'ABP_CameraLensTimer_Countdown_C::TimerDuration' has a wrong offset!");

}
