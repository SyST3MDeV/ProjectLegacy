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
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.GetWinningTeamNum
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	EOrionTeam ABP_GMM_MOBA_1v1_Tutorial_C::GetWinningTeamNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.GetWinningTeamNum");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_GetWinningTeamNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.IsMatchObjectiveCompleted
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_GMM_MOBA_1v1_Tutorial_C::IsMatchObjectiveCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.IsMatchObjectiveCompleted");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_IsMatchObjectiveCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.IsMatchTimeBased
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_GMM_MOBA_1v1_Tutorial_C::IsMatchTimeBased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.IsMatchTimeBased");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_IsMatchTimeBased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_MOBA_1v1_Tutorial_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.UserConstructionScript");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_GMM_MOBA_1v1_Tutorial_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ReceiveBeginPlay");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.OnMatchStarted_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_MOBA_1v1_Tutorial_C::OnMatchStarted_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.OnMatchStarted_Bind");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_OnMatchStarted_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.OnMatchEnded_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_MOBA_1v1_Tutorial_C::OnMatchEnded_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.OnMatchEnded_Bind");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_OnMatchEnded_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ApplyGEsOnSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_MOBA_1v1_Tutorial_C::ApplyGEsOnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ApplyGEsOnSpawn");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_ApplyGEsOnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_MOBA_1v1_Tutorial_C::ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C.ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial");
		
		ABP_GMM_MOBA_1v1_Tutorial_C_ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GMM_MOBA_1v1_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GMM_MOBA_1v1_Tutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C");
		return ptr;
	}

}


