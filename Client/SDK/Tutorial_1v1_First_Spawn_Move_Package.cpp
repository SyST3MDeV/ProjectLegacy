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
	 * 		Name   -> PredefinedFunction UTutorial_1v1_First_Spawn_Move_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial_1v1_First_Spawn_Move_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_1v1_First_Spawn_Move.Tutorial_1v1_First_Spawn_Move_C");
		return ptr;
	}

}


