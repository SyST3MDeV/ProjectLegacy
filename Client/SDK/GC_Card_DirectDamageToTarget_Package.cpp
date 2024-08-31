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
	 * 		Name   -> PredefinedFunction UGC_Card_DirectDamageToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Card_DirectDamageToTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_DirectDamageToTarget.GC_Card_DirectDamageToTarget_C");
		return ptr;
	}

}


