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
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.Construct
	 */
	struct UAbilityWidgetV4_C_Construct_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.StartCooldown
	 */
	struct UAbilityWidgetV4_C_StartCooldown_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.StopCooldown
	 */
	struct UAbilityWidgetV4_C_StopCooldown_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.HideLock
	 */
	struct UAbilityWidgetV4_C_HideLock_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.CanActivate
	 */
	struct UAbilityWidgetV4_C_CanActivate_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.CannotActivate
	 */
	struct UAbilityWidgetV4_C_CannotActivate_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Energy
	 */
	struct UAbilityWidgetV4_C_AbilityFail_Energy_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Generic
	 */
	struct UAbilityWidgetV4_C_AbilityFail_Generic_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.AbilityFail_Cooldown
	 */
	struct UAbilityWidgetV4_C_AbilityFail_Cooldown_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.ShowStacks
	 */
	struct UAbilityWidgetV4_C_ShowStacks_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.HideStacks
	 */
	struct UAbilityWidgetV4_C_HideStacks_Params
	{	};

	/**
	 * Function AbilityWidget-V4.AbilityWidget-V4_C.ExecuteUbergraph_AbilityWidget-V4
	 */
	struct UAbilityWidgetV4_C_ExecuteUbergraph_AbilityWidgetV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3PUB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
