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
	 * 		Name   -> Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.OnPickStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionDraftPickStatus                              PickStatus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftPlayer_Enemy_C::OnPickStatusChanged(EOrionDraftPickStatus PickStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.OnPickStatusChanged");
		
		UDraftPlayer_Enemy_C_OnPickStatusChanged_Params params {};
		params.PickStatus = PickStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftPlayer_Enemy_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.PreConstruct");
		
		UDraftPlayer_Enemy_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.ExecuteUbergraph_DraftPlayer_Enemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDraftPlayer_Enemy_C::ExecuteUbergraph_DraftPlayer_Enemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DraftPlayer_Enemy.DraftPlayer_Enemy_C.ExecuteUbergraph_DraftPlayer_Enemy");
		
		UDraftPlayer_Enemy_C_ExecuteUbergraph_DraftPlayer_Enemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraftPlayer_Enemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftPlayer_Enemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftPlayer_Enemy.DraftPlayer_Enemy_C");
		return ptr;
	}

}


