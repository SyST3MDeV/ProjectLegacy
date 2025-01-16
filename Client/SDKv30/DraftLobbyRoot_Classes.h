#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass DraftLobbyRoot.DraftLobbyRoot_C
	 * Size -> 0x0112 (FullSize[0x04EA] - InheritedSize[0x03D8])
	 */
	class UDraftLobbyRoot_C : public UOrionStateWidget_DraftLobby
	{
	public:
		unsigned char                                              UnknownData_6M9F[0x112];                                 // 0x03D8(0x0112) MISSED OFFSET (PADDING)

	public:
		void OnEnterState(unsigned char PreviousState);
		void BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnFirstHeroSelected();
		void OnBeginLocalPlayerTurn();
		void BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature();
		void OnLockInFailed();
		void OnHeroLockedIn();
		void OnLocalPlayerTurnUpNext();
		void OnDraftComplete(bool bSuccess);
		void OnDraftStarted(unsigned char FirstPickerType);
		void OnTurnComplete(unsigned char FinishedMemberType);
		void OnTurnStarted(unsigned char PickingMemberType);
		void OnLockInButtonEnabledChanged(bool bLockInEnabled);
		void BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature(float TimeLeftRatio);
		void BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature(class FActiveWidgetIndex* ActiveWidget, int32_t ActiveWidgetIndex);
		void ExecuteUbergraph_DraftLobbyRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
