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
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ForceDestroyCore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::ForceDestroyCore(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ForceDestroyCore");
		
		ABP_GSM_BaseMOBA_C_ForceDestroyCore_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterWells
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionWell_Base*                             NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::RegisterWells(class AOrionWell_Base* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterWells");
		
		ABP_GSM_BaseMOBA_C_RegisterWells_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterTeamTowers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::RegisterTeamTowers(class AOrionDamageableObjective_Base* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterTeamTowers");
		
		ABP_GSM_BaseMOBA_C_RegisterTeamTowers_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.IsMatchOver
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GameOver                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::IsMatchOver(bool* GameOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.IsMatchOver");
		
		ABP_GSM_BaseMOBA_C_IsMatchOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameOver != nullptr)
			*GameOver = params.GameOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GetWinningTeamNum
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         WinningTeam                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::GetWinningTeamNum(EOrionTeam* WinningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GetWinningTeamNum");
		
		ABP_GSM_BaseMOBA_C_GetWinningTeamNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinningTeam != nullptr)
			*WinningTeam = params.WinningTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.Register Team Objective
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              InObjective                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::RegisterTeamObjective(class AOrionDamageableObjective_Base* InObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.Register Team Objective");
		
		ABP_GSM_BaseMOBA_C_RegisterTeamObjective_Params params {};
		params.InObjective = InObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_BaseMOBA_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.UserConstructionScript");
		
		ABP_GSM_BaseMOBA_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpTowers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_BaseMOBA_C::GSM_LevelUpTowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpTowers");
		
		ABP_GSM_BaseMOBA_C_GSM_LevelUpTowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpWells
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_BaseMOBA_C::GSM_LevelUpWells()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpWells");
		
		ABP_GSM_BaseMOBA_C_GSM_LevelUpWells_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::HeroHasRecalled(EOrionTeam HeroTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled");
		
		ABP_GSM_BaseMOBA_C_HeroHasRecalled_Params params {};
		params.HeroTeam = HeroTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.PlayEndMatchSequence
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         WinningTeamNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::PlayEndMatchSequence(EOrionTeam WinningTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.PlayEndMatchSequence");
		
		ABP_GSM_BaseMOBA_C_PlayEndMatchSequence_Params params {};
		params.WinningTeamNum = WinningTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.MinionsSpawning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_BaseMOBA_C::MinionsSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.MinionsSpawning");
		
		ABP_GSM_BaseMOBA_C_MinionsSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ExecuteUbergraph_BP_GSM_BaseMOBA
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::ExecuteUbergraph_BP_GSM_BaseMOBA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ExecuteUbergraph_BP_GSM_BaseMOBA");
		
		ABP_GSM_BaseMOBA_C_ExecuteUbergraph_BP_GSM_BaseMOBA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TriggerVictoryEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         WinningTeam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::TriggerVictoryEvent__DelegateSignature(EOrionTeam WinningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TriggerVictoryEvent__DelegateSignature");
		
		ABP_GSM_BaseMOBA_C_TriggerVictoryEvent__DelegateSignature_Params params {};
		params.WinningTeam = WinningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled_Dispatch__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_BaseMOBA_C::HeroHasRecalled_Dispatch__DelegateSignature(EOrionTeam HeroTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled_Dispatch__DelegateSignature");
		
		ABP_GSM_BaseMOBA_C_HeroHasRecalled_Dispatch__DelegateSignature_Params params {};
		params.HeroTeam = HeroTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TestPlayMatinee__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_BaseMOBA_C::TestPlayMatinee__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TestPlayMatinee__DelegateSignature");
		
		ABP_GSM_BaseMOBA_C_TestPlayMatinee__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GSM_BaseMOBA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GSM_BaseMOBA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C");
		return ptr;
	}

}


