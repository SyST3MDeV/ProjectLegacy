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
	 * 		Name   -> PredefinedFunction UGC_TravelMode_Finish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_TravelMode_Finish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_TravelMode_Finish.GC_TravelMode_Finish_C");
		return ptr;
	}

}


