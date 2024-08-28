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
	 * Function DefaultTooltip.DefaultTooltip_C.UpdateTooltipText
	 */
	struct UDefaultTooltip_C_UpdateTooltipText_Params
	{
	public:
		class FText                                                NewTooltipText;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DefaultTooltip.DefaultTooltip_C.UpdateTitleText
	 */
	struct UDefaultTooltip_C_UpdateTitleText_Params
	{
	public:
		class FText                                                NewTitleText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DefaultTooltip.DefaultTooltip_C.ExecuteUbergraph_DefaultTooltip
	 */
	struct UDefaultTooltip_C_ExecuteUbergraph_DefaultTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_25B8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
