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
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.GamepadSwitch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsUsingGamepad                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::GamepadSwitch(bool IsUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.GamepadSwitch");
		
		UEscape_Menu_Widget_C_GamepadSwitch_Params params {};
		params.IsUsingGamepad = IsUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.UpdateSurrenderButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::UpdateSurrenderButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.UpdateSurrenderButton");
		
		UEscape_Menu_Widget_C_UpdateSurrenderButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.SurrenderStatusChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionPlayerState_Game*                      PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETeamSurrenderStatus                               VoteStatus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESurrenderVote                                     Vote                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::SurrenderStatusChanged(class AOrionPlayerState_Game* PlayerState, ETeamSurrenderStatus VoteStatus, ESurrenderVote Vote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.SurrenderStatusChanged");
		
		UEscape_Menu_Widget_C_SurrenderStatusChanged_Params params {};
		params.PlayerState = PlayerState;
		params.VoteStatus = VoteStatus;
		params.Vote = Vote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.SubMenuClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::SubMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.SubMenuClosed");
		
		UEscape_Menu_Widget_C_SubMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.SubMenuOpened
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::SubMenuOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.SubMenuOpened");
		
		UEscape_Menu_Widget_C_SubMenuOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.Escape Button Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::EscapeButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.Escape Button Pressed");
		
		UEscape_Menu_Widget_C_EscapeButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.Unregister for Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::UnregisterforInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.Unregister for Input");
		
		UEscape_Menu_Widget_C_UnregisterforInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.Register for Input
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::RegisterforInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.Register for Input");
		
		UEscape_Menu_Widget_C_RegisterforInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3");
		
		UEscape_Menu_Widget_C_OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnKilled_DEDCF13B44E528AEDE242588C04FFBB3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::OnKilled_DEDCF13B44E528AEDE242588C04FFBB3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnKilled_DEDCF13B44E528AEDE242588C04FFBB3");
		
		UEscape_Menu_Widget_C_OnKilled_DEDCF13B44E528AEDE242588C04FFBB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3");
		
		UEscape_Menu_Widget_C_OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3");
		
		UEscape_Menu_Widget_C_OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.On Open");
		
		UEscape_Menu_Widget_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.On Close");
		
		UEscape_Menu_Widget_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UEscape_Menu_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.Construct");
		
		UEscape_Menu_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature");
		
		UEscape_Menu_Widget_C_BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Escape_Menu_Widget.Escape_Menu_Widget_C.ExecuteUbergraph_Escape_Menu_Widget
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEscape_Menu_Widget_C::ExecuteUbergraph_Escape_Menu_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Escape_Menu_Widget.Escape_Menu_Widget_C.ExecuteUbergraph_Escape_Menu_Widget");
		
		UEscape_Menu_Widget_C_ExecuteUbergraph_Escape_Menu_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscape_Menu_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscape_Menu_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Escape_Menu_Widget.Escape_Menu_Widget_C");
		return ptr;
	}

}


