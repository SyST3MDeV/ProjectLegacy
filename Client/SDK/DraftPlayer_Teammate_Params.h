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
	 * Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.OnPickStatusChanged
	 */
	struct UDraftPlayer_Teammate_C_OnPickStatusChanged_Params
	{
	public:
		EOrionDraftPickStatus                                      PickStatus;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.OnMemberSet
	 */
	struct UDraftPlayer_Teammate_C_OnMemberSet_Params
	{
	public:
		bool                                                       bIsLocalPlayer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.ExecuteUbergraph_DraftPlayer_Teammate
	 */
	struct UDraftPlayer_Teammate_C_ExecuteUbergraph_DraftPlayer_Teammate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
