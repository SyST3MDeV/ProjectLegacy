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
	 * Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.OnPlayerPickStatusChanged
	 */
	struct UDraftTurnPlayerIcon_C_OnPlayerPickStatusChanged_Params
	{
	public:
		EOrionDraftPickStatus                                      PickStatus;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.Construct
	 */
	struct UDraftTurnPlayerIcon_C_Construct_Params
	{	};

	/**
	 * Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.ExecuteUbergraph_DraftTurnPlayerIcon
	 */
	struct UDraftTurnPlayerIcon_C_ExecuteUbergraph_DraftTurnPlayerIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
