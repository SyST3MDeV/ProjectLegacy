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
	 * 		Name   -> PredefinedFunction UGE_PrimeHelix_Buff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_PrimeHelix_Buff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_PrimeHelix_Buff.GE_PrimeHelix_Buff_C");
		return ptr;
	}

}


