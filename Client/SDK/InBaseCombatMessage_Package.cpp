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
	 * 		Name   -> Function InBaseCombatMessage.InBaseCombatMessage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UInBaseCombatMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InBaseCombatMessage.InBaseCombatMessage_C.Construct");
		
		UInBaseCombatMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InBaseCombatMessage.InBaseCombatMessage_C.SetUsingGamepad
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingGamepad                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInBaseCombatMessage_C::SetUsingGamepad(bool bUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InBaseCombatMessage.InBaseCombatMessage_C.SetUsingGamepad");
		
		UInBaseCombatMessage_C_SetUsingGamepad_Params params {};
		params.bUsingGamepad = bUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InBaseCombatMessage.InBaseCombatMessage_C.ExecuteUbergraph_InBaseCombatMessage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInBaseCombatMessage_C::ExecuteUbergraph_InBaseCombatMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InBaseCombatMessage.InBaseCombatMessage_C.ExecuteUbergraph_InBaseCombatMessage");
		
		UInBaseCombatMessage_C_ExecuteUbergraph_InBaseCombatMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInBaseCombatMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInBaseCombatMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InBaseCombatMessage.InBaseCombatMessage_C");
		return ptr;
	}

}


