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
	 * Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.ShowEmoteTogglePrompt
	 */
	struct UTeamCommsLayerWidgetV3_C_ShowEmoteTogglePrompt_Params
	{
	public:
		bool                                                       bShowPrompt;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.SetInEmoteMode
	 */
	struct UTeamCommsLayerWidgetV3_C_SetInEmoteMode_Params
	{
	public:
		bool                                                       bInEmoteMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.ExecuteUbergraph_TeamCommsLayerWidget-V3
	 */
	struct UTeamCommsLayerWidgetV3_C_ExecuteUbergraph_TeamCommsLayerWidgetV3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
