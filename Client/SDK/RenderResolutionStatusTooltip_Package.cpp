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
	 * 		Name   -> Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.SetAdditionalContent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URenderResolutionStatusTooltip_C::SetAdditionalContent(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.SetAdditionalContent");
		
		URenderResolutionStatusTooltip_C_SetAdditionalContent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.Show
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void URenderResolutionStatusTooltip_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.Show");
		
		URenderResolutionStatusTooltip_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.Hide
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void URenderResolutionStatusTooltip_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.Hide");
		
		URenderResolutionStatusTooltip_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.ExecuteUbergraph_RenderResolutionStatusTooltip
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URenderResolutionStatusTooltip_C::ExecuteUbergraph_RenderResolutionStatusTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C.ExecuteUbergraph_RenderResolutionStatusTooltip");
		
		URenderResolutionStatusTooltip_C_ExecuteUbergraph_RenderResolutionStatusTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderResolutionStatusTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderResolutionStatusTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RenderResolutionStatusTooltip.RenderResolutionStatusTooltip_C");
		return ptr;
	}

}


