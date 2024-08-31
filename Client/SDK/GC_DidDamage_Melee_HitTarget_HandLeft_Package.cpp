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
	 * 		Name   -> PredefinedFunction UGC_DidDamage_Melee_HitTarget_HandLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_DidDamage_Melee_HitTarget_HandLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_DidDamage_Melee_HitTarget_HandLeft.GC_DidDamage_Melee_HitTarget_HandLeft_C");
		return ptr;
	}

}


