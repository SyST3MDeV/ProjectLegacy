/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Get Selected Slot Index
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::GetSelectedSlotIndex(int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Get Selected Slot Index");
		
		UCardMenuV3_C_GetSelectedSlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Card Slot Clicked
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionCardSlotIndex                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnCardSlotClicked(EOrionCardSlotIndex Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Card Slot Clicked");
		
		UCardMenuV3_C_OnCardSlotClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Trash Button Clicked
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnTrashButtonClicked(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Trash Button Clicked");
		
		UCardMenuV3_C_OnTrashButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Create Anim Array
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::CreateAnimArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Create Anim Array");
		
		UCardMenuV3_C_CreateAnimArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Update New Card Position
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionCardSlotIndex                                HandIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::UpdateNewCardPosition(EOrionCardSlotIndex HandIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Update New Card Position");
		
		UCardMenuV3_C_UpdateNewCardPosition_Params params {};
		params.HandIndex = HandIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Update Slot State
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHandSlot_C*                                 Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UOrionCardData*                              Card                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::UpdateSlotState(class UHandSlot_C* Slot, class UOrionCardData* Card)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Update Slot State");
		
		UCardMenuV3_C_UpdateSlotState_Params params {};
		params.Slot = Slot;
		params.Card = Card;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Hand Slot Clicked
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHandSlot_C*                                 Slot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnHandSlotClicked(class UHandSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Hand Slot Clicked");
		
		UCardMenuV3_C_OnHandSlotClicked_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Close Hand Menu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::CloseHandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Close Hand Menu");
		
		UCardMenuV3_C_CloseHandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Open Hand Menu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionCardData*                              Card                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OpenHandMenu(class UOrionCardData* Card)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Open Hand Menu");
		
		UCardMenuV3_C_OpenHandMenu_Params params {};
		params.Card = Card;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Close Hand Complete
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnCloseHandComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Close Hand Complete");
		
		UCardMenuV3_C_OnCloseHandComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Close Animation Complete
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnCloseAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Close Animation Complete");
		
		UCardMenuV3_C_OnCloseAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Card Points Updated
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Spent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnCardPointsUpdated(int32_t Spent, int32_t Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Card Points Updated");
		
		UCardMenuV3_C_OnCardPointsUpdated_Params params {};
		params.Spent = Spent;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Selected Tab Changed
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnSelectedTabChanged(class UOrionBaseButton* Button, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Selected Tab Changed");
		
		UCardMenuV3_C_OnSelectedTabChanged_Params params {};
		params.Button = Button;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.UpdateStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::UpdateStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.UpdateStats");
		
		UCardMenuV3_C_UpdateStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Open");
		
		UCardMenuV3_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.On Close");
		
		UCardMenuV3_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardMenuV3_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.Construct");
		
		UCardMenuV3_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnChangesCommitted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnChangesCommitted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnChangesCommitted");
		
		UCardMenuV3_C_OnChangesCommitted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnChangesDiscarded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnChangesDiscarded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnChangesDiscarded");
		
		UCardMenuV3_C_OnChangesDiscarded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionCardShopState                                NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnStateChanged(EOrionCardShopState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnStateChanged");
		
		UCardMenuV3_C_OnStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnHelpTextUpdated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewHelpText                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnHelpTextUpdated(const class FText& NewHelpText, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnHelpTextUpdated");
		
		UCardMenuV3_C_OnHelpTextUpdated_Params params {};
		params.NewHelpText = NewHelpText;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardMenuV3_C::BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_On Clicked__DelegateSignature");
		
		UCardMenuV3_C_BndEvt__ButtonClearFilter_K2Node_ComponentBoundEvent_522_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnSlotFilterChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        FilterText                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCardMenuV3_C::OnSlotFilterChanged(const class FText& FilterText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnSlotFilterChanged");
		
		UCardMenuV3_C_OnSlotFilterChanged_Params params {};
		params.FilterText = FilterText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnActiveCategoryChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionCardShopFilterType                           Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnActiveCategoryChanged(EOrionCardShopFilterType Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnActiveCategoryChanged");
		
		UCardMenuV3_C_OnActiveCategoryChanged_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature");
		
		UCardMenuV3_C_BndEvt__ButtonClearFilterLarge_K2Node_ComponentBoundEvent_395_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnPendingCardChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuV3_C::OnPendingCardChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnPendingCardChanged");
		
		UCardMenuV3_C_OnPendingCardChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnCardHovered
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionCardInstance                          Card                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCardMenuV3_C::OnCardHovered(const struct FOrionCardInstance& Card)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnCardHovered");
		
		UCardMenuV3_C_OnCardHovered_Params params {};
		params.Card = Card;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.OnReadOnlyStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsReadOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::OnReadOnlyStateChanged(bool bIsReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.OnReadOnlyStateChanged");
		
		UCardMenuV3_C_OnReadOnlyStateChanged_Params params {};
		params.bIsReadOnly = bIsReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.BP_OnDeckChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardMenuV3_C::BP_OnDeckChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.BP_OnDeckChanged");
		
		UCardMenuV3_C_BP_OnDeckChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature");
		
		UCardMenuV3_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_213_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenu-V3.CardMenu-V3_C.ExecuteUbergraph_CardMenu-V3
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuV3_C::ExecuteUbergraph_CardMenuV3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenu-V3.CardMenu-V3_C.ExecuteUbergraph_CardMenu-V3");
		
		UCardMenuV3_C_ExecuteUbergraph_CardMenuV3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardMenuV3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardMenuV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardMenu_V3.CardMenu-V3_C");
		return ptr;
	}

}


