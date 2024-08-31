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
	 * 		Name   -> PredefinedFunction UTutorial_1v1_Inhib_Aggro_Hero_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial_1v1_Inhib_Aggro_Hero_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_1v1_Inhib_Aggro_Hero.Tutorial_1v1_Inhib_Aggro_Hero_C");
		return ptr;
	}

}


