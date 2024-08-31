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
	 * 		Name   -> PredefinedFunction UGE_Prime_Helix_V2_SpecialAttack1_Root_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Prime_Helix_V2_SpecialAttack1_Root_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Prime_Helix_V2_SpecialAttack1_Root.GE_Prime_Helix_V2_SpecialAttack1_Root_C");
		return ptr;
	}

}


