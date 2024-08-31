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
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.CheckHealthPercentage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::CheckHealthPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.CheckHealthPercentage");
		
		ACore_v3_AOE_C_CheckHealthPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.GetTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACore_v3_AOE_C::GetTargetingLocation(struct FVector* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.GetTargetingLocation");
		
		ACore_v3_AOE_C_GetTargetingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.OnRep_Dead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::OnRep_Dead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.OnRep_Dead");
		
		ACore_v3_AOE_C_OnRep_Dead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.HandleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::HandleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.HandleTeamColors");
		
		ACore_v3_AOE_C_HandleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.GetNumberPopLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ACore_v3_AOE_C::GetNumberPopLocation(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.GetNumberPopLocation");
		
		ACore_v3_AOE_C_GetNumberPopLocation_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.GetAimTargetSensingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACore_v3_AOE_C::GetAimTargetSensingLocation(struct FVector* AimPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.GetAimTargetSensingLocation");
		
		ACore_v3_AOE_C_GetAimTargetSensingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimPosition != nullptr)
			*AimPosition = params.AimPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.UserConstructionScript");
		
		ACore_v3_AOE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_0__FinishedFunc");
		
		ACore_v3_AOE_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_0__UpdateFunc");
		
		ACore_v3_AOE_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_1__FinishedFunc");
		
		ACore_v3_AOE_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_1__UpdateFunc");
		
		ACore_v3_AOE_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::CoreDeathTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__FinishedFunc");
		
		ACore_v3_AOE_C_CoreDeathTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::CoreDeathTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__UpdateFunc");
		
		ACore_v3_AOE_C_CoreDeathTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__ExplosionCue__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::CoreDeathTimeline__ExplosionCue__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__ExplosionCue__EventFunc");
		
		ACore_v3_AOE_C_CoreDeathTimeline__ExplosionCue__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__EffectMeshVis__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::CoreDeathTimeline__EffectMeshVis__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.CoreDeathTimeline__EffectMeshVis__EventFunc");
		
		ACore_v3_AOE_C_CoreDeathTimeline__EffectMeshVis__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__FinishedFunc");
		
		ACore_v3_AOE_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__UpdateFunc");
		
		ACore_v3_AOE_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__ExplosionCue__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_2__ExplosionCue__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__ExplosionCue__EventFunc");
		
		ACore_v3_AOE_C_Timeline_2__ExplosionCue__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__EffectMeshVis__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACore_v3_AOE_C::Timeline_2__EffectMeshVis__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.Timeline_2__EffectMeshVis__EventFunc");
		
		ACore_v3_AOE_C_Timeline_2__EffectMeshVis__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.ReceiveBeginPlay");
		
		ACore_v3_AOE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.OnDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.OnDeath");
		
		ACore_v3_AOE_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.DoDeath
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::DoDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.DoDeath");
		
		ACore_v3_AOE_C_DoDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.GameplayCue.Core.Recharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ACore_v3_AOE_C::GameplayCue_Core_Recharge(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.GameplayCue.Core.Recharge");
		
		ACore_v3_AOE_C_GameplayCue_Core_Recharge_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.OnTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACore_v3_AOE_C::OnTeamChanged(EOrionTeam NewTeamIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.OnTeamChanged");
		
		ACore_v3_AOE_C_OnTeamChanged_Params params {};
		params.NewTeamIdx = NewTeamIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.WarmUpRunes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACore_v3_AOE_C::WarmUpRunes(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.WarmUpRunes");
		
		ACore_v3_AOE_C_WarmUpRunes_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.FadeOutRunes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::FadeOutRunes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.FadeOutRunes");
		
		ACore_v3_AOE_C_FadeOutRunes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.BREAK_InhibitorStatusCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::BREAK_InhibitorStatusCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.BREAK_InhibitorStatusCheck");
		
		ACore_v3_AOE_C_BREAK_InhibitorStatusCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.InhibitorStatusCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::InhibitorStatusCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.InhibitorStatusCheck");
		
		ACore_v3_AOE_C_InhibitorStatusCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.GameplayCue.Damage.Core
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ACore_v3_AOE_C::GameplayCue_Damage_Core(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.GameplayCue.Damage.Core");
		
		ACore_v3_AOE_C_GameplayCue_Damage_Core_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.CoreFinale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::CoreFinale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.CoreFinale");
		
		ACore_v3_AOE_C_CoreFinale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.OnDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACore_v3_AOE_C::OnDamageTaken(float Damage, class AActor* DamageInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.OnDamageTaken");
		
		ACore_v3_AOE_C_OnDamageTaken_Params params {};
		params.Damage = Damage;
		params.DamageInstigator = DamageInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.OnSelfRevive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::OnSelfRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.OnSelfRevive");
		
		ACore_v3_AOE_C_OnSelfRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.ObjectiveStartUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACore_v3_AOE_C::ObjectiveStartUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.ObjectiveStartUp");
		
		ACore_v3_AOE_C_ObjectiveStartUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Core_v3_AOE.Core_v3_AOE_C.ExecuteUbergraph_Core_v3_AOE
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACore_v3_AOE_C::ExecuteUbergraph_Core_v3_AOE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Core_v3_AOE.Core_v3_AOE_C.ExecuteUbergraph_Core_v3_AOE");
		
		ACore_v3_AOE_C_ExecuteUbergraph_Core_v3_AOE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACore_v3_AOE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACore_v3_AOE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Core_v3_AOE.Core_v3_AOE_C");
		return ptr;
	}

}


