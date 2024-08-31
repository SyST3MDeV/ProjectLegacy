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
	 * 		Name   -> PredefinedFunction UGE_First_Spawn_Move_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_First_Spawn_Move_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_First_Spawn_Move.GE_First_Spawn_Move_C");
		return ptr;
	}

}


