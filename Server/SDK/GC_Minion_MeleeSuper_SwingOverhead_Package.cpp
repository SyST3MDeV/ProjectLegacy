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
	 * 		Name   -> PredefinedFunction UGC_Minion_MeleeSuper_SwingOverhead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Minion_MeleeSuper_SwingOverhead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Minion_MeleeSuper_SwingOverhead.GC_Minion_MeleeSuper_SwingOverhead_C");
		return ptr;
	}

}


