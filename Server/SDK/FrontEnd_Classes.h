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
	 * WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C
	 * Size -> 0x0128 (FullSize[0x0468] - InheritedSize[0x0340])
	 */
	class UFrontEnd_C : public UOrionStateWidget_FrontEnd
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FlashReadyCheck;                                         // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEcosystemRoot_C*                                    EcosystemRoot;                                           // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UFrontEndParty_C*                                    FrontEndParty;                                           // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTabList_C*                                          TabListTabs;                                             // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBanStatusIcon_C*                                    BanStatusIcon;                                           // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBlurryBar_C*                                        BlurryBar;                                               // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBoostStatusIcon_C*                                  BoostStatusIcon;                                         // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UExclusiveModeMenus_C*                               ExclusiveModeMenus;                                      // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UFriendCodes_C*                                      FriendCodes;                                             // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHome_C*                                             Home;                                                    // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageLine;                                               // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULightBox_C*                                         LightBox;                                                // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULightBox_C*                                         LightBox_Flair;                                          // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULightBox_C*                                         LightBoxMTX;                                             // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULightBox_C*                                         LightBoxMTXConfirmation;                                 // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionLoadGuard*                                     LoadGuardPrimaryMenus;                                   // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULobbyChatWidget_C*                                  LobbyChatWidget_78;                                      // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULocalPlayerInfoCard_C*                              LocalPlayerInfoCard;                                     // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              MainMenuBackground;                                      // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMatchmakingSearchPopup_C*                           MatchmakingSearchPopup;                                  // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPurchaseConfirmation_C*                             MTXConfirmation_Popup;                                   // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherMenus;                                      // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherModes;                                      // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_1;                                // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_2;                                              // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_3;                                              // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_9;                                              // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SubMenuBackground;                                       // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWindowControls_C*                                   WindowControls;                                          // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FOrionMenuEntry>                             FrontEndMenus;                                           // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UMediaPlayer*                                        FrontEndVideoPlayer;                                     // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     FrontEndAudioComponent;                                  // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMediaPlayer*                                        FrontEndAudioPlayer;                                     // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimespan                                           VideoFocusLostTime;                                      // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ToggleSubNavMenu(bool Collapse);
		void UpdateAllCallToActions();
		void UpdateCallToActionCardPacks();
		void Construct();
		void OnEnterState(EOrionUIState PreviousState);
		void BndEvt__TabListTabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature(bool bIsLoading);
		void BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature();
		void BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature();
		void OnReturnToHomeScreen();
		void OnReturnToPlayScreen();
		void OnMatchmakingStateChanged(EOrionPartyMatchmakingState NewState);
		void CustomEvent_1(const class FName& TabId);
		void CustomEvent_2();
		void HandleMenuSceneChanged(const class FName& NewScene);
		void ExecuteUbergraph_FrontEnd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
