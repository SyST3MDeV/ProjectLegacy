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
	 * 		Name   -> PredefinedFunction UGC_Projectiles_Proj_Default_Bounce_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Projectiles_Proj_Default_Bounce_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Projectiles_Proj_Default_Bounce.GC_Projectiles_Proj_Default_Bounce_C");
		return ptr;
	}

}


