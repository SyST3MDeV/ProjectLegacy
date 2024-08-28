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
	 * 		Name   -> PredefinedFunction ATM_Prime_Helix_PrimaryAttack_Beam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Prime_Helix_PrimaryAttack_Beam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Prime_Helix_PrimaryAttack_Beam.TM_Prime_Helix_PrimaryAttack_Beam_C");
		return ptr;
	}

}


