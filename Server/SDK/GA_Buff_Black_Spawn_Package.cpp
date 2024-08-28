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
	 * 		Name   -> PredefinedFunction UGA_Buff_Black_Spawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Buff_Black_Spawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Buff_Black_Spawn.GA_Buff_Black_Spawn_C");
		return ptr;
	}

}


