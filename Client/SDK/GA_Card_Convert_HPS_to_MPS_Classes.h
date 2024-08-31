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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Convert_HPS_to_MPS.GA_Card_Convert_HPS_to_MPS_C
	 * Size -> 0x0008 (FullSize[0x0A80] - InheritedSize[0x0A78])
	 */
	class UGA_Card_Convert_HPS_to_MPS_C : public UGA_Card_OneShotBuff_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A78(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Convert_HPS_to_MPS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
