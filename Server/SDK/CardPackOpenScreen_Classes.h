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
	 * WidgetBlueprintGeneratedClass CardPackOpenScreen.CardPackOpenScreen_C
	 * Size -> 0x0150 (FullSize[0x0588] - InheritedSize[0x0438])
	 */
	class UCardPackOpenScreen_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_38OP[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CardPackBeams;                                           // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    PackIdle;                                                // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    AcceptDisappear;                                         // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    RevealAllAppear;                                         // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    AcceptAppear;                                            // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    OpenAppear;                                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    RemoveCards;                                             // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    RevealCards;                                             // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderMenu;                                              // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardReward_C*                                       Card0;                                                   // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardReward_C*                                       Card1;                                                   // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardReward_C*                                       Card2;                                                   // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardReward_C*                                       Card3;                                                   // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardReward_C*                                       Card4;                                                   // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UComponentReward_C*                                  Component0;                                              // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UComponentReward_C*                                  Component1;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAccept;                                     // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonBuyPack;                                    // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonOpenPack;                                   // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonShowAll;                                    // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UExclusiveModeMenu_C*                                ExclusiveModeMenu;                                       // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageCardBeams;                                          // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageCardPack;                                           // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULightBox_C*                                         LightBox;                                                // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherScreens;                                    // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextPacksLeft;                                      // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            OverlayCardPack;                                         // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     PackTypeLabel;                                           // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UStorefront_Popup_C*                                 Storefront_Popup;                                        // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionMcpCardPackItem*                               PackToOpen;                                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UCardReward_C*>                               AllCards;                                                // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UComponentReward_C*>                          AllComponents;                                           // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ShowingAll;                                              // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanRevealCards;                                          // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CardPackReceived;                                        // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanDeactivate;                                           // 0x055B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q85W[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionMcpCardPackItem*                               PackBeingOpened;                                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UCardReward_C*>                               CardsBeingOpened;                                        // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        MaterialAffinityColor;                                   // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateAffinityColor(struct FLinearColor* Output_Get);
		void HideAllCards();
		void ResetCardArrayToDefaultPlacement();
		void HandleCurrencyChanged();
		bool OnHandleBackAction();
		void AttemptDeactivate();
		void UpdatePacksLeft();
		void Reset();
		void UpdateAcceptVisibility();
		void SetPackToOpen(class UOrionMcpCardPackItem* PackToOpen);
		void OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81(TArray<class UOrionCardData*> Cards, TArray<struct FOrionComponentReward> CraftingComponents);
		void OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81(TArray<class UOrionCardData*> Cards, TArray<struct FOrionComponentReward> CraftingComponents);
		void OnError_B6602FDF4150F2590ABFC9B42ED882AD();
		void OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD();
		void BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature();
		void BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnDeactivated();
		void Construct();
		void BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnActivated();
		void BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void ExecuteUbergraph_CardPackOpenScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
