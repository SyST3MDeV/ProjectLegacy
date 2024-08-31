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
	 * WidgetBlueprintGeneratedClass ExclusiveModeMenus.ExclusiveModeMenus_C
	 * Size -> 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
	 */
	class UExclusiveModeMenus_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBannerEditorRoot_C*                                 BannerEditorRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBundleScreen_C*                                     BundleScreen;                                            // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardPackOpenScreen_C*                               CardPackOpenScreen;                                      // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCraftingRoot_C*                                     CraftingRoot;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDeckBuilderRoot_C*                                  DeckBuilderRoot;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHeroDetailsRoot_C*                                  HeroDetailsRoot;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherExclusiveMenus;                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPostGameSummary_C*                                  PostGameSummary;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnExclusiveModeEntered;                                  // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnExclusiveModeLeft;                                     // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UOrionTabListWidget*                                 ActiveTabList;                                           // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowBundlePurchaseScreen(const class FString& OfferId);
		void ShowCraftingScreen(class UOrionCardData* Card);
		void ShowBannerEditor(class UOrionMcpBannerItem* BannerToEdit);
		void ShowPostGameSummary();
		void EstablishActiveMenu(class UOrionActivatableWidget* Menu, class UExclusiveModeMenu_C* ExclusiveModeFrame);
		void ShowPackOpenScreen(class UOrionMcpCardPackItem* Pack);
		void ShowDeckBuilder(class UOrionMcpDeckItem* Deck);
		void ShowHeroDetails(class UOrionHeroData* Hero, class UOrionSkinItemDefinition* Skin);
		void Construct();
		void BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature(class UOrionActivatableWidget* DeactivatedWidget);
		void ExecuteUbergraph_ExclusiveModeMenus(int32_t EntryPoint);
		void OnExclusiveModeLeft__DelegateSignature();
		void OnExclusiveModeEntered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
