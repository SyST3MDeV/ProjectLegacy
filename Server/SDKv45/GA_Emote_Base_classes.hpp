#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Emote_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Emote_Base.GA_Emote_Base_C
// 0x0020 (0x0B90 - 0x0B70)
class UGA_Emote_Base_C : public UOrionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(Transient, DuplicateTransient)
	class UAnimMontage*                           EmoteAnim;                                         // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UnblockMovementDelay;                              // 0x0B80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B84[0x4];                                      // 0x0B84(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 EmoteCameraMode;                                   // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Emote_Base(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1(class UGameplayAbility* ActivatedAbility);
	void OnApplied_469E76E14A18DA440CC1ABB3348B6E48(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
	void OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1(class FName NotifyName);
	void OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE();
	void OnCancelled_25F51C8A425E753C13138E92FB4B3BC1(class FName NotifyName);
	void OnChange_089A8CA14C8FB7A21B3B3CB58875951F();
	void OnCompleted_25F51C8A425E753C13138E92FB4B3BC1(class FName NotifyName);
	void OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1(class FName NotifyName);
	void OnMovementInput_0A24E05D42EC914A89220BA8B3055FB3();
	void OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1(class FName NotifyName);
	void OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Emote_Base_C">();
	}
	static class UGA_Emote_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Emote_Base_C>();
	}
};
static_assert(alignof(UGA_Emote_Base_C) == 0x000010, "Wrong alignment on UGA_Emote_Base_C");
static_assert(sizeof(UGA_Emote_Base_C) == 0x000B90, "Wrong size on UGA_Emote_Base_C");
static_assert(offsetof(UGA_Emote_Base_C, UberGraphFrame) == 0x000B70, "Member 'UGA_Emote_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Emote_Base_C, EmoteAnim) == 0x000B78, "Member 'UGA_Emote_Base_C::EmoteAnim' has a wrong offset!");
static_assert(offsetof(UGA_Emote_Base_C, UnblockMovementDelay) == 0x000B80, "Member 'UGA_Emote_Base_C::UnblockMovementDelay' has a wrong offset!");
static_assert(offsetof(UGA_Emote_Base_C, EmoteCameraMode) == 0x000B88, "Member 'UGA_Emote_Base_C::EmoteCameraMode' has a wrong offset!");

}
