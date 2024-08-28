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
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.RegisterTeamTowers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::RegisterTeamTowers(class AOrionDamageableObjective_Base* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.RegisterTeamTowers");
		
		ABP_GSM_Trainer_C_RegisterTeamTowers_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.IsMatchOver
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GameOver                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::IsMatchOver(bool* GameOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.IsMatchOver");
		
		ABP_GSM_Trainer_C_IsMatchOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameOver != nullptr)
			*GameOver = params.GameOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GetWinningTeamNum
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         WinningTeam                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::GetWinningTeamNum(EOrionTeam* WinningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GetWinningTeamNum");
		
		ABP_GSM_Trainer_C_GetWinningTeamNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WinningTeam != nullptr)
			*WinningTeam = params.WinningTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.Register Team Objective
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              InObjective                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::RegisterTeamObjective(class AOrionDamageableObjective_Base* InObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.Register Team Objective");
		
		ABP_GSM_Trainer_C_RegisterTeamObjective_Params params {};
		params.InObjective = InObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_Trainer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.UserConstructionScript");
		
		ABP_GSM_Trainer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayWelcome
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayWelcome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayWelcome");
		
		ABP_GSM_Trainer_C_GSM_PlayWelcome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMinions30s
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayMinions30s()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMinions30s");
		
		ABP_GSM_Trainer_C_GSM_PlayMinions30s_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMinionsSpawned
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayMinionsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMinionsSpawned");
		
		ABP_GSM_Trainer_C_GSM_PlayMinionsSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayAce
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayAce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayAce");
		
		ABP_GSM_Trainer_C_GSM_PlayAce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayKilledDialog
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionPlayerController_Game*                 KilledPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       KilledPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayKilledDialog(class AOrionPlayerController_Game* KilledPlayerController, class APawn* KilledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayKilledDialog");
		
		ABP_GSM_Trainer_C_GSM_PlayKilledDialog_Params params {};
		params.KilledPlayerController = KilledPlayerController;
		params.KilledPawn = KilledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMultiKillVO
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 KillerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayMultiKillVO(class AController* KillerController, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayMultiKillVO");
		
		ABP_GSM_Trainer_C_GSM_PlayMultiKillVO_Params params {};
		params.KillerController = KillerController;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayKillingSpreeVO
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 KillerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::GSM_PlayKillingSpreeVO(class AController* KillerController, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.GSM_PlayKillingSpreeVO");
		
		ABP_GSM_Trainer_C_GSM_PlayKillingSpreeVO_Params params {};
		params.KillerController = KillerController;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.InitialPlayerLevelUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionPlayerState_Game*                      OrionPlayerStateGame                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::InitialPlayerLevelUp(class AOrionPlayerState_Game* OrionPlayerStateGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.InitialPlayerLevelUp");
		
		ABP_GSM_Trainer_C_InitialPlayerLevelUp_Params params {};
		params.OrionPlayerStateGame = OrionPlayerStateGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_Trainer.BP_GSM_Trainer_C.ExecuteUbergraph_BP_GSM_Trainer
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_Trainer_C::ExecuteUbergraph_BP_GSM_Trainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_Trainer.BP_GSM_Trainer_C.ExecuteUbergraph_BP_GSM_Trainer");
		
		ABP_GSM_Trainer_C_ExecuteUbergraph_BP_GSM_Trainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GSM_Trainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GSM_Trainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSM_Trainer.BP_GSM_Trainer_C");
		return ptr;
	}

}


