#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Card_LinkAllyToRedirectDmg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Card_LinkAllyToRedirectDmg.BP_Card_LinkAllyToRedirectDmg_C
// 0x00B0 (0x0498 - 0x03E8)
class ABP_Card_LinkAllyToRedirectDmg_C final : public AOrionBaseActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Card_DeathPact_Tether_2;                         // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Card_DeathPact_Tether;                           // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   SplineMesh;                                        // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeIn_FadeIn_Scale_5C22C1744A9A03F4788D3AA00BD21160; // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeIn_FadeIn_5C22C1744A9A03F4788D3AA00BD21160;    // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeIn__Direction_5C22C1744A9A03F4788D3AA00BD21160; // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeIn;                                            // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BulgePulse_BulgePulse_EE5AF76944D5699815730BB827B0998B; // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BulgePulse__Direction_EE5AF76944D5699815730BB827B0998B; // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42D[0x3];                                      // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BulgePulse;                                        // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineWidth_ShrinkSpline_4506EE50459B4240059786BC7F906FD7; // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SplineWidth__Direction_4506EE50459B4240059786BC7F906FD7; // 0x043C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D[0x3];                                      // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SplineWidth;                                       // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionCharHero*                         LinkedHero;                                        // 0x0448(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Linked;                                            // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LinkRange;                                         // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LinkDuration;                                      // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_Shutdown;                                    // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                                SplineTangent;                                     // 0x0468(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               SplineMaterial;                                    // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrionCharHero*                         PlayerHero;                                        // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TrueMidPoint;                                      // 0x0488(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Card_LinkAllyToRedirectDmg(int32 EntryPoint);
	void ChangeSplineWidth(bool Direction);
	void Event_Shutdown();
	void ReceiveTick(float DeltaSeconds);
	void BulgePulse__FinishedFunc();
	void BulgePulse__UpdateFunc();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void ReceiveBeginPlay();
	void Shutdown();
	void SplineWidth__FinishedFunc();
	void SplineWidth__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Card_LinkAllyToRedirectDmg_C">();
	}
	static class ABP_Card_LinkAllyToRedirectDmg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Card_LinkAllyToRedirectDmg_C>();
	}
};
static_assert(alignof(ABP_Card_LinkAllyToRedirectDmg_C) == 0x000008, "Wrong alignment on ABP_Card_LinkAllyToRedirectDmg_C");
static_assert(sizeof(ABP_Card_LinkAllyToRedirectDmg_C) == 0x000498, "Wrong size on ABP_Card_LinkAllyToRedirectDmg_C");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, UberGraphFrame) == 0x0003E8, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, P_Card_DeathPact_Tether_2) == 0x0003F0, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::P_Card_DeathPact_Tether_2' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, P_Card_DeathPact_Tether) == 0x0003F8, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::P_Card_DeathPact_Tether' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, SplineMesh) == 0x000400, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::SplineMesh' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, Root) == 0x000408, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, FadeIn_FadeIn_Scale_5C22C1744A9A03F4788D3AA00BD21160) == 0x000410, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::FadeIn_FadeIn_Scale_5C22C1744A9A03F4788D3AA00BD21160' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, FadeIn_FadeIn_5C22C1744A9A03F4788D3AA00BD21160) == 0x000414, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::FadeIn_FadeIn_5C22C1744A9A03F4788D3AA00BD21160' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, FadeIn__Direction_5C22C1744A9A03F4788D3AA00BD21160) == 0x000418, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::FadeIn__Direction_5C22C1744A9A03F4788D3AA00BD21160' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, FadeIn) == 0x000420, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::FadeIn' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, BulgePulse_BulgePulse_EE5AF76944D5699815730BB827B0998B) == 0x000428, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::BulgePulse_BulgePulse_EE5AF76944D5699815730BB827B0998B' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, BulgePulse__Direction_EE5AF76944D5699815730BB827B0998B) == 0x00042C, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::BulgePulse__Direction_EE5AF76944D5699815730BB827B0998B' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, BulgePulse) == 0x000430, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::BulgePulse' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, SplineWidth_ShrinkSpline_4506EE50459B4240059786BC7F906FD7) == 0x000438, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::SplineWidth_ShrinkSpline_4506EE50459B4240059786BC7F906FD7' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, SplineWidth__Direction_4506EE50459B4240059786BC7F906FD7) == 0x00043C, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::SplineWidth__Direction_4506EE50459B4240059786BC7F906FD7' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, SplineWidth) == 0x000440, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::SplineWidth' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, LinkedHero) == 0x000448, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::LinkedHero' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, Linked) == 0x000450, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::Linked' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, LinkRange) == 0x000454, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::LinkRange' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, LinkDuration) == 0x000458, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::LinkDuration' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, Timer_Shutdown) == 0x000460, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::Timer_Shutdown' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, SplineTangent) == 0x000468, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::SplineTangent' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, SplineMaterial) == 0x000478, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::SplineMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, PlayerHero) == 0x000480, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::PlayerHero' has a wrong offset!");
static_assert(offsetof(ABP_Card_LinkAllyToRedirectDmg_C, TrueMidPoint) == 0x000488, "Member 'ABP_Card_LinkAllyToRedirectDmg_C::TrueMidPoint' has a wrong offset!");

}
