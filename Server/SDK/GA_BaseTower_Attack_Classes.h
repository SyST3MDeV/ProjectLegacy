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
	 * BlueprintGeneratedClass GA_BaseTower_Attack.GA_BaseTower_Attack_C
	 * Size -> 0x0008 (FullSize[0x0A58] - InheritedSize[0x0A50])
	 */
	class UGA_BaseTower_Attack_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void FailedToSpawn_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile);
		void NotAuthority_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile);
		void PreSpawned_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile);
		void Success_B4839A3A4217E05AD9A9DDBD12EF2DA2(class AOrionProjectile* SpawnedProjectile);
		void FireProjectile_C8E17D43434B4E962A909A912ECB41C0(const struct FGameplayAbilityTargetDataHandle& Targets);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_BaseTower_Attack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
