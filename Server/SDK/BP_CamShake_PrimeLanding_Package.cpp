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
	 * 		Name   -> PredefinedFunction UBP_CamShake_PrimeLanding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CamShake_PrimeLanding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CamShake_PrimeLanding.BP_CamShake_PrimeLanding_C");
		return ptr;
	}

}


