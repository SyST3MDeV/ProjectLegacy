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
	 * 		Name   -> Function DefaultTooltip.DefaultTooltip_C.UpdateTooltipText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewTooltipText                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UDefaultTooltip_C::UpdateTooltipText(const class FText& NewTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTooltip.DefaultTooltip_C.UpdateTooltipText");
		
		UDefaultTooltip_C_UpdateTooltipText_Params params {};
		params.NewTooltipText = NewTooltipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DefaultTooltip.DefaultTooltip_C.UpdateTitleText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewTitleText                                               (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UDefaultTooltip_C::UpdateTitleText(const class FText& NewTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTooltip.DefaultTooltip_C.UpdateTitleText");
		
		UDefaultTooltip_C_UpdateTitleText_Params params {};
		params.NewTitleText = NewTitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DefaultTooltip.DefaultTooltip_C.ExecuteUbergraph_DefaultTooltip
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDefaultTooltip_C::ExecuteUbergraph_DefaultTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultTooltip.DefaultTooltip_C.ExecuteUbergraph_DefaultTooltip");
		
		UDefaultTooltip_C_ExecuteUbergraph_DefaultTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultTooltip.DefaultTooltip_C");
		return ptr;
	}

}


