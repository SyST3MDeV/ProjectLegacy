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
	 * 		Name   -> Function UIManager.UIManager_C.Set Box Content
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USizeBox*                                    Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UOrionUIStateWidget*                         Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIManager_C::SetBoxContent(class USizeBox* Box, class UOrionUIStateWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Set Box Content");
		
		UUIManager_C_SetBoxContent_Params params {};
		params.Box = Box;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUIManager_C::OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D");
		
		UUIManager_C_OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnKilled_1304D0084FAF86AA0C7457A14A356F8D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUIManager_C::OnKilled_1304D0084FAF86AA0C7457A14A356F8D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnKilled_1304D0084FAF86AA0C7457A14A356F8D");
		
		UUIManager_C_OnKilled_1304D0084FAF86AA0C7457A14A356F8D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnDeclined_1304D0084FAF86AA0C7457A14A356F8D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUIManager_C::OnDeclined_1304D0084FAF86AA0C7457A14A356F8D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnDeclined_1304D0084FAF86AA0C7457A14A356F8D");
		
		UUIManager_C_OnDeclined_1304D0084FAF86AA0C7457A14A356F8D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUIManager_C::OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D");
		
		UUIManager_C_OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUIManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Construct");
		
		UUIManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUIManager_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Destruct");
		
		UUIManager_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnShowError
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionDialogDescription                     Description                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUIManager_C::OnShowError(const struct FOrionDialogDescription& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnShowError");
		
		UUIManager_C_OnShowError_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnSetMatchInfoText
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUIManager_C::OnSetMatchInfoText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnSetMatchInfoText");
		
		UUIManager_C_OnSetMatchInfoText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnSetMatchInfoVisibility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIManager_C::OnSetMatchInfoVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnSetMatchInfoVisibility");
		
		UUIManager_C_OnSetMatchInfoVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.OnStateTransitionComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUIManager_C::OnStateTransitionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnStateTransitionComplete");
		
		UUIManager_C_OnStateTransitionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIManager_C::ExecuteUbergraph_UIManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ExecuteUbergraph_UIManager");
		
		UUIManager_C_ExecuteUbergraph_UIManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIManager.UIManager_C");
		return ptr;
	}

}


