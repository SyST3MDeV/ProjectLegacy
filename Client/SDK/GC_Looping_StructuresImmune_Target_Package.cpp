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
	 * 		Name   -> PredefinedFunction AGC_Looping_StructuresImmune_Target_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Looping_StructuresImmune_Target_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Looping_StructuresImmune_Target.GC_Looping_StructuresImmune_Target_C");
		return ptr;
	}

}


