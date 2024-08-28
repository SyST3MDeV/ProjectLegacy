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
	 * BlueprintGeneratedClass BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C
	 * Size -> 0x00B8 (FullSize[0x07A8] - InheritedSize[0x06F0])
	 */
	class ABP_GSM_BaseMOBA_C : public AOrionGameState_MOBA
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class AActor*                                              RedObjective;                                            // 0x0700(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              BlueObjective;                                           // 0x0708(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AOrionDamageableObjective_Base*>              Damagable_Objective;                                     // 0x0710(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      TowerLevelUpInterval;                                    // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOZG[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TestPlayMatinee;                                         // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      WellLevelUpInterval;                                     // 0x0738(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M7DT[0x4];                                   // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOrionWell_Base*>                             Wells;                                                   // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FGameplayEffectSpecHandle>                   NewVar_1;                                                // 0x0750(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UGameplayEffect*                                     NewVar_2;                                                // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             HeroHasRecalled_Dispatch;                                // 0x0768(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             TriggerVictoryEvent;                                     // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HasEndMatchCeni;                                         // 0x0788(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TryToUseEndMatchCeni;                                    // 0x0789(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KQDV[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_StandardAwardTowerXP;                                 // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_StandardAwardWellXP;                                  // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_MinionsSpawningVO;                                    // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ForceDestroyCore(EOrionTeam TeamNum);
		void RegisterWells(class AOrionWell_Base* NewParam);
		void RegisterTeamTowers(class AOrionDamageableObjective_Base* NewParam);
		void IsMatchOver(bool* GameOver);
		void GetWinningTeamNum(EOrionTeam* WinningTeam);
		void RegisterTeamObjective(class AOrionDamageableObjective_Base* InObjective);
		void UserConstructionScript();
		void GSM_LevelUpTowers();
		void GSM_LevelUpWells();
		void HeroHasRecalled(EOrionTeam HeroTeam);
		void PlayEndMatchSequence(EOrionTeam WinningTeamNum);
		void MinionsSpawning();
		void ExecuteUbergraph_BP_GSM_BaseMOBA(int32_t EntryPoint);
		void TriggerVictoryEvent__DelegateSignature(EOrionTeam WinningTeam);
		void HeroHasRecalled_Dispatch__DelegateSignature(EOrionTeam HeroTeam);
		void TestPlayMatinee__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
