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
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowBundlePurchaseScreen
	 */
	struct UExclusiveModeMenus_C_ShowBundlePurchaseScreen_Params
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowCraftingScreen
	 */
	struct UExclusiveModeMenus_C_ShowCraftingScreen_Params
	{
	public:
		class UOrionCardData*                                      Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowBannerEditor
	 */
	struct UExclusiveModeMenus_C_ShowBannerEditor_Params
	{
	public:
		class UOrionMcpBannerItem*                                 BannerToEdit;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowPostGameSummary
	 */
	struct UExclusiveModeMenus_C_ShowPostGameSummary_Params
	{	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.EstablishActiveMenu
	 */
	struct UExclusiveModeMenus_C_EstablishActiveMenu_Params
	{
	public:
		class UOrionActivatableWidget*                             Menu;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UExclusiveModeMenu_C*                                ExclusiveModeFrame;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowPackOpenScreen
	 */
	struct UExclusiveModeMenus_C_ShowPackOpenScreen_Params
	{
	public:
		class UOrionMcpCardPackItem*                               Pack;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowDeckBuilder
	 */
	struct UExclusiveModeMenus_C_ShowDeckBuilder_Params
	{
	public:
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowHeroDetails
	 */
	struct UExclusiveModeMenus_C_ShowHeroDetails_Params
	{
	public:
		class UOrionHeroData*                                      Hero;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.Construct
	 */
	struct UExclusiveModeMenus_C_Construct_Params
	{	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature
	 */
	struct UExclusiveModeMenus_C_BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature_Params
	{
	public:
		class UOrionActivatableWidget*                             DeactivatedWidget;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.ExecuteUbergraph_ExclusiveModeMenus
	 */
	struct UExclusiveModeMenus_C_ExecuteUbergraph_ExclusiveModeMenus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KNPZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.OnExclusiveModeLeft__DelegateSignature
	 */
	struct UExclusiveModeMenus_C_OnExclusiveModeLeft__DelegateSignature_Params
	{	};

	/**
	 * Function ExclusiveModeMenus.ExclusiveModeMenus_C.OnExclusiveModeEntered__DelegateSignature
	 */
	struct UExclusiveModeMenus_C_OnExclusiveModeEntered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
