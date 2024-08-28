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
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.GetWinningTeamNum
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	EOrionTeam ABP_GMM_BaseMOBA_C::GetWinningTeamNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.GetWinningTeamNum");
		
		ABP_GMM_BaseMOBA_C_GetWinningTeamNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.IsMatchObjectiveCompleted
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_GMM_BaseMOBA_C::IsMatchObjectiveCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.IsMatchObjectiveCompleted");
		
		ABP_GMM_BaseMOBA_C_IsMatchObjectiveCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.IsMatchTimeBased
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_GMM_BaseMOBA_C::IsMatchTimeBased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.IsMatchTimeBased");
		
		ABP_GMM_BaseMOBA_C_IsMatchTimeBased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_BaseMOBA_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.UserConstructionScript");
		
		ABP_GMM_BaseMOBA_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_GMM_BaseMOBA_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceiveBeginPlay");
		
		ABP_GMM_BaseMOBA_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceivePlayerKilled
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 KilledPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       KilledPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MultiKillCount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            KillStreakCount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::ReceivePlayerKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, int32_t MultiKillCount, int32_t KillStreakCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceivePlayerKilled");
		
		ABP_GMM_BaseMOBA_C_ReceivePlayerKilled_Params params {};
		params.Killer = Killer;
		params.KilledPlayer = KilledPlayer;
		params.KilledPawn = KilledPawn;
		params.MultiKillCount = MultiKillCount;
		params.KillStreakCount = KillStreakCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.OnMatchStarted_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_BaseMOBA_C::OnMatchStarted_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.OnMatchStarted_Bind");
		
		ABP_GMM_BaseMOBA_C_OnMatchStarted_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckFirstBlood
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 KilledPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       KilledPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::CheckFirstBlood(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckFirstBlood");
		
		ABP_GMM_BaseMOBA_C_CheckFirstBlood_Params params {};
		params.Killer = Killer;
		params.KilledPlayer = KilledPlayer;
		params.KilledPawn = KilledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckAce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 KilledPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::CheckAce(class AController* Killer, class AController* KilledPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckAce");
		
		ABP_GMM_BaseMOBA_C_CheckAce_Params params {};
		params.Killer = Killer;
		params.KilledPlayer = KilledPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ForceMatchWinCondition
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::ForceMatchWinCondition(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ForceMatchWinCondition");
		
		ABP_GMM_BaseMOBA_C_ForceMatchWinCondition_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckMultiOrStreak
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MultiKillCount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            KillStreakCount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::CheckMultiOrStreak(class AController* Killer, int32_t MultiKillCount, int32_t KillStreakCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.CheckMultiOrStreak");
		
		ABP_GMM_BaseMOBA_C_CheckMultiOrStreak_Params params {};
		params.Killer = Killer;
		params.MultiKillCount = MultiKillCount;
		params.KillStreakCount = KillStreakCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.OnMatchEnded_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_BaseMOBA_C::OnMatchEnded_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.OnMatchEnded_Bind");
		
		ABP_GMM_BaseMOBA_C_OnMatchEnded_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceivePlayerKillStreakShutdown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            KillStreakCount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::ReceivePlayerKillStreakShutdown(class AController* Victim, class AController* Killer, int32_t KillStreakCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ReceivePlayerKillStreakShutdown");
		
		ABP_GMM_BaseMOBA_C_ReceivePlayerKillStreakShutdown_Params params {};
		params.Victim = Victim;
		params.Killer = Killer;
		params.KillStreakCount = KillStreakCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ExecuteUbergraph_BP_GMM_BaseMOBA
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::ExecuteUbergraph_BP_GMM_BaseMOBA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.ExecuteUbergraph_BP_GMM_BaseMOBA");
		
		ABP_GMM_BaseMOBA_C_ExecuteUbergraph_BP_GMM_BaseMOBA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PlayerKilled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_BaseMOBA_C::PlayerKilled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PlayerKilled__DelegateSignature");
		
		ABP_GMM_BaseMOBA_C_PlayerKilled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GMM_BaseMOBA_C::PrimeHelixDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixDestroyed__DelegateSignature");
		
		ABP_GMM_BaseMOBA_C_PrimeHelixDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixDropped__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionChar*                                  Dropper                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::PrimeHelixDropped__DelegateSignature(class AOrionChar* Dropper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixDropped__DelegateSignature");
		
		ABP_GMM_BaseMOBA_C_PrimeHelixDropped__DelegateSignature_Params params {};
		params.Dropper = Dropper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixPickedUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionChar*                                  Carrier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GMM_BaseMOBA_C::PrimeHelixPickedUp__DelegateSignature(class AOrionChar* Carrier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C.PrimeHelixPickedUp__DelegateSignature");
		
		ABP_GMM_BaseMOBA_C_PrimeHelixPickedUp__DelegateSignature_Params params {};
		params.Carrier = Carrier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GMM_BaseMOBA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GMM_BaseMOBA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C");
		return ptr;
	}

}


