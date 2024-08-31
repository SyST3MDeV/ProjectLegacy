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
	 * 		Name   -> Function TeamCommsCancelPrompt.TeamCommsCancelPrompt_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTeamCommsCancelPrompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsCancelPrompt.TeamCommsCancelPrompt_C.Construct");
		
		UTeamCommsCancelPrompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TeamCommsCancelPrompt.TeamCommsCancelPrompt_C.ExecuteUbergraph_TeamCommsCancelPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamCommsCancelPrompt_C::ExecuteUbergraph_TeamCommsCancelPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamCommsCancelPrompt.TeamCommsCancelPrompt_C.ExecuteUbergraph_TeamCommsCancelPrompt");
		
		UTeamCommsCancelPrompt_C_ExecuteUbergraph_TeamCommsCancelPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeamCommsCancelPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommsCancelPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamCommsCancelPrompt.TeamCommsCancelPrompt_C");
		return ptr;
	}

}


