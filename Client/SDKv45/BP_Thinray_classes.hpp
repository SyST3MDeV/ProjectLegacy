#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Thinray

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Thinray.BP_Thinray_C
// 0x0058 (0x0370 - 0x0318)
#pragma pack(push, 0x1)
class alignas(0x08) ABP_Thinray_C : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynMat;                                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0330(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         XShift;                                            // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         WidthFacing;                                       // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           LightAngleShift;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     BaseMaterial;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         DepthFade;                                         // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Thinray_C">();
	}
	static class ABP_Thinray_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Thinray_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_Thinray_C) == 0x000008, "Wrong alignment on ABP_Thinray_C");
static_assert(sizeof(ABP_Thinray_C) == 0x000370, "Wrong size on ABP_Thinray_C");
static_assert(offsetof(ABP_Thinray_C, StaticMesh) == 0x000318, "Member 'ABP_Thinray_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, Sphere) == 0x000320, "Member 'ABP_Thinray_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, DynMat) == 0x000328, "Member 'ABP_Thinray_C::DynMat' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, Color) == 0x000330, "Member 'ABP_Thinray_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, XShift) == 0x000340, "Member 'ABP_Thinray_C::XShift' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, Height) == 0x000344, "Member 'ABP_Thinray_C::Height' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, Width) == 0x000348, "Member 'ABP_Thinray_C::Width' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, WidthFacing) == 0x00034C, "Member 'ABP_Thinray_C::WidthFacing' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, LightAngleShift) == 0x000350, "Member 'ABP_Thinray_C::LightAngleShift' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, BaseMaterial) == 0x000360, "Member 'ABP_Thinray_C::BaseMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Thinray_C, DepthFade) == 0x000368, "Member 'ABP_Thinray_C::DepthFade' has a wrong offset!");

}
