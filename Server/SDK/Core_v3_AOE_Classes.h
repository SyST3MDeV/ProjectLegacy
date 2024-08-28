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
	 * BlueprintGeneratedClass Core_v3_AOE.Core_v3_AOE_C
	 * Size -> 0x0274 (FullSize[0x0BC8] - InheritedSize[0x0954])
	 */
	class ACore_v3_AOE_C : public ABP_OrionDamageableObjective_Base_C
	{
	public:
		unsigned char                                              UnknownData_KNEB[0x4];                                   // 0x0954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            P_Core_Destroyed_SecondaryBlast;                         // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Core_Destroyed_Linger;                                 // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Core_Destroyed_Aniticpation;                           // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_CoreOverload;                                         // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_CoreDestroyed_MainBlast;                               // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAudioComponent*                                     Core_SwirlingRings_Sound;                                // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionTeamColorComponent*                            OrionTeamColor_Glow;                                     // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                CoreGlow;                                                // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            PFX_CoreDebrisExplosion;                                 // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            PFX_Core_Expel_01;                                       // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_CorePowerRays;                                        // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              CoreIntro_Doors;                                         // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              CoreIntro_Base;                                          // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionTeamColorComponent*                            OrionTeamColor_Core;                                     // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              CoreIntro_Core;                                          // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionTeamColorComponent*                            OrionTeamColor_Rings;                                    // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              CoreIntro_Rings;                                         // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              CoreIntro_InMech;                                        // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionTeamColorComponent*                            OrionTeamColor_Lift;                                     // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              CoreIntro_Lift;                                          // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     Meshes;                                                  // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                RangeCylinder;                                           // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     Arrow;                                                   // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   CoreCollision;                                           // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAudioComponent*                                     Core_AttackAlarm_Cue;                                    // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      Timeline_2_Radius_4A6A82B940B785FFFDB9AD9E5CBB5995;      // 0x0A28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_2_PowerRaysEdge_4A6A82B940B785FFFDB9AD9E5CBB5995; // 0x0A2C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_2_PowerRaysProgression_4A6A82B940B785FFFDB9AD9E5CBB5995; // 0x0A30(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_2_OverloadStrength_4A6A82B940B785FFFDB9AD9E5CBB5995; // 0x0A34(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_2_OverloadBrightness_4A6A82B940B785FFFDB9AD9E5CBB5995; // 0x0A38(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_2__Direction_4A6A82B940B785FFFDB9AD9E5CBB5995;  // 0x0A3C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_10DD[0x3];                                   // 0x0A3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CoreDeathTimeline_Radius_6D60ED654BADED7731794188C8DADF05; // 0x0A48(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CoreDeathTimeline_PowerRaysEdge_6D60ED654BADED7731794188C8DADF05; // 0x0A4C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CoreDeathTimeline_PowerRaysProgression_6D60ED654BADED7731794188C8DADF05; // 0x0A50(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CoreDeathTimeline_OverloadStrength_6D60ED654BADED7731794188C8DADF05; // 0x0A54(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CoreDeathTimeline_OverloadBrightness_6D60ED654BADED7731794188C8DADF05; // 0x0A58(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         CoreDeathTimeline__Direction_6D60ED654BADED7731794188C8DADF05; // 0x0A5C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CO2V[0x3];                                   // 0x0A5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CoreDeathTimeline;                                       // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1_EmissiveRamp_A04C88FD495F8B35BC589BBA274F8CFE; // 0x0A68(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_1__Direction_A04C88FD495F8B35BC589BBA274F8CFE;  // 0x0A6C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HQUB[0x3];                                   // 0x0A6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_0_EmissiveRamp_4D7BF8DA47F30649AA4E52B1F764648F; // 0x0A78(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_4D7BF8DA47F30649AA4E52B1F764648F;  // 0x0A7C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSIA[0x3];                                   // 0x0A7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CoreVODelay;                                             // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AlarmMinTime;                                            // 0x0A8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           CoreAlarmCue;                                            // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           AnnouncerCoreUnder;                                      // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DamageVOTimerSet;                                        // 0x0AA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DamageAlarmTimerSet;                                     // 0x0AA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A9DN[0x6];                                   // 0x0AA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     AlarmSoundComp;                                          // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           CoreCriticalWarningSound;                                // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HealthLessThan50Percent;                                 // 0x0AB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HealthLessThan25Percent;                                 // 0x0AB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7X40[0x2];                                   // 0x0ABA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health50Percent;                                         // 0x0ABC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Health25Percent;                                         // 0x0AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GZ63[0x4];                                   // 0x0AC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           CoreCriticalSound;                                       // 0x0AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     P_Inhibitor_AOE;                                         // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                AOE_FX_Name;                                             // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Range_MID;                                               // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     CriticalAlarmComp;                                       // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CriticalAlarmTimerSet;                                   // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L49H[0x7];                                   // 0x0AF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           CoreDamageSound;                                         // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                DamageNumberPopsName;                                    // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageDialogDelay;                                       // 0x0B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8YA6[0x4];                                   // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AStaticMeshActor*>                            GroundMeshes;                                            // 0x0B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class UMaterialInstanceDynamic*>                    GroundMeshes_MIDs;                                       // 0x0B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       Dead;                                                    // 0x0B30(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_9H0B[0x7];                                   // 0x0B31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TeamColorName;                                           // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WarmUpRunesDelay;                                        // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2E4A[0x4];                                   // 0x0B44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            BaseRuneMID;                                             // 0x0B48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CoreExposed;                                             // 0x0B50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9I02[0x7];                                   // 0x0B51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Overload_Mat;                                            // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            PowerRay_Mat;                                            // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            RingWave_Mat;                                            // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Core_Mat;                                                // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          RunesWarmupSound;                                        // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CriticalVOPlayed;                                        // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HealthIsZero;                                            // 0x0B81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZX96[0x6];                                   // 0x0B82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CriticalAlarmTimerHandle;                                // 0x0B88(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        DamageAlarmTimerHandle;                                  // 0x0B90(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_Core_Alarm;                                           // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Core_Critical_Alarm;                                  // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Core_Under_Attack_VO;                                 // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Core_Critical_VO;                                     // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CriticalDialogDelay;                                     // 0x0BB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9ERL[0x4];                                   // 0x0BBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_Core_TakeDamage;                                      // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckHealthPercentage();
		void GetTargetingLocation(struct FVector* OutPosition);
		void OnRep_Dead();
		void HandleTeamColors();
		struct FVector GetNumberPopLocation(const struct FVector& HitLocation);
		void GetAimTargetSensingLocation(struct FVector* AimPosition);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void CoreDeathTimeline__FinishedFunc();
		void CoreDeathTimeline__UpdateFunc();
		void CoreDeathTimeline__ExplosionCue__EventFunc();
		void CoreDeathTimeline__EffectMeshVis__EventFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void Timeline_2__ExplosionCue__EventFunc();
		void Timeline_2__EffectMeshVis__EventFunc();
		void ReceiveBeginPlay();
		void OnDeath();
		void DoDeath();
		void GameplayCue_Core_Recharge(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void WarmUpRunes(float Delay);
		void FadeOutRunes();
		void BREAK_InhibitorStatusCheck();
		void InhibitorStatusCheck();
		void GameplayCue_Damage_Core(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void CoreFinale();
		void OnDamageTaken(float Damage, class AActor* DamageInstigator);
		void OnSelfRevive();
		void ObjectiveStartUp();
		void ExecuteUbergraph_Core_v3_AOE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
