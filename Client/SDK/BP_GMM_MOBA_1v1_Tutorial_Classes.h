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
	 * BlueprintGeneratedClass BP_GMM_MOBA_1v1_Tutorial.BP_GMM_MOBA_1v1_Tutorial_C
	 * Size -> 0x0038 (FullSize[0x0998] - InheritedSize[0x0960])
	 */
	class ABP_GMM_MOBA_1v1_Tutorial_C : public AOrionGameMode_MOBA_Tutorial
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0960(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UClass*                                              GE_BlockShop;                                            // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_EarnNoXP;                                             // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Hero_DamageResist;                                    // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Outro;                                                // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_EnergyCostReduction;                                  // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		EOrionTeam GetWinningTeamNum();
		bool IsMatchObjectiveCompleted();
		bool IsMatchTimeBased();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnMatchStarted_Bind();
		void OnMatchEnded_Bind();
		void ApplyGEsOnSpawn();
		void ExecuteUbergraph_BP_GMM_MOBA_1v1_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
