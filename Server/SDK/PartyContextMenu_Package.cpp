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
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.Update Party Member
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionPersistentPartyMember*                 PartyMember                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::UpdatePartyMember(class UOrionPersistentPartyMember* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.Update Party Member");
		
		UPartyContextMenu_C_UpdatePartyMember_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.PreConstruct");
		
		UPartyContextMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonKick_K2Node_ComponentBoundEvent_1811_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonKick_K2Node_ComponentBoundEvent_1811_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonKick_K2Node_ComponentBoundEvent_1811_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonKick_K2Node_ComponentBoundEvent_1811_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonPromote_K2Node_ComponentBoundEvent_1826_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonPromote_K2Node_ComponentBoundEvent_1826_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonPromote_K2Node_ComponentBoundEvent_1826_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonPromote_K2Node_ComponentBoundEvent_1826_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonLeave_K2Node_ComponentBoundEvent_1840_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonLeave_K2Node_ComponentBoundEvent_1840_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonLeave_K2Node_ComponentBoundEvent_1840_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonLeave_K2Node_ComponentBoundEvent_1840_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonSendFriendRequest_K2Node_ComponentBoundEvent_1854_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonSendFriendRequest_K2Node_ComponentBoundEvent_1854_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonSendFriendRequest_K2Node_ComponentBoundEvent_1854_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonSendFriendRequest_K2Node_ComponentBoundEvent_1854_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonAcceptFriend_K2Node_ComponentBoundEvent_1869_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonAcceptFriend_K2Node_ComponentBoundEvent_1869_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonAcceptFriend_K2Node_ComponentBoundEvent_1869_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonAcceptFriend_K2Node_ComponentBoundEvent_1869_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonDeclineFriend_K2Node_ComponentBoundEvent_1885_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonDeclineFriend_K2Node_ComponentBoundEvent_1885_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonDeclineFriend_K2Node_ComponentBoundEvent_1885_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonDeclineFriend_K2Node_ComponentBoundEvent_1885_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonWhisper_K2Node_ComponentBoundEvent_1902_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::BndEvt__DefaultButtonWhisper_K2Node_ComponentBoundEvent_1902_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonWhisper_K2Node_ComponentBoundEvent_1902_OrionBaseButtonClicked__DelegateSignature");
		
		UPartyContextMenu_C_BndEvt__DefaultButtonWhisper_K2Node_ComponentBoundEvent_1902_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPartyContextMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.Destruct");
		
		UPartyContextMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.ExecuteUbergraph_PartyContextMenu
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyContextMenu_C::ExecuteUbergraph_PartyContextMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.ExecuteUbergraph_PartyContextMenu");
		
		UPartyContextMenu_C_ExecuteUbergraph_PartyContextMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.OnCloseRequested__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPartyContextMenu_C::OnCloseRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.OnCloseRequested__DelegateSignature");
		
		UPartyContextMenu_C_OnCloseRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.Whisper__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPartyContextMenu_C::Whisper__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.Whisper__DelegateSignature");
		
		UPartyContextMenu_C_Whisper__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.Promote to Leader__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPartyContextMenu_C::PromotetoLeader__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.Promote to Leader__DelegateSignature");
		
		UPartyContextMenu_C_PromotetoLeader__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.Kick From Party__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPartyContextMenu_C::KickFromParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.Kick From Party__DelegateSignature");
		
		UPartyContextMenu_C_KickFromParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PartyContextMenu.PartyContextMenu_C.Leave Party__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPartyContextMenu_C::LeaveParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyContextMenu.PartyContextMenu_C.Leave Party__DelegateSignature");
		
		UPartyContextMenu_C_LeaveParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyContextMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyContextMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyContextMenu.PartyContextMenu_C");
		return ptr;
	}

}


