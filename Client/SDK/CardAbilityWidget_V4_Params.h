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
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.Construct
	 */
	struct UCardAbilityWidgetV4_C_Construct_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.IsSelected
	 */
	struct UCardAbilityWidgetV4_C_IsSelected_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.IsUnSelected
	 */
	struct UCardAbilityWidgetV4_C_IsUnSelected_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.ExitSelectionMode
	 */
	struct UCardAbilityWidgetV4_C_ExitSelectionMode_Params
	{
	public:
		bool                                                       bWasHighlighted;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.CanActivate
	 */
	struct UCardAbilityWidgetV4_C_CanActivate_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.CannotActivate
	 */
	struct UCardAbilityWidgetV4_C_CannotActivate_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.StartCooldown
	 */
	struct UCardAbilityWidgetV4_C_StartCooldown_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.StopCooldown
	 */
	struct UCardAbilityWidgetV4_C_StopCooldown_Params
	{	};

	/**
	 * Function CardAbilityWidget-V4.CardAbilityWidget-V4_C.ExecuteUbergraph_CardAbilityWidget-V4
	 */
	struct UCardAbilityWidgetV4_C_ExecuteUbergraph_CardAbilityWidgetV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQDY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
