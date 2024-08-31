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
	 * 		Name   -> Function Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAnimated_Circular_Reticle_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C.Construct");
		
		UAnimated_Circular_Reticle_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C.OnActivelyTargetingDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CurrentlyTargeting                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimated_Circular_Reticle_Widget_C::OnActivelyTargetingDelegate_Event_1(bool CurrentlyTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C.OnActivelyTargetingDelegate_Event_1");
		
		UAnimated_Circular_Reticle_Widget_C_OnActivelyTargetingDelegate_Event_1_Params params {};
		params.CurrentlyTargeting = CurrentlyTargeting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C.ExecuteUbergraph_Animated_Circular_Reticle_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimated_Circular_Reticle_Widget_C::ExecuteUbergraph_Animated_Circular_Reticle_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C.ExecuteUbergraph_Animated_Circular_Reticle_Widget");
		
		UAnimated_Circular_Reticle_Widget_C_ExecuteUbergraph_Animated_Circular_Reticle_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimated_Circular_Reticle_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimated_Circular_Reticle_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Animated_Circular_Reticle_Widget.Animated_Circular_Reticle_Widget_C");
		return ptr;
	}

}


