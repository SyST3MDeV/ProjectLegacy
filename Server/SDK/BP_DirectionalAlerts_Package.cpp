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
	 * 		Name   -> PredefinedFunction UBP_DirectionalAlerts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DirectionalAlerts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DirectionalAlerts.BP_DirectionalAlerts_C");
		return ptr;
	}

}


