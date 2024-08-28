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
	 * 		Name   -> PredefinedFunction UGC_Minion_Footstep_Siege_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Minion_Footstep_Siege_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Minion_Footstep_Siege.GC_Minion_Footstep_Siege_C");
		return ptr;
	}

}


