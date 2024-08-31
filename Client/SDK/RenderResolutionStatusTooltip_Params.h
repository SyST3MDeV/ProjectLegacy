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
	 * Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.SetAdditionalContent
	 */
	struct URenderResolutionStatusTooltip_C_SetAdditionalContent_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.Show
	 */
	struct URenderResolutionStatusTooltip_C_Show_Params
	{	};

	/**
	 * Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.Hide
	 */
	struct URenderResolutionStatusTooltip_C_Hide_Params
	{	};

	/**
	 * Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.ExecuteUbergraph_RenderResolutionStatusTooltip
	 */
	struct URenderResolutionStatusTooltip_C_ExecuteUbergraph_RenderResolutionStatusTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_935Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
