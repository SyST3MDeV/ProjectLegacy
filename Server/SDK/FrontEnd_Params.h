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
	 * Function FrontEnd.FrontEnd_C.ToggleSubNavMenu
	 */
	struct UFrontEnd_C_ToggleSubNavMenu_Params
	{
	public:
		bool                                                       Collapse;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEnd.FrontEnd_C.UpdateAllCallToActions
	 */
	struct UFrontEnd_C_UpdateAllCallToActions_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.UpdateCallToActionCardPacks
	 */
	struct UFrontEnd_C_UpdateCallToActionCardPacks_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.Construct
	 */
	struct UFrontEnd_C_Construct_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.OnEnterState
	 */
	struct UFrontEnd_C_OnEnterState_Params
	{
	public:
		EOrionUIState                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEnd.FrontEnd_C.BndEvt__[Tab List] Tabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature
	 */
	struct UFrontEnd_C_BndEvt__TabListTabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsLoading;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEnd.FrontEnd_C.BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature
	 */
	struct UFrontEnd_C_BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature
	 */
	struct UFrontEnd_C_BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.OnReturnToHomeScreen
	 */
	struct UFrontEnd_C_OnReturnToHomeScreen_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.OnReturnToPlayScreen
	 */
	struct UFrontEnd_C_OnReturnToPlayScreen_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.OnMatchmakingStateChanged
	 */
	struct UFrontEnd_C_OnMatchmakingStateChanged_Params
	{
	public:
		EOrionPartyMatchmakingState                                NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEnd.FrontEnd_C.CustomEvent_1
	 */
	struct UFrontEnd_C_CustomEvent_1_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEnd.FrontEnd_C.CustomEvent_2
	 */
	struct UFrontEnd_C_CustomEvent_2_Params
	{	};

	/**
	 * Function FrontEnd.FrontEnd_C.HandleMenuSceneChanged
	 */
	struct UFrontEnd_C_HandleMenuSceneChanged_Params
	{
	public:
		class FName                                                NewScene;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd
	 */
	struct UFrontEnd_C_ExecuteUbergraph_FrontEnd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RUH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
