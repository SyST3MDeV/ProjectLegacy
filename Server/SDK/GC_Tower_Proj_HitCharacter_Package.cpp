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
	 * 		Name   -> PredefinedFunction UGC_Tower_Proj_HitCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Tower_Proj_HitCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Tower_Proj_HitCharacter.GC_Tower_Proj_HitCharacter_C");
		return ptr;
	}

}


