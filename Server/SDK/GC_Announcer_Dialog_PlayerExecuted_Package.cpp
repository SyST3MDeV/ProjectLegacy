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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGC_Announcer_Dialog_PlayerExecuted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Announcer_Dialog_PlayerExecuted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Announcer_Dialog_PlayerExecuted.GC_Announcer_Dialog_PlayerExecuted_C");
		return ptr;
	}

}


