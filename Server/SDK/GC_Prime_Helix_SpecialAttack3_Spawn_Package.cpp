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
	 * 		Name   -> PredefinedFunction UGC_Prime_Helix_SpecialAttack3_Spawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Prime_Helix_SpecialAttack3_Spawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Prime_Helix_SpecialAttack3_Spawn.GC_Prime_Helix_SpecialAttack3_Spawn_C");
		return ptr;
	}

}


