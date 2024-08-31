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
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.UnSelectNode
	 */
	struct UTeamCommsNodeWidgetV3_C_UnSelectNode_Params
	{	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.UnHighlightNode
	 */
	struct UTeamCommsNodeWidgetV3_C_UnHighlightNode_Params
	{	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ShowNode
	 */
	struct UTeamCommsNodeWidgetV3_C_ShowNode_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.SelectNode
	 */
	struct UTeamCommsNodeWidgetV3_C_SelectNode_Params
	{	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ResetNode
	 */
	struct UTeamCommsNodeWidgetV3_C_ResetNode_Params
	{	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.HighlightNode
	 */
	struct UTeamCommsNodeWidgetV3_C_HighlightNode_Params
	{	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.HideNode
	 */
	struct UTeamCommsNodeWidgetV3_C_HideNode_Params
	{	};

	/**
	 * Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ExecuteUbergraph_TeamCommsNodeWidget-V3
	 */
	struct UTeamCommsNodeWidgetV3_C_ExecuteUbergraph_TeamCommsNodeWidgetV3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
