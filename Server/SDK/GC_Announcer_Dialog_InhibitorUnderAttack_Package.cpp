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
	 * 		Name   -> PredefinedFunction AGC_Announcer_Dialog_InhibitorUnderAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Announcer_Dialog_InhibitorUnderAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Announcer_Dialog_InhibitorUnderAttack.GC_Announcer_Dialog_InhibitorUnderAttack_C");
		return ptr;
	}

}


