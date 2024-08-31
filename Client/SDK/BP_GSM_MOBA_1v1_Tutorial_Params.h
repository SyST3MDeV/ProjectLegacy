#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.EndThePause
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_EndThePause_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterHomeBase_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterHomeBase_Red_Params
	{
	public:
		class AOrionBaseActor*                                     Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TutorialPlayerApplyGameplayEffect
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_TutorialPlayerApplyGameplayEffect_Params
	{
	public:
		class UClass*                                              GameplayEffect;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.GetTutorialPlayerController
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_GetTutorialPlayerController_Params
	{
	public:
		class AOrionPlayerController_Tutorial*                     AsOrionPlayerControllerTutorial;                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Core_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Core_Red_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterUltimateAbilitySeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterUltimateAbilitySeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotRetreatOtherActor
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterEnemyBotRetreatOtherActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Tower_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Tower_Red_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Inhib_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Inhib_Red_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotFightMinionsActor
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterEnemyBotFightMinionsActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterEnemyBotRetreatActor
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterEnemyBotRetreatActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterBotSpawner_InhibAggro
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterBotSpawner_InhibAggro_Params
	{
	public:
		class APlayerBotSpawner*                                   BotSpawner;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterWaitingForInputSeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterWaitingForInputSeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_AISpawner_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_AISpawner_Red_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreSeq_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreSeq_Blue_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibSeq_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibSeq_Blue_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreLookAt_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreLookAt_Blue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibLookAt_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibLookAt_Blue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Core_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Core_Blue_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Inhib_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Inhib_Blue_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_Tower_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_Tower_Blue_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerSeq_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerSeq_Blue_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerLookAt_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerLookAt_Blue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnRep_AISpawner_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnRep_AISpawner_Blue_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterUnpauseSeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterUnpauseSeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterPauseSeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterPauseSeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterFirstAbilitySeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterFirstAbilitySeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterFirstCombatSeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterFirstCombatSeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterMinionsLookAt_FirstCombat
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterMinionsLookAt_FirstCombat_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterAISpawner_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterAISpawner_Blue_Params
	{
	public:
		class ABP_OrionCharAISpawner_C*                            Spawner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterAISpawner_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterAISpawner_Red_Params
	{
	public:
		class ABP_OrionCharAISpawner_C*                            Spawner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterWelcomeSeq
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterWelcomeSeq_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.IsMatchOver
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_IsMatchOver_Params
	{
	public:
		bool                                                       GameOver;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTower_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTower_Blue_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhib_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhib_Blue_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCore_Blue
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCore_Blue_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerLookAt_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerLookAt_Red_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibLookAt_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibLookAt_Red_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreLookAt_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreLookAt_Red_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTowerSeq_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTowerSeq_Red_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhibSeq_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhibSeq_Red_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCoreSeq_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCoreSeq_Red_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequencer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterTower_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterTower_Red_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterInhib_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterInhib_Red_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.RegisterCore_Red
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_RegisterCore_Red_Params
	{
	public:
		class AOrionDamageableObjective_Base*                      Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UserConstructionScript
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFail_77DDBB544355966C6D54AA90D7732D40
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnFail_77DDBB544355966C6D54AA90D7732D40_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnSuccess_77DDBB544355966C6D54AA90D7732D40
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnSuccess_77DDBB544355966C6D54AA90D7732D40_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFail_6764E2824DB4C3766814718CE824E643
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnFail_6764E2824DB4C3766814718CE824E643_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnSuccess_6764E2824DB4C3766814718CE824E643
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnSuccess_6764E2824DB4C3766814718CE824E643_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnGameReady
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnGameReady_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UpdateStat
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_UpdateStat_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delay;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartTheTutorial
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartTheTutorial_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationFinishedSpawning_Blue_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnFormationFinishedSpawning_Blue_Bind_Params
	{
	public:
		class AOrionCharAISpawner*                                 AISpawner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartFirstAbilityTutorial
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartFirstAbilityTutorial_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_TowerAggro_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnActorBeginOverlap_TowerAggro_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_InhibAggro_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnActorBeginOverlap_InhibAggro_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorBeginOverlap_CoreAggro_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnActorBeginOverlap_CoreAggro_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Tower_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_DeathHandler_Tower_Bind_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Inhib_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_DeathHandler_Inhib_Bind_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.DeathHandler_Core_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_DeathHandler_Core_Bind_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationFinishedSpawning_Red_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnFormationFinishedSpawning_Red_Bind_Params
	{
	public:
		class AOrionCharAISpawner*                                 AISpawner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnFormationKilled_Blue_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnFormationKilled_Blue_Bind_Params
	{
	public:
		class AOrionCharAISpawner*                                 AISpawner;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartEnemyBotInhibAggro
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartEnemyBotInhibAggro_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartLaneSpawners
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartLaneSpawners_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnBotFinishedSpawning_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnBotFinishedSpawning_Bind_Params
	{
	public:
		class AOrionAIBot*                                         Bot;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.EndTheTutorial
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_EndTheTutorial_Params
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_InhibFriendly_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnActorEndOverlap_InhibFriendly_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_TowerFriendly_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnActorEndOverlap_TowerFriendly_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartEnemyBotAfterInhibAggro
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartEnemyBotAfterInhibAggro_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartUltimateAbilityTutorial
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartUltimateAbilityTutorial_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnActorEndOverlap_CoreFriendly_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnActorEndOverlap_CoreFriendly_Bind_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.OnDeath_EnemyBot_Bind
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_OnDeath_EnemyBot_Bind_Params
	{
	public:
		class AOrionChar*                                          DeadChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         Killer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.StartBotSpawner
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_StartBotSpawner_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstSpawnFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_FirstSpawnFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstCombatFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_FirstCombatFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TowerAggroHeroFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_TowerAggroHeroFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.TowerAggroMinionFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_TowerAggroMinionFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.FirstAbilityFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_FirstAbilityFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroHeroFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_InhibAggroHeroFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroMinionFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_InhibAggroMinionFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.InhibAggroHeroEnemyDamageFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_InhibAggroHeroEnemyDamageFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.UltimateAbilityFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_UltimateAbilityFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.CoreAggroHeroFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_CoreAggroHeroFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.CoreAggroMinionFinished
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_CoreAggroMinionFinished_Params
	{	};

	/**
	 * Function BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C.ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial
	 */
	struct ABP_GSM_MOBA_1v1_Tutorial_C_ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
