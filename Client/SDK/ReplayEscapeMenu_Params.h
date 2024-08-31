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
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.Escape Button Pressed
	 */
	struct UReplayEscapeMenu_C_EscapeButtonPressed_Params
	{	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.Unregister for Input
	 */
	struct UReplayEscapeMenu_C_UnregisterforInput_Params
	{	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.Register for Input
	 */
	struct UReplayEscapeMenu_C_RegisterforInput_Params
	{	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.On Open
	 */
	struct UReplayEscapeMenu_C_OnOpen_Params
	{	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.On Close
	 */
	struct UReplayEscapeMenu_C_OnClose_Params
	{	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UReplayEscapeMenu_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UReplayEscapeMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ReportBugButton_K2Node_ComponentBoundEvent_229_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UReplayEscapeMenu_C_BndEvt__ReportBugButton_K2Node_ComponentBoundEvent_229_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UReplayEscapeMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ReplayEscapeMenu.ReplayEscapeMenu_C.ExecuteUbergraph_ReplayEscapeMenu
	 */
	struct UReplayEscapeMenu_C_ExecuteUbergraph_ReplayEscapeMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
