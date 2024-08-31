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
	 * 		Name   -> Function FriendCodePS4.FriendCodePS4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFriendCodePS4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePS4.FriendCodePS4_C.Construct");
		
		UFriendCodePS4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodePS4.FriendCodePS4_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodePS4_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePS4.FriendCodePS4_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature");
		
		UFriendCodePS4_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodePS4.FriendCodePS4_C.OnSendFriendCodeMessageComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMessageSent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodePS4_C::OnSendFriendCodeMessageComplete(bool bMessageSent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePS4.FriendCodePS4_C.OnSendFriendCodeMessageComplete");
		
		UFriendCodePS4_C_OnSendFriendCodeMessageComplete_Params params {};
		params.bMessageSent = bMessageSent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodePS4.FriendCodePS4_C.ExecuteUbergraph_FriendCodePS4
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodePS4_C::ExecuteUbergraph_FriendCodePS4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePS4.FriendCodePS4_C.ExecuteUbergraph_FriendCodePS4");
		
		UFriendCodePS4_C_ExecuteUbergraph_FriendCodePS4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendCodePS4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendCodePS4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendCodePS4.FriendCodePS4_C");
		return ptr;
	}

}


