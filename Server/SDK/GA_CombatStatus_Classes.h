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
	 * BlueprintGeneratedClass GA_CombatStatus.GA_CombatStatus_C
	 * Size -> 0x0068 (FullSize[0x0AB8] - InheritedSize[0x0A50])
	 */
	class UGA_CombatStatus_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            SourceTagReqs;                                           // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        DoesntPutInCombatTag;                                    // 0x0A98(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayEffectSpecHandle                           CombatSpec;                                              // 0x0AA0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnActivate_5557742B48383E21515A3C98055058C9(class UGameplayAbility* ActivatedAbility);
		void OnCommit_87A4669C4A05FC7DF48639A5B1158FAB(class UGameplayAbility* ActivatedAbility);
		void EventReceived_B8F68E77472AF693BD3EB7A90BA944BB(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_CombatStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
