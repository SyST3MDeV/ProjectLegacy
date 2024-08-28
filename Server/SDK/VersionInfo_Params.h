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
	 * Function VersionInfo.VersionInfo_C.SetStyle
	 */
	struct UVersionInfo_C_SetStyle_Params
	{
	public:
		bool                                                       ShowVersion;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowExtra;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VersionInfo.VersionInfo_C.UpdateText
	 */
	struct UVersionInfo_C_UpdateText_Params
	{	};

	/**
	 * Function VersionInfo.VersionInfo_C.Construct
	 */
	struct UVersionInfo_C_Construct_Params
	{	};

	/**
	 * Function VersionInfo.VersionInfo_C.ExecuteUbergraph_VersionInfo
	 */
	struct UVersionInfo_C_ExecuteUbergraph_VersionInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4Q64[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
