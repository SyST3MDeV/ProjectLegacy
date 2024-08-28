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
	 * 		Name   -> Function BP_XPWidgetWrapper.BP_XPWidgetWrapper_C.InitInHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseHUDWidget*                         Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_XPWidgetWrapper_C::InitInHUD(class UOrionBaseHUDWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_XPWidgetWrapper.BP_XPWidgetWrapper_C.InitInHUD");
		
		UBP_XPWidgetWrapper_C_InitInHUD_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_XPWidgetWrapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_XPWidgetWrapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_XPWidgetWrapper.BP_XPWidgetWrapper_C");
		return ptr;
	}

}


