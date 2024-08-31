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
	 * 		Name   -> Function DraftTeam_Friendly.DraftTeam_Friendly_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDraftTeam_Friendly_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTeam_Friendly.DraftTeam_Friendly_C.Construct");
		
		UDraftTeam_Friendly_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTeam_Friendly.DraftTeam_Friendly_C.ExecuteUbergraph_DraftTeam_Friendly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTeam_Friendly_C::ExecuteUbergraph_DraftTeam_Friendly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTeam_Friendly.DraftTeam_Friendly_C.ExecuteUbergraph_DraftTeam_Friendly");
		
		UDraftTeam_Friendly_C_ExecuteUbergraph_DraftTeam_Friendly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftTeam_Friendly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftTeam_Friendly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftTeam_Friendly.DraftTeam_Friendly_C");
		return ptr;
	}

}


