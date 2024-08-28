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
	 * 		Name   -> PredefinedFunction ATM_Buff_Red_PrimaryAttackSector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Buff_Red_PrimaryAttackSector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Buff_Red_PrimaryAttackSector.TM_Buff_Red_PrimaryAttackSector_C");
		return ptr;
	}

}


