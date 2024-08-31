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
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Escape Button Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::EscapeButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Escape Button Pressed");
		
		USurrender_Menu_Widget_C_EscapeButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Unregister for Input
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::UnregisterforInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Unregister for Input");
		
		USurrender_Menu_Widget_C_UnregisterforInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Register for Input
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::RegisterforInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Register for Input");
		
		USurrender_Menu_Widget_C_RegisterforInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.On Open");
		
		USurrender_Menu_Widget_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.On Close");
		
		USurrender_Menu_Widget_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNo_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderNo_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNo_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderNo_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTeamPlayingPoorly_K2Node_ComponentBoundEvent_656_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderTeamPlayingPoorly_K2Node_ComponentBoundEvent_656_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTeamPlayingPoorly_K2Node_ComponentBoundEvent_656_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderTeamPlayingPoorly_K2Node_ComponentBoundEvent_656_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNoChance_K2Node_ComponentBoundEvent_674_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderNoChance_K2Node_ComponentBoundEvent_674_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNoChance_K2Node_ComponentBoundEvent_674_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderNoChance_K2Node_ComponentBoundEvent_674_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNoFun_K2Node_ComponentBoundEvent_693_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderNoFun_K2Node_ComponentBoundEvent_693_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderNoFun_K2Node_ComponentBoundEvent_693_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderNoFun_K2Node_ComponentBoundEvent_693_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderHaveToGo_K2Node_ComponentBoundEvent_713_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderHaveToGo_K2Node_ComponentBoundEvent_713_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderHaveToGo_K2Node_ComponentBoundEvent_713_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderHaveToGo_K2Node_ComponentBoundEvent_713_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderToldTo_K2Node_ComponentBoundEvent_734_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderToldTo_K2Node_ComponentBoundEvent_734_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderToldTo_K2Node_ComponentBoundEvent_734_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderToldTo_K2Node_ComponentBoundEvent_734_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTooConfusing_K2Node_ComponentBoundEvent_756_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderTooConfusing_K2Node_ComponentBoundEvent_756_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTooConfusing_K2Node_ComponentBoundEvent_756_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderTooConfusing_K2Node_ComponentBoundEvent_756_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderOther_K2Node_ComponentBoundEvent_779_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderOther_K2Node_ComponentBoundEvent_779_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderOther_K2Node_ComponentBoundEvent_779_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderOther_K2Node_ComponentBoundEvent_779_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.OnDeactivated");
		
		USurrender_Menu_Widget_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.OnActivated");
		
		USurrender_Menu_Widget_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderYes_K2Node_ComponentBoundEvent_149_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderYes_K2Node_ComponentBoundEvent_149_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderYes_K2Node_ComponentBoundEvent_149_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderYes_K2Node_ComponentBoundEvent_149_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.Construct");
		
		USurrender_Menu_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTeammateDisconnected_K2Node_ComponentBoundEvent_185_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderTeammateDisconnected_K2Node_ComponentBoundEvent_185_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTeammateDisconnected_K2Node_ComponentBoundEvent_185_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderTeammateDisconnected_K2Node_ComponentBoundEvent_185_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTeammateJoinedLate_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::BndEvt__SurrenderTeammateJoinedLate_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.BndEvt__SurrenderTeammateJoinedLate_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature");
		
		USurrender_Menu_Widget_C_BndEvt__SurrenderTeammateJoinedLate_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.ExecuteUbergraph_Surrender_Menu_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurrender_Menu_Widget_C::ExecuteUbergraph_Surrender_Menu_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.ExecuteUbergraph_Surrender_Menu_Widget");
		
		USurrender_Menu_Widget_C_ExecuteUbergraph_Surrender_Menu_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USurrender_Menu_Widget_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Surrender_Menu_Widget.Surrender_Menu_Widget_C.OnClosed__DelegateSignature");
		
		USurrender_Menu_Widget_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurrender_Menu_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurrender_Menu_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Surrender_Menu_Widget.Surrender_Menu_Widget_C");
		return ptr;
	}

}


