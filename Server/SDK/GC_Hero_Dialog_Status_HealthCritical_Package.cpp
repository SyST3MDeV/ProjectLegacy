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
	 * 		Name   -> PredefinedFunction AGC_Hero_Dialog_Status_HealthCritical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Hero_Dialog_Status_HealthCritical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Hero_Dialog_Status_HealthCritical.GC_Hero_Dialog_Status_HealthCritical_C");
		return ptr;
	}

}


