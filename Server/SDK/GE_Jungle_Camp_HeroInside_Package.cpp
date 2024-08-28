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
	 * 		Name   -> PredefinedFunction UGE_Jungle_Camp_HeroInside_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Jungle_Camp_HeroInside_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Jungle_Camp_HeroInside.GE_Jungle_Camp_HeroInside_C");
		return ptr;
	}

}


