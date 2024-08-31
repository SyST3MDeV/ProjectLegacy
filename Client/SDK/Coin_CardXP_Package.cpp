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
	 * 		Name   -> PredefinedFunction UCoin_CardXP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoin_CardXP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Coin_CardXP.Coin_CardXP_C");
		return ptr;
	}

}


