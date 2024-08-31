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
	 * 		Name   -> PredefinedFunction UGE_MinionsSpawningVO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_MinionsSpawningVO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_MinionsSpawningVO.GE_MinionsSpawningVO_C");
		return ptr;
	}

}


