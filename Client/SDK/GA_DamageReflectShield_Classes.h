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
	 * GameplayAbilityBlueprintGeneratedClass GA_DamageReflectShield.GA_DamageReflectShield_C
	 * Size -> 0x00B0 (FullSize[0x0B00] - InheritedSize[0x0A50])
	 */
	class UGA_DamageReflectShield_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            DamageTags;                                              // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0A98(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ReflectPercentage;                                       // 0x0AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3D2L[0x4];                                   // 0x0ADC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionFilterAndEffectsContainer                     ReflectedDamageFilter;                                   // 0x0AE0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnApplied_8758D8584F272E3A942EC6B2E7E3368A(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_DamageReflectShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
