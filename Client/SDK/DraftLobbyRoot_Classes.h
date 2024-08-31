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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass DraftLobbyRoot.DraftLobbyRoot_C
	 * Size -> 0x0132 (FullSize[0x05A2] - InheritedSize[0x0470])
	 */
	class UDraftLobbyRoot_C : public UOrionStateWidget_DraftLobby
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NewAnimation_2;                                          // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Orange_CallToAction;                                     // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Blue_CallToAction;                                       // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    LockInButtonFlare;                                       // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    OrangeTeamTurn;                                          // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    BlueTeamTurn;                                            // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    BeginPlayerTurn;                                         // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    ShowHeroDetails;                                         // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Intro;                                                   // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Blue_Team_Flare;                                         // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BlueCallToAction;                                        // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderCustomizeBorder;                                   // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderRolesandPositions;                                 // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BottomGradient;                                          // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            BottomOverlay;                                           // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            ChatWindow;                                              // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDevelopmentLabelWidget_C*                           DevelopmentLabelWidget;                                  // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEcosystemRoot_C*                                    EcosystemRoot;                                           // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_7;                                                 // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageLeftDivider;                                        // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageLockInGlow;                                         // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageRightDivider;                                       // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULobbyChatWidget_C*                                  LobbyChatWidget;                                         // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Orange_Team_Flare;                                       // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              OrangeCallToAction;                                      // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherLockInFlow;                                 // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextHeroLockedIn;                                   // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              RedLockInAlert;                                          // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWindowControls_C*                                   WindowControls;                                          // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ACameraActor*                                        SelectCam;                                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ACameraActor*                                        CustomizeCam;                                            // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ACameraActor*                                        CurrentCam;                                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           Sound_HeroSelectMyTurn;                                  // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           Sound_LobbyIntro;                                        // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           Sound_LockInFail;                                        // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLocalPlayerPicking;                                    // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockInEnabled;                                           // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnEnterState(EOrionUIState PreviousState);
		void BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnFirstHeroSelected();
		void OnBeginLocalPlayerTurn();
		void BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnLockInFailed();
		void OnHeroLockedIn(class UOrionHeroData* HeroData);
		void OnLocalPlayerTurnUpNext();
		void OnDraftComplete(bool bSuccess);
		void OnDraftStarted(EOrionTeamMemberType FirstPickerType);
		void OnTurnComplete(EOrionTeamMemberType FinishedMemberType);
		void OnTurnStarted(EOrionTeamMemberType PickingMemberType);
		void OnLockInButtonEnabledChanged(bool bLockInEnabled);
		void BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature(float TimeLeftRatio);
		void BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32_t ActiveWidgetIndex);
		void ExecuteUbergraph_DraftLobbyRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
