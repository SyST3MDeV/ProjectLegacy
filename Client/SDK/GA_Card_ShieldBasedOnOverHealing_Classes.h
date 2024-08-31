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
	 * BlueprintGeneratedClass GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C
	 * Size -> 0x0050 (FullSize[0x0AA0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_ShieldBasedOnOverHealing_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            SourceTag;                                               // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      PercentOfMaxHealthToCapShieldAt;                         // 0x0A98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxShieldValue;                                          // 0x0A9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void AddShieldForRegen();
		void ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
