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
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnRep_CampLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnRep_CampLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnRep_CampLevel");
		
		ABP_OrionCharAISpawner_Jungle_C_OnRep_CampLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.SetNextSpawnStartingLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::SetNextSpawnStartingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.SetNextSpawnStartingLevel");
		
		ABP_OrionCharAISpawner_Jungle_C_SetNextSpawnStartingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.RefreshJungleCampRespawnTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::RefreshJungleCampRespawnTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.RefreshJungleCampRespawnTimer");
		
		ABP_OrionCharAISpawner_Jungle_C_RefreshJungleCampRespawnTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.StopJungleCampRespawnTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::StopJungleCampRespawnTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.StopJungleCampRespawnTimer");
		
		ABP_OrionCharAISpawner_Jungle_C_StopJungleCampRespawnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.StartJungleCampRespawnTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InTimer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InitialSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::StartJungleCampRespawnTimer(float InTimer, bool InitialSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.StartJungleCampRespawnTimer");
		
		ABP_OrionCharAISpawner_Jungle_C_StartJungleCampRespawnTimer_Params params {};
		params.InTimer = InTimer;
		params.InitialSpawn = InitialSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.InitJungleCamp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::InitJungleCamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.InitJungleCamp");
		
		ABP_OrionCharAISpawner_Jungle_C_InitJungleCamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.UserConstructionScript");
		
		ABP_OrionCharAISpawner_Jungle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.ReceiveBeginPlay");
		
		ABP_OrionCharAISpawner_Jungle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.BroadcastJungleCampRespawnTimer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReplenishTimer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InitialSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::BroadcastJungleCampRespawnTimer(float InReplenishTimer, bool InitialSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.BroadcastJungleCampRespawnTimer");
		
		ABP_OrionCharAISpawner_Jungle_C_BroadcastJungleCampRespawnTimer_Params params {};
		params.InReplenishTimer = InReplenishTimer;
		params.InitialSpawn = InitialSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnHandleMatchStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnHandleMatchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnHandleMatchStart");
		
		ABP_OrionCharAISpawner_Jungle_C_OnHandleMatchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnReplenishWaveTimerStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReplenishDelayTimer                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnReplenishWaveTimerStart(float InReplenishDelayTimer, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnReplenishWaveTimerStart");
		
		ABP_OrionCharAISpawner_Jungle_C_OnReplenishWaveTimerStart_Params params {};
		params.InReplenishDelayTimer = InReplenishDelayTimer;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnStartSpawningAIFormation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnStartSpawningAIFormation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnStartSpawningAIFormation");
		
		ABP_OrionCharAISpawner_Jungle_C_OnStartSpawningAIFormation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnAIFormationSpawned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionAIFormation*                           NewFormation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnAIFormationSpawned(class UOrionAIFormation* NewFormation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnAIFormationSpawned");
		
		ABP_OrionCharAISpawner_Jungle_C_OnAIFormationSpawned_Params params {};
		params.NewFormation = NewFormation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnActorBeginOverlap_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnActorBeginOverlap_Event_1");
		
		ABP_OrionCharAISpawner_Jungle_C_OnActorBeginOverlap_Event_1_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnActorEndOverlap_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnActorEndOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnActorEndOverlap_Event_1");
		
		ABP_OrionCharAISpawner_Jungle_C_OnActorEndOverlap_Event_1_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.JungleCampRespawnTimerTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::JungleCampRespawnTimerTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.JungleCampRespawnTimerTick");
		
		ABP_OrionCharAISpawner_Jungle_C_JungleCampRespawnTimerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.CheckRespawnOrLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::CheckRespawnOrLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.CheckRespawnOrLevel");
		
		ABP_OrionCharAISpawner_Jungle_C_CheckRespawnOrLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.InitialSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::InitialSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.InitialSpawn");
		
		ABP_OrionCharAISpawner_Jungle_C_InitialSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnPostSpawnedAI
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionCharAI*                                SpawnedAI                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::OnPostSpawnedAI(class AOrionCharAI* SpawnedAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.OnPostSpawnedAI");
		
		ABP_OrionCharAISpawner_Jungle_C_OnPostSpawnedAI_Params params {};
		params.SpawnedAI = SpawnedAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.BroadcastStartTick
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::BroadcastStartTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.BroadcastStartTick");
		
		ABP_OrionCharAISpawner_Jungle_C_BroadcastStartTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.ExecuteUbergraph_BP_OrionCharAISpawner_Jungle
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionCharAISpawner_Jungle_C::ExecuteUbergraph_BP_OrionCharAISpawner_Jungle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C.ExecuteUbergraph_BP_OrionCharAISpawner_Jungle");
		
		ABP_OrionCharAISpawner_Jungle_C_ExecuteUbergraph_BP_OrionCharAISpawner_Jungle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrionCharAISpawner_Jungle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionCharAISpawner_Jungle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C");
		return ptr;
	}

}


