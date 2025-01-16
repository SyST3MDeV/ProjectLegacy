/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function CollectingFromRig_CombatMessage.CollectingFromRig_CombatMessage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCollectingFromRig_CombatMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectingFromRig_CombatMessage.CollectingFromRig_CombatMessage_C.Construct");
		
		UCollectingFromRig_CombatMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function CollectingFromRig_CombatMessage.CollectingFromRig_CombatMessage_C.ExecuteUbergraph_CollectingFromRig_CombatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCollectingFromRig_CombatMessage_C::ExecuteUbergraph_CollectingFromRig_CombatMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectingFromRig_CombatMessage.CollectingFromRig_CombatMessage_C.ExecuteUbergraph_CollectingFromRig_CombatMessage");
		
		UCollectingFromRig_CombatMessage_C_ExecuteUbergraph_CollectingFromRig_CombatMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectingFromRig_CombatMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectingFromRig_CombatMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectingFromRig_CombatMessage.CollectingFromRig_CombatMessage_C");
		return ptr;
	}

}


