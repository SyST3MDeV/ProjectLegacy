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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.ShowLevelUp
	 */
	struct UAbilityWidgetColumnUltV4_C_ShowLevelUp_Params
	{	};

	/**
	 * Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.HideLevelUp
	 */
	struct UAbilityWidgetColumnUltV4_C_HideLevelUp_Params
	{	};

	/**
	 * Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.OnAnimationFinished
	 */
	struct UAbilityWidgetColumnUltV4_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.ExecuteUbergraph_AbilityWidgetColumn-Ult-V4
	 */
	struct UAbilityWidgetColumnUltV4_C_ExecuteUbergraph_AbilityWidgetColumnUltV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
