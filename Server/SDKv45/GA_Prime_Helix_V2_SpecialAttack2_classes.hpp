#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Prime_Helix_V2_SpecialAttack2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Prime_Helix_V2_SpecialAttack2.GA_Prime_Helix_V2_SpecialAttack2_C
// 0x0040 (0x0BB0 - 0x0B70)
class UGA_Prime_Helix_V2_SpecialAttack2_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class AActor*                                 SpawnedVolume;                                     // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AbilityDuration;                                   // 0x0B80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpecialAttackAnimationIndex;                       // 0x0B84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpecialAttackTime;                                 // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B8C[0x4];                                      // 0x0B8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SpawnBubble_Name;                                  // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   End_Name;                                          // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           SpecialAttack2_montage;                            // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Prime_Helix_V2_SpecialAttack2(int32 EntryPoint);
	void FailedToSpawn_C3A6E38340A52A5CC6B161AB94E9FCD0(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void NotAuthority_C3A6E38340A52A5CC6B161AB94E9FCD0(class AActor* SpawnedActor);
	void OnBlendOut_8F007D9E4263ED4823B4F78FE45DF1BC(class FName NotifyName);
	void OnCancelled_8F007D9E4263ED4823B4F78FE45DF1BC(class FName NotifyName);
	void OnCompleted_8F007D9E4263ED4823B4F78FE45DF1BC(class FName NotifyName);
	void OnInterrupted_8F007D9E4263ED4823B4F78FE45DF1BC(class FName NotifyName);
	void OnNotifyBegin_8F007D9E4263ED4823B4F78FE45DF1BC(class FName NotifyName);
	void OnNotifyEnd_8F007D9E4263ED4823B4F78FE45DF1BC(class FName NotifyName);
	void OnStateEnded_11D006A3418CDF90AAAA3780CDC77DFE();
	void OnStateEnded_52B7214340D1BD6C35DC7A8EE9F8E575();
	void OnStateInterrupted_11D006A3418CDF90AAAA3780CDC77DFE();
	void OnStateInterrupted_52B7214340D1BD6C35DC7A8EE9F8E575();
	void Success_C3A6E38340A52A5CC6B161AB94E9FCD0(class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Prime_Helix_V2_SpecialAttack2_C">();
	}
	static class UGA_Prime_Helix_V2_SpecialAttack2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Prime_Helix_V2_SpecialAttack2_C>();
	}
};
static_assert(alignof(UGA_Prime_Helix_V2_SpecialAttack2_C) == 0x000010, "Wrong alignment on UGA_Prime_Helix_V2_SpecialAttack2_C");
static_assert(sizeof(UGA_Prime_Helix_V2_SpecialAttack2_C) == 0x000BB0, "Wrong size on UGA_Prime_Helix_V2_SpecialAttack2_C");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, SpawnedVolume) == 0x000B78, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::SpawnedVolume' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, AbilityDuration) == 0x000B80, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::AbilityDuration' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, SpecialAttackAnimationIndex) == 0x000B84, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::SpecialAttackAnimationIndex' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, SpecialAttackTime) == 0x000B88, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::SpecialAttackTime' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, SpawnBubble_Name) == 0x000B90, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::SpawnBubble_Name' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, End_Name) == 0x000B98, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::End_Name' has a wrong offset!");
static_assert(offsetof(UGA_Prime_Helix_V2_SpecialAttack2_C, SpecialAttack2_montage) == 0x000BA0, "Member 'UGA_Prime_Helix_V2_SpecialAttack2_C::SpecialAttack2_montage' has a wrong offset!");

}
