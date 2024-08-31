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
	 * BlueprintGeneratedClass GC_Standard_Cleanse.GC_Standard_Cleanse_C
	 * Size -> 0x0050 (FullSize[0x0760] - InheritedSize[0x0710])
	 */
	class AGC_Standard_Cleanse_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0710(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ShieldMesh;                                              // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      fadeout_Opacity_C916B456412A6AC7E7CBB3A436558A64;        // 0x0720(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         fadeout__Direction_C916B456412A6AC7E7CBB3A436558A64;     // 0x0724(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W2PT[0x3];                                   // 0x0725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOut;                                                 // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Fadeon_Brightness_DEEF8FE1472D85DB399D86A2A0400D58;      // 0x0730(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Fadeon_Opacity_DEEF8FE1472D85DB399D86A2A0400D58;         // 0x0734(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Fadeon__Direction_DEEF8FE1472D85DB399D86A2A0400D58;      // 0x0738(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_969V[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Fadeon;                                                  // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            ShieldMID;                                               // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MatCreated;                                              // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DVEE[0x7];                                   // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Hero_C*                                          TargetCharacter;                                         // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void UserConstructionScript();
		void Fadeon__FinishedFunc();
		void Fadeon__UpdateFunc();
		void FadeOut__FinishedFunc();
		void FadeOut__UpdateFunc();
		void FadeInMaterial();
		void FadeOutMaterial();
		void ExecuteUbergraph_GC_Standard_Cleanse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
