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
	 * Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.On Category Changed
	 */
	struct AFrontEndManager_Blueprint_C_OnCategoryChanged_Params
	{
	public:
		class FNewParam*                                           Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.Handle Scene Changed
	 */
	struct AFrontEndManager_Blueprint_C_HandleSceneChanged_Params
	{
	public:
		class FName                                                Scene;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.UserConstructionScript
	 */
	struct AFrontEndManager_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.ReceiveBeginPlay
	 */
	struct AFrontEndManager_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.ExecuteUbergraph_FrontEndManager_Blueprint
	 */
	struct AFrontEndManager_Blueprint_C_ExecuteUbergraph_FrontEndManager_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
