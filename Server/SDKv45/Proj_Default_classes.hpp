#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Proj_Default

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Proj_Default.Proj_Default_C
// 0x0010 (0x0720 - 0x0710)
class AProj_Default_C : public AOrionProjectile
{
public:
	float                                         YinSizeScaleFloat;                                 // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                YinSizeScaleVector;                                // 0x0714(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void The_Yin_Check(float* Yin_Size_Scale_Float, struct FVector* Yin_Size_Scale_Vector);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Proj_Default_C">();
	}
	static class AProj_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProj_Default_C>();
	}
};
static_assert(alignof(AProj_Default_C) == 0x000008, "Wrong alignment on AProj_Default_C");
static_assert(sizeof(AProj_Default_C) == 0x000720, "Wrong size on AProj_Default_C");
static_assert(offsetof(AProj_Default_C, YinSizeScaleFloat) == 0x000710, "Member 'AProj_Default_C::YinSizeScaleFloat' has a wrong offset!");
static_assert(offsetof(AProj_Default_C, YinSizeScaleVector) == 0x000714, "Member 'AProj_Default_C::YinSizeScaleVector' has a wrong offset!");

}
