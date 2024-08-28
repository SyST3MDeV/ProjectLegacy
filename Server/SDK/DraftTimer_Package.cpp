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
	 * 		Name   -> Function DraftTimer.DraftTimer_C.OnDraftStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeamMemberType                               FirstPickerType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::OnDraftStarted(EOrionTeamMemberType FirstPickerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.OnDraftStarted");
		
		UDraftTimer_C_OnDraftStarted_Params params {};
		params.FirstPickerType = FirstPickerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTimer.DraftTimer_C.OnDraftComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::OnDraftComplete(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.OnDraftComplete");
		
		UDraftTimer_C_OnDraftComplete_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTimer.DraftTimer_C.OnTurnStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeamMemberType                               PickingMemberType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::OnTurnStarted(EOrionTeamMemberType PickingMemberType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.OnTurnStarted");
		
		UDraftTimer_C_OnTurnStarted_Params params {};
		params.PickingMemberType = PickingMemberType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTimer.DraftTimer_C.OnTurnComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeamMemberType                               FinishedMemberType                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::OnTurnComplete(EOrionTeamMemberType FinishedMemberType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.OnTurnComplete");
		
		UDraftTimer_C_OnTurnComplete_Params params {};
		params.FinishedMemberType = FinishedMemberType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTimer.DraftTimer_C.OnTimerUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsPlayerTurn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeLeftRatio                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::OnTimerUpdated(bool bIsPlayerTurn, float TimeLeftRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.OnTimerUpdated");
		
		UDraftTimer_C_OnTimerUpdated_Params params {};
		params.bIsPlayerTurn = bIsPlayerTurn;
		params.TimeLeftRatio = TimeLeftRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTimer.DraftTimer_C.ExecuteUbergraph_DraftTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::ExecuteUbergraph_DraftTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.ExecuteUbergraph_DraftTimer");
		
		UDraftTimer_C_ExecuteUbergraph_DraftTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTimer.DraftTimer_C.OnPlayerTurnCountownUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeLeftRatio                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTimer_C::OnPlayerTurnCountownUpdated__DelegateSignature(float TimeLeftRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTimer.DraftTimer_C.OnPlayerTurnCountownUpdated__DelegateSignature");
		
		UDraftTimer_C_OnPlayerTurnCountownUpdated__DelegateSignature_Params params {};
		params.TimeLeftRatio = TimeLeftRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftTimer.DraftTimer_C");
		return ptr;
	}

}


