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
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.DisplayReturnToTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EReturnToMainMenuReason                            Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::DisplayReturnToTitle(EReturnToMainMenuReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.DisplayReturnToTitle");
		
		UInitialPreload_Root_C_DisplayReturnToTitle_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.IsReadyForNextState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UInitialPreload_Root_C::IsReadyForNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.IsReadyForNextState");
		
		UInitialPreload_Root_C_IsReadyForNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnReturnToTitleClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnReturnToTitleClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnReturnToTitleClosed");
		
		UInitialPreload_Root_C_OnReturnToTitleClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.Toggle Loading Progress Display
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::ToggleLoadingProgressDisplay(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.Toggle Loading Progress Display");
		
		UInitialPreload_Root_C_ToggleLoadingProgressDisplay_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnEnterState");
		
		UInitialPreload_Root_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnExitState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      NextState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::OnExitState(EOrionUIState NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnExitState");
		
		UInitialPreload_Root_C_OnExitState_Params params {};
		params.NextState = NextState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateFailed_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateFailed_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateFailed_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateFailed_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateStateChange
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EUpdateState                                       NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::OnUpdateStateChange(EUpdateState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateStateChange");
		
		UInitialPreload_Root_C_OnUpdateStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateHotfixProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumDownloaded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TotalFiles                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumBytes                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TotalBytes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::OnUpdateHotfixProgress(int32_t NumDownloaded, int32_t TotalFiles, int32_t NumBytes, int32_t TotalBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateHotfixProgress");
		
		UInitialPreload_Root_C_OnUpdateHotfixProgress_Params params {};
		params.NumDownloaded = NumDownloaded;
		params.TotalFiles = TotalFiles;
		params.NumBytes = NumBytes;
		params.TotalBytes = TotalBytes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsPatch_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateSuccess_NeedsPatch_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsPatch_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateSuccess_NeedsPatch_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsReload_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateSuccess_NeedsReload_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsReload_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateSuccess_NeedsReload_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsRelaunch_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateSuccess_NeedsRelaunch_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NeedsRelaunch_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateSuccess_NeedsRelaunch_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateSuccess_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateSuccess_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NoChange_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateSuccess_NoChange_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateSuccess_NoChange_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateSuccess_NoChange_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateFailed_NotLoggedIn_Blueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UInitialPreload_Root_C::OnUpdateFailed_NotLoggedIn_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.OnUpdateFailed_NotLoggedIn_Blueprint");
		
		UInitialPreload_Root_C_OnUpdateFailed_NotLoggedIn_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InitialPreload_Root.InitialPreload_Root_C.ExecuteUbergraph_InitialPreload_Root
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInitialPreload_Root_C::ExecuteUbergraph_InitialPreload_Root(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InitialPreload_Root.InitialPreload_Root_C.ExecuteUbergraph_InitialPreload_Root");
		
		UInitialPreload_Root_C_ExecuteUbergraph_InitialPreload_Root_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInitialPreload_Root_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInitialPreload_Root_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InitialPreload_Root.InitialPreload_Root_C");
		return ptr;
	}

}


