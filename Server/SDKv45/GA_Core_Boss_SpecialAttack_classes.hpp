#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Core_Boss_SpecialAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Core_Boss_SpecialAttack.GA_Core_Boss_SpecialAttack_C
// 0x00E0 (0x0C50 - 0x0B70)
class UGA_Core_Boss_SpecialAttack_C final : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class AActor*                                 SpawnedVolume1;                                    // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnedVolume2;                                    // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnedVolume3;                                    // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpecialAttackAnimationIndex;                       // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AbilityDuration;                                   // 0x0B94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        AttackLocations;                                   // 0x0B98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         SpecialAttackTime;                                 // 0x0BA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BAC[0x4];                                      // 0x0BAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 MarkedVol;                                         // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BB8[0x8];                                      // 0x0BB8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             MarkedVolTrans;                                    // 0x0BC0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         MaxPlayerCount;                                    // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FullRoot;                                          // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageVol;                                         // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionChar*                             PrimaryTarget;                                     // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           RootDataName;                                      // 0x0C08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         ProjectileTime;                                    // 0x0C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1C[0x4];                                      // 0x0C1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FireProjName;                                      // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           SpecialAttack1_Montage;                            // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  SetByCallerTags;                                   // 0x0C30(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Core_Boss_SpecialAttack(int32 EntryPoint);
	void FailedToSpawn_2EDAC6F4437B35B68060969E32F0B5F5(class AActor* SpawnedActor);
	void FailedToSpawn_52DEBDC044C283234BFD3AA6F0C7DCE5(class AActor* SpawnedActor);
	void FailedToSpawn_63993A844F7F947AA0FA2AB177BCF12E(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void NotAuthority_2EDAC6F4437B35B68060969E32F0B5F5(class AActor* SpawnedActor);
	void NotAuthority_52DEBDC044C283234BFD3AA6F0C7DCE5(class AActor* SpawnedActor);
	void NotAuthority_63993A844F7F947AA0FA2AB177BCF12E(class AActor* SpawnedActor);
	void OnBlendOut_83DBD5894402957DAAB6019505B50B57(class FName NotifyName);
	void OnCancelled_83DBD5894402957DAAB6019505B50B57(class FName NotifyName);
	void OnCompleted_83DBD5894402957DAAB6019505B50B57(class FName NotifyName);
	void OnInterrupted_83DBD5894402957DAAB6019505B50B57(class FName NotifyName);
	void OnNotifyBegin_83DBD5894402957DAAB6019505B50B57(class FName NotifyName);
	void OnNotifyEnd_83DBD5894402957DAAB6019505B50B57(class FName NotifyName);
	void OnStateEnded_819DC83B4A6DD5F362E1BAA54D8BE41D();
	void OnStateEnded_EADC04134617A467D8E13DA6FD0EE47E();
	void OnStateInterrupted_819DC83B4A6DD5F362E1BAA54D8BE41D();
	void OnStateInterrupted_EADC04134617A467D8E13DA6FD0EE47E();
	void Success_2EDAC6F4437B35B68060969E32F0B5F5(class AActor* SpawnedActor);
	void Success_52DEBDC044C283234BFD3AA6F0C7DCE5(class AActor* SpawnedActor);
	void Success_63993A844F7F947AA0FA2AB177BCF12E(class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Core_Boss_SpecialAttack_C">();
	}
	static class UGA_Core_Boss_SpecialAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Core_Boss_SpecialAttack_C>();
	}
};
static_assert(alignof(UGA_Core_Boss_SpecialAttack_C) == 0x000010, "Wrong alignment on UGA_Core_Boss_SpecialAttack_C");
static_assert(sizeof(UGA_Core_Boss_SpecialAttack_C) == 0x000C50, "Wrong size on UGA_Core_Boss_SpecialAttack_C");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Core_Boss_SpecialAttack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SpawnedVolume1) == 0x000B78, "Member 'UGA_Core_Boss_SpecialAttack_C::SpawnedVolume1' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SpawnedVolume2) == 0x000B80, "Member 'UGA_Core_Boss_SpecialAttack_C::SpawnedVolume2' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SpawnedVolume3) == 0x000B88, "Member 'UGA_Core_Boss_SpecialAttack_C::SpawnedVolume3' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SpecialAttackAnimationIndex) == 0x000B90, "Member 'UGA_Core_Boss_SpecialAttack_C::SpecialAttackAnimationIndex' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, AbilityDuration) == 0x000B94, "Member 'UGA_Core_Boss_SpecialAttack_C::AbilityDuration' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, AttackLocations) == 0x000B98, "Member 'UGA_Core_Boss_SpecialAttack_C::AttackLocations' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SpecialAttackTime) == 0x000BA8, "Member 'UGA_Core_Boss_SpecialAttack_C::SpecialAttackTime' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, MarkedVol) == 0x000BB0, "Member 'UGA_Core_Boss_SpecialAttack_C::MarkedVol' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, MarkedVolTrans) == 0x000BC0, "Member 'UGA_Core_Boss_SpecialAttack_C::MarkedVolTrans' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, MaxPlayerCount) == 0x000BF0, "Member 'UGA_Core_Boss_SpecialAttack_C::MaxPlayerCount' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, FullRoot) == 0x000BF4, "Member 'UGA_Core_Boss_SpecialAttack_C::FullRoot' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, DamageVol) == 0x000BF8, "Member 'UGA_Core_Boss_SpecialAttack_C::DamageVol' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, PrimaryTarget) == 0x000C00, "Member 'UGA_Core_Boss_SpecialAttack_C::PrimaryTarget' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, RootDataName) == 0x000C08, "Member 'UGA_Core_Boss_SpecialAttack_C::RootDataName' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, ProjectileTime) == 0x000C18, "Member 'UGA_Core_Boss_SpecialAttack_C::ProjectileTime' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, FireProjName) == 0x000C20, "Member 'UGA_Core_Boss_SpecialAttack_C::FireProjName' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SpecialAttack1_Montage) == 0x000C28, "Member 'UGA_Core_Boss_SpecialAttack_C::SpecialAttack1_Montage' has a wrong offset!");
static_assert(offsetof(UGA_Core_Boss_SpecialAttack_C, SetByCallerTags) == 0x000C30, "Member 'UGA_Core_Boss_SpecialAttack_C::SetByCallerTags' has a wrong offset!");

}
