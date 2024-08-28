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
	 * 		Name   -> PredefinedFunction AGC_JungleCreep_Red_SwingRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_JungleCreep_Red_SwingRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_JungleCreep_Red_SwingRight.GC_JungleCreep_Red_SwingRight_C");
		return ptr;
	}

}


