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
	 * BlueprintGeneratedClass BP_OrionCharAISpawner.BP_OrionCharAISpawner_C
	 * Size -> 0x0040 (FullSize[0x0590] - InheritedSize[0x0550])
	 */
	class ABP_OrionCharAISpawner_C : public AOrionCharAISpawner
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Arrow1;                                                  // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UTextRenderComponent*                                TextRender1;                                             // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UBoxComponent*                                       CollisionBox;                                            // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		TArray<class UClass*>                                      SpawnedGameplayEffectsToApply;                           // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void UserConstructionScript();
		void OnPostSpawnedAI(class AOrionCharAI* SpawnedAI);
		void ExecuteUbergraph_BP_OrionCharAISpawner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
