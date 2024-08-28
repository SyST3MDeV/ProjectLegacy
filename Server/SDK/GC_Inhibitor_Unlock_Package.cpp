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
	 * 		Name   -> PredefinedFunction UGC_Inhibitor_Unlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Inhibitor_Unlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Inhibitor_Unlock.GC_Inhibitor_Unlock_C");
		return ptr;
	}

}


