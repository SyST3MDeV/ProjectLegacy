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
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.Set Sub Menu Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibile                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenu_C::SetSubMenuVisibility(bool Visibile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.Set Sub Menu Visibility");
		
		UExclusiveModeMenu_C_SetSubMenuVisibility_Params params {};
		params.Visibile = Visibile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.Set Enable Back Button
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenu_C::SetEnableBackButton(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.Set Enable Back Button");
		
		UExclusiveModeMenu_C_SetEnableBackButton_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.SetContext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ContextName                                                (Parm)
	 */
	void UExclusiveModeMenu_C::SetContext(const class FText& ContextName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.SetContext");
		
		UExclusiveModeMenu_C_SetContext_Params params {};
		params.ContextName = ContextName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.SetTitle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (Parm)
	 */
	void UExclusiveModeMenu_C::SetTitle(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.SetTitle");
		
		UExclusiveModeMenu_C_SetTitle_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.PreConstruct");
		
		UExclusiveModeMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenu_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature");
		
		UExclusiveModeMenu_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_529_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.ExecuteUbergraph_ExclusiveModeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenu_C::ExecuteUbergraph_ExclusiveModeMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.ExecuteUbergraph_ExclusiveModeMenu");
		
		UExclusiveModeMenu_C_ExecuteUbergraph_ExclusiveModeMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenu.ExclusiveModeMenu_C.OnBackClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UExclusiveModeMenu_C::OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenu.ExclusiveModeMenu_C.OnBackClicked__DelegateSignature");
		
		UExclusiveModeMenu_C_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExclusiveModeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExclusiveModeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExclusiveModeMenu.ExclusiveModeMenu_C");
		return ptr;
	}

}


