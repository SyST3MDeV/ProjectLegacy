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
	 * 		Name   -> PredefinedFunction UGE_Standard_Blight_FromPoison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Standard_Blight_FromPoison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Standard_Blight_FromPoison.GE_Standard_Blight_FromPoison_C");
		return ptr;
	}

}


