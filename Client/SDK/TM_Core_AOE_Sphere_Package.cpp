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
	 * 		Name   -> PredefinedFunction ATM_Core_AOE_Sphere_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Core_AOE_Sphere_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Core_AOE_Sphere.TM_Core_AOE_Sphere_C");
		return ptr;
	}

}


