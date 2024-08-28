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
	 * 		Name   -> PredefinedFunction UBP_Camera_PrimeHelix_PP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Camera_PrimeHelix_PP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera_PrimeHelix_PP.BP_Camera_PrimeHelix_PP_C");
		return ptr;
	}

}


