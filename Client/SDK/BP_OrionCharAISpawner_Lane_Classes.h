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
	 * BlueprintGeneratedClass BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C
	 * Size -> 0x0088 (FullSize[0x0618] - InheritedSize[0x0590])
	 */
	class ABP_OrionCharAISpawner_Lane_C : public ABP_OrionCharAISpawner_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Hum;                                               // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionAIFormationData*                               InitialFormationData;                                    // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnSiegeWave;                                          // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E7XI[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionAIFormationData*                               SiegeWaveFormationData;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    SiegeWaveFrequency;                                      // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentSiegeWave;                                        // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SiegeWaveIncreaseFrequencyTime1;                         // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SiegeWaveIncreaseFrequencyTime2;                         // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOrionAIFormationData*                               SuperWaveFormationData;                                  // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Debug;                                                   // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnSuperWave;                                          // 0x05D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSJY[0x2];                                   // 0x05D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalWavesSpawned;                                       // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldLevelUp;                                           // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9ZPN[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinionLevelFrequency;                                    // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AOrionCharAI*>                                SpawnedAI;                                               // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AOrionCharAI*>                                SpawnedAIToKill;                                         // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    CurrentLevelWave;                                        // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SelfDestructDelay;                                       // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnBonusSuperMinion;                                   // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QAY4[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IncreaseSuperMinionTimer;                                // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOrionAIFormationData*                               ExtraSuperWaveFormationData;                             // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void IncreaseNumberSuperMinion();
		void SetNextWaveStartingLevel();
		void IncreaseSiegeWaveFrequency();
		void SelfDestructSpawnedAI();
		void DisableSuperWaves();
		void EnableSuperWaves();
		void WaveCounter();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void TriggerSelfDestruct();
		void OnHandleMatchStart();
		void OnPostSpawnedAI(class AOrionCharAI* SpawnedAI);
		void OnIntroSpawnForAI(class AOrionCharAI* SpawnedAI);
		void OnAIFormationSpawned(class UOrionAIFormation* NewFormation);
		void ExecuteUbergraph_BP_OrionCharAISpawner_Lane(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
