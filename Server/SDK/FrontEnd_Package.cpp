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
	 * 		Name   -> Function FrontEnd.FrontEnd_C.ToggleSubNavMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Collapse                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::ToggleSubNavMenu(bool Collapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.ToggleSubNavMenu");
		
		UFrontEnd_C_ToggleSubNavMenu_Params params {};
		params.Collapse = Collapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.UpdateAllCallToActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEnd_C::UpdateAllCallToActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.UpdateAllCallToActions");
		
		UFrontEnd_C_UpdateAllCallToActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.UpdateCallToActionCardPacks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEnd_C::UpdateCallToActionCardPacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.UpdateCallToActionCardPacks");
		
		UFrontEnd_C_UpdateCallToActionCardPacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFrontEnd_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.Construct");
		
		UFrontEnd_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnEnterState");
		
		UFrontEnd_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.BndEvt__[Tab List] Tabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLoading                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::BndEvt__TabListTabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature(bool bIsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.BndEvt__[Tab List] Tabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature");
		
		UFrontEnd_C_BndEvt__TabListTabs_K2Node_ComponentBoundEvent_483_OnTabContentLoadingStateChanged__DelegateSignature_Params params {};
		params.bIsLoading = bIsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFrontEnd_C::BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature");
		
		UFrontEnd_C_BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_680_OnExclusiveModeEntered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFrontEnd_C::BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature");
		
		UFrontEnd_C_BndEvt__ExclusiveModeMenus_K2Node_ComponentBoundEvent_687_OnExclusiveModeLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.OnReturnToHomeScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEnd_C::OnReturnToHomeScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnReturnToHomeScreen");
		
		UFrontEnd_C_OnReturnToHomeScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.OnReturnToPlayScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEnd_C::OnReturnToPlayScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnReturnToPlayScreen");
		
		UFrontEnd_C_OnReturnToPlayScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.OnMatchmakingStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionPartyMatchmakingState                        NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::OnMatchmakingStateChanged(EOrionPartyMatchmakingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.OnMatchmakingStateChanged");
		
		UFrontEnd_C_OnMatchmakingStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::CustomEvent_1(const class FName& TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.CustomEvent_1");
		
		UFrontEnd_C_CustomEvent_1_Params params {};
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEnd_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.CustomEvent_2");
		
		UFrontEnd_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.HandleMenuSceneChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewScene                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::HandleMenuSceneChanged(const class FName& NewScene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.HandleMenuSceneChanged");
		
		UFrontEnd_C_HandleMenuSceneChanged_Params params {};
		params.NewScene = NewScene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEnd_C::ExecuteUbergraph_FrontEnd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd");
		
		UFrontEnd_C_ExecuteUbergraph_FrontEnd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrontEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C");
		return ptr;
	}

}


