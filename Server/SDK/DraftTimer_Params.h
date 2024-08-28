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
	 * Function DraftTimer.DraftTimer_C.OnDraftStarted
	 */
	struct UDraftTimer_C_OnDraftStarted_Params
	{
	public:
		EOrionTeamMemberType                                       FirstPickerType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTimer.DraftTimer_C.OnDraftComplete
	 */
	struct UDraftTimer_C_OnDraftComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTimer.DraftTimer_C.OnTurnStarted
	 */
	struct UDraftTimer_C_OnTurnStarted_Params
	{
	public:
		EOrionTeamMemberType                                       PickingMemberType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTimer.DraftTimer_C.OnTurnComplete
	 */
	struct UDraftTimer_C_OnTurnComplete_Params
	{
	public:
		EOrionTeamMemberType                                       FinishedMemberType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTimer.DraftTimer_C.OnTimerUpdated
	 */
	struct UDraftTimer_C_OnTimerUpdated_Params
	{
	public:
		bool                                                       bIsPlayerTurn;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I45A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeLeftRatio;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTimer.DraftTimer_C.ExecuteUbergraph_DraftTimer
	 */
	struct UDraftTimer_C_ExecuteUbergraph_DraftTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftTimer.DraftTimer_C.OnPlayerTurnCountownUpdated__DelegateSignature
	 */
	struct UDraftTimer_C_OnPlayerTurnCountownUpdated__DelegateSignature_Params
	{
	public:
		float                                                      TimeLeftRatio;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
