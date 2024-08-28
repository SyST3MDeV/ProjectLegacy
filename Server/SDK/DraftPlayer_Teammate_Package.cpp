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
	 * 		Name   -> Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.OnPickStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionDraftPickStatus                              PickStatus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftPlayer_Teammate_C::OnPickStatusChanged(EOrionDraftPickStatus PickStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.OnPickStatusChanged");
		
		UDraftPlayer_Teammate_C_OnPickStatusChanged_Params params {};
		params.PickStatus = PickStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.OnMemberSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLocalPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftPlayer_Teammate_C::OnMemberSet(bool bIsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.OnMemberSet");
		
		UDraftPlayer_Teammate_C_OnMemberSet_Params params {};
		params.bIsLocalPlayer = bIsLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.ExecuteUbergraph_DraftPlayer_Teammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftPlayer_Teammate_C::ExecuteUbergraph_DraftPlayer_Teammate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftPlayer_Teammate.DraftPlayer_Teammate_C.ExecuteUbergraph_DraftPlayer_Teammate");
		
		UDraftPlayer_Teammate_C_ExecuteUbergraph_DraftPlayer_Teammate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftPlayer_Teammate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftPlayer_Teammate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftPlayer_Teammate.DraftPlayer_Teammate_C");
		return ptr;
	}

}


