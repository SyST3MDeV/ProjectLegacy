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
	 * 		Name   -> Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayer_Kill_Player_Widget_Template_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.Construct");
		
		UPlayer_Kill_Player_Widget_Template_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayer_Kill_Player_Widget_Template_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.OnAnimationFinished");
		
		UPlayer_Kill_Player_Widget_Template_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.ExecuteUbergraph_Player_Kill_Player_Widget_Template
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayer_Kill_Player_Widget_Template_C::ExecuteUbergraph_Player_Kill_Player_Widget_Template(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.ExecuteUbergraph_Player_Kill_Player_Widget_Template");
		
		UPlayer_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayer_Kill_Player_Widget_Template_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayer_Kill_Player_Widget_Template_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C");
		return ptr;
	}

}


