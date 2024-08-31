#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass VerticalAbilityDisplay.VerticalAbilityDisplay_C
	 * Size -> 0x0028 (FullSize[0x02F8] - InheritedSize[0x02D0])
	 */
	class UVerticalAbilityDisplay_C : public UOrionHeroAbilityDisplay
	{
	public:
		class UHorizontalAbility_C*                                FirstMatchAbility_C_1;                                   // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalAbility_C*                                FirstMatchAbility_C_2;                                   // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalAbility_C*                                FirstMatchAbility_C_3;                                   // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalAbility_C*                                FirstMatchAbility_C_4;                                   // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalAbility_C*                                FirstMatchAbility_C_5;                                   // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
