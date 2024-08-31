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
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.UpdateSignInBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::UpdateSignInBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.UpdateSignInBackground");
		
		UTitleScreenRoot_C_UpdateSignInBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.Show Buy Access
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::ShowBuyAccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.Show Buy Access");
		
		UTitleScreenRoot_C_ShowBuyAccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.HasAccessRedemption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::HasAccessRedemption(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.HasAccessRedemption");
		
		UTitleScreenRoot_C_HasAccessRedemption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.IsReadyForNextState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UTitleScreenRoot_C::IsReadyForNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.IsReadyForNextState");
		
		UTitleScreenRoot_C_IsReadyForNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm)
	 */
	struct FEventReply UTitleScreenRoot_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnKeyDown");
		
		UTitleScreenRoot_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.IsShowingPressAnyKey
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::IsShowingPressAnyKey(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.IsShowingPressAnyKey");
		
		UTitleScreenRoot_C_IsShowingPressAnyKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ShowReturnToTitleError
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowedError                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::ShowReturnToTitleError(bool* ShowedError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ShowReturnToTitleError");
		
		UTitleScreenRoot_C_ShowReturnToTitleError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowedError != nullptr)
			*ShowedError = params.ShowedError;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ActivateScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SignupScreen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::ActivateScreen(class UClass* SignupScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ActivateScreen");
		
		UTitleScreenRoot_C_ActivateScreen_Params params {};
		params.SignupScreen = SignupScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnModalDialogClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::OnModalDialogClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnModalDialogClosed");
		
		UTitleScreenRoot_C_OnModalDialogClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ShowEula
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        EulaText                                                   (Parm)
	 */
	void UTitleScreenRoot_C::ShowEula(const class FText& EulaText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ShowEula");
		
		UTitleScreenRoot_C_ShowEula_Params params {};
		params.EulaText = EulaText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.EnableOrDisableAnalogCursor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldEnable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::EnableOrDisableAnalogCursor(bool ShouldEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.EnableOrDisableAnalogCursor");
		
		UTitleScreenRoot_C_EnableOrDisableAnalogCursor_Params params {};
		params.ShouldEnable = ShouldEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.IsChunkDownloadComplete
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsComplete                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::IsChunkDownloadComplete(bool* IsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.IsChunkDownloadComplete");
		
		UTitleScreenRoot_C_IsChunkDownloadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsComplete != nullptr)
			*IsComplete = params.IsComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnChunkInstallComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionChunkId                                      CompletedChunk                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::OnChunkInstallComplete(EOrionChunkId CompletedChunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnChunkInstallComplete");
		
		UTitleScreenRoot_C_OnChunkInstallComplete_Params params {};
		params.CompletedChunk = CompletedChunk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.StartChunkUpdateProgress
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionChunkId                                      InChunk                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::StartChunkUpdateProgress(EOrionChunkId InChunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.StartChunkUpdateProgress");
		
		UTitleScreenRoot_C_StartChunkUpdateProgress_Params params {};
		params.InChunk = InChunk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.UpdateChunkInstallProgress
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::UpdateChunkInstallProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.UpdateChunkInstallProgress");
		
		UTitleScreenRoot_C_UpdateChunkInstallProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.AllowAutoLogin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::AllowAutoLogin(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.AllowAutoLogin");
		
		UTitleScreenRoot_C_AllowAutoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.GetStatusText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UTitleScreenRoot_C::GetStatusText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.GetStatusText");
		
		UTitleScreenRoot_C_GetStatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ShowSignInSelect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::ShowSignInSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ShowSignInSelect");
		
		UTitleScreenRoot_C_ShowSignInSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ShowPressAnyKey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::ShowPressAnyKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ShowPressAnyKey");
		
		UTitleScreenRoot_C_ShowPressAnyKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ShowWaitSpinner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::ShowWaitSpinner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ShowWaitSpinner");
		
		UTitleScreenRoot_C_ShowWaitSpinner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.Construct");
		
		UTitleScreenRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.On Input
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::OnInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.On Input");
		
		UTitleScreenRoot_C_OnInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnEnterState");
		
		UTitleScreenRoot_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnAutoLoginComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnAutoLoginComplete(ELoginResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnAutoLoginComplete");
		
		UTitleScreenRoot_C_OnAutoLoginComplete_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnLoginComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnLoginComplete(ELoginResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnLoginComplete");
		
		UTitleScreenRoot_C_OnLoginComplete_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnCreateHeadlessComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECreateAccountResult                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnCreateHeadlessComplete(ECreateAccountResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnCreateHeadlessComplete");
		
		UTitleScreenRoot_C_OnCreateHeadlessComplete_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnWebForgotPasswordComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnWebForgotPasswordComplete(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnWebForgotPasswordComplete");
		
		UTitleScreenRoot_C_OnWebForgotPasswordComplete_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnEulaAvailable
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        EulaText                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnEulaAvailable(const class FText& EulaText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnEulaAvailable");
		
		UTitleScreenRoot_C_OnEulaAvailable_Params params {};
		params.EulaText = EulaText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.RequestAutoLogin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::RequestAutoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.RequestAutoLogin");
		
		UTitleScreenRoot_C_RequestAutoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.RequestHeadlessLogin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::RequestHeadlessLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.RequestHeadlessLogin");
		
		UTitleScreenRoot_C_RequestHeadlessLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.RequestEpicLogin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Username                                                   (Parm)
	 * 		class FText                                        Password                                                   (Parm)
	 * 		bool                                               RememberMe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::RequestEpicLogin(const class FText& Username, const class FText& Password, bool RememberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.RequestEpicLogin");
		
		UTitleScreenRoot_C_RequestEpicLogin_Params params {};
		params.Username = Username;
		params.Password = Password;
		params.RememberMe = RememberMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.RequestForgotPassword
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Email                                                      (Parm)
	 */
	void UTitleScreenRoot_C::RequestForgotPassword(const class FText& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.RequestForgotPassword");
		
		UTitleScreenRoot_C_RequestForgotPassword_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.RequestCreateAccount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Email                                                      (Parm)
	 */
	void UTitleScreenRoot_C::RequestCreateAccount(const class FText& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.RequestCreateAccount");
		
		UTitleScreenRoot_C_RequestCreateAccount_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnWebCreateEpicAccountComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor)
	 */
	void UTitleScreenRoot_C::OnWebCreateEpicAccountComplete(bool bSuccess, const class FText& Message, const class FString& AuthCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnWebCreateEpicAccountComplete");
		
		UTitleScreenRoot_C_OnWebCreateEpicAccountComplete_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		params.AuthCode = AuthCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnLoginAuthCode
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnLoginAuthCode(ELoginResult Result, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnLoginAuthCode");
		
		UTitleScreenRoot_C_OnLoginAuthCode_Params params {};
		params.Result = Result;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnLinkedConsoleAccount
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        ConsoleDisplayName                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnLinkedConsoleAccount(const class FText& DisplayName, const class FText& ConsoleDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnLinkedConsoleAccount");
		
		UTitleScreenRoot_C_OnLinkedConsoleAccount_Params params {};
		params.DisplayName = DisplayName;
		params.ConsoleDisplayName = ConsoleDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnConfirmLink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenRoot_C::OnConfirmLink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnConfirmLink");
		
		UTitleScreenRoot_C_OnConfirmLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnCheckRedeemForAccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasInvite                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasPurchase                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::OnCheckRedeemForAccess(bool bHasInvite, bool bHasPurchase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnCheckRedeemForAccess");
		
		UTitleScreenRoot_C_OnCheckRedeemForAccess_Params params {};
		params.bHasInvite = bHasInvite;
		params.bHasPurchase = bHasPurchase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.OnLinkedConsoleCreateLogin
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        ConsoleDisplayName                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTitleScreenRoot_C::OnLinkedConsoleCreateLogin(const class FText& DisplayName, const class FText& ConsoleDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.OnLinkedConsoleCreateLogin");
		
		UTitleScreenRoot_C_OnLinkedConsoleCreateLogin_Params params {};
		params.DisplayName = DisplayName;
		params.ConsoleDisplayName = ConsoleDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TitleScreenRoot.TitleScreenRoot_C.ExecuteUbergraph_TitleScreenRoot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleScreenRoot_C::ExecuteUbergraph_TitleScreenRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenRoot.TitleScreenRoot_C.ExecuteUbergraph_TitleScreenRoot");
		
		UTitleScreenRoot_C_ExecuteUbergraph_TitleScreenRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitleScreenRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitleScreenRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TitleScreenRoot.TitleScreenRoot_C");
		return ptr;
	}

}


