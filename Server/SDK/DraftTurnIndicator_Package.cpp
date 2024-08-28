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
	 * 		Name   -> Function DraftTurnIndicator.DraftTurnIndicator_C.ExecuteUbergraph_DraftTurnIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTurnIndicator_C::ExecuteUbergraph_DraftTurnIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTurnIndicator.DraftTurnIndicator_C.ExecuteUbergraph_DraftTurnIndicator");
		
		UDraftTurnIndicator_C_ExecuteUbergraph_DraftTurnIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftTurnIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftTurnIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftTurnIndicator.DraftTurnIndicator_C");
		return ptr;
	}

}


