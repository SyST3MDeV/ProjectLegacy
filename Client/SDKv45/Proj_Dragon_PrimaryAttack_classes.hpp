#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Proj_Dragon_PrimaryAttack

#include "Basic.hpp"

#include "OrionGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Proj_Dragon_PrimaryAttack.Proj_Dragon_PrimaryAttack_C
// 0x0000 (0x0710 - 0x0710)
class AProj_Dragon_PrimaryAttack_C final : public AOrionProjectile
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Proj_Dragon_PrimaryAttack_C">();
	}
	static class AProj_Dragon_PrimaryAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProj_Dragon_PrimaryAttack_C>();
	}
};
static_assert(alignof(AProj_Dragon_PrimaryAttack_C) == 0x000008, "Wrong alignment on AProj_Dragon_PrimaryAttack_C");
static_assert(sizeof(AProj_Dragon_PrimaryAttack_C) == 0x000710, "Wrong size on AProj_Dragon_PrimaryAttack_C");

}
