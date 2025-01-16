﻿#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.Construct
	 */
	struct UHUDRespawnTimerV4_C_Construct_Params
	{	};

	/**
	 * Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.ShowWidget
	 */
	struct UHUDRespawnTimerV4_C_ShowWidget_Params
	{	};

	/**
	 * Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.HideWidget
	 */
	struct UHUDRespawnTimerV4_C_HideWidget_Params
	{	};

	/**
	 * Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.ExecuteUbergraph_HUDRespawnTimer-V4
	 */
	struct UHUDRespawnTimerV4_C_ExecuteUbergraph_HUDRespawnTimerV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
