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
	 * 		Name   -> Function FlairPopup.FlairPopup_C.GetBrush_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UFlairPopup_C::GetBrush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlairPopup.FlairPopup_C.GetBrush_1");
		
		UFlairPopup_C_GetBrush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FlairPopup.FlairPopup_C.AnimateIn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlairPopup_C::AnimateIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlairPopup.FlairPopup_C.AnimateIn");
		
		UFlairPopup_C_AnimateIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FlairPopup.FlairPopup_C.AnimateRandomChestOpen
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlairPopup_C::AnimateRandomChestOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlairPopup.FlairPopup_C.AnimateRandomChestOpen");
		
		UFlairPopup_C_AnimateRandomChestOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FlairPopup.FlairPopup_C.AnimateDailyChestOpen
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlairPopup_C::AnimateDailyChestOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlairPopup.FlairPopup_C.AnimateDailyChestOpen");
		
		UFlairPopup_C_AnimateDailyChestOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FlairPopup.FlairPopup_C.BndEvt__Daily Chest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UFlairPopup_C::BndEvt__DailyChest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlairPopup.FlairPopup_C.BndEvt__Daily Chest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UFlairPopup_C_BndEvt__DailyChest_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FlairPopup.FlairPopup_C.ExecuteUbergraph_FlairPopup
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlairPopup_C::ExecuteUbergraph_FlairPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlairPopup.FlairPopup_C.ExecuteUbergraph_FlairPopup");
		
		UFlairPopup_C_ExecuteUbergraph_FlairPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlairPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlairPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlairPopup.FlairPopup_C");
		return ptr;
	}

}


