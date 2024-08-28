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
	 * 		Name   -> PredefinedFunction UEditorStyleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditorStyleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditorStyle.EditorStyleSettings");
		return ptr;
	}

}


