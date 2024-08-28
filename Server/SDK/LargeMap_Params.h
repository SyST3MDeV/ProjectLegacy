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
	 * Function LargeMap.LargeMap_C.MapModeChanged
	 */
	struct ULargeMap_C_MapModeChanged_Params
	{
	public:
		bool                                                       IsLargeMap;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LargeMap.LargeMap_C.Construct
	 */
	struct ULargeMap_C_Construct_Params
	{	};

	/**
	 * Function LargeMap.LargeMap_C.On Open
	 */
	struct ULargeMap_C_OnOpen_Params
	{	};

	/**
	 * Function LargeMap.LargeMap_C.On Close
	 */
	struct ULargeMap_C_OnClose_Params
	{	};

	/**
	 * Function LargeMap.LargeMap_C.ExecuteUbergraph_LargeMap
	 */
	struct ULargeMap_C_ExecuteUbergraph_LargeMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EBRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
