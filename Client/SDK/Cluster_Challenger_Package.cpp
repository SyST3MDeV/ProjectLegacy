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
	 * 		Name   -> PredefinedFunction UCluster_Challenger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCluster_Challenger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cluster_Challenger.Cluster_Challenger_C");
		return ptr;
	}

}


