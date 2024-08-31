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
	 * 		Name   -> PredefinedFunction UHeroVisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroVisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeroVisionDef.HeroVisionDef_C");
		return ptr;
	}

}


