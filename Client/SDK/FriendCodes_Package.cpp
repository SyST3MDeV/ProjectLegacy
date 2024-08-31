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
	 * 		Name   -> Function FriendCodes.FriendCodes_C.SendFriendCodesComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodes_C::SendFriendCodesComplete(bool bSent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.SendFriendCodesComplete");
		
		UFriendCodes_C_SendFriendCodesComplete_Params params {};
		params.bSent = bSent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.SendFriendCodes
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UFriendCodes_C::SendFriendCodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.SendFriendCodes");
		
		UFriendCodes_C_SendFriendCodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.GetNumFriendCodes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumCodes                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodes_C::GetNumFriendCodes(int32_t* NumCodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.GetNumFriendCodes");
		
		UFriendCodes_C_GetNumFriendCodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumCodes != nullptr)
			*NumCodes = params.NumCodes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.Get_NumFriendCodes_Text_1
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UFriendCodes_C::Get_NumFriendCodes_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.Get_NumFriendCodes_Text_1");
		
		UFriendCodes_C_Get_NumFriendCodes_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.Refresh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UFriendCodes_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.Refresh");
		
		UFriendCodes_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFriendCodes_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.Construct");
		
		UFriendCodes_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.OnQueryFriendCodes
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FFriendCode>                         FriendCodes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UFriendCodes_C::OnQueryFriendCodes(bool bSuccess, TArray<struct FFriendCode> FriendCodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.OnQueryFriendCodes");
		
		UFriendCodes_C_OnQueryFriendCodes_Params params {};
		params.bSuccess = bSuccess;
		params.FriendCodes = FriendCodes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodes_C::BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature");
		
		UFriendCodes_C_BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.OnIssueFriendCode
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FFriendCode                                 FriendCode                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UFriendCodes_C::OnIssueFriendCode(bool bSuccess, const struct FFriendCode& FriendCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.OnIssueFriendCode");
		
		UFriendCodes_C_OnIssueFriendCode_Params params {};
		params.bSuccess = bSuccess;
		params.FriendCode = FriendCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.OnQueryUnredeemedAfterIssue
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FFriendCode>                         FriendCodes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UFriendCodes_C::OnQueryUnredeemedAfterIssue(bool bSuccess, TArray<struct FFriendCode> FriendCodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.OnQueryUnredeemedAfterIssue");
		
		UFriendCodes_C_OnQueryUnredeemedAfterIssue_Params params {};
		params.bSuccess = bSuccess;
		params.FriendCodes = FriendCodes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodes.FriendCodes_C.ExecuteUbergraph_FriendCodes
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodes_C::ExecuteUbergraph_FriendCodes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodes.FriendCodes_C.ExecuteUbergraph_FriendCodes");
		
		UFriendCodes_C_ExecuteUbergraph_FriendCodes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendCodes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendCodes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendCodes.FriendCodes_C");
		return ptr;
	}

}


