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
	 * 		Name   -> PredefinedFunction UGC_Announcer_Dialog_MinionsIn30s_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Announcer_Dialog_MinionsIn30s_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Announcer_Dialog_MinionsIn30s.GC_Announcer_Dialog_MinionsIn30s_C");
		return ptr;
	}

}


