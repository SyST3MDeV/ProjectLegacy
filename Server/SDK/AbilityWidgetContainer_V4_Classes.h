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
	 * WidgetBlueprintGeneratedClass AbilityWidgetContainer_V4.AbilityWidgetContainer-V4_C
	 * Size -> 0x0028 (FullSize[0x0440] - InheritedSize[0x0418])
	 */
	class UAbilityWidgetContainerV4_C : public UOrionAbilityLayoutWidget
	{
	public:
		class UAbilityWidgetColumnV4_C*                            Ability_E;                                               // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityWidgetColumnV4_C*                            Ability_LMB;                                             // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityWidgetColumnV4_C*                            Ability_Q;                                               // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityWidgetColumnV4_C*                            Ability_RMB;                                             // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityWidgetColumnUltV4_C*                         AbilityWidgetColumnUltV4;                                // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
