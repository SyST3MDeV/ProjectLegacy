#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroTooltipStat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OrionUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroTooltipStat.HeroTooltipStat_C
// 0x0010 (0x0228 - 0x0218)
class UHeroTooltipStat_C final : public UOrionHeroStatBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UBorder*                                Border_2;                                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HeroTooltipStat(int32 EntryPoint);
	void OnStatEmphasized(bool bEmphasize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroTooltipStat_C">();
	}
	static class UHeroTooltipStat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroTooltipStat_C>();
	}
};
static_assert(alignof(UHeroTooltipStat_C) == 0x000008, "Wrong alignment on UHeroTooltipStat_C");
static_assert(sizeof(UHeroTooltipStat_C) == 0x000228, "Wrong size on UHeroTooltipStat_C");
static_assert(offsetof(UHeroTooltipStat_C, UberGraphFrame) == 0x000218, "Member 'UHeroTooltipStat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroTooltipStat_C, Border_2) == 0x000220, "Member 'UHeroTooltipStat_C::Border_2' has a wrong offset!");

}
