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
	 * 		Name   -> PredefinedFunction UGC_Hero_Land_Swoop_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Hero_Land_Swoop_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Hero_Land_Swoop_Large.GC_Hero_Land_Swoop_Large_C");
		return ptr;
	}

}


