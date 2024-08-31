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
	 * 		Name   -> Function GotBuff_CombatMessage.GotBuff_CombatMessage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGotBuff_CombatMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GotBuff_CombatMessage.GotBuff_CombatMessage_C.Construct");
		
		UGotBuff_CombatMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GotBuff_CombatMessage.GotBuff_CombatMessage_C.ExecuteUbergraph_GotBuff_CombatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGotBuff_CombatMessage_C::ExecuteUbergraph_GotBuff_CombatMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GotBuff_CombatMessage.GotBuff_CombatMessage_C.ExecuteUbergraph_GotBuff_CombatMessage");
		
		UGotBuff_CombatMessage_C_ExecuteUbergraph_GotBuff_CombatMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGotBuff_CombatMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGotBuff_CombatMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GotBuff_CombatMessage.GotBuff_CombatMessage_C");
		return ptr;
	}

}


