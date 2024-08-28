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
	 * 		Name   -> PredefinedFunction UGC_Tutorial_Dialog_InhibAggroHero_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Tutorial_Dialog_InhibAggroHero_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Tutorial_Dialog_InhibAggroHero.GC_Tutorial_Dialog_InhibAggroHero_C");
		return ptr;
	}

}


