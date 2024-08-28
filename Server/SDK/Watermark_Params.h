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
	 * Function Watermark.Watermark_C.UpdateWatermark
	 */
	struct UWatermark_C_UpdateWatermark_Params
	{	};

	/**
	 * Function Watermark.Watermark_C.Construct
	 */
	struct UWatermark_C_Construct_Params
	{	};

	/**
	 * Function Watermark.Watermark_C.PreConstruct
	 */
	struct UWatermark_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Watermark.Watermark_C.ExecuteUbergraph_Watermark
	 */
	struct UWatermark_C_ExecuteUbergraph_Watermark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QY7J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
