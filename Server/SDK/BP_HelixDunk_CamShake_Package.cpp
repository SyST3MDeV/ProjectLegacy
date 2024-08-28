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
	 * 		Name   -> PredefinedFunction UBP_HelixDunk_CamShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HelixDunk_CamShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelixDunk_CamShake.BP_HelixDunk_CamShake_C");
		return ptr;
	}

}


