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
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetNumberPopLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABP_OrionVisionWard_C::GetNumberPopLocation(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetNumberPopLocation");
		
		ABP_OrionVisionWard_C_GetNumberPopLocation_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetTargetingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionVisionWard_C::GetTargetingLocation(struct FVector* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetTargetingLocation");
		
		ABP_OrionVisionWard_C_GetTargetingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.DropCoins
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::DropCoins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.DropCoins");
		
		ABP_OrionVisionWard_C_DropCoins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetAimTargetSensingLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionVisionWard_C::GetAimTargetSensingLocation(struct FVector* AimPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetAimTargetSensingLocation");
		
		ABP_OrionVisionWard_C_GetAimTargetSensingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimPosition != nullptr)
			*AimPosition = params.AimPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.SetupColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionVisionWard_C::SetupColors(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.SetupColors");
		
		ABP_OrionVisionWard_C_SetupColors_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.UserConstructionScript");
		
		ABP_OrionVisionWard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.ReceiveBeginPlay");
		
		ABP_OrionVisionWard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionVisionWard_C::OnTeamChanged(EOrionTeam NewTeamIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnTeamChanged");
		
		ABP_OrionVisionWard_C_OnTeamChanged_Params params {};
		params.NewTeamIdx = NewTeamIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnDeath");
		
		ABP_OrionVisionWard_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.ApplyShadowPlaneMaterials
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::ApplyShadowPlaneMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.ApplyShadowPlaneMaterials");
		
		ABP_OrionVisionWard_C_ApplyShadowPlaneMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.RemoveShadowPlaneMaterials
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::RemoveShadowPlaneMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.RemoveShadowPlaneMaterials");
		
		ABP_OrionVisionWard_C_RemoveShadowPlaneMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionVisionWard_C::OnDamageTaken(float Damage, class AActor* DamageInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnDamageTaken");
		
		ABP_OrionVisionWard_C_OnDamageTaken_Params params {};
		params.Damage = Damage;
		params.DamageInstigator = DamageInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.EnterShadowPlane
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionVisionWard_C::EnterShadowPlane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.EnterShadowPlane");
		
		ABP_OrionVisionWard_C_EnterShadowPlane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionVisionWard.BP_OrionVisionWard_C.ExecuteUbergraph_BP_OrionVisionWard
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionVisionWard_C::ExecuteUbergraph_BP_OrionVisionWard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionVisionWard.BP_OrionVisionWard_C.ExecuteUbergraph_BP_OrionVisionWard");
		
		ABP_OrionVisionWard_C_ExecuteUbergraph_BP_OrionVisionWard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrionVisionWard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionVisionWard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionVisionWard.BP_OrionVisionWard_C");
		return ptr;
	}

}


