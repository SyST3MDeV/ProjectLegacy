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
	 * GameplayAbilityBlueprintGeneratedClass GA_HealPotion.GA_HealPotion_C
	 * Size -> 0x0050 (FullSize[0x0AA0] - InheritedSize[0x0A50])
	 */
	class UGA_HealPotion_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            SourceTagReqs;                                           // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_ToApply;                                              // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_HealPotion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
