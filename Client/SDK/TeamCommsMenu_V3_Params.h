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
	 * Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.On Open
	 */
	struct UTeamCommsMenuV3_C_OnOpen_Params
	{	};

	/**
	 * Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.On Close
	 */
	struct UTeamCommsMenuV3_C_OnClose_Params
	{	};

	/**
	 * Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.ExecuteUbergraph_TeamCommsMenu-V3
	 */
	struct UTeamCommsMenuV3_C_ExecuteUbergraph_TeamCommsMenuV3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
