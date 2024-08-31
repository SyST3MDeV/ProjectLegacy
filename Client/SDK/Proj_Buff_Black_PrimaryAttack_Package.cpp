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
	 * 		Name   -> PredefinedFunction AProj_Buff_Black_PrimaryAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Buff_Black_PrimaryAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Buff_Black_PrimaryAttack.Proj_Buff_Black_PrimaryAttack_C");
		return ptr;
	}

}


