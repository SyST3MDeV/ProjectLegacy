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
	 * Class OrionUI.EventWidget
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	class UEventWidget : public UContentWidget
	{
	public:
		class FScriptMulticastDelegate                             MouseEnter;                                              // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MouseLeave;                                              // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MouseButtonDown;                                         // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MouseButtonUp;                                           // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG0I[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnMouseEvent__DelegateSignature();
		void OnMouseButtonEvent__DelegateSignature(const struct FPointerEvent& PointerEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.EventWidgetSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UEventWidgetSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y803[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerEditor
	 * Size -> 0x0438 (FullSize[0x0870] - InheritedSize[0x0438])
	 */
	class UOrionBannerEditor : public UOrionActivatableWidget
	{
	public:
		TAssetPtr<class UClass>                                    BannerActorClass;                                        // 0x0438(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMFK[0x4];                                   // 0x045C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UOrionMcpBannerAlterationItemDefinition*             DefaultAlteration;                                       // 0x0458(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionEditableTextBox*                               Edit_BannerName;                                         // 0x0460(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Banner*                             BannerSlot;                                              // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Charm*                              CharmSlot0;                                              // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Charm*                              CharmSlot1;                                              // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Charm*                              CharmSlot2;                                              // 0x0480(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Charm*                              CharmSlot3;                                              // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Charm*                              CharmSlot4;                                              // 0x0490(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Effect*                             ImpactEffectSlot;                                        // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Effect*                             ActivateEffectSlot;                                      // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerEditorItemPicker*                        ItemPicker;                                              // 0x04A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionDefaultButton*                                 Button_Save;                                             // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UOrionBannerSlot_Charm*>                      ActiveCharmSlots;                                        // 0x04B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UOrionBannerSlot_Charm*>                      InactiveCharmSlots;                                      // 0x04C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UOrionMcpBannerItem*                                 ActiveBanner;                                            // 0x04D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerSlot_Group*                              SlotGroup;                                               // 0x04E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DICM[0x388];                                 // 0x04E8(0x0388) MISSED OFFSET (PADDING)

	public:
		void SaveBanner();
		void HandleBannerNameCommitted(const class FText& NewText, ETextCommit CommitMethod);
		void HandleBannerNameChanged(const class FText& NewText);
		void EditBanner(class UOrionMcpBannerItem* InBanner);
		void BP_OnSaveStarted();
		void BP_OnSaveFinished(bool bSuccess);
		void BP_OnHighlightGroup(ESlotGroup GroupToHighlight);
		void BP_OnCommandsChanged(int32_t CommandCount);
		void BP_OnBannerNameChanged(const class FText& bannerName);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerEditorActor
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class AOrionBannerEditorActor : public AOrionPlacementActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerEditorItemPicker
	 * Size -> 0x0518 (FullSize[0x07C0] - InheritedSize[0x02A8])
	 */
	class UOrionBannerEditorItemPicker : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_Q7Y9[0x78];                                  // 0x02A8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CharmWidgetClass;                                        // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DyeWidgetClass;                                          // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectWidgetClass;                                       // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            Box_Items;                                               // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionDefaultButton*                                 Button_Close;                                            // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Text_Title;                                              // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetSwitcher*                                     Switcher_Mode;                                           // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerItem_Dye*                                DyeSlot0;                                                // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerItem_Dye*                                DyeSlot1;                                                // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerItem_Dye*                                DyeSlot2;                                                // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerItem_Charm*                              CharmSlot;                                               // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerItem_Effect*                             EffectSlot;                                              // 0x0378(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPanelWidget*                                        Panel_Dyes;                                              // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPanelWidget*                                        Panel_CharmDyes;                                         // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetSwitcher*                                     Switcher_Empty;                                          // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HRTK[0x140];                                 // 0x0398(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOrionBannerItem_Dye*>                        ActiveDyeSlots;                                          // 0x04D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UOrionBannerItem_Dye*>                        InactiveDyeSlots;                                        // 0x04E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UPanelWidget*                                        Panel_ActiveContainer;                                   // 0x04F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionInventoryItem*                                 LastHoveredItem;                                         // 0x0500(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBannerItem_Group*                              ItemGroup;                                               // 0x0508(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionMcpBannerAlterationItemDefinition*             DefaultAlteration;                                       // 0x0510(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A2XE[0x2A8];                                 // 0x0518(0x02A8) MISSED OFFSET (PADDING)

	public:
		void BP_OnShow(bool bSkipAnim);
		void BP_OnHide(bool bSkipAnim);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryItem
	 * Size -> 0x0278 (FullSize[0x0520] - InheritedSize[0x02A8])
	 */
	class UOrionInventoryItem : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_CDUZ[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredWidth;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredHeight;                                           // 0x02B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             DesiredPadding;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bSelfPad;                                                // 0x02C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXZM[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActionButtonClass;                                       // 0x02D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Style;                                                   // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionWidgetStyleSize                                      StyleSize;                                               // 0x02E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LJC[0x1CF];                                 // 0x02E1(0x01CF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionMcpItem*                                       McpItem;                                                 // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOrionMcpItemDefinition*                             ItemDef;                                                 // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPanelWidget*                                        Panel_AdditionalActions;                                 // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Text_PrimaryAction;                                      // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             Widget_Actions;                                          // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UOrionBaseButton*>                            ActionButtons;                                           // 0x04D8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EZB1[0x38];                                  // 0x04E8(0x0038) MISSED OFFSET (PADDING)

	public:
		void BP_OnSelectionChanged(bool bIsSelected);
		void BP_OnReset();
		void BP_OnLoadStarted();
		void BP_OnItemSet(const struct FInventoryItemDisplayData& DisplayData);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerItem
	 * Size -> 0x00A8 (FullSize[0x0350] - InheritedSize[0x02A8])
	 */
	class UOrionBannerItem : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_GF6R[0x88];                                  // 0x02A8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionInventoryItem*                                 ChildItem;                                               // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOrionBaseButton*                                    Button_Revert;                                           // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RQ3D[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerItem_Charm
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UOrionBannerItem_Charm : public UOrionBannerItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerItem_Dye
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UOrionBannerItem_Dye : public UOrionBannerItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerItem_Effect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UOrionBannerItem_Effect : public UOrionBannerItem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerItem_Group
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOrionBannerItem_Group : public UBase_Group
	{
	public:
		unsigned char                                              UnknownData_2IVB[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerSlot
	 * Size -> 0x0100 (FullSize[0x03A8] - InheritedSize[0x02A8])
	 */
	class UOrionBannerSlot : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_9RO3[0x100];                                 // 0x02A8(0x0100) Fix size for supers

	public:
		void BP_StartLoadingDyes();
		void BP_OnSelectionChanged(bool bIsSelected);
		void BP_OnReset();
		void BP_OnItemSet(const struct FOrionSlotDisplayInfo& ItemInfo);
		void BP_FinishLoadingDye(int32_t DyeSlot, class UTexture2D* Dye);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerSlot_Banner
	 * Size -> 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
	 */
	class UOrionBannerSlot_Banner : public UOrionBannerSlot
	{
	public:
		class UOrionMcpBannerItem*                                 BannerItem;                                              // 0x03A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerSlot_Charm
	 * Size -> 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
	 */
	class UOrionBannerSlot_Charm : public UOrionBannerSlot
	{
	public:
		struct FBannerSocketEntry                                  Socket;                                                  // 0x03A8(0x0030) NativeAccessSpecifierPrivate
		class UOrionMcpBannerItem*                                 BannerItem;                                              // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerSlot_Effect
	 * Size -> 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
	 */
	class UOrionBannerSlot_Effect : public UOrionBannerSlot
	{
	public:
		struct FBannerSocketEntry                                  Socket;                                                  // 0x03A8(0x0030) NativeAccessSpecifierPrivate
		class UOrionMcpBannerItemDefinition*                       EffectDefinition;                                        // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBannerSlot_Group
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOrionBannerSlot_Group : public UBase_Group
	{
	public:
		unsigned char                                              UnknownData_P2G8[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionBlurWidget
	 * Size -> 0x0000 (FullSize[0x01E0] - InheritedSize[0x01E0])
	 */
	class UOrionBlurWidget : public UBackgroundBlurWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionComponentInventoryEntry
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionComponentInventoryEntry : public UOrionUserWidgetBase
	{
	public:
		class UOrionLazyImage*                                     LazyImage_Icon;                                          // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTextBlock*                                     Text_Quantity;                                           // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionComponentInventorySection
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class UOrionComponentInventorySection : public UUserWidget
	{
	public:
		EAffinityType                                              Affinity;                                                // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DY9I[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOrionComponentInventoryEntry*>               ComponentEntries;                                        // 0x0238(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UOrionComponentItemDefinition*>               AffinityComponents;                                      // 0x0248(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UOrionTextBlock*                                     Text_AffinityName;                                       // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPanelWidget*                                        Panel_Entries;                                           // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionComponentInventory
	 * Size -> 0x0028 (FullSize[0x0460] - InheritedSize[0x0438])
	 */
	class UOrionComponentInventory : public UOrionActivatableWidget
	{
	public:
		TArray<class UOrionComponentInventorySection*>             ComponentSections;                                       // 0x0438(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UOrionDefaultButton*                                 Button_Show;                                             // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPanelWidget*                                        Panel_Sections;                                          // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BPBX[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionRequiredComponentEntry
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class UOrionRequiredComponentEntry : public UUserWidget
	{
	public:
		class UOrionLazyImage*                                     LazyImage_Icon;                                          // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTextBlock*                                     Text_Quantity;                                           // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionCraftingRoot
	 * Size -> 0x0338 (FullSize[0x0770] - InheritedSize[0x0438])
	 */
	class UOrionCraftingRoot : public UOrionActivatableWidget
	{
	public:
		class UClass*                                              StatEntryClass;                                          // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              RequiredComponentEntryClass;                             // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AOrionCraftingDevice*                                CraftingDevice;                                          // 0x0448(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9SVA[0x50];                                  // 0x0450(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionDefaultButton*                                 Button_Craft;                                            // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionDefaultButton*                                 Button_Decompose;                                        // 0x04A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionCardWidget*                                    Card_Details;                                            // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTextBlock*                                     Text_NumOwned;                                           // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      HBox_CraftingComponents;                                 // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHorizontalBox*                                      HBox_DismantleComponents;                                // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Text_Quantity;                                           // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOverlay*                                            Overlay_CardInspect;                                     // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTextBlock*                                     Text_Rarity;                                             // 0x04E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTextBlock*                                     Text_CardName;                                           // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UImage*                                              Image_Affinity;                                          // 0x04F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          Text_AffinityName;                                       // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionRichText*                                      RichText_SpecialEffects;                                 // 0x0500(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionRichText*                                      RichText_MaxedSpecialEffects;                            // 0x0508(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        VBox_StatEntries;                                        // 0x0510(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        VBox_MaxStatEntries;                                     // 0x0518(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        VBox_FullyUpgradeLabel;                                  // 0x0520(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USizeBox*                                            Box_RecHeroes;                                           // 0x0528(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionTileView*                                      TileView_Heroes;                                         // 0x0530(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GYZT[0x228];                                 // 0x0538(0x0228) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOrionHeroData*>                              RecommendedHeroes;                                       // 0x0760(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void SetCardBeingCrafted(class UOrionCardData* Card);
		void OnCraftStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionEULAText
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UOrionEULAText : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0118(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             TextMargin;                                              // 0x0130(0x0010) Edit, NativeAccessSpecifierPublic
		float                                                      WrapTextAt;                                              // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoWrapText;                                            // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKX4[0x13];                                  // 0x0145(0x0013) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionFPSAndPing
	 * Size -> 0x00D0 (FullSize[0x01E8] - InheritedSize[0x0118])
	 */
	class UOrionFPSAndPing : public UWidget
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0118(0x0068) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWYF[0x68];                                  // 0x0180(0x0068) MISSED OFFSET (PADDING)

	public:
		void UpdateForCurrentSettings();
		void SetPlayerController(class APlayerController* InController);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventory
	 * Size -> 0x0188 (FullSize[0x05C0] - InheritedSize[0x0438])
	 */
	class UOrionInventory : public UOrionActivatableWidget
	{
	public:
		class UClass*                                              BannerWidgetClass;                                       // 0x0438(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CharmWidgetClass;                                        // 0x0440(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DyeWidgetClass;                                          // 0x0448(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectWidgetClass;                                       // 0x0450(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              HeaderWidgetClass;                                       // 0x0458(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BannerTooltipClass;                                      // 0x0460(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CharmTooltipClass;                                       // 0x0468(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DyeTooltipClass;                                         // 0x0470(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectTooltipClass;                                      // 0x0478(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EmptyInventoryClass;                                     // 0x0480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            Box_PageContent;                                         // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5Y5O[0x130];                                 // 0x0490(0x0130) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryHeader
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UOrionInventoryHeader : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_154T[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          Text_Label;                                              // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_18LC[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryItem_Banner
	 * Size -> 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
	 */
	class UOrionInventoryItem_Banner : public UOrionInventoryItem
	{
	public:
		unsigned char                                              UnknownData_FM5P[0x10];                                  // 0x0520(0x0010) MISSED OFFSET (PADDING)

	public:
		void BP_OnDefaultChanged(bool bDefault);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryItem_Charm
	 * Size -> 0x0020 (FullSize[0x0540] - InheritedSize[0x0520])
	 */
	class UOrionInventoryItem_Charm : public UOrionInventoryItem
	{
	public:
		unsigned char                                              UnknownData_WFZI[0x20];                                  // 0x0520(0x0020) MISSED OFFSET (PADDING)

	public:
		void BP_OnStackCountChanged(int32_t NewCount);
		void BP_OnSetItemInUse(bool bInUse);
		void BP_OnDyesLoading();
		void BP_OnDyeLoaded(int32_t Dye, class UTexture2D* DyeTexture);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryItem_Dye
	 * Size -> 0x0020 (FullSize[0x0540] - InheritedSize[0x0520])
	 */
	class UOrionInventoryItem_Dye : public UOrionInventoryItem
	{
	public:
		unsigned char                                              UnknownData_F5T9[0x20];                                  // 0x0520(0x0020) MISSED OFFSET (PADDING)

	public:
		void BP_OnStackCountChanged(int32_t NewCount);
		void BP_OnIsDefaultDyeChanged(bool bIsDefaultDye);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryItem_Effect
	 * Size -> 0x0020 (FullSize[0x0540] - InheritedSize[0x0520])
	 */
	class UOrionInventoryItem_Effect : public UOrionInventoryItem
	{
	public:
		unsigned char                                              UnknownData_GWB5[0x20];                                  // 0x0520(0x0020) MISSED OFFSET (PADDING)

	public:
		void BP_OnStackCountChanged(int32_t NewCount);
		void BP_OnSetItemInUse(bool bInUse);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryItem_Group
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UOrionInventoryItem_Group : public UBase_Group
	{
	public:
		unsigned char                                              UnknownData_H6PY[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryTooltip
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UOrionInventoryTooltip : public UOrionUserWidgetBase
	{
	public:
		class UOrionMcpItem*                                       Item;                                                    // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOrionMcpItemDefinition*                             Definition;                                              // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void BP_OnItemNameChanged(const class FText& ItemName);
		void BP_OnHelpTextChanged(const class FText& HelpText);
		void BP_OnFlavorTextChanged(const class FText& FlavorText);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryTooltip_Banner
	 * Size -> 0x0060 (FullSize[0x0318] - InheritedSize[0x02B8])
	 */
	class UOrionInventoryTooltip_Banner : public UOrionInventoryTooltip
	{
	public:
		unsigned char                                              UnknownData_STIK[0x60];                                  // 0x02B8(0x0060) MISSED OFFSET (PADDING)

	public:
		void BP_OnImpactEffectChanged(const class FText& Effect);
		void BP_OnDyesChanged(TArray<class FText> Dyes);
		void BP_OnCharmsChanged(TArray<class FText> Charms);
		void BP_OnBannerTypeChanged(const class FText& BannerType);
		void BP_OnActivationEffectChanged(const class FText& Effect);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionInventoryTooltip_Charm
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UOrionInventoryTooltip_Charm : public UOrionInventoryTooltip
	{
	public:
		unsigned char                                              UnknownData_9E7V[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void BP_OnDyesChanged(TArray<class FText> Dyes);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionLegacySlateWidget
	 * Size -> 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
	 */
	class UOrionLegacySlateWidget : public UNativeWidgetHost
	{
	public:
		EOrionLegacySlateWidgetType                                ContainedWidgetType;                                     // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RD1E[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnClose;                                                 // 0x0130(0x0010) ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void UpdateSlateWidget(EOrionLegacySlateWidgetType SlateWidgetType);
		void SetOnCloseHandler(const class FScriptDelegate& OnCloseHandler);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionMiniMap
	 * Size -> 0x0388 (FullSize[0x04A0] - InheritedSize[0x0118])
	 */
	class UOrionMiniMap : public UWidget
	{
	public:
		class UMaterialInterface*                                  MinionMaterial;                                          // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  TowerMaterial;                                           // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PingDef;                                                 // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  BackgroundMaterial;                                      // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FogOfWar_FullCoverageTexture;                            // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USlateVectorArtData*                                 FogOfWar_Blip_VectorArt;                                 // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingTime;                                                // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OU5W[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SpectatorBrush;                                          // 0x0150(0x0090) Transient, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         MinionBrush;                                             // 0x01E0(0x0090) Transient, Protected, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MinionMID;                                               // 0x0270(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         TowerBrush;                                              // 0x0278(0x0090) Transient, Protected, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            TowerMID;                                                // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            BackgroundMID;                                           // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              FogOfWar_RenderTarget;                                   // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1OSR[0xB8];                                  // 0x0328(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         MapPingBrush;                                            // 0x03E0(0x0090) Transient, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          BackgroundTextureLarge;                                  // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LD56[0x28];                                  // 0x0478(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetupMiniMap();
		void SetMapModeIsLarge(bool bIsLargeMap);
		void SetLocalPlayerController(class APlayerController* LocalPlayerController);
		void ResetMinimapScaling();
		void OnTeamChanged(EOrionTeam NewTeamNum);
		bool GetMapModeIsLarge();
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionURLs
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UOrionURLs : public UObject
	{
	public:
		class FString                                              ForumURL;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Video1Title;                                             // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic
		class FString                                              Video1URL;                                               // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Video2Title;                                             // 0x0060(0x0018) BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic
		class FString                                              Video2URL;                                               // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCustomerServiceURLInLanguage>               CustomerServiceURLs;                                     // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		class UOrionURLs* STATIC_GetURLs();
		class FString GetCustomerServiceURLInLanguage(const class FString& LanguageCode);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionUserWidget_HUD
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UOrionUserWidget_HUD : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_9XHM[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UOrionViewModel_HUD>                  ViewModel;                                               // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UHUDContext>                          HUDContext;                                              // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		void ToggleNeedsMouse();
		void SetNeedsMouse(bool bNewNeedsMouse);
		void SetEscapeMenuState(bool bOpen);
		void QuitToMainMenu();
		bool IsInTravelMode();
		class UOrionViewModel_HUD* GetViewModel();
		struct FOrionDeveloperUIToggles GetUIToggles();
		struct FOrionTowerTargetingInfo GetTowerTargetingInfo();
		class UTexture2D* GetPlayerPortrait();
		class FText GetPlayerName();
		struct FVector GetPlayerLocation();
		int32_t GetPlayerLevel();
		struct FVector GetPlayerCameraLocation();
		struct FVector GetPlayerCameraDirection();
		EOrionTeam GetMyTeam(bool AllowSpectator);
		float GetMiniMapRotation();
		class UTexture2D* GetMiniMapBackground();
		bool GetLevelHasMiniMapVolume();
		int32_t GetKills();
		class FText GetHeroName();
		EOrionTeam GetEnemyTeam(bool AllowSpectator);
		int32_t GetDeaths();
		float GetDamageIndicatorRotation(const struct FVector& PlayerLocation, const struct FVector& InstigatorLocation);
		struct FOrionCoreInfo GetCoreInfo(EOrionTeam TeamNum);
		struct FOrionCardAbilityData GetCardAbilityData(EOrionAbilityBinding InputID);
		int32_t GetAssists();
		class UOrionUserWidget_GameEventMessage* CreateMessageWidget(const struct FOrionGameEventMessageData& MessageData);
		class UOrionUserWidget_LogMessage* CreateLogMessageWidget(const struct FOrionHUDLogMessageData& MessageData);
		static UClass* StaticClass();
	};

	/**
	 * Class OrionUI.OrionWindowControls
	 * Size -> 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
	 */
	class UOrionWindowControls : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_OSS7[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionBaseButton*                                    Button_Minimize;                                         // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBaseButton*                                    Button_Restore;                                          // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBaseButton*                                    Button_Maximize;                                         // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOrionBaseButton*                                    Button_Close;                                            // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
