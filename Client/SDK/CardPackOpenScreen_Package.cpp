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
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.UpdateAffinityColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::UpdateAffinityColor(struct FLinearColor* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.UpdateAffinityColor");
		
		UCardPackOpenScreen_C_UpdateAffinityColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.HideAllCards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::HideAllCards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.HideAllCards");
		
		UCardPackOpenScreen_C_HideAllCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.ResetCardArrayToDefaultPlacement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::ResetCardArrayToDefaultPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.ResetCardArrayToDefaultPlacement");
		
		UCardPackOpenScreen_C_ResetCardArrayToDefaultPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.HandleCurrencyChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::HandleCurrencyChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.HandleCurrencyChanged");
		
		UCardPackOpenScreen_C_HandleCurrencyChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnHandleBackAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UCardPackOpenScreen_C::OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnHandleBackAction");
		
		UCardPackOpenScreen_C_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.AttemptDeactivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::AttemptDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.AttemptDeactivate");
		
		UCardPackOpenScreen_C_AttemptDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.UpdatePacksLeft
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::UpdatePacksLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.UpdatePacksLeft");
		
		UCardPackOpenScreen_C_UpdatePacksLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.Reset");
		
		UCardPackOpenScreen_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.UpdateAcceptVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::UpdateAcceptVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.UpdateAcceptVisibility");
		
		UCardPackOpenScreen_C_UpdateAcceptVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.SetPackToOpen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpCardPackItem*                       PackToOpen                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::SetPackToOpen(class UOrionMcpCardPackItem* PackToOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.SetPackToOpen");
		
		UCardPackOpenScreen_C_SetPackToOpen_Params params {};
		params.PackToOpen = PackToOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UOrionCardData*>                      Cards                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FOrionComponentReward>               CraftingComponents                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UCardPackOpenScreen_C::OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81(TArray<class UOrionCardData*> Cards, TArray<struct FOrionComponentReward> CraftingComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81");
		
		UCardPackOpenScreen_C_OnFailure_BB6AC51A4F39096B3B8CD580EFDCFE81_Params params {};
		params.Cards = Cards;
		params.CraftingComponents = CraftingComponents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UOrionCardData*>                      Cards                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FOrionComponentReward>               CraftingComponents                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UCardPackOpenScreen_C::OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81(TArray<class UOrionCardData*> Cards, TArray<struct FOrionComponentReward> CraftingComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81");
		
		UCardPackOpenScreen_C_OnSuccess_BB6AC51A4F39096B3B8CD580EFDCFE81_Params params {};
		params.Cards = Cards;
		params.CraftingComponents = CraftingComponents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnError_B6602FDF4150F2590ABFC9B42ED882AD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::OnError_B6602FDF4150F2590ABFC9B42ED882AD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnError_B6602FDF4150F2590ABFC9B42ED882AD");
		
		UCardPackOpenScreen_C_OnError_B6602FDF4150F2590ABFC9B42ED882AD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD");
		
		UCardPackOpenScreen_C_OnSuccess_B6602FDF4150F2590ABFC9B42ED882AD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_666_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__DefaultButtonOpenPack_K2Node_ComponentBoundEvent_33_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnDeactivated");
		
		UCardPackOpenScreen_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.Construct");
		
		UCardPackOpenScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_703_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.OnActivated");
		
		UCardPackOpenScreen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__DefaultButtonShowAll_K2Node_ComponentBoundEvent_829_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1363_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_849_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__AcceptAppear_K2Node_ComponentBoundEvent_861_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__RevealCards_K2Node_ComponentBoundEvent_906_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__RevealCards_K2Node_ComponentBoundEvent_1203_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1318_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__RevealAllAppear_K2Node_ComponentBoundEvent_1334_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__RemoveCards_K2Node_ComponentBoundEvent_1446_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__AcceptDisappear_K2Node_ComponentBoundEvent_1464_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__DefaultButton_C_389_K2Node_ComponentBoundEvent_2169_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2409_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCardPackOpenScreen_C::BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__OpenAppear_K2Node_ComponentBoundEvent_2430_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__Card0_K2Node_ComponentBoundEvent_117_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__Card1_K2Node_ComponentBoundEvent_174_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__Card2_K2Node_ComponentBoundEvent_210_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__Card3_K2Node_ComponentBoundEvent_247_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature");
		
		UCardPackOpenScreen_C_BndEvt__Card4_K2Node_ComponentBoundEvent_285_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardPackOpenScreen.CardPackOpenScreen_C.ExecuteUbergraph_CardPackOpenScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardPackOpenScreen_C::ExecuteUbergraph_CardPackOpenScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardPackOpenScreen.CardPackOpenScreen_C.ExecuteUbergraph_CardPackOpenScreen");
		
		UCardPackOpenScreen_C_ExecuteUbergraph_CardPackOpenScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardPackOpenScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardPackOpenScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardPackOpenScreen.CardPackOpenScreen_C");
		return ptr;
	}

}


