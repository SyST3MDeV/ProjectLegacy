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
	 * BlueprintGeneratedClass BP_OrionCharAI_BipedBot.BP_OrionCharAI_BipedBot_C
	 * Size -> 0x0028 (FullSize[0x0CD0] - InheritedSize[0x0CA8])
	 */
	class ABP_OrionCharAI_BipedBot_C : public AOrionCharAI_Minion
	{
	public:
		unsigned char                                              UnknownData_32E8[0x8];                                   // 0x0CA8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USoundCue*                                           SFX_HoverBotBeamAttack;                                  // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundCue*                                           SFX_HoverBotBeamAttackImpact;                            // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     MinionImpactFX;                                          // 0x0CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ExecuteUbergraph_BP_OrionCharAI_BipedBot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
