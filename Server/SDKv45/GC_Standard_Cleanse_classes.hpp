#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Standard_Cleanse

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Standard_Cleanse.GC_Standard_Cleanse_C
// 0x0050 (0x0890 - 0x0840)
class AGC_Standard_Cleanse_C final : public AOrionGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0840(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ShieldMesh;                                        // 0x0848(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Fadeout_Opacity_C916B456412A6AC7E7CBB3A436558A64;  // 0x0850(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fadeout__Direction_C916B456412A6AC7E7CBB3A436558A64; // 0x0854(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_855[0x3];                                      // 0x0855(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeOut;                                           // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fadeon_Brightness_DEEF8FE1472D85DB399D86A2A0400D58; // 0x0860(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fadeon_Opacity_DEEF8FE1472D85DB399D86A2A0400D58;   // 0x0864(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fadeon__Direction_DEEF8FE1472D85DB399D86A2A0400D58; // 0x0868(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_869[0x7];                                      // 0x0869(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fadeon;                                            // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ShieldMID;                                         // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MatCreated;                                        // 0x0880(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_881[0x7];                                      // 0x0881(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Hero_C*                             TargetCharacter;                                   // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Standard_Cleanse(int32 EntryPoint);
	void FadeoutMaterial();
	void FadeinMaterial();
	void Fadeout__UpdateFunc();
	void Fadeout__FinishedFunc();
	void Fadeon__UpdateFunc();
	void Fadeon__FinishedFunc();
	void UserConstructionScript();
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Standard_Cleanse_C">();
	}
	static class AGC_Standard_Cleanse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Standard_Cleanse_C>();
	}
};
static_assert(alignof(AGC_Standard_Cleanse_C) == 0x000010, "Wrong alignment on AGC_Standard_Cleanse_C");
static_assert(sizeof(AGC_Standard_Cleanse_C) == 0x000890, "Wrong size on AGC_Standard_Cleanse_C");
static_assert(offsetof(AGC_Standard_Cleanse_C, UberGraphFrame) == 0x000840, "Member 'AGC_Standard_Cleanse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, ShieldMesh) == 0x000848, "Member 'AGC_Standard_Cleanse_C::ShieldMesh' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, Fadeout_Opacity_C916B456412A6AC7E7CBB3A436558A64) == 0x000850, "Member 'AGC_Standard_Cleanse_C::Fadeout_Opacity_C916B456412A6AC7E7CBB3A436558A64' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, Fadeout__Direction_C916B456412A6AC7E7CBB3A436558A64) == 0x000854, "Member 'AGC_Standard_Cleanse_C::Fadeout__Direction_C916B456412A6AC7E7CBB3A436558A64' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, FadeOut) == 0x000858, "Member 'AGC_Standard_Cleanse_C::FadeOut' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, Fadeon_Brightness_DEEF8FE1472D85DB399D86A2A0400D58) == 0x000860, "Member 'AGC_Standard_Cleanse_C::Fadeon_Brightness_DEEF8FE1472D85DB399D86A2A0400D58' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, Fadeon_Opacity_DEEF8FE1472D85DB399D86A2A0400D58) == 0x000864, "Member 'AGC_Standard_Cleanse_C::Fadeon_Opacity_DEEF8FE1472D85DB399D86A2A0400D58' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, Fadeon__Direction_DEEF8FE1472D85DB399D86A2A0400D58) == 0x000868, "Member 'AGC_Standard_Cleanse_C::Fadeon__Direction_DEEF8FE1472D85DB399D86A2A0400D58' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, Fadeon) == 0x000870, "Member 'AGC_Standard_Cleanse_C::Fadeon' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, ShieldMID) == 0x000878, "Member 'AGC_Standard_Cleanse_C::ShieldMID' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, MatCreated) == 0x000880, "Member 'AGC_Standard_Cleanse_C::MatCreated' has a wrong offset!");
static_assert(offsetof(AGC_Standard_Cleanse_C, TargetCharacter) == 0x000888, "Member 'AGC_Standard_Cleanse_C::TargetCharacter' has a wrong offset!");

}
