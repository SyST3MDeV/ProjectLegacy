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
	 * BlueprintGeneratedClass GC_Ward_SphereFX.GC_Ward_SphereFX_C
	 * Size -> 0x0018 (FullSize[0x04D8] - InheritedSize[0x04C0])
	 */
	class UGC_Ward_SphereFX_C : public UOrionGameplayCueNotify_Burst
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                AttachPointName;                                         // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                TeamColorName;                                           // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* BurstCameraShakeInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
