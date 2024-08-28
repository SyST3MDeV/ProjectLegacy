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
	 * 		Name   -> PredefinedFunction UCD_Ability_Secondary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCD_Ability_Secondary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CD_Ability_Secondary.CD_Ability_Secondary_C");
		return ptr;
	}

}


