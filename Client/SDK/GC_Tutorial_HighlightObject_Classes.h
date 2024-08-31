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
	 * BlueprintGeneratedClass GC_Tutorial_HighlightObject.GC_Tutorial_HighlightObject_C
	 * Size -> 0x0014 (FullSize[0x0724] - InheritedSize[0x0710])
	 */
	class AGC_Tutorial_HighlightObject_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPostProcessComponent*                               PostProcess;                                             // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		int32_t                                                    StencilValue;                                            // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem);
		void K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems);
		void ExecuteUbergraph_GC_Tutorial_HighlightObject(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
