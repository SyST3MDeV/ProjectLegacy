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
	 * 		Name   -> PredefinedFunction ATM_Buff_Blue_RangedBeam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Buff_Blue_RangedBeam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Buff_Blue_RangedBeam.TM_Buff_Blue_RangedBeam_C");
		return ptr;
	}

}


