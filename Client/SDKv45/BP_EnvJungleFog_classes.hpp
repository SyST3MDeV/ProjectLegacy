#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnvJungleFog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnvJungleFog.BP_EnvJungleFog_C
// 0x0040 (0x0358 - 0x0318)
class ABP_EnvJungleFog_C final : public AActor
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FogSheetPlane;                                     // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicFogMat;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity;                                           // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogBrightness;                                     // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Size;                                              // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_0;                                           // 0x0344(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnvJungleFog_C">();
	}
	static class ABP_EnvJungleFog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnvJungleFog_C>();
	}
};
static_assert(alignof(ABP_EnvJungleFog_C) == 0x000008, "Wrong alignment on ABP_EnvJungleFog_C");
static_assert(sizeof(ABP_EnvJungleFog_C) == 0x000358, "Wrong size on ABP_EnvJungleFog_C");
static_assert(offsetof(ABP_EnvJungleFog_C, Billboard) == 0x000318, "Member 'ABP_EnvJungleFog_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, FogSheetPlane) == 0x000320, "Member 'ABP_EnvJungleFog_C::FogSheetPlane' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, Sphere) == 0x000328, "Member 'ABP_EnvJungleFog_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, DynamicFogMat) == 0x000330, "Member 'ABP_EnvJungleFog_C::DynamicFogMat' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, Opacity) == 0x000338, "Member 'ABP_EnvJungleFog_C::Opacity' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, FogBrightness) == 0x00033C, "Member 'ABP_EnvJungleFog_C::FogBrightness' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, Size) == 0x000340, "Member 'ABP_EnvJungleFog_C::Size' has a wrong offset!");
static_assert(offsetof(ABP_EnvJungleFog_C, Color_0) == 0x000344, "Member 'ABP_EnvJungleFog_C::Color_0' has a wrong offset!");

}
