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
	 * 		Name   -> PredefinedFunction UGC_Shield_Shared_ProjectileImpact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Shield_Shared_ProjectileImpact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Shield_Shared_ProjectileImpact.GC_Shield_Shared_ProjectileImpact_C");
		return ptr;
	}

}


