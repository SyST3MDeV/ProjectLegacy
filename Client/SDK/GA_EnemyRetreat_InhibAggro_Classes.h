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
	 * BlueprintGeneratedClass GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C
	 * Size -> 0x0020 (FullSize[0x0A70] - InheritedSize[0x0A50])
	 */
	class UGA_EnemyRetreat_InhibAggro_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_Inhib_Aggro_Hero_Enemy_Damage;              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Inhib_Aggro_Hero_Enemy_Damage;                        // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UBehaviorTree*                                       BT_DefendTower;                                          // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_F8B03C1C4977B4E0091561A45E0A9FD1();
		void OnStateEnded_F8B03C1C4977B4E0091561A45E0A9FD1();
		void OnChange_3BE6FE2D4C721C6DE8B3009F33090C20();
		void OnChange_A5AC29F948947A0D0A67588E793EBB54();
		void OnFail_5E7B391549BCF2C49DDFE3965ED9736F(EPathFollowingResult MovementResult);
		void OnSuccess_5E7B391549BCF2C49DDFE3965ED9736F(EPathFollowingResult MovementResult);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_EnemyRetreat_InhibAggro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
