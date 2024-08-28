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
	 * Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.OnPickStatusChanged
	 */
	struct UDraftPlayer_Enemy_C_OnPickStatusChanged_Params
	{
	public:
		EOrionDraftPickStatus                                      PickStatus;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.PreConstruct
	 */
	struct UDraftPlayer_Enemy_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.ExecuteUbergraph_DraftPlayer_Enemy
	 */
	struct UDraftPlayer_Enemy_C_ExecuteUbergraph_DraftPlayer_Enemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
