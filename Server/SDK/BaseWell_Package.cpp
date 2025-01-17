﻿/**
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
	 * 		Name   -> Function BaseWell.BaseWell_C.OnRep_RigAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseWell_C::OnRep_RigAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.OnRep_RigAttached");
		
		ABaseWell_C_OnRep_RigAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.DoColorChanges
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                InLinearColor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWell_C::DoColorChanges(const struct FLinearColor& InLinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.DoColorChanges");
		
		ABaseWell_C_DoColorChanges_Params params {};
		params.InLinearColor = InLinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GetTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWell_C::GetTargetingLocation(struct FVector* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GetTargetingLocation");
		
		ABaseWell_C_GetTargetingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GetAimTargetSensingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWell_C::GetAimTargetSensingLocation(struct FVector* AimPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GetAimTargetSensingLocation");
		
		ABaseWell_C_GetAimTargetSensingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimPosition != nullptr)
			*AimPosition = params.AimPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GetNumberPopLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABaseWell_C::GetNumberPopLocation(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GetNumberPopLocation");
		
		ABaseWell_C_GetNumberPopLocation_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GetRigAttachLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ABaseWell_C::GetRigAttachLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GetRigAttachLocation");
		
		ABaseWell_C_GetRigAttachLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GetRigAttachRotaion
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FRotator ABaseWell_C::GetRigAttachRotaion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GetRigAttachRotaion");
		
		ABaseWell_C_GetRigAttachRotaion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseWell_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.UserConstructionScript");
		
		ABaseWell_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigPlacedAnim__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseWell_C::RigPlacedAnim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigPlacedAnim__FinishedFunc");
		
		ABaseWell_C_RigPlacedAnim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigPlacedAnim__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseWell_C::RigPlacedAnim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigPlacedAnim__UpdateFunc");
		
		ABaseWell_C_RigPlacedAnim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigActiveAnim__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseWell_C::RigActiveAnim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigActiveAnim__FinishedFunc");
		
		ABaseWell_C_RigActiveAnim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigActiveAnim__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseWell_C::RigActiveAnim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigActiveAnim__UpdateFunc");
		
		ABaseWell_C_RigActiveAnim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigActiveAnim__Dust__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseWell_C::RigActiveAnim__Dust__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigActiveAnim__Dust__EventFunc");
		
		ABaseWell_C_RigActiveAnim__Dust__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABaseWell_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.ReceiveBeginPlay");
		
		ABaseWell_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.OnAttachRig
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionRigs*                                  NewAttachedRig                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWell_C::OnAttachRig(class AOrionRigs* NewAttachedRig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.OnAttachRig");
		
		ABaseWell_C_OnAttachRig_Params params {};
		params.NewAttachedRig = NewAttachedRig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.OnTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWell_C::OnTeamChanged(EOrionTeam NewTeamIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.OnTeamChanged");
		
		ABaseWell_C_OnTeamChanged_Params params {};
		params.NewTeamIdx = NewTeamIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigFinishedBuilding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseWell_C::RigFinishedBuilding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigFinishedBuilding");
		
		ABaseWell_C_RigFinishedBuilding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigPlaced
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseWell_C::RigPlaced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigPlaced");
		
		ABaseWell_C_RigPlaced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GameplayCue.Wells.Geyser
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ABaseWell_C::GameplayCue_Wells_Geyser(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GameplayCue.Wells.Geyser");
		
		ABaseWell_C_GameplayCue_Wells_Geyser_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.GameplayCue.Wells.DeadZone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference)
	 */
	void ABaseWell_C::GameplayCue_Wells_DeadZone(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.GameplayCue.Wells.DeadZone");
		
		ABaseWell_C_GameplayCue_Wells_DeadZone_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.RigRemoved
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseWell_C::RigRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.RigRemoved");
		
		ABaseWell_C_RigRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BaseWell.BaseWell_C.ExecuteUbergraph_BaseWell
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseWell_C::ExecuteUbergraph_BaseWell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseWell.BaseWell_C.ExecuteUbergraph_BaseWell");
		
		ABaseWell_C_ExecuteUbergraph_BaseWell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseWell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseWell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseWell.BaseWell_C");
		return ptr;
	}

}


