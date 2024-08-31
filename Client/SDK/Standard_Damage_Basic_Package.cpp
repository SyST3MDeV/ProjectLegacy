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
	 * 		Name   -> PredefinedFunction UStandard_Damage_Basic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandard_Damage_Basic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Standard_Damage_Basic.Standard_Damage_Basic_C");
		return ptr;
	}

}


