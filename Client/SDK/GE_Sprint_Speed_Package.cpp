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
	 * 		Name   -> PredefinedFunction UGE_Sprint_Speed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Sprint_Speed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Sprint_Speed.GE_Sprint_Speed_C");
		return ptr;
	}

}


