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
	 * 		Name   -> PredefinedFunction UGC_Card_TeleportFX_Reappear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Card_TeleportFX_Reappear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_TeleportFX_Reappear.GC_Card_TeleportFX_Reappear_C");
		return ptr;
	}

}


