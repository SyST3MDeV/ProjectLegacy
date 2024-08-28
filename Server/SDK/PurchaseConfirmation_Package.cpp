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
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPurchaseConfirmation_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.Construct");
		
		UPurchaseConfirmation_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.OnBeginPurchase
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPurchaseConfirmation_C::OnBeginPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.OnBeginPurchase");
		
		UPurchaseConfirmation_C_OnBeginPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.OnPurchaseComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPurchaseConfirmation_C::OnPurchaseComplete(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.OnPurchaseComplete");
		
		UPurchaseConfirmation_C_OnPurchaseComplete_Params params {};
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPurchaseConfirmation_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.OnActivated");
		
		UPurchaseConfirmation_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPurchaseConfirmation_C::BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UPurchaseConfirmation_C_BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPurchaseConfirmation_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.OnDeactivated");
		
		UPurchaseConfirmation_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PurchaseConfirmation.PurchaseConfirmation_C.ExecuteUbergraph_PurchaseConfirmation
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPurchaseConfirmation_C::ExecuteUbergraph_PurchaseConfirmation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseConfirmation.PurchaseConfirmation_C.ExecuteUbergraph_PurchaseConfirmation");
		
		UPurchaseConfirmation_C_ExecuteUbergraph_PurchaseConfirmation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPurchaseConfirmation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPurchaseConfirmation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PurchaseConfirmation.PurchaseConfirmation_C");
		return ptr;
	}

}


