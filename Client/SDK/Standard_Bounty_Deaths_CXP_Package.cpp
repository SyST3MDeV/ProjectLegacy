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
	 * 		Name   -> PredefinedFunction UStandard_Bounty_Deaths_CXP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandard_Bounty_Deaths_CXP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Standard_Bounty_Deaths_CXP.Standard_Bounty_Deaths_CXP_C");
		return ptr;
	}

}


