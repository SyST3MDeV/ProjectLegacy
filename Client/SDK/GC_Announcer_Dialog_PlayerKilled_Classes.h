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
	 * BlueprintGeneratedClass GC_Announcer_Dialog_PlayerKilled.GC_Announcer_Dialog_PlayerKilled_C
	 * Size -> 0x0008 (FullSize[0x04C8] - InheritedSize[0x04C0])
	 */
	class UGC_Announcer_Dialog_PlayerKilled_C : public UOrionGameplayCueNotify_Burst
	{
	public:
		class USoundBase*                                          PlayerKilledAnnouncer;                                   // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* BurstCameraShakeInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
