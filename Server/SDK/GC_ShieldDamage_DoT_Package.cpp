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
	 * 		Name   -> PredefinedFunction UGC_ShieldDamage_DoT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_ShieldDamage_DoT_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_ShieldDamage_DoT.GC_ShieldDamage_DoT_C");
		return ptr;
	}

}


