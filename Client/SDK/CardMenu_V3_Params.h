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
	 * Function CardMenu-V3.CardMenu-V3_C.Get Selected Slot Index
	 */
	struct UCardMenuV3_C_GetSelectedSlotIndex_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Card Slot Clicked
	 */
	struct UCardMenuV3_C_OnCardSlotClicked_Params
	{
	public:
		EOrionCardSlotIndex                                        Index;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Trash Button Clicked
	 */
	struct UCardMenuV3_C_OnTrashButtonClicked_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.Create Anim Array
	 */
	struct UCardMenuV3_C_CreateAnimArray_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.Update New Card Position
	 */
	struct UCardMenuV3_C_UpdateNewCardPosition_Params
	{
	public:
		EOrionCardSlotIndex                                        HandIndex;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.Update Slot State
	 */
	struct UCardMenuV3_C_UpdateSlotState_Params
	{
	public:
		class UHandSlot_C*                                         Slot;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UOrionCardData*                                      Card;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Hand Slot Clicked
	 */
	struct UCardMenuV3_C_OnHandSlotClicked_Params
	{
	public:
		class UHandSlot_C*                                         Slot;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.Close Hand Menu
	 */
	struct UCardMenuV3_C_CloseHandMenu_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.Open Hand Menu
	 */
	struct UCardMenuV3_C_OpenHandMenu_Params
	{
	public:
		class UOrionCardData*                                      Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Close Hand Complete
	 */
	struct UCardMenuV3_C_OnCloseHandComplete_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Close Animation Complete
	 */
	struct UCardMenuV3_C_OnCloseAnimationComplete_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Card Points Updated
	 */
	struct UCardMenuV3_C_OnCardPointsUpdated_Params
	{
	public:
		int32_t                                                    Spent;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Max;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Selected Tab Changed
	 */
	struct UCardMenuV3_C_OnSelectedTabChanged_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.UpdateStats
	 */
	struct UCardMenuV3_C_UpdateStats_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Open
	 */
	struct UCardMenuV3_C_OnOpen_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.On Close
	 */
	struct UCardMenuV3_C_OnClose_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.Construct
	 */
	struct UCardMenuV3_C_Construct_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnChangesCommitted
	 */
	struct UCardMenuV3_C_OnChangesCommitted_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnChangesDiscarded
	 */
	struct UCardMenuV3_C_OnChangesDiscarded_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnStateChanged
	 */
	struct UCardMenuV3_C_OnStateChanged_Params
	{
	public:
		EOrionCardShopState                                        NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnHelpTextUpdated
	 */
	struct UCardMenuV3_C_OnHelpTextUpdated_Params
	{
	public:
		class FText                                                NewHelpText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_On Clicked__DelegateSignature
	 */
	struct UCardMenuV3_C_BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnSlotFilterChanged
	 */
	struct UCardMenuV3_C_OnSlotFilterChanged_Params
	{
	public:
		class FText                                                FilterText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnActiveCategoryChanged
	 */
	struct UCardMenuV3_C_OnActiveCategoryChanged_Params
	{
	public:
		EOrionCardShopFilterType                                   Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UCardMenuV3_C_BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnPendingCardChanged
	 */
	struct UCardMenuV3_C_OnPendingCardChanged_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnCardHovered
	 */
	struct UCardMenuV3_C_OnCardHovered_Params
	{
	public:
		struct FOrionCardInstance                                  Card;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.OnReadOnlyStateChanged
	 */
	struct UCardMenuV3_C_OnReadOnlyStateChanged_Params
	{
	public:
		bool                                                       bIsReadOnly;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.BP_OnDeckChanged
	 */
	struct UCardMenuV3_C_BP_OnDeckChanged_Params
	{	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UCardMenuV3_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CardMenu-V3.CardMenu-V3_C.ExecuteUbergraph_CardMenu-V3
	 */
	struct UCardMenuV3_C_ExecuteUbergraph_CardMenuV3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_37BZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
