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
	 * BlueprintGeneratedClass GC_Standard_PhaseShift.GC_Standard_PhaseShift_C
	 * Size -> 0x0038 (FullSize[0x0748] - InheritedSize[0x0710])
	 */
	class AGC_Standard_PhaseShift_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FadeOut_Opacity_296A3706440704682CD938A26DF7DC5C;        // 0x0718(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         FadeOut__Direction_296A3706440704682CD938A26DF7DC5C;     // 0x071C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J8PL[0x3];                                   // 0x071D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOut;                                                 // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeIn_Brightness_A30552324545AA486481CDB6B576C399;      // 0x0728(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FadeIn_Opacity_A30552324545AA486481CDB6B576C399;         // 0x072C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         FadeIn__Direction_A30552324545AA486481CDB6B576C399;      // 0x0730(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_616C[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeIn;                                                  // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_Hero_C*                                          TargetCharacter;                                         // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void FadeIn__FinishedFunc();
		void FadeIn__UpdateFunc();
		void FadeOut__FinishedFunc();
		void FadeOut__UpdateFunc();
		void K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem);
		void K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems);
		void FadeInMaterial();
		void FadeOutMaterial();
		void ExecuteUbergraph_GC_Standard_PhaseShift(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
