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
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GetTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::GetTargetingLocation(struct FVector* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GetTargetingLocation");
		
		ATower_v3_Floating_C_GetTargetingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.IsTargetable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATower_v3_Floating_C::IsTargetable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.IsTargetable");
		
		ATower_v3_Floating_C_IsTargetable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.OnRep_Dead
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::OnRep_Dead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.OnRep_Dead");
		
		ATower_v3_Floating_C_OnRep_Dead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.HandleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HandleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.HandleTeamColors");
		
		ATower_v3_Floating_C_HandleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GetNumberPopLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATower_v3_Floating_C::GetNumberPopLocation(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GetNumberPopLocation");
		
		ATower_v3_Floating_C_GetNumberPopLocation_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.DecalsOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::DecalsOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.DecalsOn");
		
		ATower_v3_Floating_C_DecalsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.SetComponentLocationAndRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AStaticMeshActor*                            AttachToStaticMesh                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASkeletalMeshActor*                          AttachToSkeletalMesh                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        PositionSocketName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ExtraRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::SetComponentLocationAndRotation(class AStaticMeshActor* AttachToStaticMesh, class ASkeletalMeshActor* AttachToSkeletalMesh, class USceneComponent* SceneComponent, const class FName& PositionSocketName, const struct FRotator& ExtraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.SetComponentLocationAndRotation");
		
		ATower_v3_Floating_C_SetComponentLocationAndRotation_Params params {};
		params.AttachToStaticMesh = AttachToStaticMesh;
		params.AttachToSkeletalMesh = AttachToSkeletalMesh;
		params.SceneComponent = SceneComponent;
		params.PositionSocketName = PositionSocketName;
		params.ExtraRotation = ExtraRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GetAimTargetSensingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::GetAimTargetSensingLocation(struct FVector* AimPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GetAimTargetSensingLocation");
		
		ATower_v3_Floating_C_GetAimTargetSensingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimPosition != nullptr)
			*AimPosition = params.AimPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GetBaseAttackingMesh
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UMeshComponent* ATower_v3_Floating_C::GetBaseAttackingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GetBaseAttackingMesh");
		
		ATower_v3_Floating_C_GetBaseAttackingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.SetGoalWaypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::SetGoalWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.SetGoalWaypoint");
		
		ATower_v3_Floating_C_SetGoalWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.HandleGoalWaypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HandleGoalWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.HandleGoalWaypoint");
		
		ATower_v3_Floating_C_HandleGoalWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.UserConstructionScript");
		
		ATower_v3_Floating_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Turret Rise Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::TurretRiseTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Turret Rise Timeline__FinishedFunc");
		
		ATower_v3_Floating_C_TurretRiseTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Turret Rise Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::TurretRiseTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Turret Rise Timeline__UpdateFunc");
		
		ATower_v3_Floating_C_TurretRiseTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Fade Out Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::RuneFadeOutTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Fade Out Timeline__FinishedFunc");
		
		ATower_v3_Floating_C_RuneFadeOutTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Fade Out Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::RuneFadeOutTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Fade Out Timeline__UpdateFunc");
		
		ATower_v3_Floating_C_RuneFadeOutTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Warm Up Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::RuneWarmUpTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Warm Up Timeline__FinishedFunc");
		
		ATower_v3_Floating_C_RuneWarmUpTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Warm Up Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::RuneWarmUpTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Rune Warm Up Timeline__UpdateFunc");
		
		ATower_v3_Floating_C_RuneWarmUpTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Death Anticipation Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HeartDeathAnticipationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Death Anticipation Timeline__FinishedFunc");
		
		ATower_v3_Floating_C_HeartDeathAnticipationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Death Anticipation Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HeartDeathAnticipationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Death Anticipation Timeline__UpdateFunc");
		
		ATower_v3_Floating_C_HeartDeathAnticipationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Damage Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HeartDamageTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Damage Timeline__FinishedFunc");
		
		ATower_v3_Floating_C_HeartDamageTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Damage Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HeartDamageTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Damage Timeline__UpdateFunc");
		
		ATower_v3_Floating_C_HeartDamageTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Shield Damage Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HeartShieldDamageTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Shield Damage Timeline__FinishedFunc");
		
		ATower_v3_Floating_C_HeartShieldDamageTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Shield Damage Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATower_v3_Floating_C::HeartShieldDamageTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.Heart Shield Damage Timeline__UpdateFunc");
		
		ATower_v3_Floating_C_HeartShieldDamageTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.OnDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.OnDeath");
		
		ATower_v3_Floating_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.OnTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::OnTeamChanged(EOrionTeam NewTeamIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.OnTeamChanged");
		
		ATower_v3_Floating_C_OnTeamChanged_Params params {};
		params.NewTeamIdx = NewTeamIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.ReceiveBeginPlay");
		
		ATower_v3_Floating_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.OnActorBeginOverlap_TargetingVolume_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::OnActorBeginOverlap_TargetingVolume_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.OnActorBeginOverlap_TargetingVolume_Bind");
		
		ATower_v3_Floating_C_OnActorBeginOverlap_TargetingVolume_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.WarmUpRunes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::WarmUpRunes(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.WarmUpRunes");
		
		ATower_v3_Floating_C_WarmUpRunes_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ATower_v3_Floating_C::GameplayCue_Tower_Death(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.Death");
		
		ATower_v3_Floating_C_GameplayCue_Tower_Death_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.DeathAfterMath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ATower_v3_Floating_C::GameplayCue_Tower_DeathAfterMath(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.DeathAfterMath");
		
		ATower_v3_Floating_C_GameplayCue_Tower_DeathAfterMath_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.OnSelfRevive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATower_v3_Floating_C::OnSelfRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.OnSelfRevive");
		
		ATower_v3_Floating_C_OnSelfRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.DeathHandler_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::DeathHandler_Bind(class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.DeathHandler_Bind");
		
		ATower_v3_Floating_C_DeathHandler_Bind_Params params {};
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Objectives.Shared.Immunity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ATower_v3_Floating_C::GameplayCue_Objectives_Shared_Immunity(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Objectives.Shared.Immunity");
		
		ATower_v3_Floating_C_GameplayCue_Objectives_Shared_Immunity_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.OnDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::OnDamageTaken(float Damage, class AActor* DamageInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.OnDamageTaken");
		
		ATower_v3_Floating_C_OnDamageTaken_Params params {};
		params.Damage = Damage;
		params.DamageInstigator = DamageInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.TakeDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ATower_v3_Floating_C::GameplayCue_Tower_TakeDamage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.GameplayCue.Tower.TakeDamage");
		
		ATower_v3_Floating_C_GameplayCue_Tower_TakeDamage_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Tower_v3_Floating.Tower_v3_Floating_C.ExecuteUbergraph_Tower_v3_Floating
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATower_v3_Floating_C::ExecuteUbergraph_Tower_v3_Floating(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tower_v3_Floating.Tower_v3_Floating_C.ExecuteUbergraph_Tower_v3_Floating");
		
		ATower_v3_Floating_C_ExecuteUbergraph_Tower_v3_Floating_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATower_v3_Floating_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATower_v3_Floating_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tower_v3_Floating.Tower_v3_Floating_C");
		return ptr;
	}

}


