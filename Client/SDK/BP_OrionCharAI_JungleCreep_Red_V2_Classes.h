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
	 * BlueprintGeneratedClass BP_OrionCharAI_JungleCreep_Red_V2.BP_OrionCharAI_JungleCreep_Red_V2_C
	 * Size -> 0x0018 (FullSize[0x0D28] - InheritedSize[0x0D10])
	 */
	class ABP_OrionCharAI_JungleCreep_Red_V2_C : public ABP_OrionCharAI_JungleCreep_BaseBuff_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Smoke;                                                   // 0x0D18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UAnimMontage*                                        SpawnAnim;                                               // 0x0D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void GameplayCue_Death(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ExecuteUbergraph_BP_OrionCharAI_JungleCreep_Red_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
