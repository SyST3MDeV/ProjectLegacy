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
	 * 		Name   -> PredefinedFunction UGE_Objective_Status_immunity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Objective_Status_immunity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Objective_Status_immunity.GE_Objective_Status_immunity_C");
		return ptr;
	}

}


