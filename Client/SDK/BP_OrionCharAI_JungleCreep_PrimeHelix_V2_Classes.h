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
	 * BlueprintGeneratedClass BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C
	 * Size -> 0x0080 (FullSize[0x0D90] - InheritedSize[0x0D10])
	 */
	class ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C : public ABP_OrionCharAI_JungleCreep_BaseBuff_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            P_PrimeHelix_Attack;                                     // 0x0D18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_PrimeHelix_LandingImpact;                              // 0x0D20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      SpawnFall_Timeline_FallTime_9C1EC25048D0275EFBD6A9B341E101F4; // 0x0D28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         SpawnFall_Timeline__Direction_9C1EC25048D0275EFBD6A9B341E101F4; // 0x0D2C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VQXY[0x3];                                   // 0x0D2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SpawnFall_Timeline;                                      // 0x0D30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_PrimeHelix_SpawnComet_C*                         PH_SpawnComet;                                           // 0x0D38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             EndLocation;                                             // 0x0D40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpawnHeightOffset;                                       // 0x0D4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpawnXOffset;                                            // 0x0D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SonicDelay;                                              // 0x0D54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpawnBPkillDelay;                                        // 0x0D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0OWE[0x4];                                   // 0x0D5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RowName;                                                 // 0x0D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TeamWideCardPoints;                                      // 0x0D68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3GWS[0x4];                                   // 0x0D6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         NewVar_1;                                                // 0x0D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 TeamToRecieveCXP;                                        // 0x0D78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1843[0x7];                                   // 0x0D79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayEffect*                                     GameplayEffectforDeathPP;                                // 0x0D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_Prime_Helix_PrimaryFire_BeamVol_C*               PrimaryBeamActor;                                        // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void SpawnFall_Timeline__FinishedFunc();
		void SpawnFall_Timeline__UpdateFunc();
		void SpawnFall_Timeline__SonicBoom__EventFunc();
		void ReceiveBeginPlay();
		void OnDeath_Event_1(class AOrionChar* DeadChar, class AController* Killer, class AActor* DamageCauser);
		void GameplayCue_PrimeHelix_PrimaryAttack(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
