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
	 * 		Name   -> PredefinedFunction UGE_DamageReflect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_DamageReflect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_DamageReflect.GE_DamageReflect_C");
		return ptr;
	}

}


