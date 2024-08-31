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
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.HandleChangeInMenuState
	 */
	struct USpectatorHUDWidget_C_HandleChangeInMenuState_Params
	{
	public:
		EOrionMenuSlotTypes                                        MenuSlotType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsNewlyVisible;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_96AT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetAnalogCursorToProperState
	 */
	struct USpectatorHUDWidget_C_SetAnalogCursorToProperState_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.UpdateWatchedHeroWidgetVisibility
	 */
	struct USpectatorHUDWidget_C_UpdateWatchedHeroWidgetVisibility_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnWatchedHeroChange
	 */
	struct USpectatorHUDWidget_C_OnWatchedHeroChange_Params
	{
	public:
		EOrionTeam                                                 NewHeroTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3UJC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewHeroIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetShowControllerCursor
	 */
	struct USpectatorHUDWidget_C_SetShowControllerCursor_Params
	{
	public:
		bool                                                       NewShowControllerCursor;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnToggleSpectatorControllerCursor
	 */
	struct USpectatorHUDWidget_C_OnToggleSpectatorControllerCursor_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnUsingGamepadToggle
	 */
	struct USpectatorHUDWidget_C_OnUsingGamepadToggle_Params
	{
	public:
		bool                                                       bNewUsingGamepad;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnMobaCamChangeCameraAngle
	 */
	struct USpectatorHUDWidget_C_OnMobaCamChangeCameraAngle_Params
	{
	public:
		EIsometricCamAngle                                         NewCameraAngle;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetMinimapRotation
	 */
	struct USpectatorHUDWidget_C_SetMinimapRotation_Params
	{
	public:
		EIsometricCamAngle                                         CamAngle;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.Update HUD Toggles
	 */
	struct USpectatorHUDWidget_C_UpdateHUDToggles_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.Construct
	 */
	struct USpectatorHUDWidget_C_Construct_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnSpectatorCameraModeChange
	 */
	struct USpectatorHUDWidget_C_OnSpectatorCameraModeChange_Params
	{
	public:
		ESpectatorCameraType                                       NewCameraMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.HideSpectatorCameraModeText
	 */
	struct USpectatorHUDWidget_C_HideSpectatorCameraModeText_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnEnterState
	 */
	struct USpectatorHUDWidget_C_OnEnterState_Params
	{
	public:
		EOrionUIState                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnSetHudVisibility
	 */
	struct USpectatorHUDWidget_C_OnSetHudVisibility_Params
	{
	public:
		bool                                                       bMainVisible;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIndicatorsVisible;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnWatchedHeroChange_Event
	 */
	struct USpectatorHUDWidget_C_OnWatchedHeroChange_Event_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TNQZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    HeroIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnUsingGamepadToggle_Event
	 */
	struct USpectatorHUDWidget_C_OnUsingGamepadToggle_Event_Params
	{
	public:
		bool                                                       UsingAnalog;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnToggleSpectatorControllerCursor_Event
	 */
	struct USpectatorHUDWidget_C_OnToggleSpectatorControllerCursor_Event_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.HandleChangeInMenuState_Event
	 */
	struct USpectatorHUDWidget_C_HandleChangeInMenuState_Event_Params
	{
	public:
		EOrionMenuSlotTypes                                        MenuSlot;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNewIsOpenState;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetAnalogCursorToProperState_Event
	 */
	struct USpectatorHUDWidget_C_SetAnalogCursorToProperState_Event_Params
	{	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnExitState
	 */
	struct USpectatorHUDWidget_C_OnExitState_Params
	{
	public:
		EOrionUIState                                              NextState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorHUDWidget.SpectatorHUDWidget_C.ExecuteUbergraph_SpectatorHUDWidget
	 */
	struct USpectatorHUDWidget_C_ExecuteUbergraph_SpectatorHUDWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
