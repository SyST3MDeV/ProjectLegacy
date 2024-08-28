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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_WhenHit_Parent.GA_Card_Passive_WhenHit_Parent_C
	 * Size -> 0x0058 (FullSize[0x0AA8] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Passive_WhenHit_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       WhenHitByMinions;                                        // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2Y14[0x7];                                   // 0x0A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetDataHandle                    Attacker;                                                // 0x0A68(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagContainer                               SourceRequireTags;                                       // 0x0A88(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnApplied_D9B60F364036EF76204502B4361E1B41(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnApplied_78F12104420C0C0AD1A53D8ADAD6978D(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnStateInterrupted_848983A548A0832E0EA032A279A7DBE3();
		void OnStateEnded_848983A548A0832E0EA032A279A7DBE3();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Passive_WhenHit_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
