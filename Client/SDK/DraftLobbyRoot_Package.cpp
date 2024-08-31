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
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnEnterState");
		
		UDraftLobbyRoot_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__Intro_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__Intro_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnFirstHeroSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::OnFirstHeroSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnFirstHeroSelected");
		
		UDraftLobbyRoot_C_OnFirstHeroSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnBeginLocalPlayerTurn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::OnBeginLocalPlayerTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnBeginLocalPlayerTurn");
		
		UDraftLobbyRoot_C_OnBeginLocalPlayerTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__Button_LockInHero_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnLockInFailed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::OnLockInFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnLockInFailed");
		
		UDraftLobbyRoot_C_OnLockInFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnHeroLockedIn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnHeroLockedIn(class UOrionHeroData* HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnHeroLockedIn");
		
		UDraftLobbyRoot_C_OnHeroLockedIn_Params params {};
		params.HeroData = HeroData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnLocalPlayerTurnUpNext
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::OnLocalPlayerTurnUpNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnLocalPlayerTurnUpNext");
		
		UDraftLobbyRoot_C_OnLocalPlayerTurnUpNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnDraftComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnDraftComplete(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnDraftComplete");
		
		UDraftLobbyRoot_C_OnDraftComplete_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnDraftStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeamMemberType                               FirstPickerType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnDraftStarted(EOrionTeamMemberType FirstPickerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnDraftStarted");
		
		UDraftLobbyRoot_C_OnDraftStarted_Params params {};
		params.FirstPickerType = FirstPickerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnTurnComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeamMemberType                               FinishedMemberType                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnTurnComplete(EOrionTeamMemberType FinishedMemberType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnTurnComplete");
		
		UDraftLobbyRoot_C_OnTurnComplete_Params params {};
		params.FinishedMemberType = FinishedMemberType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnTurnStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeamMemberType                               PickingMemberType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnTurnStarted(EOrionTeamMemberType PickingMemberType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnTurnStarted");
		
		UDraftLobbyRoot_C_OnTurnStarted_Params params {};
		params.PickingMemberType = PickingMemberType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.OnLockInButtonEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLockInEnabled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::OnLockInButtonEnabledChanged(bool bLockInEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.OnLockInButtonEnabledChanged");
		
		UDraftLobbyRoot_C_OnLockInButtonEnabledChanged_Params params {};
		params.bLockInEnabled = bLockInEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__BeginPlayerTurn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeLeftRatio                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature(float TimeLeftRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__DraftTimer_K2Node_ComponentBoundEvent_30_OnPlayerTurnCountownUpdated__DelegateSignature_Params params {};
		params.TimeLeftRatio = TimeLeftRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDraftLobbyRoot_C::BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     ActiveWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ActiveWidgetIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32_t ActiveWidgetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature");
		
		UDraftLobbyRoot_C_BndEvt__OrionSwitcher_CenterContent_K2Node_ComponentBoundEvent_63_OnActiveWidgetChanged__DelegateSignature_Params params {};
		params.ActiveWidget = ActiveWidget;
		params.ActiveWidgetIndex = ActiveWidgetIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftLobbyRoot.DraftLobbyRoot_C.ExecuteUbergraph_DraftLobbyRoot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftLobbyRoot_C::ExecuteUbergraph_DraftLobbyRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftLobbyRoot.DraftLobbyRoot_C.ExecuteUbergraph_DraftLobbyRoot");
		
		UDraftLobbyRoot_C_ExecuteUbergraph_DraftLobbyRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftLobbyRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftLobbyRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftLobbyRoot.DraftLobbyRoot_C");
		return ptr;
	}

}


