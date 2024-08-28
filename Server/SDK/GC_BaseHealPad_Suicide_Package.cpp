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
	 * 		Name   -> PredefinedFunction UGC_BaseHealPad_Suicide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_BaseHealPad_Suicide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_BaseHealPad_Suicide.GC_BaseHealPad_Suicide_C");
		return ptr;
	}

}


