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
	 * BlueprintGeneratedClass GC_Aura_HealthRegen.GC_Aura_HealthRegen_C
	 * Size -> 0x0008 (FullSize[0x0718] - InheritedSize[0x0710])
	 */
	class AGC_Aura_HealthRegen_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem);
		void K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RecurringParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems);
		void ExecuteUbergraph_GC_Aura_HealthRegen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
