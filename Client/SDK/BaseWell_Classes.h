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
	 * BlueprintGeneratedClass BaseWell.BaseWell_C
	 * Size -> 0x01C1 (FullSize[0x0851] - InheritedSize[0x0690])
	 */
	class ABaseWell_C : public AOrionWell_Base
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0690(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   InteractionPointLocationCollisionCapsule;                // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionGameplayVolumeComponent*                       CollectionLocationOverlap;                               // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_ForceField;                                           // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     DecalCracks;                                             // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            PS_Bolt_Dust;                                            // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                FloorRunesMesh;                                          // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                FansMesh;                                                // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_Well_Unlock_Dust;                                      // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                CircleRimMesh;                                           // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            PS_WallGlow;                                             // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                Rock_Well_Merged_Rock_Meshing;                           // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAudioComponent*                                     Well_Geyser_Cue;                                         // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                CircleMesh;                                              // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            PS_RigLocation;                                          // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                Hole;                                                    // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionGameplayVolumeComponent*                       LocationOverlap;                                         // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   LocationCollisionCapsule;                                // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   KeepPlayerOutCapsuleCollision;                           // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     ArrowRigStartingPosition;                                // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     ArrowCollectionPosition;                                 // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     ArrowRigAttachPosition;                                  // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   TargetCapsule;                                           // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                BaseWellMesh;                                            // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     ArrowFacingDirection;                                    // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     Scene;                                                   // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      RigActiveAnim_Bolts_B9155B0C4BB87CE1B8A9FF8440D2D327;    // 0x0760(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RigActiveAnim_FanRotation_B9155B0C4BB87CE1B8A9FF8440D2D327; // 0x0764(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         RigActiveAnim__Direction_B9155B0C4BB87CE1B8A9FF8440D2D327; // 0x0768(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VJ0N[0x7];                                   // 0x0769(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RigActiveAnim;                                           // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RigPlacedAnim_WallRunes_531C47524278547E79942EB3FDB6052E; // 0x0778(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RigPlacedAnim_Glow_531C47524278547E79942EB3FDB6052E;     // 0x077C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RigPlacedAnim_Rotation_531C47524278547E79942EB3FDB6052E; // 0x0780(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         RigPlacedAnim__Direction_531C47524278547E79942EB3FDB6052E; // 0x0784(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8MA[0x3];                                   // 0x0785(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RigPlacedAnim;                                           // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UMaterialInstanceDynamic*>                    MinionMeshMIDs;                                          // 0x0790(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInterface*                                  MI_SourceMaterialForTeamColor;                           // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MID_BaseWellMat;                                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     WellGeyserAudio;                                         // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     WellBubbleAudio;                                         // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                DamageNumberPops;                                        // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                RigAttach;                                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                LocationInWell;                                          // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NextColor;                                               // 0x07D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BWQA[0x3];                                   // 0x07D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        GeyserColor;                                             // 0x07DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DeadZoneColor;                                           // 0x07EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DPY5[0x4];                                   // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TeamColor;                                               // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ColorName;                                               // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionTeam                                                 TeamThatDestroyedRig;                                    // 0x0810(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NoTop;                                                   // 0x0811(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_81QY[0x6];                                   // 0x0812(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MIDCircle;                                               // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SmallTop;                                                // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1RPR[0x3];                                   // 0x0821(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GlowMaterialID;                                          // 0x0824(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RigAttached;                                             // 0x0828(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_DHUU[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MIDFans;                                                 // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MIDDecal;                                                // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MIDForceField;                                           // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MIDWallRunes;                                            // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasRockBackside;                                         // 0x0850(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnRep_RigAttached();
		void DoColorChanges(const struct FLinearColor& InLinearColor);
		void GetTargetingLocation(struct FVector* OutPosition);
		void GetAimTargetSensingLocation(struct FVector* AimPosition);
		struct FVector GetNumberPopLocation(const struct FVector& HitLocation);
		struct FVector GetRigAttachLocation();
		struct FRotator GetRigAttachRotaion();
		void UserConstructionScript();
		void RigPlacedAnim__FinishedFunc();
		void RigPlacedAnim__UpdateFunc();
		void RigActiveAnim__FinishedFunc();
		void RigActiveAnim__UpdateFunc();
		void RigActiveAnim__Dust__EventFunc();
		void ReceiveBeginPlay();
		void OnAttachRig(class AOrionRigs* NewAttachedRig);
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void RigFinishedBuilding();
		void RigPlaced();
		void GameplayCue_Wells_Geyser(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void GameplayCue_Wells_DeadZone(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void RigRemoved();
		void ExecuteUbergraph_BaseWell(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
