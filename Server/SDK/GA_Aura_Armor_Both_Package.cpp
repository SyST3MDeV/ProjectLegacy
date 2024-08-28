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
	 * 		Name   -> PredefinedFunction UGA_Aura_Armor_Both_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Aura_Armor_Both_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Aura_Armor_Both.GA_Aura_Armor_Both_C");
		return ptr;
	}

}


