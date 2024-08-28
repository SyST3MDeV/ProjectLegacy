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
	 * GameplayAbilityBlueprintGeneratedClass GA_Inhibitor_Attack_ProjectileBased.GA_Inhibitor_Attack_ProjectileBased_C
	 * Size -> 0x0028 (FullSize[0x0A78] - InheritedSize[0x0A50])
	 */
	class UGA_Inhibitor_Attack_ProjectileBased_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FOrionFilterAndEffectsContainer                     FilterAndEffects;                                        // 0x0A58(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void FailedToSpawn_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile);
		void NotAuthority_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile);
		void PreSpawned_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile);
		void Success_255A7BC346BC68F413A297862E2768E7(class AOrionProjectile* SpawnedProjectile);
		void FireProjectile_213B73C2459417401171819153CA0663(const struct FGameplayAbilityTargetDataHandle& Targets);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Inhibitor_Attack_ProjectileBased(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
