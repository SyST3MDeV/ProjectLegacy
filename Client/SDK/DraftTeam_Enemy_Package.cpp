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
	 * 		Name   -> Function DraftTeam_Enemy.DraftTeam_Enemy_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDraftTeam_Enemy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTeam_Enemy.DraftTeam_Enemy_C.Construct");
		
		UDraftTeam_Enemy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTeam_Enemy.DraftTeam_Enemy_C.ExecuteUbergraph_DraftTeam_Enemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTeam_Enemy_C::ExecuteUbergraph_DraftTeam_Enemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTeam_Enemy.DraftTeam_Enemy_C.ExecuteUbergraph_DraftTeam_Enemy");
		
		UDraftTeam_Enemy_C_ExecuteUbergraph_DraftTeam_Enemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftTeam_Enemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftTeam_Enemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftTeam_Enemy.DraftTeam_Enemy_C");
		return ptr;
	}

}


