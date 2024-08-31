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
	 * 		Name   -> PredefinedFunction UGC_Hero_LastHit_Minion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Hero_LastHit_Minion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Hero_LastHit_Minion.GC_Hero_LastHit_Minion_C");
		return ptr;
	}

}


