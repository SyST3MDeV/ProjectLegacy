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
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.OnHandleBackAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UEcosystemRoot_C::OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.OnHandleBackAction");
		
		UEcosystemRoot_C_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.CloseOptionsMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEcosystemRoot_C::CloseOptionsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.CloseOptionsMenu");
		
		UEcosystemRoot_C_CloseOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.GetOptionsMenuContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UEcosystemRoot_C::GetOptionsMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.GetOptionsMenuContent");
		
		UEcosystemRoot_C_GetOptionsMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.HandleMenuAnchorChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::HandleMenuAnchorChanged(bool IsOpen, class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.HandleMenuAnchorChanged");
		
		UEcosystemRoot_C_HandleMenuAnchorChanged_Params params {};
		params.IsOpen = IsOpen;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.ClearActiveMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEcosystemRoot_C::ClearActiveMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.ClearActiveMenu");
		
		UEcosystemRoot_C_ClearActiveMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.HandleButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMenuAnchor*                                 Anchor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::HandleButtonClicked(class UOrionBaseButton* Button, class UMenuAnchor* Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.HandleButtonClicked");
		
		UEcosystemRoot_C_HandleButtonClicked_Params params {};
		params.Button = Button;
		params.Anchor = Anchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UEcosystemRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.Construct");
		
		UEcosystemRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.BndEvt__[Anchor] Friends List_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::BndEvt__AnchorFriendsList_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.BndEvt__[Anchor] Friends List_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature");
		
		UEcosystemRoot_C_BndEvt__AnchorFriendsList_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.BndEvt__[Anchor] Options_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::BndEvt__AnchorOptions_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.BndEvt__[Anchor] Options_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature");
		
		UEcosystemRoot_C_BndEvt__AnchorOptions_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature");
		
		UEcosystemRoot_C_BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature");
		
		UEcosystemRoot_C_BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature");
		
		UEcosystemRoot_C_BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature");
		
		UEcosystemRoot_C_BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.PreConstruct");
		
		UEcosystemRoot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EcosystemRoot.EcosystemRoot_C.ExecuteUbergraph_EcosystemRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEcosystemRoot_C::ExecuteUbergraph_EcosystemRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EcosystemRoot.EcosystemRoot_C.ExecuteUbergraph_EcosystemRoot");
		
		UEcosystemRoot_C_ExecuteUbergraph_EcosystemRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEcosystemRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEcosystemRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EcosystemRoot.EcosystemRoot_C");
		return ptr;
	}

}


