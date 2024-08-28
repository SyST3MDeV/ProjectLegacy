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
	 * 		Name   -> Function BadgeTooltip.BadgeTooltip_C.OnUpdateLock
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOwned                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBadgeTooltip_C::OnUpdateLock(bool bIsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BadgeTooltip.BadgeTooltip_C.OnUpdateLock");
		
		UBadgeTooltip_C_OnUpdateLock_Params params {};
		params.bIsOwned = bIsOwned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BadgeTooltip.BadgeTooltip_C.ExecuteUbergraph_BadgeTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBadgeTooltip_C::ExecuteUbergraph_BadgeTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BadgeTooltip.BadgeTooltip_C.ExecuteUbergraph_BadgeTooltip");
		
		UBadgeTooltip_C_ExecuteUbergraph_BadgeTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBadgeTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBadgeTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BadgeTooltip.BadgeTooltip_C");
		return ptr;
	}

}


