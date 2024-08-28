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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GSM_MOBA_1v1_Tutorial.BP_GSM_MOBA_1v1_Tutorial_C
	 * Size -> 0x0270 (FullSize[0x0960] - InheritedSize[0x06F0])
	 */
	class ABP_GSM_MOBA_1v1_Tutorial_C : public AOrionGameState_MOBA_Tutorial
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class AOrionDamageableObjective_Base*                      Core_Red;                                                // 0x0700(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class AOrionDamageableObjective_Base*                      Inhib_Red;                                               // 0x0708(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class AOrionDamageableObjective_Base*                      Tower_Red;                                               // 0x0710(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class ALevelSequenceActor*                                 Core_Seq_Red;                                            // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Inhib_Seq_Red;                                           // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Tower_Seq_Red;                                           // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Core_LookAt_Red;                                         // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Inhib_LookAt_Red;                                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Tower_LookAt_Red;                                        // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AOrionDamageableObjective_Base*                      Core_Blue;                                               // 0x0748(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class AOrionDamageableObjective_Base*                      Inhib_Blue;                                              // 0x0750(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class AOrionDamageableObjective_Base*                      Tower_Blue;                                              // 0x0758(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class UClass*                                              Tutorial_FirstSpawn;                                     // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Welcome_Seq;                                             // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_OrionCharAISpawner_C*                            AISpawner_Blue;                                          // 0x0770(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class ABP_OrionCharAISpawner_C*                            AISpawner_Red;                                           // 0x0778(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		class AActor*                                              Minions_LookAt_FirstCombat;                              // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 FirstCombat_Seq;                                         // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 FirstAbility_Seq;                                        // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      TutorialClasses;                                         // 0x0798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        TutorialStatNames;                                       // 0x07A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ALevelSequenceActor*                                 Pause_Seq;                                               // 0x07B8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Unpause_Seq;                                             // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_WeakenAI_Health;                                      // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_LookAt_FirstAbility;                                  // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Tower_LookAt_Blue;                                       // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Tower_Seq_Blue;                                          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Tower_Aggro_Hero;                                     // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Tower_Aggro_Minion;                                   // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Inhib_LookAt_Blue;                                       // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Core_LookAt_Blue;                                        // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Core_Seq_Blue;                                           // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 Inhib_Seq_Blue;                                          // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Inhib_Aggro_Hero;                                     // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Inhib_Aggro_Minion;                                   // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Core_Aggro_Hero;                                      // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Core_Aggro_Minion;                                    // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                tutorial_1v1_tower_destroy;                              // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                tutorial_1v1_inhib_destroy;                              // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                tutorial_1v1_core_destroy;                               // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                PlayerStatus;                                            // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                AbilityWidgets;                                          // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_WeakenObjective_DamageResist;                         // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 WaitingForInput_Seq;                                     // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APlayerBotSpawner*                                   BotSpawner_InhibAggro;                                   // 0x0870(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AOrionAIBot*                                         EnemyBot_InhibAggro;                                     // 0x0878(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              EnemyBotRetreatActor;                                    // 0x0880(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              EnemyBotFightMinionsActor;                               // 0x0888(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Tutorial_1v1_Learn_Inhib_Friendly;                       // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Tutorial_1v1_Learn_Tower_Friendly;                       // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_EnemyRetreat_LowHealth;                               // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UBehaviorTree*                                       BT_AttackEnemies;                                        // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              EnemyBotRetreatOtherActor;                               // 0x08B0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_LookAt_UltimateAbility;                               // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ALevelSequenceActor*                                 UltimateAbility_Seq;                                     // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Tutorial_1v1_Learn_Core_Friendly;                        // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               GE_HighlightObject;                                      // 0x08D0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_EnemyBot_DamageResist;                                // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AOrionPlayerController_Tutorial*                     TutorialPlayerControllerOnClient;                        // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                tutorial_1v1_kill_enemy_hero;                            // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_FirstSpawn_Move;                                      // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AOrionBaseActor*                                     HomeBase_Red;                                            // 0x0910(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_EnemyHero_Introduction;                               // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_EnemyHero_Killed;                                     // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                tutorial_1v1_started;                                    // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                tutorial_1v1_complete;                                   // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Tutorial_1v1_Tower_Aggro_Hero;                           // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TAssetPtr<class UEnvQuery>                                 EQS_WeightedEnemyHero;                                   // 0x0940(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_09VF[0x4];                                   // 0x095C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		void EndThePause();
		void RegisterHomeBase_Red(class AOrionBaseActor* Actor);
		void TutorialPlayerApplyGameplayEffect(class UClass* GameplayEffect);
		void GetTutorialPlayerController(class AOrionPlayerController_Tutorial** AsOrionPlayerControllerTutorial);
		void OnRep_Core_Red();
		void RegisterUltimateAbilitySeq(class ALevelSequenceActor* Sequencer);
		void RegisterEnemyBotRetreatOtherActor(class AActor* Actor);
		void OnRep_Tower_Red();
		void OnRep_Inhib_Red();
		void RegisterEnemyBotFightMinionsActor(class AActor* Actor);
		void RegisterEnemyBotRetreatActor(class AActor* Actor);
		void RegisterBotSpawner_InhibAggro(class APlayerBotSpawner* BotSpawner);
		void RegisterWaitingForInputSeq(class ALevelSequenceActor* Sequencer);
		void OnRep_AISpawner_Red();
		void RegisterCoreSeq_Blue(class ALevelSequenceActor* Sequencer);
		void RegisterInhibSeq_Blue(class ALevelSequenceActor* Sequencer);
		void RegisterCoreLookAt_Blue(class AActor* Actor);
		void RegisterInhibLookAt_Blue(class AActor* Actor);
		void OnRep_Core_Blue();
		void OnRep_Inhib_Blue();
		void OnRep_Tower_Blue();
		void RegisterTowerSeq_Blue(class ALevelSequenceActor* Sequencer);
		void RegisterTowerLookAt_Blue(class AActor* Actor);
		void OnRep_AISpawner_Blue();
		void RegisterUnpauseSeq(class ALevelSequenceActor* Sequencer);
		void RegisterPauseSeq(class ALevelSequenceActor* Sequencer);
		void RegisterFirstAbilitySeq(class ALevelSequenceActor* Sequencer);
		void RegisterFirstCombatSeq(class ALevelSequenceActor* Sequencer);
		void RegisterMinionsLookAt_FirstCombat(class AActor* Actor);
		void RegisterAISpawner_Blue(class ABP_OrionCharAISpawner_C* Spawner);
		void RegisterAISpawner_Red(class ABP_OrionCharAISpawner_C* Spawner);
		void RegisterWelcomeSeq(class ALevelSequenceActor* Sequencer);
		void IsMatchOver(bool* GameOver);
		void RegisterTower_Blue(class AOrionDamageableObjective_Base* Actor);
		void RegisterInhib_Blue(class AOrionDamageableObjective_Base* Actor);
		void RegisterCore_Blue(class AOrionDamageableObjective_Base* Actor);
		void RegisterTowerLookAt_Red(class AActor* Actor);
		void RegisterInhibLookAt_Red(class AActor* Actor);
		void RegisterCoreLookAt_Red(class AActor* Actor);
		void RegisterTowerSeq_Red(class ALevelSequenceActor* Sequencer);
		void RegisterInhibSeq_Red(class ALevelSequenceActor* Sequencer);
		void RegisterCoreSeq_Red(class ALevelSequenceActor* Sequencer);
		void RegisterTower_Red(class AOrionDamageableObjective_Base* Actor);
		void RegisterInhib_Red(class AOrionDamageableObjective_Base* Actor);
		void RegisterCore_Red(class AOrionDamageableObjective_Base* Actor);
		void UserConstructionScript();
		void OnFail_77DDBB544355966C6D54AA90D7732D40(EPathFollowingResult MovementResult);
		void OnSuccess_77DDBB544355966C6D54AA90D7732D40(EPathFollowingResult MovementResult);
		void OnFail_6764E2824DB4C3766814718CE824E643(EPathFollowingResult MovementResult);
		void OnSuccess_6764E2824DB4C3766814718CE824E643(EPathFollowingResult MovementResult);
		void OnGameReady();
		void UpdateStat(const class FName& StatName, float Delay);
		void StartTheTutorial(const class FName& StatName);
		void OnFormationFinishedSpawning_Blue_Bind(class AOrionCharAISpawner* AISpawner);
		void StartFirstAbilityTutorial();
		void OnActorBeginOverlap_TowerAggro_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnActorBeginOverlap_InhibAggro_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnActorBeginOverlap_CoreAggro_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void DeathHandler_Tower_Bind(class AController* Killer, class AActor* DamageCauser);
		void DeathHandler_Inhib_Bind(class AController* Killer, class AActor* DamageCauser);
		void DeathHandler_Core_Bind(class AController* Killer, class AActor* DamageCauser);
		void OnFormationFinishedSpawning_Red_Bind(class AOrionCharAISpawner* AISpawner);
		void OnFormationKilled_Blue_Bind(class AOrionCharAISpawner* AISpawner);
		void StartEnemyBotInhibAggro();
		void StartLaneSpawners();
		void OnBotFinishedSpawning_Bind(class AOrionAIBot* Bot);
		void EndTheTutorial(const class FName& StatName);
		void OnActorEndOverlap_InhibFriendly_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnActorEndOverlap_TowerFriendly_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void StartEnemyBotAfterInhibAggro();
		void StartUltimateAbilityTutorial();
		void OnActorEndOverlap_CoreFriendly_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnDeath_EnemyBot_Bind(class AOrionChar* DeadChar, class AController* Killer, class AActor* DamageCauser);
		void StartBotSpawner();
		void FirstSpawnFinished();
		void FirstCombatFinished();
		void TowerAggroHeroFinished();
		void TowerAggroMinionFinished();
		void FirstAbilityFinished();
		void InhibAggroHeroFinished();
		void InhibAggroMinionFinished();
		void InhibAggroHeroEnemyDamageFinished();
		void UltimateAbilityFinished();
		void CoreAggroHeroFinished();
		void CoreAggroMinionFinished();
		void ExecuteUbergraph_BP_GSM_MOBA_1v1_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
