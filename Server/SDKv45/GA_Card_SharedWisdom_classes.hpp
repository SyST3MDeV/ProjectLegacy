#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_SharedWisdom

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Card_SharedWisdom.GA_Card_SharedWisdom_C
// 0x0010 (0x0B80 - 0x0B70)
class UGA_Card_SharedWisdom_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class AActor*                                 Actor;                                             // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Card_SharedWisdom(int32 EntryPoint);
	void EventReceived_1DDCDE4F46E76670F1B154B5DCF3D2D1(const struct FGameplayEventData& Payload);
	void EventReceived_A95A34DE4407131AC731D9901B0B837F(const struct FGameplayEventData& Payload);
	void FailedToSpawn_B143DB6845AC5231001EC3A424575F8C(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void NotAuthority_B143DB6845AC5231001EC3A424575F8C(class AActor* SpawnedActor);
	void OnStateEnded_CC1F2A0C49856B13EA975CB61029C536();
	void OnStateInterrupted_CC1F2A0C49856B13EA975CB61029C536();
	void OnSync_F27893F8477CA691EB9A86A1E2EC8499();
	void Success_B143DB6845AC5231001EC3A424575F8C(class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Card_SharedWisdom_C">();
	}
	static class UGA_Card_SharedWisdom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Card_SharedWisdom_C>();
	}
};
static_assert(alignof(UGA_Card_SharedWisdom_C) == 0x000010, "Wrong alignment on UGA_Card_SharedWisdom_C");
static_assert(sizeof(UGA_Card_SharedWisdom_C) == 0x000B80, "Wrong size on UGA_Card_SharedWisdom_C");
static_assert(offsetof(UGA_Card_SharedWisdom_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Card_SharedWisdom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Card_SharedWisdom_C, Actor) == 0x000B78, "Member 'UGA_Card_SharedWisdom_C::Actor' has a wrong offset!");

}
