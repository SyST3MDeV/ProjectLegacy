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
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.Get Quick Invite Menu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UFrontEndPartyMember_C::GetQuickInviteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.Get Quick Invite Menu");
		
		UFrontEndPartyMember_C_GetQuickInviteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.Refresh Widget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEndPartyMember_C::RefreshWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.Refresh Widget");
		
		UFrontEndPartyMember_C_RefreshWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.CloseInviteMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEndPartyMember_C::CloseInviteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.CloseInviteMenu");
		
		UFrontEndPartyMember_C_CloseInviteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.ClosePartyMemberMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEndPartyMember_C::ClosePartyMemberMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.ClosePartyMemberMenu");
		
		UFrontEndPartyMember_C_ClosePartyMemberMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.GetPartyMemberContextMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UFrontEndPartyMember_C::GetPartyMemberContextMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.GetPartyMemberContextMenu");
		
		UFrontEndPartyMember_C_GetPartyMemberContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.UpdatePartyMember
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionPersistentPartyMember*                 PartyMember                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::UpdatePartyMember(class UOrionPersistentPartyMember* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.UpdatePartyMember");
		
		UFrontEndPartyMember_C_UpdatePartyMember_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__[Anchor] Party Member Options_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::BndEvt__AnchorPartyMemberOptions_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__[Anchor] Party Member Options_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature");
		
		UFrontEndPartyMember_C_BndEvt__AnchorPartyMemberOptions_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__[Anchor] Invite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::BndEvt__AnchorInvite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__[Anchor] Invite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature");
		
		UFrontEndPartyMember_C_BndEvt__AnchorInvite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature");
		
		UFrontEndPartyMember_C_BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature");
		
		UFrontEndPartyMember_C_BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature");
		
		UFrontEndPartyMember_C_BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature");
		
		UFrontEndPartyMember_C_BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFrontEndPartyMember_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.Construct");
		
		UFrontEndPartyMember_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndPartyMember.FrontEndPartyMember_C.ExecuteUbergraph_FrontEndPartyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndPartyMember_C::ExecuteUbergraph_FrontEndPartyMember(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndPartyMember.FrontEndPartyMember_C.ExecuteUbergraph_FrontEndPartyMember");
		
		UFrontEndPartyMember_C_ExecuteUbergraph_FrontEndPartyMember_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrontEndPartyMember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontEndPartyMember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndPartyMember.FrontEndPartyMember_C");
		return ptr;
	}

}


