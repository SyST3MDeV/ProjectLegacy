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
	 * 		Name   -> Function HoverDotWidgets.HoverDotWidgets_C.SetDotValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewVal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverDotWidgets_C::SetDotValue(float NewVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDotWidgets.HoverDotWidgets_C.SetDotValue");
		
		UHoverDotWidgets_C_SetDotValue_Params params {};
		params.NewVal = NewVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HoverDotWidgets.HoverDotWidgets_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHoverDotWidgets_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDotWidgets.HoverDotWidgets_C.Construct");
		
		UHoverDotWidgets_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HoverDotWidgets.HoverDotWidgets_C.ExecuteUbergraph_HoverDotWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverDotWidgets_C::ExecuteUbergraph_HoverDotWidgets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDotWidgets.HoverDotWidgets_C.ExecuteUbergraph_HoverDotWidgets");
		
		UHoverDotWidgets_C_ExecuteUbergraph_HoverDotWidgets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoverDotWidgets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoverDotWidgets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HoverDotWidgets.HoverDotWidgets_C");
		return ptr;
	}

}


