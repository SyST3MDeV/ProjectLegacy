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
	 * BlueprintGeneratedClass InhibitorTower.InhibitorTower_C
	 * Size -> 0x03A4 (FullSize[0x0CF8] - InheritedSize[0x0954])
	 */
	class AInhibitorTower_C : public ABP_OrionDamageableObjective_Base_C
	{
	public:
		unsigned char                                              UnknownData_JR60[0x4];                                   // 0x0954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_TowerShield;                                          // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   ShaftCollision;                                          // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     SensingLocationArrow;                                    // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Inhibitor_Unlock_AOE;                                  // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                ForceField;                                              // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_InhibitorDestroyed_Explosion;                          // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_InhibitorDestroyed_Anticipation;                       // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            TargetingBeam;                                           // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneTargeting;                                          // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_SmokeInhibitor;                                        // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Inhibitor_Heart_Core_Idle;                             // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Tower_TakeDmg;                                         // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Heart;                                                // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   HeartCollision;                                          // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneHeart;                                              // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Flame_Details;                                        // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Turret_WispEdge;                                       // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_FireSphere;                                           // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Turret;                                               // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Inhibitor;                                            // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   ReviveCollision;                                         // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneInhibitor;                                          // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                RangeCylinder;                                           // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneHealthAndRange;                                     // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      Heart_Shield_Damage_Timeline_TurretShieldHit_13EE29264C8308EBB650E193D19AD80D; // 0x0A20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Heart_Shield_Damage_Timeline__Direction_13EE29264C8308EBB650E193D19AD80D; // 0x0A24(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RXDL[0x3];                                   // 0x0A25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeartShieldDamageTimeline;                               // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_Wave_402112E24C9796972FC185BA6D82E972; // 0x0A30(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_CoreGlowIntensity_402112E24C9796972FC185BA6D82E972; // 0x0A34(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_DispHigh_402112E24C9796972FC185BA6D82E972; // 0x0A38(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_Shrink_402112E24C9796972FC185BA6D82E972; // 0x0A3C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Heart_Damage_Timeline__Direction_402112E24C9796972FC185BA6D82E972; // 0x0A40(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_21K1[0x7];                                   // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeartDamageTimeline;                                     // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_5_DispLow_F254463E49D4EE7CD267D78E86D4DBDB;     // 0x0A50(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_5_Wave_F254463E49D4EE7CD267D78E86D4DBDB;        // 0x0A54(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_5_Core_Glow_Intensity_F254463E49D4EE7CD267D78E86D4DBDB; // 0x0A58(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_5_Power_Glow_F254463E49D4EE7CD267D78E86D4DBDB;  // 0x0A5C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_5__Direction_F254463E49D4EE7CD267D78E86D4DBDB;  // 0x0A60(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6KQ0[0x7];                                   // 0x0A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_6;                                              // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Timeline_4_FlameFade_3F397919448EC1FF34F980BF9031EF69;   // 0x0A70(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Timeline_4_Vertex_Offset_3F397919448EC1FF34F980BF9031EF69; // 0x0A80(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_4_Flame_Detail_Alpha_3F397919448EC1FF34F980BF9031EF69; // 0x0A8C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_4_Emission_3F397919448EC1FF34F980BF9031EF69;    // 0x0A90(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_4_Alpha_Fill_3F397919448EC1FF34F980BF9031EF69;  // 0x0A94(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_4__Direction_3F397919448EC1FF34F980BF9031EF69;  // 0x0A98(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WHR7[0x7];                                   // 0x0A99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_5;                                              // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Timeline_3_FlameFade_0AFAAB73436CBC1DCAAAB99DE563EA05;   // 0x0AA8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Timeline_3_Vertex_Offset_0AFAAB73436CBC1DCAAAB99DE563EA05; // 0x0AB8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_3_Flame_Detail_Alpha_0AFAAB73436CBC1DCAAAB99DE563EA05; // 0x0AC4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_3_Emission_0AFAAB73436CBC1DCAAAB99DE563EA05;    // 0x0AC8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_3_Alpha_Fill_0AFAAB73436CBC1DCAAAB99DE563EA05;  // 0x0ACC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_3__Direction_0AFAAB73436CBC1DCAAAB99DE563EA05;  // 0x0AD0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q13J[0x7];                                   // 0x0AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_4;                                              // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_2_EmissiveRamp_2EC5BEFC471C3CF10CAA28BAF5EAA093; // 0x0AE0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_2__Direction_2EC5BEFC471C3CF10CAA28BAF5EAA093;  // 0x0AE4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_47SV[0x3];                                   // 0x0AE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1_EmissiveRamp_B5DAE39E42D6EE65A8257FBBE5A60D54; // 0x0AF0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_1__Direction_B5DAE39E42D6EE65A8257FBBE5A60D54;  // 0x0AF4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KVDB[0x3];                                   // 0x0AF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_AI_Waypoint_C*                                   LinkedGoalWaypoint;                                      // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       bInitInhib;                                              // 0x0B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WNYQ[0x7];                                   // 0x0B09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Range_MID;                                               // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class ABP_OrionCharAISpawner_Lane_C*>               AISpawners;                                              // 0x0B18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class UMaterialInstanceDynamic*>                    Inhibitor_MIDs;                                          // 0x0B28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      BobValue;                                                // 0x0B38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BobTime;                                                 // 0x0B3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FirstKeyDownZ;                                           // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FirstKeyRotationYaw;                                     // 0x0B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SecondKeyDownZ;                                          // 0x0B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FirstKeyDownZTime;                                       // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FirstKeyRotationYawTime;                                 // 0x0B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SecondKeyDownZTime;                                      // 0x0B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             InhibitorActivePosition;                                 // 0x0B58(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LockKeyholeBufferTime;                                   // 0x0B64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Dead;                                                    // 0x0B68(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_64LF[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           TargetAcquiredSound;                                     // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     TargetLocked_AudioComp;                                  // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EInhibitorLocations                                        InhibLocation;                                           // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7DGP[0x3];                                   // 0x0B81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VODelay;                                                 // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InhibitorVOTimer;                                        // 0x0B88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_31K7[0x7];                                   // 0x0B89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          InhibPartialRaiseSound;                                  // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          InhibLowerSound;                                         // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SelfDestructSuperMinionsOnRevive;                        // 0x0BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KKGK[0x7];                                   // 0x0BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AStaticMeshActor*>                            GroundMeshes;                                            // 0x0BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class FName                                                DamageNumberPopsName;                                    // 0x0BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    GroundMeshes_MIDs;                                       // 0x0BC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                TeamColorName;                                           // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_IncrementReviveTime;                                  // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DeathCount;                                              // 0x0BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RestoreNormalMinionSpawningDelay;                        // 0x0BE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FActiveGameplayEffectHandle                         TrueSightHandle;                                         // 0x0BE8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              TrueSightGE;                                             // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    HeartMesh_MIDs;                                          // 0x0BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USoundBase*                                          DialogInhibitorDamage;                                   // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          InhibitorExplodeSound;                                   // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeDamageDialog;                                 // 0x0C18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeDeathDialog;                                  // 0x0C1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AStaticMeshActor*>                            BaseMeshes;                                              // 0x0C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class UMaterialInstanceDynamic*>                    BaseMeshesMIDs;                                          // 0x0C30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             InhibitorStatus;                                         // 0x0C40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMaterialInstanceDynamic*                            Turret_MID;                                              // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            FireSphere_MID;                                          // 0x0C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            FlameDetails_MID;                                        // 0x0C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ActivateParticles;                                       // 0x0C68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            ForceField_MID;                                          // 0x0C70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          RechargeSound;                                           // 0x0C78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  ForceField_M;                                            // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  FlameDetails_M;                                          // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  FireSphere_M;                                            // 0x0C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  Turret_M;                                                // 0x0C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          InhibitorDamageSound;                                    // 0x0CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InhibFirstSpawn;                                         // 0x0CA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SWEV[0x7];                                   // 0x0CA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          RunesWarmupSound;                                        // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AboutToReviveTime;                                       // 0x0CB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KMMJ[0x4];                                   // 0x0CBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    HeartShieldMesh_MIDs;                                    // 0x0CC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              GE_Inhibitor_TakeDamage;                                 // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TakeDamageVODelay;                                       // 0x0CD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWIW[0x4];                                   // 0x0CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_Inhibitor_TakeDamageVO;                               // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInhibDown;                                              // 0x0CE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FULI[0x7];                                   // 0x0CE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStaticMeshActor*                                    WarningRingMesh;                                         // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor

	public:
		void GetTargetingLocation(struct FVector* OutPosition);
		void HandleSuperMinionSelfDestruct();
		struct FVector GetNumberPopLocation(const struct FVector& HitLocation);
		void GetAimTargetSensingLocation(struct FVector* AimPosition);
		void OnRep_Dead();
		void HandleTeamColors();
		class UMeshComponent* GetBaseAttackingMesh();
		void HandleSuperMinionSpawns(bool Reset);
		void SetGoalWaypoint();
		void HandleGoalWaypoint();
		void GetAimTargetExtent(struct FVector* Center, float* Width, float* Height);
		void GetNumWeakSpot();
		void GetWeakSpotData();
		void UserConstructionScript();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void Timeline_3__FinishedFunc();
		void Timeline_3__UpdateFunc();
		void Timeline_4__FinishedFunc();
		void Timeline_4__UpdateFunc();
		void Timeline_5__FinishedFunc();
		void Timeline_5__UpdateFunc();
		void HeartDamageTimeline__FinishedFunc();
		void HeartDamageTimeline__UpdateFunc();
		void HeartShieldDamageTimeline__FinishedFunc();
		void HeartShieldDamageTimeline__UpdateFunc();
		void OnDeath();
		void OnSelfRevive();
		void ReceiveBeginPlay();
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void UnlockKeyhole();
		void LockKeyhole();
		void SetAlive();
		void StopSpawningSuperMinions();
		void WarmUpRunes(float Delay);
		void FadeOutRunes();
		void ReviveRunes();
		void GameplayCue_Inhibitor_Recharge(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void AboutToRevive();
		void GameplayCue_Objectives_Shared_Immunity(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnDamageTaken(float Damage, class AActor* DamageInstigator);
		void GameplayCue_Inhibitor_TakeDamage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ObjectiveStartUp();
		void ExecuteUbergraph_InhibitorTower(int32_t EntryPoint);
		void InhibitorStatus__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
