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
	 * 		Name   -> PredefinedFunction UGE_Hero_DamageResist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Hero_DamageResist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Hero_DamageResist.GE_Hero_DamageResist_C");
		return ptr;
	}

}


