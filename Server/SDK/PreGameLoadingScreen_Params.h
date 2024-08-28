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
	 * Function PreGameLoadingScreen.PreGameLoadingScreen_C.UpdateMidScreenInfo
	 */
	struct UPreGameLoadingScreen_C_UpdateMidScreenInfo_Params
	{	};

	/**
	 * Function PreGameLoadingScreen.PreGameLoadingScreen_C.UpdateLoadingScreenImage
	 */
	struct UPreGameLoadingScreen_C_UpdateLoadingScreenImage_Params
	{	};

	/**
	 * Function PreGameLoadingScreen.PreGameLoadingScreen_C.Update Loading Screen Tip
	 */
	struct UPreGameLoadingScreen_C_UpdateLoadingScreenTip_Params
	{	};

	/**
	 * Function PreGameLoadingScreen.PreGameLoadingScreen_C.Construct
	 */
	struct UPreGameLoadingScreen_C_Construct_Params
	{	};

	/**
	 * Function PreGameLoadingScreen.PreGameLoadingScreen_C.CustomEvent_1
	 */
	struct UPreGameLoadingScreen_C_CustomEvent_1_Params
	{
	public:
		float                                                      LoadingPercent;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PreGameLoadingScreen.PreGameLoadingScreen_C.ExecuteUbergraph_PreGameLoadingScreen
	 */
	struct UPreGameLoadingScreen_C_ExecuteUbergraph_PreGameLoadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
