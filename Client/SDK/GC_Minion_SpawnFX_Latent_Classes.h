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
	 * BlueprintGeneratedClass GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C
	 * Size -> 0x0008 (FullSize[0x0590] - InheritedSize[0x0588])
	 */
	class AGC_Minion_SpawnFX_Latent_C : public AOrionGameplayCueNotify_Burst_Latent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystems, TArray<class UParticleSystemComponent*> AdditionalParticleSystems);
		void ExecuteUbergraph_GC_Minion_SpawnFX_Latent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
