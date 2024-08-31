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
	 * 		Name   -> PredefinedFunction UDefaultObjectiveVisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultObjectiveVisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultObjectiveVisionDef.DefaultObjectiveVisionDef_C");
		return ptr;
	}

}


