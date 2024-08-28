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
	 * 		Name   -> Function NoEmoteCombatMessage.NoEmoteCombatMessage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNoEmoteCombatMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoEmoteCombatMessage.NoEmoteCombatMessage_C.Construct");
		
		UNoEmoteCombatMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NoEmoteCombatMessage.NoEmoteCombatMessage_C.ExecuteUbergraph_NoEmoteCombatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNoEmoteCombatMessage_C::ExecuteUbergraph_NoEmoteCombatMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoEmoteCombatMessage.NoEmoteCombatMessage_C.ExecuteUbergraph_NoEmoteCombatMessage");
		
		UNoEmoteCombatMessage_C_ExecuteUbergraph_NoEmoteCombatMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoEmoteCombatMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoEmoteCombatMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NoEmoteCombatMessage.NoEmoteCombatMessage_C");
		return ptr;
	}

}


