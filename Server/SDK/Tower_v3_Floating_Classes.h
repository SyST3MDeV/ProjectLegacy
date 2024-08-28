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
	 * BlueprintGeneratedClass Tower_v3_Floating.Tower_v3_Floating_C
	 * Size -> 0x0314 (FullSize[0x0C68] - InheritedSize[0x0954])
	 */
	class ATower_v3_Floating_C : public ABP_OrionDamageableObjective_Base_C
	{
	public:
		unsigned char                                              UnknownData_ZIDQ[0x4];                                   // 0x0954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_TowerShield;                                          // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Tower_Destroyed_Turret_Exp_Elements;                   // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_TowerDestroyed_Turret_Explosion;                       // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_TowerDestroyed_Turret_Anticipation;                    // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_TowerDestroyed_Explosion;                              // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_TowerDestroyed_Anticipation;                           // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Turret_Idle;                                           // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Turret_WispEdge;                                       // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_FireSphere;                                           // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Flame_Details;                                        // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Turret;                                               // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialBillboardComponent*                         TargetingMaterial;                                       // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Debris;                                               // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                PointLight;                                              // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Damage;                                                  // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Embers;                                                  // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     Decals;                                                  // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     SensingLocationArrow;                                    // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_RangeCylinder;                                        // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneHealthAndRange;                                     // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Tower_Heart_Core_Idle;                                 // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Heart;                                                // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   CapsuleCollision;                                        // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneHeart;                                              // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      Heart_Shield_Damage_Timeline_TurretShieldHit_8D1B29D54CDECF4DB669E18B17F80CF5; // 0x0A20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Heart_Shield_Damage_Timeline__Direction_8D1B29D54CDECF4DB669E18B17F80CF5; // 0x0A24(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I478[0x3];                                   // 0x0A25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeartShieldDamageTimeline;                               // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Rune_Fade_Out_Timeline_EmissiveRamp_C13E89C84B902A41B1F19DAB977B8604; // 0x0A30(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Rune_Fade_Out_Timeline__Direction_C13E89C84B902A41B1F19DAB977B8604; // 0x0A34(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7Z4B[0x3];                                   // 0x0A35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RuneFadeOutTimeline;                                     // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Rune_Warm_Up_Timeline_EmissiveRamp_DEF5A0EC4826BF14CC07619D3008BC78; // 0x0A40(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Rune_Warm_Up_Timeline__Direction_DEF5A0EC4826BF14CC07619D3008BC78; // 0x0A44(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_521Q[0x3];                                   // 0x0A45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RuneWarmUpTimeline;                                      // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_Wave_CB7C810249B5D7D83638828D3E35B75E; // 0x0A50(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_CoreGlowIntensity_CB7C810249B5D7D83638828D3E35B75E; // 0x0A54(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_DispHigh_CB7C810249B5D7D83638828D3E35B75E; // 0x0A58(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Damage_Timeline_Shrink_CB7C810249B5D7D83638828D3E35B75E; // 0x0A5C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Heart_Damage_Timeline__Direction_CB7C810249B5D7D83638828D3E35B75E; // 0x0A60(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HQRA[0x7];                                   // 0x0A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeartDamageTimeline;                                     // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Death_Anticipation_Timeline_DispLow_996C3519472EB375BD6380BDB28647D1; // 0x0A70(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Death_Anticipation_Timeline_Wave_996C3519472EB375BD6380BDB28647D1; // 0x0A74(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Death_Anticipation_Timeline_Core_Glow_Intensity_996C3519472EB375BD6380BDB28647D1; // 0x0A78(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Heart_Death_Anticipation_Timeline_Power_Glow_996C3519472EB375BD6380BDB28647D1; // 0x0A7C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Heart_Death_Anticipation_Timeline__Direction_996C3519472EB375BD6380BDB28647D1; // 0x0A80(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1MP9[0x7];                                   // 0x0A81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeartDeathAnticipationTimeline;                          // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Turret_Rise_Timeline_Vertex_Offset_F831FF72423622B3F1E4349CB1461852; // 0x0A90(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Turret_Rise_Timeline_Flame_Detail_Alpha_F831FF72423622B3F1E4349CB1461852; // 0x0A9C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Turret_Rise_Timeline_Emission_F831FF72423622B3F1E4349CB1461852; // 0x0AA0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Turret_Rise_Timeline_Alpha_Fill_F831FF72423622B3F1E4349CB1461852; // 0x0AA4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Turret_Rise_Timeline__Direction_F831FF72423622B3F1E4349CB1461852; // 0x0AA8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBWO[0x7];                                   // 0x0AA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TurretRiseTimeline;                                      // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_AI_Waypoint_C*                                   LinkedGoalWaypoint;                                      // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Range_MID;                                               // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TurretStartingRotation;                                  // 0x0AC8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 CurTeamIdx;                                              // 0x0AD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQ07[0x3];                                   // 0x0AD5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumDrops;                                                // 0x0AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       GaveLoot;                                                // 0x0ADC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TowerVOTimer;                                            // 0x0ADD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CVKE[0x2];                                   // 0x0ADE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VODelay;                                                 // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DelayBeforeDestroyedVO;                                  // 0x0AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    HeartMesh_MIDs;                                          // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AStaticMeshActor*                                    TurretAttachToStaticMesh;                                // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ASkeletalMeshActor*                                  TurretAttachToSkeletalMesh;                              // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FName                                                TurretPositionSocketName;                                // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class AStaticMeshActor*                                    HeartAttachToStaticMesh;                                 // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ASkeletalMeshActor*                                  HeartAttachToSkeletalMesh;                               // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class FName                                                HeartPositionSocketName;                                 // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            ExtraRotationValue;                                      // 0x0B28(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_634N[0x4];                                   // 0x0B34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          TowerDamageVO;                                           // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          TowerDestroyVO;                                          // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AStaticMeshActor*>                            GroundMeshes;                                            // 0x0B48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		bool                                                       Dead;                                                    // 0x0B58(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_MYJA[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DamageNumberPopsName;                                    // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                TeamColorName;                                           // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    GroundMeshes_MIDs;                                       // 0x0B70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInterface*                                  Range_MI;                                                // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 TeamToRecieveXP;                                         // 0x0B88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NKQP[0x3];                                   // 0x0B89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TeamWideCardPoints;                                      // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasActivated;                                            // 0x0B90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_749L[0x3];                                   // 0x0B91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ActivationTurretRiseLocation;                            // 0x0B94(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Turret_MID;                                              // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ActivateParticles;                                       // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            FireSphere_MID;                                          // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ActivationBlend;                                         // 0x0BB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ActivationTurretCurrentLocation;                         // 0x0BBC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ActivationTurretStartingPosition;                        // 0x0BC8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0ECL[0x4];                                   // 0x0BD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            FlameDetails_MID;                                        // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      _1Percent;                                               // 0x0BE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QG4[0x4];                                   // 0x0BE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AStaticMeshActor*>                            BaseMeshes;                                              // 0x0BE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class UMaterialInstanceDynamic*>                    BaseMeshesMIDs;                                          // 0x0BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      HeartExplosionDelay;                                     // 0x0C08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurretExplosionDelay;                                    // 0x0C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     P_GroundSmokeTowerDead;                                  // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     P_TurretSmokeTowerDead;                                  // 0x0C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                DeathAfterMathFXPositionSocketName;                      // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          TowerDamageSound;                                        // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          RunesWarmupSound;                                        // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    HeartShieldMesh_MIDs;                                    // 0x0C38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              GE_Tower_TakeDamage;                                     // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TakeDamageVODelay;                                       // 0x0C50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JAES[0x4];                                   // 0x0C54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_Tower_TakeDamageVO;                                   // 0x0C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AStaticMeshActor*                                    WarningRingMesh;                                         // 0x0C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor

	public:
		void GetTargetingLocation(struct FVector* OutPosition);
		bool IsTargetable();
		void OnRep_Dead();
		void HandleTeamColors();
		struct FVector GetNumberPopLocation(const struct FVector& HitLocation);
		void DecalsOn();
		void SetComponentLocationAndRotation(class AStaticMeshActor* AttachToStaticMesh, class ASkeletalMeshActor* AttachToSkeletalMesh, class USceneComponent* SceneComponent, const class FName& PositionSocketName, const struct FRotator& ExtraRotation);
		void GetAimTargetSensingLocation(struct FVector* AimPosition);
		class UMeshComponent* GetBaseAttackingMesh();
		void SetGoalWaypoint();
		void HandleGoalWaypoint();
		void UserConstructionScript();
		void TurretRiseTimeline__FinishedFunc();
		void TurretRiseTimeline__UpdateFunc();
		void RuneFadeOutTimeline__FinishedFunc();
		void RuneFadeOutTimeline__UpdateFunc();
		void RuneWarmUpTimeline__FinishedFunc();
		void RuneWarmUpTimeline__UpdateFunc();
		void HeartDeathAnticipationTimeline__FinishedFunc();
		void HeartDeathAnticipationTimeline__UpdateFunc();
		void HeartDamageTimeline__FinishedFunc();
		void HeartDamageTimeline__UpdateFunc();
		void HeartShieldDamageTimeline__FinishedFunc();
		void HeartShieldDamageTimeline__UpdateFunc();
		void OnDeath();
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void ReceiveBeginPlay();
		void OnActorBeginOverlap_TargetingVolume_Bind(class AActor* OverlappedActor, class AActor* OtherActor);
		void WarmUpRunes(float Delay);
		void GameplayCue_Tower_Death(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void GameplayCue_Tower_DeathAfterMath(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnSelfRevive();
		void DeathHandler_Bind(class AController* Killer, class AActor* DamageCauser);
		void GameplayCue_Objectives_Shared_Immunity(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnDamageTaken(float Damage, class AActor* DamageInstigator);
		void GameplayCue_Tower_TakeDamage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ExecuteUbergraph_Tower_v3_Floating(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
