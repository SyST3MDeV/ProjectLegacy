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
	 * BlueprintGeneratedClass GC_Announcer_Dialog_MultiKill.GC_Announcer_Dialog_MultiKill_C
	 * Size -> 0x0020 (FullSize[0x05A8] - InheritedSize[0x0588])
	 */
	class AGC_Announcer_Dialog_MultiKill_C : public AOrionGameplayCueNotify_Burst_Latent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MultiDelay;                                              // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z53Y[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundBase*>                                  MultiKillDialog;                                         // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void UserConstructionScript();
		void K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystems, TArray<class UParticleSystemComponent*> AdditionalParticleSystems);
		void ExecuteUbergraph_GC_Announcer_Dialog_MultiKill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
