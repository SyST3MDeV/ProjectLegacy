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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C
	 * Size -> 0x0058 (FullSize[0x0AA8] - InheritedSize[0x0A50])
	 */
	class UGA_Card_When_Poisoned_Reset_CD_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGameplayTagRequirements                            TagRequired;                                             // 0x0A60(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        CooldownTag;                                             // 0x0AA0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnStateInterrupted_05189C80442421CB2954518E4D7BD9D2();
		void OnStateEnded_05189C80442421CB2954518E4D7BD9D2();
		void OnApplied_304F67414A1107E311F07CAA51A79768(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void Added_AD5A46104B7257D583C5EFB009FD98A1();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_When_Poisoned_Reset_CD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
