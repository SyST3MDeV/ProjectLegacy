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
	 * DelegateFunction OrionUI.EventWidget.OnMouseEvent__DelegateSignature
	 */
	struct UEventWidget_OnMouseEvent__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction OrionUI.EventWidget.OnMouseButtonEvent__DelegateSignature
	 */
	struct UEventWidget_OnMouseButtonEvent__DelegateSignature_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.EventWidgetSlot.SetVerticalAlignment
	 */
	struct UEventWidgetSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.EventWidgetSlot.SetPadding
	 */
	struct UEventWidgetSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.EventWidgetSlot.SetHorizontalAlignment
	 */
	struct UEventWidgetSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.SaveBanner
	 */
	struct UOrionBannerEditor_SaveBanner_Params
	{	};

	/**
	 * Function OrionUI.OrionBannerEditor.HandleBannerNameCommitted
	 */
	struct UOrionBannerEditor_HandleBannerNameCommitted_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.HandleBannerNameChanged
	 */
	struct UOrionBannerEditor_HandleBannerNameChanged_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.EditBanner
	 */
	struct UOrionBannerEditor_EditBanner_Params
	{
	public:
		class UOrionMcpBannerItem*                                 InBanner;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.BP_OnSaveStarted
	 */
	struct UOrionBannerEditor_BP_OnSaveStarted_Params
	{	};

	/**
	 * Function OrionUI.OrionBannerEditor.BP_OnSaveFinished
	 */
	struct UOrionBannerEditor_BP_OnSaveFinished_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.BP_OnHighlightGroup
	 */
	struct UOrionBannerEditor_BP_OnHighlightGroup_Params
	{
	public:
		ESlotGroup                                                 GroupToHighlight;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.BP_OnCommandsChanged
	 */
	struct UOrionBannerEditor_BP_OnCommandsChanged_Params
	{
	public:
		int32_t                                                    CommandCount;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditor.BP_OnBannerNameChanged
	 */
	struct UOrionBannerEditor_BP_OnBannerNameChanged_Params
	{
	public:
		class FText                                                bannerName;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditorItemPicker.BP_OnShow
	 */
	struct UOrionBannerEditorItemPicker_BP_OnShow_Params
	{
	public:
		bool                                                       bSkipAnim;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerEditorItemPicker.BP_OnHide
	 */
	struct UOrionBannerEditorItemPicker_BP_OnHide_Params
	{
	public:
		bool                                                       bSkipAnim;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem.BP_OnSelectionChanged
	 */
	struct UOrionInventoryItem_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem.BP_OnReset
	 */
	struct UOrionInventoryItem_BP_OnReset_Params
	{	};

	/**
	 * Function OrionUI.OrionInventoryItem.BP_OnLoadStarted
	 */
	struct UOrionInventoryItem_BP_OnLoadStarted_Params
	{	};

	/**
	 * Function OrionUI.OrionInventoryItem.BP_OnItemSet
	 */
	struct UOrionInventoryItem_BP_OnItemSet_Params
	{
	public:
		struct FInventoryItemDisplayData                           DisplayData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerSlot.BP_StartLoadingDyes
	 */
	struct UOrionBannerSlot_BP_StartLoadingDyes_Params
	{	};

	/**
	 * Function OrionUI.OrionBannerSlot.BP_OnSelectionChanged
	 */
	struct UOrionBannerSlot_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerSlot.BP_OnReset
	 */
	struct UOrionBannerSlot_BP_OnReset_Params
	{	};

	/**
	 * Function OrionUI.OrionBannerSlot.BP_OnItemSet
	 */
	struct UOrionBannerSlot_BP_OnItemSet_Params
	{
	public:
		struct FOrionSlotDisplayInfo                               ItemInfo;                                                // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionBannerSlot.BP_FinishLoadingDye
	 */
	struct UOrionBannerSlot_BP_FinishLoadingDye_Params
	{
	public:
		int32_t                                                    DyeSlot;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1K78[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Dye;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionCraftingRoot.SetCardBeingCrafted
	 */
	struct UOrionCraftingRoot_SetCardBeingCrafted_Params
	{
	public:
		class UOrionCardData*                                      Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionCraftingRoot.OnCraftStarted
	 */
	struct UOrionCraftingRoot_OnCraftStarted_Params
	{	};

	/**
	 * Function OrionUI.OrionEULAText.SetText
	 */
	struct UOrionEULAText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionFPSAndPing.UpdateForCurrentSettings
	 */
	struct UOrionFPSAndPing_UpdateForCurrentSettings_Params
	{	};

	/**
	 * Function OrionUI.OrionFPSAndPing.SetPlayerController
	 */
	struct UOrionFPSAndPing_SetPlayerController_Params
	{
	public:
		class APlayerController*                                   InController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Banner.BP_OnDefaultChanged
	 */
	struct UOrionInventoryItem_Banner_BP_OnDefaultChanged_Params
	{
	public:
		bool                                                       bDefault;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Charm.BP_OnStackCountChanged
	 */
	struct UOrionInventoryItem_Charm_BP_OnStackCountChanged_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Charm.BP_OnSetItemInUse
	 */
	struct UOrionInventoryItem_Charm_BP_OnSetItemInUse_Params
	{
	public:
		bool                                                       bInUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Charm.BP_OnDyesLoading
	 */
	struct UOrionInventoryItem_Charm_BP_OnDyesLoading_Params
	{	};

	/**
	 * Function OrionUI.OrionInventoryItem_Charm.BP_OnDyeLoaded
	 */
	struct UOrionInventoryItem_Charm_BP_OnDyeLoaded_Params
	{
	public:
		int32_t                                                    Dye;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0KKH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          DyeTexture;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Dye.BP_OnStackCountChanged
	 */
	struct UOrionInventoryItem_Dye_BP_OnStackCountChanged_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Dye.BP_OnIsDefaultDyeChanged
	 */
	struct UOrionInventoryItem_Dye_BP_OnIsDefaultDyeChanged_Params
	{
	public:
		bool                                                       bIsDefaultDye;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Effect.BP_OnStackCountChanged
	 */
	struct UOrionInventoryItem_Effect_BP_OnStackCountChanged_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryItem_Effect.BP_OnSetItemInUse
	 */
	struct UOrionInventoryItem_Effect_BP_OnSetItemInUse_Params
	{
	public:
		bool                                                       bInUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip.BP_OnItemNameChanged
	 */
	struct UOrionInventoryTooltip_BP_OnItemNameChanged_Params
	{
	public:
		class FText                                                ItemName;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip.BP_OnHelpTextChanged
	 */
	struct UOrionInventoryTooltip_BP_OnHelpTextChanged_Params
	{
	public:
		class FText                                                HelpText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip.BP_OnFlavorTextChanged
	 */
	struct UOrionInventoryTooltip_BP_OnFlavorTextChanged_Params
	{
	public:
		class FText                                                FlavorText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip_Banner.BP_OnImpactEffectChanged
	 */
	struct UOrionInventoryTooltip_Banner_BP_OnImpactEffectChanged_Params
	{
	public:
		class FText                                                Effect;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip_Banner.BP_OnDyesChanged
	 */
	struct UOrionInventoryTooltip_Banner_BP_OnDyesChanged_Params
	{
	public:
		TArray<class FText>                                        Dyes;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip_Banner.BP_OnCharmsChanged
	 */
	struct UOrionInventoryTooltip_Banner_BP_OnCharmsChanged_Params
	{
	public:
		TArray<class FText>                                        Charms;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip_Banner.BP_OnBannerTypeChanged
	 */
	struct UOrionInventoryTooltip_Banner_BP_OnBannerTypeChanged_Params
	{
	public:
		class FText                                                BannerType;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip_Banner.BP_OnActivationEffectChanged
	 */
	struct UOrionInventoryTooltip_Banner_BP_OnActivationEffectChanged_Params
	{
	public:
		class FText                                                Effect;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionInventoryTooltip_Charm.BP_OnDyesChanged
	 */
	struct UOrionInventoryTooltip_Charm_BP_OnDyesChanged_Params
	{
	public:
		TArray<class FText>                                        Dyes;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionLegacySlateWidget.UpdateSlateWidget
	 */
	struct UOrionLegacySlateWidget_UpdateSlateWidget_Params
	{
	public:
		EOrionLegacySlateWidgetType                                SlateWidgetType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionLegacySlateWidget.SetOnCloseHandler
	 */
	struct UOrionLegacySlateWidget_SetOnCloseHandler_Params
	{
	public:
		class FScriptDelegate                                      OnCloseHandler;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionMiniMap.SetupMiniMap
	 */
	struct UOrionMiniMap_SetupMiniMap_Params
	{	};

	/**
	 * Function OrionUI.OrionMiniMap.SetMapModeIsLarge
	 */
	struct UOrionMiniMap_SetMapModeIsLarge_Params
	{
	public:
		bool                                                       bIsLargeMap;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionMiniMap.SetLocalPlayerController
	 */
	struct UOrionMiniMap_SetLocalPlayerController_Params
	{
	public:
		class APlayerController*                                   LocalPlayerController;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionMiniMap.ResetMinimapScaling
	 */
	struct UOrionMiniMap_ResetMinimapScaling_Params
	{	};

	/**
	 * Function OrionUI.OrionMiniMap.OnTeamChanged
	 */
	struct UOrionMiniMap_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamNum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionMiniMap.GetMapModeIsLarge
	 */
	struct UOrionMiniMap_GetMapModeIsLarge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionURLs.GetURLs
	 */
	struct UOrionURLs_GetURLs_Params
	{
	public:
		class UOrionURLs*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionURLs.GetCustomerServiceURLInLanguage
	 */
	struct UOrionURLs_GetCustomerServiceURLInLanguage_Params
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.ToggleNeedsMouse
	 */
	struct UOrionUserWidget_HUD_ToggleNeedsMouse_Params
	{	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.SetNeedsMouse
	 */
	struct UOrionUserWidget_HUD_SetNeedsMouse_Params
	{
	public:
		bool                                                       bNewNeedsMouse;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.SetEscapeMenuState
	 */
	struct UOrionUserWidget_HUD_SetEscapeMenuState_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.QuitToMainMenu
	 */
	struct UOrionUserWidget_HUD_QuitToMainMenu_Params
	{	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.IsInTravelMode
	 */
	struct UOrionUserWidget_HUD_IsInTravelMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetViewModel
	 */
	struct UOrionUserWidget_HUD_GetViewModel_Params
	{
	public:
		class UOrionViewModel_HUD*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetUIToggles
	 */
	struct UOrionUserWidget_HUD_GetUIToggles_Params
	{
	public:
		struct FOrionDeveloperUIToggles                            ReturnValue;                                             // 0x0000(0x0007)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetTowerTargetingInfo
	 */
	struct UOrionUserWidget_HUD_GetTowerTargetingInfo_Params
	{
	public:
		struct FOrionTowerTargetingInfo                            ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetPlayerPortrait
	 */
	struct UOrionUserWidget_HUD_GetPlayerPortrait_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetPlayerName
	 */
	struct UOrionUserWidget_HUD_GetPlayerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetPlayerLocation
	 */
	struct UOrionUserWidget_HUD_GetPlayerLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetPlayerLevel
	 */
	struct UOrionUserWidget_HUD_GetPlayerLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetPlayerCameraLocation
	 */
	struct UOrionUserWidget_HUD_GetPlayerCameraLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetPlayerCameraDirection
	 */
	struct UOrionUserWidget_HUD_GetPlayerCameraDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetMyTeam
	 */
	struct UOrionUserWidget_HUD_GetMyTeam_Params
	{
	public:
		bool                                                       AllowSpectator;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EOrionTeam                                                 ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetMiniMapRotation
	 */
	struct UOrionUserWidget_HUD_GetMiniMapRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetMiniMapBackground
	 */
	struct UOrionUserWidget_HUD_GetMiniMapBackground_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetLevelHasMiniMapVolume
	 */
	struct UOrionUserWidget_HUD_GetLevelHasMiniMapVolume_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetKills
	 */
	struct UOrionUserWidget_HUD_GetKills_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetHeroName
	 */
	struct UOrionUserWidget_HUD_GetHeroName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetEnemyTeam
	 */
	struct UOrionUserWidget_HUD_GetEnemyTeam_Params
	{
	public:
		bool                                                       AllowSpectator;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EOrionTeam                                                 ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetDeaths
	 */
	struct UOrionUserWidget_HUD_GetDeaths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetDamageIndicatorRotation
	 */
	struct UOrionUserWidget_HUD_GetDamageIndicatorRotation_Params
	{
	public:
		struct FVector                                             PlayerLocation;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             InstigatorLocation;                                      // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetCoreInfo
	 */
	struct UOrionUserWidget_HUD_GetCoreInfo_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9AUA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionCoreInfo                                      ReturnValue;                                             // 0x0004(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetCardAbilityData
	 */
	struct UOrionUserWidget_HUD_GetCardAbilityData_Params
	{
	public:
		EOrionAbilityBinding                                       InputID;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0WBH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionCardAbilityData                               ReturnValue;                                             // 0x0008(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.GetAssists
	 */
	struct UOrionUserWidget_HUD_GetAssists_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.CreateMessageWidget
	 */
	struct UOrionUserWidget_HUD_CreateMessageWidget_Params
	{
	public:
		struct FOrionGameEventMessageData                          MessageData;                                             // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UOrionUserWidget_GameEventMessage*                   ReturnValue;                                             // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OrionUI.OrionUserWidget_HUD.CreateLogMessageWidget
	 */
	struct UOrionUserWidget_HUD_CreateLogMessageWidget_Params
	{
	public:
		struct FOrionHUDLogMessageData                             MessageData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UOrionUserWidget_LogMessage*                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
