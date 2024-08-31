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
	 * 		Name   -> PredefinedFunction UGE_Rig_Extraction_CD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Rig_Extraction_CD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Rig_Extraction_CD.GE_Rig_Extraction_CD_C");
		return ptr;
	}

}


