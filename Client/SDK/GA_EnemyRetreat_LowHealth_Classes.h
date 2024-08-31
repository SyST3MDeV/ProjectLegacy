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
	 * BlueprintGeneratedClass GA_EnemyRetreat_LowHealth.GA_EnemyRetreat_LowHealth_C
	 * Size -> 0x0024 (FullSize[0x0A74] - InheritedSize[0x0A50])
	 */
	class UGA_EnemyRetreat_LowHealth_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_Inhib_Aggro_Hero_Enemy_Damage;              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_EnemyRetreat_InhibAggro;                              // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UBehaviorTree*                                       BT_DefendTower;                                          // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxHealthPCT;                                            // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_35E27A9542FA294DD0CC1581C4BD3489();
		void OnStateEnded_35E27A9542FA294DD0CC1581C4BD3489();
		void OnFail_38E815854EEFEFE422F1D7AB1AA6FE79(EPathFollowingResult MovementResult);
		void OnSuccess_38E815854EEFEFE422F1D7AB1AA6FE79(EPathFollowingResult MovementResult);
		void OnChange_3DDD16F3407972D89A03E9B40D05A4E2(bool bMatchesComparison, float CurrentValue);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_EnemyRetreat_LowHealth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
