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
	 * 		Name   -> PredefinedFunction UCost_Mana_Ability_Primary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCost_Mana_Ability_Primary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cost_Mana_Ability_Primary.Cost_Mana_Ability_Primary_C");
		return ptr;
	}

}


