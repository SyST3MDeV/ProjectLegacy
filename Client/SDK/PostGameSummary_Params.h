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
	 * Function PostGameSummary.PostGameSummary_C.OnActivated
	 */
	struct UPostGameSummary_C_OnActivated_Params
	{	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.OnDeactivated
	 */
	struct UPostGameSummary_C_OnDeactivated_Params
	{	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.Construct
	 */
	struct UPostGameSummary_C_Construct_Params
	{	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.BndEvt__Intro_K2Node_ComponentBoundEvent_867_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UPostGameSummary_C_BndEvt__Intro_K2Node_ComponentBoundEvent_867_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.BndEvt__ActivatableSwitcherSections_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
	 */
	struct UPostGameSummary_C_BndEvt__ActivatableSwitcherSections_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params
	{
	public:
		class UWidget*                                             ActiveWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.OnExitScreen
	 */
	struct UPostGameSummary_C_OnExitScreen_Params
	{	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.HandleSurveyComplete
	 */
	struct UPostGameSummary_C_HandleSurveyComplete_Params
	{	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.BndEvt__Player_Rating_K2Node_ComponentBoundEvent_59_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPostGameSummary_C_BndEvt__Player_Rating_K2Node_ComponentBoundEvent_59_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_24_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPostGameSummary_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_24_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PostGameSummary.PostGameSummary_C.ExecuteUbergraph_PostGameSummary
	 */
	struct UPostGameSummary_C_ExecuteUbergraph_PostGameSummary_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
