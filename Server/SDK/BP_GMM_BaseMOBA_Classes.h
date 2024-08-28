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
	 * BlueprintGeneratedClass BP_GMM_BaseMOBA.BP_GMM_BaseMOBA_C
	 * Size -> 0x008C (FullSize[0x09DC] - InheritedSize[0x0950])
	 */
	class ABP_GMM_BaseMOBA_C : public AOrionGameMode_MOBA
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0950(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0958(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       FirstKillHasHappened;                                    // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KNJO[0x3];                                   // 0x0961(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinionsSpawnDelay;                                       // 0x0964(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllDead;                                                 // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F1RP[0x3];                                   // 0x0969(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TowerFirstLevelUp;                                       // 0x096C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             PrimeHelixPickedUp;                                      // 0x0970(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PrimeHelixDropped;                                       // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      WellFirstLevelUp;                                        // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7J5Q[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             PrimeHelixDestroyed;                                     // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PlayerKilled;                                            // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      _30secDelay;                                             // 0x09B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinMultiKillCount;                                       // 0x09BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxMultiKillCount;                                       // 0x09C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeEnemyKilledVO;                                // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    KillStreakShutdownValue;                                 // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E7V9[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnerDelayLaneRowName;                                 // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    KillStreakStarts;                                        // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		EOrionTeam GetWinningTeamNum();
		bool IsMatchObjectiveCompleted();
		bool IsMatchTimeBased();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceivePlayerKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, int32_t MultiKillCount, int32_t KillStreakCount);
		void OnMatchStarted_Bind();
		void CheckFirstBlood(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn);
		void CheckAce(class AController* Killer, class AController* KilledPlayer);
		void ForceMatchWinCondition(EOrionTeam TeamNum);
		void CheckMultiOrStreak(class AController* Killer, int32_t MultiKillCount, int32_t KillStreakCount);
		void OnMatchEnded_Bind();
		void ReceivePlayerKillStreakShutdown(class AController* Victim, class AController* Killer, int32_t KillStreakCount);
		void ExecuteUbergraph_BP_GMM_BaseMOBA(int32_t EntryPoint);
		void PlayerKilled__DelegateSignature();
		void PrimeHelixDestroyed__DelegateSignature();
		void PrimeHelixDropped__DelegateSignature(class AOrionChar* Dropper);
		void PrimeHelixPickedUp__DelegateSignature(class AOrionChar* Carrier);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
