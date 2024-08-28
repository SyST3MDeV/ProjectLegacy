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
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.UnSelectNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTeamCommsNodeWidgetV3_C::UnSelectNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.UnSelectNode");
		
		UTeamCommsNodeWidgetV3_C_UnSelectNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.UnHighlightNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTeamCommsNodeWidgetV3_C::UnHighlightNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.UnHighlightNode");
		
		UTeamCommsNodeWidgetV3_C_UnHighlightNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ShowNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingGamepad                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsNodeWidgetV3_C::ShowNode(bool bUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ShowNode");
		
		UTeamCommsNodeWidgetV3_C_ShowNode_Params params {};
		params.bUsingGamepad = bUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.SelectNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTeamCommsNodeWidgetV3_C::SelectNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.SelectNode");
		
		UTeamCommsNodeWidgetV3_C_SelectNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ResetNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTeamCommsNodeWidgetV3_C::ResetNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ResetNode");
		
		UTeamCommsNodeWidgetV3_C_ResetNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.HighlightNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTeamCommsNodeWidgetV3_C::HighlightNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.HighlightNode");
		
		UTeamCommsNodeWidgetV3_C_HighlightNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.HideNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTeamCommsNodeWidgetV3_C::HideNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.HideNode");
		
		UTeamCommsNodeWidgetV3_C_HideNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ExecuteUbergraph_TeamCommsNodeWidget-V3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsNodeWidgetV3_C::ExecuteUbergraph_TeamCommsNodeWidgetV3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsNodeWidget-V3.TeamCommsNodeWidget-V3_C.ExecuteUbergraph_TeamCommsNodeWidget-V3");
		
		UTeamCommsNodeWidgetV3_C_ExecuteUbergraph_TeamCommsNodeWidgetV3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamCommsNodeWidgetV3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommsNodeWidgetV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamCommsNodeWidget_V3.TeamCommsNodeWidget-V3_C");
		return ptr;
	}

}


