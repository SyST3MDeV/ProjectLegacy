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
	 * 		Name   -> Function BanStatusTooltip.BanStatusTooltip_C.OnShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBanStatusTooltip_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BanStatusTooltip.BanStatusTooltip_C.OnShow");
		
		UBanStatusTooltip_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BanStatusTooltip.BanStatusTooltip_C.ExecuteUbergraph_BanStatusTooltip
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBanStatusTooltip_C::ExecuteUbergraph_BanStatusTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BanStatusTooltip.BanStatusTooltip_C.ExecuteUbergraph_BanStatusTooltip");
		
		UBanStatusTooltip_C_ExecuteUbergraph_BanStatusTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBanStatusTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBanStatusTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BanStatusTooltip.BanStatusTooltip_C");
		return ptr;
	}

}


