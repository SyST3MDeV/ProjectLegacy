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
	 * 		Name   -> PredefinedFunction UBP_OrionScalingRules_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OrionScalingRules_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionScalingRules.BP_OrionScalingRules_C");
		return ptr;
	}

}


