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
	 * Function HUDWidget-V4.HUDWidget-V4_C.MapModeChanged
	 */
	struct UHUDWidgetV4_C_MapModeChanged_Params
	{
	public:
		bool                                                       bIsLargeMap;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.Construct
	 */
	struct UHUDWidgetV4_C_Construct_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.UpdateFPSAndPingSettings
	 */
	struct UHUDWidgetV4_C_UpdateFPSAndPingSettings_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.OnMatchEnd_BlueprintEvent
	 */
	struct UHUDWidgetV4_C_OnMatchEnd_BlueprintEvent_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.OnShowKillCam_BlueprintEvent
	 */
	struct UHUDWidgetV4_C_OnShowKillCam_BlueprintEvent_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.OnHideKillCam_BlueprintEvent
	 */
	struct UHUDWidgetV4_C_OnHideKillCam_BlueprintEvent_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.OnFadeHUDOut_BlueprintEvent
	 */
	struct UHUDWidgetV4_C_OnFadeHUDOut_BlueprintEvent_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.OnFadeHUDIn_BlueprintEvent
	 */
	struct UHUDWidgetV4_C_OnFadeHUDIn_BlueprintEvent_Params
	{	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.OnAnimationFinished
	 */
	struct UHUDWidgetV4_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.TutorialTest
	 */
	struct UHUDWidgetV4_C_TutorialTest_Params
	{
	public:
		int32_t                                                    TutorialIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDWidget-V4.HUDWidget-V4_C.ExecuteUbergraph_HUDWidget-V4
	 */
	struct UHUDWidgetV4_C_ExecuteUbergraph_HUDWidgetV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RYBV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
