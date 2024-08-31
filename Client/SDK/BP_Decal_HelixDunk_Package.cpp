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
	 * 		Name   -> PredefinedFunction ABP_Decal_HelixDunk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Decal_HelixDunk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_HelixDunk.BP_Decal_HelixDunk_C");
		return ptr;
	}

}


