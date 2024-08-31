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
	 * BlueprintGeneratedClass GC_CarriedBuff_MidLaneBuff.GC_CarriedBuff_MidLaneBuff_C
	 * Size -> 0x0020 (FullSize[0x0730] - InheritedSize[0x0710])
	 */
	class AGC_CarriedBuff_MidLaneBuff_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                HelixColorName;                                          // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ColorParam;                                              // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance);
		void K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem);
		void ExecuteUbergraph_GC_CarriedBuff_MidLaneBuff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
