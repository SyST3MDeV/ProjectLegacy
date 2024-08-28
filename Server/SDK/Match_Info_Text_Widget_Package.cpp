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
	 * 		Name   -> Function Match_Info_Text_Widget.Match_Info_Text_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMatch_Info_Text_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Match_Info_Text_Widget.Match_Info_Text_Widget_C.Construct");
		
		UMatch_Info_Text_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Match_Info_Text_Widget.Match_Info_Text_Widget_C.ExecuteUbergraph_Match_Info_Text_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatch_Info_Text_Widget_C::ExecuteUbergraph_Match_Info_Text_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Match_Info_Text_Widget.Match_Info_Text_Widget_C.ExecuteUbergraph_Match_Info_Text_Widget");
		
		UMatch_Info_Text_Widget_C_ExecuteUbergraph_Match_Info_Text_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatch_Info_Text_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatch_Info_Text_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Match_Info_Text_Widget.Match_Info_Text_Widget_C");
		return ptr;
	}

}


