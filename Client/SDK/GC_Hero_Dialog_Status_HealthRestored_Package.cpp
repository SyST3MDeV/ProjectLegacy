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
	 * 		Name   -> PredefinedFunction AGC_Hero_Dialog_Status_HealthRestored_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Hero_Dialog_Status_HealthRestored_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Hero_Dialog_Status_HealthRestored.GC_Hero_Dialog_Status_HealthRestored_C");
		return ptr;
	}

}


