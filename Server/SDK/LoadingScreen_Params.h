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
	 * Function LoadingScreen.LoadingScreen_C.Get Text
	 */
	struct ULoadingScreen_C_GetText_Params
	{	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.Construct
	 */
	struct ULoadingScreen_C_Construct_Params
	{	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.PreConstruct
	 */
	struct ULoadingScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen
	 */
	struct ULoadingScreen_C_ExecuteUbergraph_LoadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CRDX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
