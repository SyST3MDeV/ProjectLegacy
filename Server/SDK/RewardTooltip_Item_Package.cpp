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
	 * 		Name   -> PredefinedFunction URewardTooltip_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardTooltip_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardTooltip_Item.RewardTooltip_Item_C");
		return ptr;
	}

}


