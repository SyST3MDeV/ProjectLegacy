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
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.GamepadSwitch
	 */
	struct UEscape_Menu_Widget_C_GamepadSwitch_Params
	{
	public:
		bool                                                       IsUsingGamepad;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.UpdateSurrenderButton
	 */
	struct UEscape_Menu_Widget_C_UpdateSurrenderButton_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.SurrenderStatusChanged
	 */
	struct UEscape_Menu_Widget_C_SurrenderStatusChanged_Params
	{
	public:
		class AOrionPlayerState_Game*                              PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETeamSurrenderStatus                                       VoteStatus;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESurrenderVote                                             Vote;                                                    // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NRWD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.SubMenuClosed
	 */
	struct UEscape_Menu_Widget_C_SubMenuClosed_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.SubMenuOpened
	 */
	struct UEscape_Menu_Widget_C_SubMenuOpened_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.Escape Button Pressed
	 */
	struct UEscape_Menu_Widget_C_EscapeButtonPressed_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.Unregister for Input
	 */
	struct UEscape_Menu_Widget_C_UnregisterforInput_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.Register for Input
	 */
	struct UEscape_Menu_Widget_C_RegisterforInput_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3
	 */
	struct UEscape_Menu_Widget_C_OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnKilled_DEDCF13B44E528AEDE242588C04FFBB3
	 */
	struct UEscape_Menu_Widget_C_OnKilled_DEDCF13B44E528AEDE242588C04FFBB3_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3
	 */
	struct UEscape_Menu_Widget_C_OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3
	 */
	struct UEscape_Menu_Widget_C_OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.On Open
	 */
	struct UEscape_Menu_Widget_C_OnOpen_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.On Close
	 */
	struct UEscape_Menu_Widget_C_OnClose_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.Construct
	 */
	struct UEscape_Menu_Widget_C_Construct_Params
	{	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEscape_Menu_Widget_C_BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Escape_Menu_Widget.Escape_Menu_Widget_C.ExecuteUbergraph_Escape_Menu_Widget
	 */
	struct UEscape_Menu_Widget_C_ExecuteUbergraph_Escape_Menu_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QGM8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
