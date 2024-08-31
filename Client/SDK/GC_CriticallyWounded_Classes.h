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
	 * BlueprintGeneratedClass GC_CriticallyWounded.GC_CriticallyWounded_C
	 * Size -> 0x0020 (FullSize[0x0730] - InheritedSize[0x0710])
	 */
	class AGC_CriticallyWounded_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              TargetActor;                                             // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                Strength_Name;                                           // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CriticallyWoundedThresholdValue;                         // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LowestStrengthValue;                                     // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance);
		void AdjustStrength();
		void ExecuteUbergraph_GC_CriticallyWounded(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
