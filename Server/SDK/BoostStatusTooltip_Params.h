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
	 * Function BoostStatusTooltip.BoostStatusTooltip_C.Refresh
	 */
	struct UBoostStatusTooltip_C_Refresh_Params
	{	};

	/**
	 * Function BoostStatusTooltip.BoostStatusTooltip_C.SetAdditionalContent
	 */
	struct UBoostStatusTooltip_C_SetAdditionalContent_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BoostStatusTooltip.BoostStatusTooltip_C.Show
	 */
	struct UBoostStatusTooltip_C_Show_Params
	{	};

	/**
	 * Function BoostStatusTooltip.BoostStatusTooltip_C.Hide
	 */
	struct UBoostStatusTooltip_C_Hide_Params
	{	};

	/**
	 * Function BoostStatusTooltip.BoostStatusTooltip_C.ExecuteUbergraph_BoostStatusTooltip
	 */
	struct UBoostStatusTooltip_C_ExecuteUbergraph_BoostStatusTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
