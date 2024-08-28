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
	 * 		Name   -> Function InviteCalloutMenu.InviteCalloutMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInviteCalloutMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InviteCalloutMenu.InviteCalloutMenu_C.Construct");
		
		UInviteCalloutMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InviteCalloutMenu.InviteCalloutMenu_C.BndEvt__PSNFriendInviteButton_K2Node_ComponentBoundEvent_55_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInviteCalloutMenu_C::BndEvt__PSNFriendInviteButton_K2Node_ComponentBoundEvent_55_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InviteCalloutMenu.InviteCalloutMenu_C.BndEvt__PSNFriendInviteButton_K2Node_ComponentBoundEvent_55_OrionBaseButtonClicked__DelegateSignature");
		
		UInviteCalloutMenu_C_BndEvt__PSNFriendInviteButton_K2Node_ComponentBoundEvent_55_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InviteCalloutMenu.InviteCalloutMenu_C.BndEvt__ListInvitableFriends_K2Node_ComponentBoundEvent_786_ListViewEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInviteCalloutMenu_C::BndEvt__ListInvitableFriends_K2Node_ComponentBoundEvent_786_ListViewEvent__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InviteCalloutMenu.InviteCalloutMenu_C.BndEvt__ListInvitableFriends_K2Node_ComponentBoundEvent_786_ListViewEvent__DelegateSignature");
		
		UInviteCalloutMenu_C_BndEvt__ListInvitableFriends_K2Node_ComponentBoundEvent_786_ListViewEvent__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InviteCalloutMenu.InviteCalloutMenu_C.ExecuteUbergraph_InviteCalloutMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInviteCalloutMenu_C::ExecuteUbergraph_InviteCalloutMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InviteCalloutMenu.InviteCalloutMenu_C.ExecuteUbergraph_InviteCalloutMenu");
		
		UInviteCalloutMenu_C_ExecuteUbergraph_InviteCalloutMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InviteCalloutMenu.InviteCalloutMenu_C.OnCloseRequested__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UInviteCalloutMenu_C::OnCloseRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InviteCalloutMenu.InviteCalloutMenu_C.OnCloseRequested__DelegateSignature");
		
		UInviteCalloutMenu_C_OnCloseRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInviteCalloutMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInviteCalloutMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InviteCalloutMenu.InviteCalloutMenu_C");
		return ptr;
	}

}


