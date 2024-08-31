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
	 * 		Name   -> PredefinedFunction UGC_Inhibitor_Lower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Inhibitor_Lower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Inhibitor_Lower.GC_Inhibitor_Lower_C");
		return ptr;
	}

}


