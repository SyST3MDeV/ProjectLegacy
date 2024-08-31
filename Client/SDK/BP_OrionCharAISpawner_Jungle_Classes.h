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
	 * BlueprintGeneratedClass BP_OrionCharAISpawner_Jungle.BP_OrionCharAISpawner_Jungle_C
	 * Size -> 0x0115 (FullSize[0x0685] - InheritedSize[0x0570])
	 */
	class ABP_OrionCharAISpawner_Jungle_C : public AOrionCharAISpawner_Jungle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TextRender;                                              // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     Arrow;                                                   // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAudioComponent*                                     Audio_OnSpawn;                                           // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UBoxComponent*                                       Box;                                                     // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialBillboardComponent*                         MaterialBillboard;                                       // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       JungleCampSpawnTimer;                                    // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M0VO[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  JungleCampIconMaterial;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JungleCampTimerIconSize;                                 // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JungleCampIconRotation;                                  // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AccumulatedTime;                                         // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TetherRadius;                                            // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VisionRadius;                                            // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InitialSpawnTimer;                                       // 0x05D4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YHQL[0x3];                                   // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimerDuration;                                           // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PLNG[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                Temp_CarriedBuffColors;                                  // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       ShouldLevelUp;                                           // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_13BN[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVolume*                                             LinkedGameplayVolume;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      RespawnTimerTickInterval;                                // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8BBF[0x4];                                   // 0x0604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        RespawnTimerTick;                                        // 0x0608(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              HeroInsideGE;                                            // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FCurveTableRowHandle                                InitialSpawnTableStruct;                                 // 0x0618(0x0010) Edit, BlueprintVisible
		struct FCurveTableRowHandle                                RespawnTableStruct;                                      // 0x0628(0x0010) Edit, BlueprintVisible
		struct FCurveTableRowHandle                                MaxLevelTableStruct;                                     // 0x0638(0x0010) Edit, BlueprintVisible
		TArray<class AOrionCharAI*>                                SpawnedAI;                                               // 0x0648(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UClass*                                              StandardAIXP;                                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CampLevel;                                               // 0x0660(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_FO5S[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  M_JungleCamp_LevelNumber;                                // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            DMI_JungleCamp_LevelNumber;                              // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                NumberName;                                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxLevel;                                                // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InitialSpawnHappened;                                    // 0x0684(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_CampLevel();
		void SetNextSpawnStartingLevel();
		void RefreshJungleCampRespawnTimer(float DeltaTime);
		void StopJungleCampRespawnTimer();
		void StartJungleCampRespawnTimer(float InTimer, bool InitialSpawn);
		void InitJungleCamp();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BroadcastJungleCampRespawnTimer(float InReplenishTimer, bool InitialSpawn);
		void OnHandleMatchStart();
		void OnReplenishWaveTimerStart(float InReplenishDelayTimer, class AController* Killer, class AActor* DamageCauser);
		void OnStartSpawningAIFormation();
		void OnAIFormationSpawned(class UOrionAIFormation* NewFormation);
		void OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnActorEndOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor);
		void JungleCampRespawnTimerTick();
		void CheckRespawnOrLevel();
		void InitialSpawn();
		void OnPostSpawnedAI(class AOrionCharAI* SpawnedAI);
		void BroadcastStartTick();
		void ExecuteUbergraph_BP_OrionCharAISpawner_Jungle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
