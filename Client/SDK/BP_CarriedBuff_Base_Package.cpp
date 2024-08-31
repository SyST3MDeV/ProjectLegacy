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
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.InitCarriedBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::InitCarriedBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.InitCarriedBuff");
		
		ABP_CarriedBuff_Base_C_InitCarriedBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.UserConstructionScript");
		
		ABP_CarriedBuff_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveBeginPlay");
		
		ABP_CarriedBuff_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarriedBuff_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveTick");
		
		ABP_CarriedBuff_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.RefreshDespawnTimer
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarriedBuff_Base_C::RefreshDespawnTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.RefreshDespawnTimer");
		
		ABP_CarriedBuff_Base_C_RefreshDespawnTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.StopDespawnTimer
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::StopDespawnTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.StopDespawnTimer");
		
		ABP_CarriedBuff_Base_C_StopDespawnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.StartDespawnTimer
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::StartDespawnTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.StartDespawnTimer");
		
		ABP_CarriedBuff_Base_C_StartDespawnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.PauseDespawnTimer
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::PauseDespawnTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.PauseDespawnTimer");
		
		ABP_CarriedBuff_Base_C_PauseDespawnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnObjectiveDropped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::OnObjectiveDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnObjectiveDropped");
		
		ABP_CarriedBuff_Base_C_OnObjectiveDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ChangeAlphaOnPickup
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewAlpha                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarriedBuff_Base_C::ChangeAlphaOnPickup(float NewAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ChangeAlphaOnPickup");
		
		ABP_CarriedBuff_Base_C_ChangeAlphaOnPickup_Params params {};
		params.NewAlpha = NewAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnDespawnCarriedObjective
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::OnDespawnCarriedObjective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnDespawnCarriedObjective");
		
		ABP_CarriedBuff_Base_C_OnDespawnCarriedObjective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickedUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionChar*                                  Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarriedBuff_Base_C::OnPickedUp(class AOrionChar* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickedUp");
		
		ABP_CarriedBuff_Base_C_OnPickedUp_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickupActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::OnPickupActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickupActivated");
		
		ABP_CarriedBuff_Base_C_OnPickupActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickupDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CarriedBuff_Base_C::OnPickupDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickupDeactivated");
		
		ABP_CarriedBuff_Base_C_OnPickupDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ExecuteUbergraph_BP_CarriedBuff_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarriedBuff_Base_C::ExecuteUbergraph_BP_CarriedBuff_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ExecuteUbergraph_BP_CarriedBuff_Base");
		
		ABP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CarriedBuff_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CarriedBuff_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CarriedBuff_Base.BP_CarriedBuff_Base_C");
		return ptr;
	}

}


