﻿/**
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
	 * 		Name   -> PredefinedFunction UGC_Emote_Cancel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Emote_Cancel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Emote_Cancel.GC_Emote_Cancel_C");
		return ptr;
	}

}

