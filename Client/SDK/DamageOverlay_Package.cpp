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
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.Setup Flash Timer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDamageOverlay_C::SetupFlashTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.Setup Flash Timer");
		
		UDamageOverlay_C_SetupFlashTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.Update Flash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDamageOverlay_C::UpdateFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.Update Flash");
		
		UDamageOverlay_C_UpdateFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.On Flash Finished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDamageOverlay_C::OnFlashFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.On Flash Finished");
		
		UDamageOverlay_C_OnFlashFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.Set Damage Flash Opacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewOpacity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDamageOverlay_C::SetDamageFlashOpacity(float NewOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.Set Damage Flash Opacity");
		
		UDamageOverlay_C_SetDamageFlashOpacity_Params params {};
		params.NewOpacity = NewOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.Set Opacity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewOpacity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDamageOverlay_C::SetOpacity(float NewOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.Set Opacity");
		
		UDamageOverlay_C_SetOpacity_Params params {};
		params.NewOpacity = NewOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.Update Visuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDamageOverlay_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.Update Visuals");
		
		UDamageOverlay_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDamageOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.Construct");
		
		UDamageOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.OnDamageEvent_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionUIDamageEventInfo                     UIDamageEventInfo                                          (Parm)
	 */
	void UDamageOverlay_C::OnDamageEvent_Event_1(const struct FOrionUIDamageEventInfo& UIDamageEventInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.OnDamageEvent_Event_1");
		
		UDamageOverlay_C_OnDamageEvent_Event_1_Params params {};
		params.UIDamageEventInfo = UIDamageEventInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlay.DamageOverlay_C.ExecuteUbergraph_DamageOverlay
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDamageOverlay_C::ExecuteUbergraph_DamageOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlay.DamageOverlay_C.ExecuteUbergraph_DamageOverlay");
		
		UDamageOverlay_C_ExecuteUbergraph_DamageOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DamageOverlay.DamageOverlay_C");
		return ptr;
	}

}


