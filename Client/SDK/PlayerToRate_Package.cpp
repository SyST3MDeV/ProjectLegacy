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
	 * 		Name   -> Function PlayerToRate.PlayerToRate_C.OnGetPopupMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UPlayerToRate_C::OnGetPopupMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerToRate.PlayerToRate_C.OnGetPopupMenu");
		
		UPlayerToRate_C_OnGetPopupMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PlayerToRate.PlayerToRate_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerToRate_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerToRate.PlayerToRate_C.PreConstruct");
		
		UPlayerToRate_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PlayerToRate.PlayerToRate_C.BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerToRate_C::BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerToRate.PlayerToRate_C.BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature");
		
		UPlayerToRate_C_BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_13_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PlayerToRate.PlayerToRate_C.BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerToRate_C::BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerToRate.PlayerToRate_C.BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature");
		
		UPlayerToRate_C_BndEvt__PopupAnchor_K2Node_ComponentBoundEvent_20_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PlayerToRate.PlayerToRate_C.CloseChildMenu
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerToRate_C::CloseChildMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerToRate.PlayerToRate_C.CloseChildMenu");
		
		UPlayerToRate_C_CloseChildMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PlayerToRate.PlayerToRate_C.ExecuteUbergraph_PlayerToRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerToRate_C::ExecuteUbergraph_PlayerToRate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerToRate.PlayerToRate_C.ExecuteUbergraph_PlayerToRate");
		
		UPlayerToRate_C_ExecuteUbergraph_PlayerToRate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerToRate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerToRate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerToRate.PlayerToRate_C");
		return ptr;
	}

}


