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
	 * Function InitialPreload_Root.InitialPreload_Root_C.DisplayReturnToTitle
	 */
	struct UInitialPreload_Root_C_DisplayReturnToTitle_Params
	{
	public:
		EReturnToMainMenuReason                                    Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0L1D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.IsReadyForNextState
	 */
	struct UInitialPreload_Root_C_IsReadyForNextState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnReturnToTitleClosed
	 */
	struct UInitialPreload_Root_C_OnReturnToTitleClosed_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.Toggle Loading Progress Display
	 */
	struct UInitialPreload_Root_C_ToggleLoadingProgressDisplay_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnEnterState
	 */
	struct UInitialPreload_Root_C_OnEnterState_Params
	{
	public:
		EOrionUIState                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnExitState
	 */
	struct UInitialPreload_Root_C_OnExitState_Params
	{
	public:
		EOrionUIState                                              NextState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateFailed_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateFailed_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateStateChange
	 */
	struct UInitialPreload_Root_C_OnUpdateStateChange_Params
	{
	public:
		EUpdateState                                               NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateHotfixProgress
	 */
	struct UInitialPreload_Root_C_OnUpdateHotfixProgress_Params
	{
	public:
		int32_t                                                    NumDownloaded;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TotalFiles;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumBytes;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TotalBytes;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsPatch_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateSuccess_NeedsPatch_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsReload_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateSuccess_NeedsReload_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsRelaunch_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateSuccess_NeedsRelaunch_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateSuccess_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NoChange_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateSuccess_NoChange_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateFailed_NotLoggedIn_Blueprint
	 */
	struct UInitialPreload_Root_C_OnUpdateFailed_NotLoggedIn_Blueprint_Params
	{	};

	/**
	 * Function InitialPreload_Root.InitialPreload_Root_C.ExecuteUbergraph_InitialPreload_Root
	 */
	struct UInitialPreload_Root_C_ExecuteUbergraph_InitialPreload_Root_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
