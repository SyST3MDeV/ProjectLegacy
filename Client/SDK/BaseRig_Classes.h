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
	 * BlueprintGeneratedClass BaseRig.BaseRig_C
	 * Size -> 0x01E0 (FullSize[0x0C50] - InheritedSize[0x0A70])
	 */
	class ABaseRig_C : public AOrionRigs
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A70(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     SensingLocationArrow;                                    // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     ArrowLootLocation;                                       // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   RigCollision;                                            // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                Rig;                                                     // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UCapsuleComponent*                                   CollectionCollision;                                     // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SceneCollision;                                          // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UArrowComponent*                                     ArrowWorldLocation;                                      // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       bDeployed;                                               // 0x0AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsGeyser;                                                // 0x0AB1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JL48[0x2];                                   // 0x0AB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalTeamXPBonus;                                        // 0x0AB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          RigDestroySound;                                         // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AOrionCharHero*                                      CollectingPlayer;                                        // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FOrionFilterAndEffectsContainer                     PlayerCollectionCoinFilter;                              // 0x0AC8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FOrionFilterAndEffectsContainer                     FreeSpawnedCoinFilter;                                   // 0x0AE8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundCue*                                           RigDamageDialog;                                         // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RigVOTimer;                                              // 0x0B10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Health50Percent;                                         // 0x0B11(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DDTN[0x2];                                   // 0x0B12(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthIs50;                                              // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Health25Percent;                                         // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G03I[0x3];                                   // 0x0B19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthIs25;                                              // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SmallDenominationThreshold;                              // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGYV[0x4];                                   // 0x0B24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_CollectionContainer;                                 // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  MI_VerticalFillJuice;                                    // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           RigDestroyedDialog;                                      // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  MI_RigType;                                              // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FOrionFilterAndEffectsContainer                     DeathSpawnedCoinFilter;                                  // 0x0B48(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                RigTypeRowName;                                          // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Damage_Number_Pops;                                      // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABaseWell_C*                                         StoredAttachedWell;                                      // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                MinimapComp_Position;                                    // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Time;                                                    // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1ZGI[0x4];                                   // 0x0B8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FinishedBuilding;                                        // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EOrionTeam                                                 TeamToSpawnForHoming;                                    // 0x0BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TJEH[0x3];                                   // 0x0BA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinCoinsToSpawn_1;                                       // 0x0BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               AssetTags;                                               // 0x0BA8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                EmissiveColorName;                                       // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        JuiceColorValue;                                         // 0x0BD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  M_Proto_Master;                                          // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                ColorName;                                               // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MID_Bomb;                                                // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class FName>                                        DataNames;                                               // 0x0BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              GE_ExplosionDamage;                                      // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class AActor*>                                      ActorsToDamage;                                          // 0x0C10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      DelayBeforeDestroyDialog;                                // 0x0C20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VON7[0x4];                                   // 0x0C24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CoinDropSocketName;                                      // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          RigImpactSound;                                          // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TakeDamageVODelay;                                       // 0x0C38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKFG[0x4];                                   // 0x0C3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_Rig_TakeDamage;                                       // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Rig_Under_Attack_VO;                                  // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UMeshComponent* GetBaseAttackingMesh();
		struct FVector GetCoinSpawnLocation();
		void GetInverseTeamColor(class AActor* Actor, struct FLinearColor* Color);
		void GetTargetingLocation(struct FVector* OutPosition);
		struct FVector GetNumberPopLocation(const struct FVector& HitLocation);
		void DropCoinsOnDeath();
		void GetAimTargetSensingLocation(struct FVector* AimPosition);
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void OnAttachedToWell(class AOrionWell_Base* InWell);
		void OnDeath();
		void Build();
		void GameplayCue_Rigs_Building(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void OnDamageTaken(float Damage, class AActor* DamageInstigator);
		void ExecuteUbergraph_BaseRig(int32_t EntryPoint);
		void FinishedBuilding__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
