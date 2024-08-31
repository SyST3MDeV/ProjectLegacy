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
	 * 		Name   -> Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Menu_Manager_Widget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.OnMouseButtonDown");
		
		UHUD_Menu_Manager_Widget_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Update Analog Cursor State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUD_Menu_Manager_Widget_C::UpdateAnalogCursorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Update Analog Cursor State");
		
		UHUD_Menu_Manager_Widget_C_UpdateAnalogCursorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Handle Change In Open State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionMenuSlotTypes                                MenuSlotType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsNewlyVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Menu_Manager_Widget_C::HandleChangeInOpenState(EOrionMenuSlotTypes MenuSlotType, bool IsNewlyVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Handle Change In Open State");
		
		UHUD_Menu_Manager_Widget_C_HandleChangeInOpenState_Params params {};
		params.MenuSlotType = MenuSlotType;
		params.IsNewlyVisible = IsNewlyVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUD_Menu_Manager_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.Construct");
		
		UHUD_Menu_Manager_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.ExecuteUbergraph_HUD_Menu_Manager_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Menu_Manager_Widget_C::ExecuteUbergraph_HUD_Menu_Manager_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C.ExecuteUbergraph_HUD_Menu_Manager_Widget");
		
		UHUD_Menu_Manager_Widget_C_ExecuteUbergraph_HUD_Menu_Manager_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Menu_Manager_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Menu_Manager_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C");
		return ptr;
	}

}


