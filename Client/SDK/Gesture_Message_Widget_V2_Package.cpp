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
	 * 		Name   -> Function Gesture_Message_Widget-V2.Gesture_Message_Widget-V2_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGesture_Message_WidgetV2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gesture_Message_Widget-V2.Gesture_Message_Widget-V2_C.Construct");
		
		UGesture_Message_WidgetV2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Gesture_Message_Widget-V2.Gesture_Message_Widget-V2_C.ExecuteUbergraph_Gesture_Message_Widget-V2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGesture_Message_WidgetV2_C::ExecuteUbergraph_Gesture_Message_WidgetV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gesture_Message_Widget-V2.Gesture_Message_Widget-V2_C.ExecuteUbergraph_Gesture_Message_Widget-V2");
		
		UGesture_Message_WidgetV2_C_ExecuteUbergraph_Gesture_Message_WidgetV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGesture_Message_WidgetV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGesture_Message_WidgetV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Gesture_Message_Widget_V2.Gesture_Message_Widget-V2_C");
		return ptr;
	}

}


