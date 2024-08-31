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
	 * 		Name   -> PredefinedFunction UGC_DidDamage_Melee_HitTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_DidDamage_Melee_HitTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_DidDamage_Melee_HitTarget.GC_DidDamage_Melee_HitTarget_C");
		return ptr;
	}

}


