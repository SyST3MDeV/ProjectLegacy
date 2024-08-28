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
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.UpdateAffinityColor
	 */
	struct UCardPackOpenScreen_C_UpdateAffinityColor_Params
	{
	public:
		struct FLinearColor                                        Output_Get;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.HideAllCards
	 */
	struct UCardPackOpenScreen_C_HideAllCards_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.ResetCardArrayToDefaultPlacement
	 */
	struct UCardPackOpenScreen_C_ResetCardArrayToDefaultPlacement_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.HandleCurrencyChanged
	 */
	struct UCardPackOpenScreen_C_HandleCurrencyChanged_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnHandleBackAction
	 */
	struct UCardPackOpenScreen_C_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.AttemptDeactivate
	 */
	struct UCardPackOpenScreen_C_AttemptDeactivate_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.UpdatePacksLeft
	 */
	struct UCardPackOpenScreen_C_UpdatePacksLeft_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.Reset
	 */
	struct UCardPackOpenScreen_C_Reset_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.UpdateAcceptVisibility
	 */
	struct UCardPackOpenScreen_C_UpdateAcceptVisibility_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.SetPackToOpen
	 */
	struct UCardPackOpenScreen_C_SetPackToOpen_Params
	{
	public:
		class UOrionMcpCardPackItem*                               PackToOpen;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81
	 */
	struct UCardPackOpenScreen_C_OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81_Params
	{
	public:
		TArray<class UOrionCardData*>                              Cards;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FOrionComponentReward>                       CraftingComponents;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81
	 */
	struct UCardPackOpenScreen_C_OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81_Params
	{
	public:
		TArray<class UOrionCardData*>                              Cards;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FOrionComponentReward>                       CraftingComponents;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnError_B6602FDF4150F2590ABFC9B42ED882AD
	 */
	struct UCardPackOpenScreen_C_OnError_B6602FDF4150F2590ABFC9B42ED882AD_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD
	 */
	struct UCardPackOpenScreen_C_OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnDeactivated
	 */
	struct UCardPackOpenScreen_C_OnDeactivated_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.Construct
	 */
	struct UCardPackOpenScreen_C_Construct_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.OnActivated
	 */
	struct UCardPackOpenScreen_C_OnActivated_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UCardPackOpenScreen_C_BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardPackOpenScreen.CardPackOpenScreen_C.ExecuteUbergraph_CardPackOpenScreen
	 */
	struct UCardPackOpenScreen_C_ExecuteUbergraph_CardPackOpenScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
