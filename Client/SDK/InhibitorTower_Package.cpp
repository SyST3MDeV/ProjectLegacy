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
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::GetTargetingLocation(struct FVector* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetTargetingLocation");
		
		AInhibitorTower_C_GetTargetingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.HandleSuperMinionSelfDestruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::HandleSuperMinionSelfDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.HandleSuperMinionSelfDestruct");
		
		AInhibitorTower_C_HandleSuperMinionSelfDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetNumberPopLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AInhibitorTower_C::GetNumberPopLocation(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetNumberPopLocation");
		
		AInhibitorTower_C_GetNumberPopLocation_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetAimTargetSensingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::GetAimTargetSensingLocation(struct FVector* AimPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetAimTargetSensingLocation");
		
		AInhibitorTower_C_GetAimTargetSensingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimPosition != nullptr)
			*AimPosition = params.AimPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.OnRep_Dead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::OnRep_Dead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.OnRep_Dead");
		
		AInhibitorTower_C_OnRep_Dead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.HandleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::HandleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.HandleTeamColors");
		
		AInhibitorTower_C_HandleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetBaseAttackingMesh
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UMeshComponent* AInhibitorTower_C::GetBaseAttackingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetBaseAttackingMesh");
		
		AInhibitorTower_C_GetBaseAttackingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.HandleSuperMinionSpawns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::HandleSuperMinionSpawns(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.HandleSuperMinionSpawns");
		
		AInhibitorTower_C_HandleSuperMinionSpawns_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Set Goal Waypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::SetGoalWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Set Goal Waypoint");
		
		AInhibitorTower_C_SetGoalWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.HandleGoalWaypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::HandleGoalWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.HandleGoalWaypoint");
		
		AInhibitorTower_C_HandleGoalWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetAimTargetExtent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::GetAimTargetExtent(struct FVector* Center, float* Width, float* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetAimTargetExtent");
		
		AInhibitorTower_C_GetAimTargetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Center != nullptr)
			*Center = params.Center;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetNumWeakSpot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::GetNumWeakSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetNumWeakSpot");
		
		AInhibitorTower_C_GetNumWeakSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GetWeakSpotData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::GetWeakSpotData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GetWeakSpotData");
		
		AInhibitorTower_C_GetWeakSpotData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.UserConstructionScript");
		
		AInhibitorTower_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_1__FinishedFunc");
		
		AInhibitorTower_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_1__UpdateFunc");
		
		AInhibitorTower_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_2__FinishedFunc");
		
		AInhibitorTower_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_2__UpdateFunc");
		
		AInhibitorTower_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_3__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_3__FinishedFunc");
		
		AInhibitorTower_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_3__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_3__UpdateFunc");
		
		AInhibitorTower_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_4__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_4__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_4__FinishedFunc");
		
		AInhibitorTower_C_Timeline_4__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_4__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_4__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_4__UpdateFunc");
		
		AInhibitorTower_C_Timeline_4__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_5__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_5__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_5__FinishedFunc");
		
		AInhibitorTower_C_Timeline_5__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Timeline_5__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::Timeline_5__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Timeline_5__UpdateFunc");
		
		AInhibitorTower_C_Timeline_5__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Heart Damage Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::HeartDamageTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Heart Damage Timeline__FinishedFunc");
		
		AInhibitorTower_C_HeartDamageTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Heart Damage Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::HeartDamageTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Heart Damage Timeline__UpdateFunc");
		
		AInhibitorTower_C_HeartDamageTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Heart Shield Damage Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::HeartShieldDamageTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Heart Shield Damage Timeline__FinishedFunc");
		
		AInhibitorTower_C_HeartShieldDamageTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.Heart Shield Damage Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInhibitorTower_C::HeartShieldDamageTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.Heart Shield Damage Timeline__UpdateFunc");
		
		AInhibitorTower_C_HeartShieldDamageTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.OnDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInhibitorTower_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.OnDeath");
		
		AInhibitorTower_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.OnSelfRevive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInhibitorTower_C::OnSelfRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.OnSelfRevive");
		
		AInhibitorTower_C_OnSelfRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AInhibitorTower_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.ReceiveBeginPlay");
		
		AInhibitorTower_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.OnTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::OnTeamChanged(EOrionTeam NewTeamIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.OnTeamChanged");
		
		AInhibitorTower_C_OnTeamChanged_Params params {};
		params.NewTeamIdx = NewTeamIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.UnlockKeyhole
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::UnlockKeyhole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.UnlockKeyhole");
		
		AInhibitorTower_C_UnlockKeyhole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.LockKeyhole
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::LockKeyhole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.LockKeyhole");
		
		AInhibitorTower_C_LockKeyhole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.SetAlive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::SetAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.SetAlive");
		
		AInhibitorTower_C_SetAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.StopSpawningSuperMinions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::StopSpawningSuperMinions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.StopSpawningSuperMinions");
		
		AInhibitorTower_C_StopSpawningSuperMinions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.WarmUpRunes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::WarmUpRunes(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.WarmUpRunes");
		
		AInhibitorTower_C_WarmUpRunes_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.FadeOutRunes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::FadeOutRunes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.FadeOutRunes");
		
		AInhibitorTower_C_FadeOutRunes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.ReviveRunes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::ReviveRunes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.ReviveRunes");
		
		AInhibitorTower_C_ReviveRunes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GameplayCue.Inhibitor.Recharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void AInhibitorTower_C::GameplayCue_Inhibitor_Recharge(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GameplayCue.Inhibitor.Recharge");
		
		AInhibitorTower_C_GameplayCue_Inhibitor_Recharge_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.AboutToRevive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::AboutToRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.AboutToRevive");
		
		AInhibitorTower_C_AboutToRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GameplayCue.Objectives.Shared.Immunity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void AInhibitorTower_C::GameplayCue_Objectives_Shared_Immunity(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GameplayCue.Objectives.Shared.Immunity");
		
		AInhibitorTower_C_GameplayCue_Objectives_Shared_Immunity_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.OnDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::OnDamageTaken(float Damage, class AActor* DamageInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.OnDamageTaken");
		
		AInhibitorTower_C_OnDamageTaken_Params params {};
		params.Damage = Damage;
		params.DamageInstigator = DamageInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.GameplayCue.Inhibitor.TakeDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void AInhibitorTower_C::GameplayCue_Inhibitor_TakeDamage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.GameplayCue.Inhibitor.TakeDamage");
		
		AInhibitorTower_C_GameplayCue_Inhibitor_TakeDamage_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.ObjectiveStartUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInhibitorTower_C::ObjectiveStartUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.ObjectiveStartUp");
		
		AInhibitorTower_C_ObjectiveStartUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.ExecuteUbergraph_InhibitorTower
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInhibitorTower_C::ExecuteUbergraph_InhibitorTower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.ExecuteUbergraph_InhibitorTower");
		
		AInhibitorTower_C_ExecuteUbergraph_InhibitorTower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function InhibitorTower.InhibitorTower_C.InhibitorStatus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AInhibitorTower_C::InhibitorStatus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhibitorTower.InhibitorTower_C.InhibitorStatus__DelegateSignature");
		
		AInhibitorTower_C_InhibitorStatus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInhibitorTower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInhibitorTower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InhibitorTower.InhibitorTower_C");
		return ptr;
	}

}


