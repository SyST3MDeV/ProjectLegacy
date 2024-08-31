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
	 * 		Name   -> Function GC_Card_TabardOfFortituderProc.GC_Card_TabardOfFortituderProc_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Card_TabardOfFortituderProc_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_TabardOfFortituderProc.GC_Card_TabardOfFortituderProc_C.UserConstructionScript");
		
		AGC_Card_TabardOfFortituderProc_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Card_TabardOfFortituderProc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Card_TabardOfFortituderProc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_TabardOfFortituderProc.GC_Card_TabardOfFortituderProc_C");
		return ptr;
	}

}


