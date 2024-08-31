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
	 * 		Name   -> PredefinedFunction ATM_BenefitBasedOnTargets_Parent_Heroes_Foe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_BenefitBasedOnTargets_Parent_Heroes_Foe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_BenefitBasedOnTargets_Parent_Heroes_Foe.TM_BenefitBasedOnTargets_Parent_Heroes_Foe_C");
		return ptr;
	}

}


