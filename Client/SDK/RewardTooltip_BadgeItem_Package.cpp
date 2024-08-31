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
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RewardTooltip_BadgeItem.RewardTooltip_BadgeItem_C.ExecuteUbergraph_RewardTooltip_BadgeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardTooltip_BadgeItem_C::ExecuteUbergraph_RewardTooltip_BadgeItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardTooltip_BadgeItem.RewardTooltip_BadgeItem_C.ExecuteUbergraph_RewardTooltip_BadgeItem");
		
		URewardTooltip_BadgeItem_C_ExecuteUbergraph_RewardTooltip_BadgeItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardTooltip_BadgeItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardTooltip_BadgeItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardTooltip_BadgeItem.RewardTooltip_BadgeItem_C");
		return ptr;
	}

}


