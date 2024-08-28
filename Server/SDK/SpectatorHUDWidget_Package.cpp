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
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.HandleChangeInMenuState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionMenuSlotTypes                                MenuSlotType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsNewlyVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::HandleChangeInMenuState(EOrionMenuSlotTypes MenuSlotType, bool IsNewlyVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.HandleChangeInMenuState");
		
		USpectatorHUDWidget_C_HandleChangeInMenuState_Params params {};
		params.MenuSlotType = MenuSlotType;
		params.IsNewlyVisible = IsNewlyVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetAnalogCursorToProperState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::SetAnalogCursorToProperState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetAnalogCursorToProperState");
		
		USpectatorHUDWidget_C_SetAnalogCursorToProperState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.UpdateWatchedHeroWidgetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::UpdateWatchedHeroWidgetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.UpdateWatchedHeroWidgetVisibility");
		
		USpectatorHUDWidget_C_UpdateWatchedHeroWidgetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnWatchedHeroChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewHeroTeam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NewHeroIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnWatchedHeroChange(EOrionTeam NewHeroTeam, int32_t NewHeroIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnWatchedHeroChange");
		
		USpectatorHUDWidget_C_OnWatchedHeroChange_Params params {};
		params.NewHeroTeam = NewHeroTeam;
		params.NewHeroIndex = NewHeroIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetShowControllerCursor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewShowControllerCursor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::SetShowControllerCursor(bool NewShowControllerCursor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetShowControllerCursor");
		
		USpectatorHUDWidget_C_SetShowControllerCursor_Params params {};
		params.NewShowControllerCursor = NewShowControllerCursor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnToggleSpectatorControllerCursor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::OnToggleSpectatorControllerCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnToggleSpectatorControllerCursor");
		
		USpectatorHUDWidget_C_OnToggleSpectatorControllerCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnUsingGamepadToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewUsingGamepad                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnUsingGamepadToggle(bool bNewUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnUsingGamepadToggle");
		
		USpectatorHUDWidget_C_OnUsingGamepadToggle_Params params {};
		params.bNewUsingGamepad = bNewUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnMobaCamChangeCameraAngle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIsometricCamAngle                                 NewCameraAngle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnMobaCamChangeCameraAngle(EIsometricCamAngle NewCameraAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnMobaCamChangeCameraAngle");
		
		USpectatorHUDWidget_C_OnMobaCamChangeCameraAngle_Params params {};
		params.NewCameraAngle = NewCameraAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetMinimapRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIsometricCamAngle                                 CamAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::SetMinimapRotation(EIsometricCamAngle CamAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetMinimapRotation");
		
		USpectatorHUDWidget_C_SetMinimapRotation_Params params {};
		params.CamAngle = CamAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.Update HUD Toggles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::UpdateHUDToggles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.Update HUD Toggles");
		
		USpectatorHUDWidget_C_UpdateHUDToggles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.Construct");
		
		USpectatorHUDWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnSpectatorCameraModeChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESpectatorCameraType                               NewCameraMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnSpectatorCameraModeChange(ESpectatorCameraType NewCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnSpectatorCameraModeChange");
		
		USpectatorHUDWidget_C_OnSpectatorCameraModeChange_Params params {};
		params.NewCameraMode = NewCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.HideSpectatorCameraModeText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::HideSpectatorCameraModeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.HideSpectatorCameraModeText");
		
		USpectatorHUDWidget_C_HideSpectatorCameraModeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnEnterState");
		
		USpectatorHUDWidget_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnSetHudVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMainVisible                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIndicatorsVisible                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnSetHudVisibility(bool bMainVisible, bool bIndicatorsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnSetHudVisibility");
		
		USpectatorHUDWidget_C_OnSetHudVisibility_Params params {};
		params.bMainVisible = bMainVisible;
		params.bIndicatorsVisible = bIndicatorsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnWatchedHeroChange_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            HeroIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnWatchedHeroChange_Event(EOrionTeam HeroTeam, int32_t HeroIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnWatchedHeroChange_Event");
		
		USpectatorHUDWidget_C_OnWatchedHeroChange_Event_Params params {};
		params.HeroTeam = HeroTeam;
		params.HeroIndex = HeroIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnUsingGamepadToggle_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingAnalog                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnUsingGamepadToggle_Event(bool UsingAnalog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnUsingGamepadToggle_Event");
		
		USpectatorHUDWidget_C_OnUsingGamepadToggle_Event_Params params {};
		params.UsingAnalog = UsingAnalog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnToggleSpectatorControllerCursor_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::OnToggleSpectatorControllerCursor_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnToggleSpectatorControllerCursor_Event");
		
		USpectatorHUDWidget_C_OnToggleSpectatorControllerCursor_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.HandleChangeInMenuState_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionMenuSlotTypes                                MenuSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewIsOpenState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::HandleChangeInMenuState_Event(EOrionMenuSlotTypes MenuSlot, bool bNewIsOpenState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.HandleChangeInMenuState_Event");
		
		USpectatorHUDWidget_C_HandleChangeInMenuState_Event_Params params {};
		params.MenuSlot = MenuSlot;
		params.bNewIsOpenState = bNewIsOpenState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetAnalogCursorToProperState_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHUDWidget_C::SetAnalogCursorToProperState_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.SetAnalogCursorToProperState_Event");
		
		USpectatorHUDWidget_C_SetAnalogCursorToProperState_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnExitState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      NextState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::OnExitState(EOrionUIState NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.OnExitState");
		
		USpectatorHUDWidget_C_OnExitState_Params params {};
		params.NextState = NextState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorHUDWidget.SpectatorHUDWidget_C.ExecuteUbergraph_SpectatorHUDWidget
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHUDWidget_C::ExecuteUbergraph_SpectatorHUDWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHUDWidget.SpectatorHUDWidget_C.ExecuteUbergraph_SpectatorHUDWidget");
		
		USpectatorHUDWidget_C_ExecuteUbergraph_SpectatorHUDWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorHUDWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorHUDWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorHUDWidget.SpectatorHUDWidget_C");
		return ptr;
	}

}


