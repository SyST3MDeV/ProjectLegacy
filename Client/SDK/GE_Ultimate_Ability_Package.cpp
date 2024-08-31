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
	 * 		Name   -> PredefinedFunction UGE_Ultimate_Ability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Ultimate_Ability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Ultimate_Ability.GE_Ultimate_Ability_C");
		return ptr;
	}

}


