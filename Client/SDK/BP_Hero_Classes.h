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
	 * BlueprintGeneratedClass BP_Hero.BP_Hero_C
	 * Size -> 0x0168 (FullSize[0x0EF8] - InheritedSize[0x0D90])
	 */
	class ABP_Hero_C : public AOrionCharHero
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                GlyphComponent;                                          // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       LaunchOnDeath;                                           // 0x0DA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G6Q6[0x3];                                   // 0x0DA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LaunchMagnitudeMin;                                      // 0x0DA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LaunchMagnitudeMax;                                      // 0x0DA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RawDamageRangeMin;                                       // 0x0DAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RawDamageRangeMax;                                       // 0x0DB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CoinsPerLevel;                                           // 0x0DB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           EnemyImpactSound;                                        // 0x0DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              TravelModeCamera;                                        // 0x0DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinCoinsToSpawn;                                         // 0x0DC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MCFL[0x4];                                   // 0x0DCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LootSpawnSocket;                                         // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UMaterialInterface*>                          OldMats;                                                 // 0x0DD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FOrion2DReticle                                     ReticleData;                                             // 0x0DE8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundCue*                                           PlayerImpactSound;                                       // 0x0E00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              RecallCamera;                                            // 0x0E08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     FX_DeathLightRays;                                       // 0x0E10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          Audio_DeathLightRays;                                    // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     LOD_FX;                                                  // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     LOD_FX_Camera;                                           // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          EnemyKnockbackSound;                                     // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          PlayerKnockbackSound;                                    // 0x0E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          HeroLowHealthBreath;                                     // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              TravelModeExitCamera;                                    // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          DeathStingerSound;                                       // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     FX_Death;                                                // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_CardShopWhileDead;                                    // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Victory;                                          // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Defeat;                                           // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_LevelUp;                                          // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Respawn;                                          // 0x0E80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_MatchStart;                                       // 0x0E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_CardLevelUp;                                      // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Recall;                                           // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Catchphrase;                                      // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Ability_Q;                                        // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Ability_E;                                        // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          Dialog_Ability_Ultimate;                                 // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCameraAnim*                                         CA_TakeDamage;                                           // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCameraAnim*                                         CA_CriticalDamage;                                       // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCameraAnim*                                         CA_ShieldDamage;                                         // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               DoDamageIgnoreTags;                                      // 0x0ED8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DirectionalCameraHitFeedback(const struct FGameplayCueParameters& CueParams, class UCameraAnim* Anim);
		void HeroLootDrop(class AActor* Killer);
		void SetupTeamColors();
		void UserConstructionScript();
		void InpActEvt_L_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Shift_L_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void GameplayCue_Damage_Hero(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void ReceiveBeginPlay();
		void GameplayCue_Death(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void OnDeath_Bind(class AOrionChar* DeadChar, class AController* Killer, class AActor* DamageCauser);
		void ApplyShadowPlaneMaterials();
		void RemoveShadowPlaneMaterials();
		void Distances();
		void Distances_World();
		void Distances_Camera();
		void Distances_Camera_World();
		void GameplayCue_Knockback(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void GameplayCue_ShieldDamage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void GameplayCue_Damage_CriticalHit(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void GameplayCue_RecallTeleport(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void DoDamageReaction(const struct FGameplayCueParameters& Parameters);
		void GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ExecuteUbergraph_BP_Hero(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
