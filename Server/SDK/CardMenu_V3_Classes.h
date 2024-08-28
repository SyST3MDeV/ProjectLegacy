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
	 * WidgetBlueprintGeneratedClass CardMenu_V3.CardMenu-V3_C
	 * Size -> 0x012A (FullSize[0x08FA] - InheritedSize[0x07D0])
	 */
	class UCardMenuV3_C : public UOrionCardShopWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowHandAnimation;                                       // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    OpenAnimation;                                           // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderRead_Only;                                         // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    Button_Close;                                            // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCloseButton_C*                                      ButtonClearFilter;                                       // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    ButtonClearFilterLarge;                                  // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     CardPointText;                                           // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCircularThrobber*                                   CircularThrobber_19;                                     // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      CloseContainer;                                          // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HBox_Cards;                                              // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHeroAttributesDisplay_C*                            HeroAttributesDisplay;                                   // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     HeroName;                                                // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_223;                                               // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_6117;                                              // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_17788;                                             // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_ReadOnly;                                          // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeySmall_C*                                         KeySmall_127;                                            // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeySmall_C*                                         KeySmall_128;                                            // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_2;                                // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_3;                                // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USurrenderStatus_C*                                  SurrenderStatus_Deck;                                    // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultTab_C*                                       TabAll;                                                  // 0x0890(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultTab_C*                                       TabEquipment;                                            // 0x0898(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultTab_C*                                       TabUpgrades;                                             // 0x08A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     Text_ReadOnly;                                           // 0x08A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     TextActiveFilter;                                        // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      UndoContainer;                                           // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionBaseButton_Group*                              TabGroup;                                                // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UHandSlot_C*>                                 HandSlots;                                               // 0x08C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UImage*>                                      AnimSlots;                                               // 0x08D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UDefaultButton_C*>                            TrashButtons;                                            // 0x08E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       HandOpen;                                                // 0x08F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InputRegistered;                                         // 0x08F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetSelectedSlotIndex(int32_t* Result);
		void OnCardSlotClicked(EOrionCardSlotIndex Index);
		void OnTrashButtonClicked(class UOrionBaseButton* Button);
		void CreateAnimArray();
		void UpdateNewCardPosition(EOrionCardSlotIndex HandIndex);
		void UpdateSlotState(class UHandSlot_C* Slot, class UOrionCardData* Card);
		void OnHandSlotClicked(class UHandSlot_C* Slot);
		void CloseHandMenu();
		void OpenHandMenu(class UOrionCardData* Card);
		void OnCloseHandComplete();
		void OnCloseAnimationComplete();
		void OnCardPointsUpdated(int32_t Spent, int32_t Max);
		void OnSelectedTabChanged(class UOrionBaseButton* Button, int32_t Index);
		void UpdateStats();
		void OnOpen();
		void OnClose();
		void Construct();
		void OnChangesCommitted();
		void OnChangesDiscarded();
		void OnStateChanged(EOrionCardShopState NewState);
		void OnHelpTextUpdated(const class FText& NewHelpText, const struct FLinearColor& Color);
		void BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_OnClicked__DelegateSignature();
		void OnSlotFilterChanged(const class FText& FilterText);
		void OnActiveCategoryChanged(EOrionCardShopFilterType Category);
		void BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnPendingCardChanged();
		void OnCardHovered(const struct FOrionCardInstance& Card);
		void OnReadOnlyStateChanged(bool bIsReadOnly);
		void BP_OnDeckChanged();
		void BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_CardMenuV3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
