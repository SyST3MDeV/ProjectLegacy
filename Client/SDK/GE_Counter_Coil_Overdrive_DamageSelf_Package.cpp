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
	 * 		Name   -> PredefinedFunction UGE_Counter_Coil_Overdrive_DamageSelf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Counter_Coil_Overdrive_DamageSelf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Counter_Coil_Overdrive_DamageSelf.GE_Counter_Coil_Overdrive_DamageSelf_C");
		return ptr;
	}

}


