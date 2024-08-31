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
	 * BlueprintGeneratedClass GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C
	 * Size -> 0x0088 (FullSize[0x0AD8] - InheritedSize[0x0A50])
	 */
	class UGA_CarriedBuff_BurnStructureOnHit_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0A98(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnApplied_5096090645BC58FAB37B5CACC775BEF7(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
