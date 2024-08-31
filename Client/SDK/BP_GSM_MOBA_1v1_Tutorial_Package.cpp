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
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.EndThePause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::EndThePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.EndThePause");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_EndThePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterHomeBase_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionBaseActor*                             Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterHomeBase_Red(class AOrionBaseActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterHomeBase_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterHomeBase_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TutorialPlayerApplyGameplayEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::TutorialPlayerApplyGameplayEffect(class UClass* GameplayEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TutorialPlayerApplyGameplayEffect");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_TutorialPlayerApplyGameplayEffect_Params params {};
		params.GameplayEffect = GameplayEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.GetTutorialPlayerController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionPlayerController_Tutorial*             AsOrionPlayerControllerTutorial                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::GetTutorialPlayerController(class AOrionPlayerController_Tutorial** AsOrionPlayerControllerTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.GetTutorialPlayerController");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_GetTutorialPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsOrionPlayerControllerTutorial != nullptr)
			*AsOrionPlayerControllerTutorial = params.AsOrionPlayerControllerTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Core_Red
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_Core_Red()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Core_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Core_Red_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterUltimateAbilitySeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterUltimateAbilitySeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterUltimateAbilitySeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterUltimateAbilitySeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotRetreatOtherActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterEnemyBotRetreatOtherActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotRetreatOtherActor");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterEnemyBotRetreatOtherActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Tower_Red
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_Tower_Red()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Tower_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Tower_Red_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Inhib_Red
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_Inhib_Red()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Inhib_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Inhib_Red_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotFightMinionsActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterEnemyBotFightMinionsActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotFightMinionsActor");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterEnemyBotFightMinionsActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotRetreatActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterEnemyBotRetreatActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotRetreatActor");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterEnemyBotRetreatActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterBotSpawner_InhibAggro
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerBotSpawner*                           BotSpawner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterBotSpawner_InhibAggro(class APlayerBotSpawner* BotSpawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterBotSpawner_InhibAggro");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterBotSpawner_InhibAggro_Params params {};
		params.BotSpawner = BotSpawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterWaitingForInputSeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterWaitingForInputSeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterWaitingForInputSeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterWaitingForInputSeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_AISpawner_Red
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_AISpawner_Red()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_AISpawner_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_AISpawner_Red_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreSeq_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterCoreSeq_Blue(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreSeq_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreSeq_Blue_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibSeq_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterInhibSeq_Blue(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibSeq_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibSeq_Blue_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreLookAt_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterCoreLookAt_Blue(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreLookAt_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreLookAt_Blue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibLookAt_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterInhibLookAt_Blue(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibLookAt_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibLookAt_Blue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Core_Blue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_Core_Blue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Core_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Core_Blue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Inhib_Blue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_Inhib_Blue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Inhib_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Inhib_Blue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Tower_Blue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_Tower_Blue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Tower_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Tower_Blue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerSeq_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterTowerSeq_Blue(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerSeq_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerSeq_Blue_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerLookAt_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterTowerLookAt_Blue(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerLookAt_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerLookAt_Blue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_AISpawner_Blue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnRep_AISpawner_Blue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_AISpawner_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_AISpawner_Blue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterUnpauseSeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterUnpauseSeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterUnpauseSeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterUnpauseSeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterPauseSeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterPauseSeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterPauseSeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterPauseSeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterFirstAbilitySeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterFirstAbilitySeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterFirstAbilitySeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterFirstAbilitySeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterFirstCombatSeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterFirstCombatSeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterFirstCombatSeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterFirstCombatSeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterMinionsLookAt_FirstCombat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterMinionsLookAt_FirstCombat(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterMinionsLookAt_FirstCombat");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterMinionsLookAt_FirstCombat_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterAISpawner_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_OrionCharAISpawner_C*                    Spawner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterAISpawner_Blue(class ABP_OrionCharAISpawner_C* Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterAISpawner_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterAISpawner_Blue_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterAISpawner_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_OrionCharAISpawner_C*                    Spawner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterAISpawner_Red(class ABP_OrionCharAISpawner_C* Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterAISpawner_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterAISpawner_Red_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterWelcomeSeq
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterWelcomeSeq(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterWelcomeSeq");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterWelcomeSeq_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.IsMatchOver
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GameOver                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::IsMatchOver(bool* GameOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.IsMatchOver");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_IsMatchOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameOver != nullptr)
			*GameOver = params.GameOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTower_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterTower_Blue(class AOrionDamageableObjective_Base* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTower_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTower_Blue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhib_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterInhib_Blue(class AOrionDamageableObjective_Base* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhib_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhib_Blue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCore_Blue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterCore_Blue(class AOrionDamageableObjective_Base* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCore_Blue");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCore_Blue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerLookAt_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterTowerLookAt_Red(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerLookAt_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerLookAt_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibLookAt_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterInhibLookAt_Red(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibLookAt_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibLookAt_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreLookAt_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterCoreLookAt_Red(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreLookAt_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreLookAt_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerSeq_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterTowerSeq_Red(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerSeq_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerSeq_Red_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibSeq_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterInhibSeq_Red(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibSeq_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibSeq_Red_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreSeq_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequencer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterCoreSeq_Red(class ALevelSequenceActor* Sequencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreSeq_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreSeq_Red_Params params {};
		params.Sequencer = Sequencer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTower_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterTower_Red(class AOrionDamageableObjective_Base* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTower_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTower_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhib_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterInhib_Red(class AOrionDamageableObjective_Base* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhib_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhib_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCore_Red
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionDamageableObjective_Base*              Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::RegisterCore_Red(class AOrionDamageableObjective_Base* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCore_Red");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCore_Red_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UserConstructionScript");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFail_77DDBB544355966C6D54AA90D7732D40
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnFail_77DDBB544355966C6D54AA90D7732D40(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFail_77DDBB544355966C6D54AA90D7732D40");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnFail_77DDBB544355966C6D54AA90D7732D40_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnSuccess_77DDBB544355966C6D54AA90D7732D40
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnSuccess_77DDBB544355966C6D54AA90D7732D40(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnSuccess_77DDBB544355966C6D54AA90D7732D40");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnSuccess_77DDBB544355966C6D54AA90D7732D40_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFail_6764E2824DB4C3766814718CE824E643
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnFail_6764E2824DB4C3766814718CE824E643(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFail_6764E2824DB4C3766814718CE824E643");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnFail_6764E2824DB4C3766814718CE824E643_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnSuccess_6764E2824DB4C3766814718CE824E643
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnSuccess_6764E2824DB4C3766814718CE824E643(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnSuccess_6764E2824DB4C3766814718CE824E643");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnSuccess_6764E2824DB4C3766814718CE824E643_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnGameReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnGameReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnGameReady");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnGameReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UpdateStat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::UpdateStat(const class FName& StatName, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UpdateStat");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_UpdateStat_Params params {};
		params.StatName = StatName;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartTheTutorial
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartTheTutorial(const class FName& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartTheTutorial");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartTheTutorial_Params params {};
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationFinishedSpawning_Blue_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionCharAISpawner*                         AISpawner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnFormationFinishedSpawning_Blue_Bind(class AOrionCharAISpawner* AISpawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationFinishedSpawning_Blue_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnFormationFinishedSpawning_Blue_Bind_Params params {};
		params.AISpawner = AISpawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartFirstAbilityTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartFirstAbilityTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartFirstAbilityTutorial");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartFirstAbilityTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_TowerAggro_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnActorBeginOverlap_TowerAggro_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_TowerAggro_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnActorBeginOverlap_TowerAggro_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_InhibAggro_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnActorBeginOverlap_InhibAggro_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_InhibAggro_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnActorBeginOverlap_InhibAggro_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_CoreAggro_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnActorBeginOverlap_CoreAggro_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_CoreAggro_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnActorBeginOverlap_CoreAggro_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Tower_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::DeathHandler_Tower_Bind(class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Tower_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_DeathHandler_Tower_Bind_Params params {};
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Inhib_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::DeathHandler_Inhib_Bind(class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Inhib_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_DeathHandler_Inhib_Bind_Params params {};
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Core_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::DeathHandler_Core_Bind(class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Core_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_DeathHandler_Core_Bind_Params params {};
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationFinishedSpawning_Red_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionCharAISpawner*                         AISpawner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnFormationFinishedSpawning_Red_Bind(class AOrionCharAISpawner* AISpawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationFinishedSpawning_Red_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnFormationFinishedSpawning_Red_Bind_Params params {};
		params.AISpawner = AISpawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationKilled_Blue_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionCharAISpawner*                         AISpawner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnFormationKilled_Blue_Bind(class AOrionCharAISpawner* AISpawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationKilled_Blue_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnFormationKilled_Blue_Bind_Params params {};
		params.AISpawner = AISpawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartEnemyBotInhibAggro
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartEnemyBotInhibAggro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartEnemyBotInhibAggro");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartEnemyBotInhibAggro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartLaneSpawners
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartLaneSpawners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartLaneSpawners");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartLaneSpawners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnBotFinishedSpawning_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionAIBot*                                 Bot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnBotFinishedSpawning_Bind(class AOrionAIBot* Bot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnBotFinishedSpawning_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnBotFinishedSpawning_Bind_Params params {};
		params.Bot = Bot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.EndTheTutorial
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::EndTheTutorial(const class FName& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.EndTheTutorial");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_EndTheTutorial_Params params {};
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_InhibFriendly_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnActorEndOverlap_InhibFriendly_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_InhibFriendly_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnActorEndOverlap_InhibFriendly_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_TowerFriendly_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnActorEndOverlap_TowerFriendly_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_TowerFriendly_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnActorEndOverlap_TowerFriendly_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartEnemyBotAfterInhibAggro
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartEnemyBotAfterInhibAggro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartEnemyBotAfterInhibAggro");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartEnemyBotAfterInhibAggro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartUltimateAbilityTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartUltimateAbilityTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartUltimateAbilityTutorial");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartUltimateAbilityTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_CoreFriendly_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnActorEndOverlap_CoreFriendly_Bind(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_CoreFriendly_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnActorEndOverlap_CoreFriendly_Bind_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnDeath_EnemyBot_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionChar*                                  DeadChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::OnDeath_EnemyBot_Bind(class AOrionChar* DeadChar, class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnDeath_EnemyBot_Bind");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_OnDeath_EnemyBot_Bind_Params params {};
		params.DeadChar = DeadChar;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartBotSpawner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::StartBotSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartBotSpawner");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_StartBotSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstSpawnFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::FirstSpawnFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstSpawnFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_FirstSpawnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstCombatFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::FirstCombatFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstCombatFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_FirstCombatFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TowerAggroHeroFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::TowerAggroHeroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TowerAggroHeroFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_TowerAggroHeroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TowerAggroMinionFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::TowerAggroMinionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TowerAggroMinionFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_TowerAggroMinionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstAbilityFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::FirstAbilityFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstAbilityFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_FirstAbilityFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroHeroFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::InhibAggroHeroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroHeroFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_InhibAggroHeroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroMinionFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::InhibAggroMinionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroMinionFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_InhibAggroMinionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroHeroEnemyDamageFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::InhibAggroHeroEnemyDamageFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroHeroEnemyDamageFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_InhibAggroHeroEnemyDamageFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UltimateAbilityFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::UltimateAbilityFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UltimateAbilityFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_UltimateAbilityFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.CoreAggroHeroFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::CoreAggroHeroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.CoreAggroHeroFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_CoreAggroHeroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.CoreAggroMinionFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::CoreAggroMinionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.CoreAggroMinionFinished");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_CoreAggroMinionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GSM_MOBA_1v1_Tutorial_C::ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial");
		
		ABP_GSM_MOBA_1v1_Tutorial_C_ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GSM_MOBA_1v1_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GSM_MOBA_1v1_Tutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C");
		return ptr;
	}

}


