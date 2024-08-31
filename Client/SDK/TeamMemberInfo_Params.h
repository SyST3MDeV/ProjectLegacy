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
	 * Function TeamMemberInfo.TeamMemberInfo_C.Update Visuals
	 */
	struct UTeamMemberInfo_C_UpdateVisuals_Params
	{
	public:
		struct FOrionSpectatorHUDPlayerInfo                        NewPlayerInfo;                                           // 0x0000(0x00B0)  (Parm)
	};

	/**
	 * Function TeamMemberInfo.TeamMemberInfo_C.Construct
	 */
	struct UTeamMemberInfo_C_Construct_Params
	{	};

	/**
	 * Function TeamMemberInfo.TeamMemberInfo_C.OnUpdatePlayerInfo
	 */
	struct UTeamMemberInfo_C_OnUpdatePlayerInfo_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J4TO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FOrionSpectatorHUDPlayerInfo                        NewPlayerInfo;                                           // 0x0008(0x00B0)  (Parm)
	};

	/**
	 * Function TeamMemberInfo.TeamMemberInfo_C.ExecuteUbergraph_TeamMemberInfo
	 */
	struct UTeamMemberInfo_C_ExecuteUbergraph_TeamMemberInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75P2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
