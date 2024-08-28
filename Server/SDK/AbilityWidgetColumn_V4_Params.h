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
	 * Function AbilityWidgetColumn-V4.AbilityWidgetColumn-V4_C.ShowLevelUp
	 */
	struct UAbilityWidgetColumnV4_C_ShowLevelUp_Params
	{	};

	/**
	 * Function AbilityWidgetColumn-V4.AbilityWidgetColumn-V4_C.HideLevelUp
	 */
	struct UAbilityWidgetColumnV4_C_HideLevelUp_Params
	{	};

	/**
	 * Function AbilityWidgetColumn-V4.AbilityWidgetColumn-V4_C.OnAnimationFinished
	 */
	struct UAbilityWidgetColumnV4_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AbilityWidgetColumn-V4.AbilityWidgetColumn-V4_C.ExecuteUbergraph_AbilityWidgetColumn-V4
	 */
	struct UAbilityWidgetColumnV4_C_ExecuteUbergraph_AbilityWidgetColumnV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EMB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
