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
	 * 		Name   -> Function DevelopmentLabelWidget.DevelopmentLabelWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDevelopmentLabelWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DevelopmentLabelWidget.DevelopmentLabelWidget_C.Construct");
		
		UDevelopmentLabelWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DevelopmentLabelWidget.DevelopmentLabelWidget_C.ExecuteUbergraph_DevelopmentLabelWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDevelopmentLabelWidget_C::ExecuteUbergraph_DevelopmentLabelWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DevelopmentLabelWidget.DevelopmentLabelWidget_C.ExecuteUbergraph_DevelopmentLabelWidget");
		
		UDevelopmentLabelWidget_C_ExecuteUbergraph_DevelopmentLabelWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDevelopmentLabelWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDevelopmentLabelWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DevelopmentLabelWidget.DevelopmentLabelWidget_C");
		return ptr;
	}

}


