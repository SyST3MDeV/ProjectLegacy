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
	 * 		Name   -> Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.ShowEmoteTogglePrompt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowPrompt                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsLayerWidgetV3_C::ShowEmoteTogglePrompt(bool bShowPrompt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.ShowEmoteTogglePrompt");
		
		UTeamCommsLayerWidgetV3_C_ShowEmoteTogglePrompt_Params params {};
		params.bShowPrompt = bShowPrompt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.SetInEmoteMode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInEmoteMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsLayerWidgetV3_C::SetInEmoteMode(bool bInEmoteMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.SetInEmoteMode");
		
		UTeamCommsLayerWidgetV3_C_SetInEmoteMode_Params params {};
		params.bInEmoteMode = bInEmoteMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.ExecuteUbergraph_TeamCommsLayerWidget-V3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsLayerWidgetV3_C::ExecuteUbergraph_TeamCommsLayerWidgetV3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsLayerWidget-V3.TeamCommsLayerWidget-V3_C.ExecuteUbergraph_TeamCommsLayerWidget-V3");
		
		UTeamCommsLayerWidgetV3_C_ExecuteUbergraph_TeamCommsLayerWidgetV3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamCommsLayerWidgetV3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommsLayerWidgetV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamCommsLayerWidget_V3.TeamCommsLayerWidget-V3_C");
		return ptr;
	}

}


