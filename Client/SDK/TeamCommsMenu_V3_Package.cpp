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
	 * 		Name   -> Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamCommsMenuV3_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.On Open");
		
		UTeamCommsMenuV3_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamCommsMenuV3_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.On Close");
		
		UTeamCommsMenuV3_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.ExecuteUbergraph_TeamCommsMenu-V3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsMenuV3_C::ExecuteUbergraph_TeamCommsMenuV3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsMenu-V3.TeamCommsMenu-V3_C.ExecuteUbergraph_TeamCommsMenu-V3");
		
		UTeamCommsMenuV3_C_ExecuteUbergraph_TeamCommsMenuV3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamCommsMenuV3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommsMenuV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamCommsMenu_V3.TeamCommsMenu-V3_C");
		return ptr;
	}

}


