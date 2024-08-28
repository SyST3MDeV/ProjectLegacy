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
	 * 		Name   -> Function DamageOverlayWidget-V4.DamageOverlayWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDamageOverlayWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlayWidget-V4.DamageOverlayWidget-V4_C.Construct");
		
		UDamageOverlayWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlayWidget-V4.DamageOverlayWidget-V4_C.OnDamaged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDamageOverlayWidgetV4_C::OnDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlayWidget-V4.DamageOverlayWidget-V4_C.OnDamaged");
		
		UDamageOverlayWidgetV4_C_OnDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DamageOverlayWidget-V4.DamageOverlayWidget-V4_C.ExecuteUbergraph_DamageOverlayWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDamageOverlayWidgetV4_C::ExecuteUbergraph_DamageOverlayWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageOverlayWidget-V4.DamageOverlayWidget-V4_C.ExecuteUbergraph_DamageOverlayWidget-V4");
		
		UDamageOverlayWidgetV4_C_ExecuteUbergraph_DamageOverlayWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageOverlayWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageOverlayWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DamageOverlayWidget_V4.DamageOverlayWidget-V4_C");
		return ptr;
	}

}


