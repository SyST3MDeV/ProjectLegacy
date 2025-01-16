#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnEnterState
	 */
	struct UDraftLobbyRoot_C_OnEnterState_Params
	{
	public:
		unsigned char                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnFirstHeroSelected
	 */
	struct UDraftLobbyRoot_C_OnFirstHeroSelected_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnBeginLocalPlayerTurn
	 */
	struct UDraftLobbyRoot_C_OnBeginLocalPlayerTurn_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnLockInFailed
	 */
	struct UDraftLobbyRoot_C_OnLockInFailed_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnHeroLockedIn
	 */
	struct UDraftLobbyRoot_C_OnHeroLockedIn_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnLocalPlayerTurnUpNext
	 */
	struct UDraftLobbyRoot_C_OnLocalPlayerTurnUpNext_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnDraftComplete
	 */
	struct UDraftLobbyRoot_C_OnDraftComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnDraftStarted
	 */
	struct UDraftLobbyRoot_C_OnDraftStarted_Params
	{
	public:
		unsigned char                                              FirstPickerType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnTurnComplete
	 */
	struct UDraftLobbyRoot_C_OnTurnComplete_Params
	{
	public:
		unsigned char                                              FinishedMemberType;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnTurnStarted
	 */
	struct UDraftLobbyRoot_C_OnTurnStarted_Params
	{
	public:
		unsigned char                                              PickingMemberType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.OnLockInButtonEnabledChanged
	 */
	struct UDraftLobbyRoot_C_OnLockInButtonEnabledChanged_Params
	{
	public:
		bool                                                       bLockInEnabled;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature_Params
	{
	public:
		float                                                      TimeLeftRatio;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature
	 */
	struct UDraftLobbyRoot_C_BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature_Params
	{
	public:
		class FActiveWidgetIndex*                                  ActiveWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DraftLobbyRoot.DraftLobbyRoot_C.ExecuteUbergraph_DraftLobbyRoot
	 */
	struct UDraftLobbyRoot_C_ExecuteUbergraph_DraftLobbyRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
