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
	 * 		Name   -> Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.OnPlayerPickStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionDraftPickStatus                              PickStatus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTurnPlayerIcon_C::OnPlayerPickStatusChanged(EOrionDraftPickStatus PickStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.OnPlayerPickStatusChanged");
		
		UDraftTurnPlayerIcon_C_OnPlayerPickStatusChanged_Params params {};
		params.PickStatus = PickStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDraftTurnPlayerIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.Construct");
		
		UDraftTurnPlayerIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.ExecuteUbergraph_DraftTurnPlayerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftTurnPlayerIcon_C::ExecuteUbergraph_DraftTurnPlayerIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftTurnPlayerIcon.DraftTurnPlayerIcon_C.ExecuteUbergraph_DraftTurnPlayerIcon");
		
		UDraftTurnPlayerIcon_C_ExecuteUbergraph_DraftTurnPlayerIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftTurnPlayerIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftTurnPlayerIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftTurnPlayerIcon.DraftTurnPlayerIcon_C");
		return ptr;
	}

}


