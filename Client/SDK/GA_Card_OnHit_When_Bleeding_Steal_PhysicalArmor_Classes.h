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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_OnHit_When_Bleeding_Steal_PhysicalArmor.GA_Card_OnHit_When_Bleeding_Steal_PhysicalArmor_C
	 * Size -> 0x0018 (FullSize[0x0A68] - InheritedSize[0x0A50])
	 */
	class UGA_Card_OnHit_When_Bleeding_Steal_PhysicalArmor_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_To_Target;                                            // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              GE_To_Self;                                              // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnApplied_252E53194F5C2A72015DF48F7ABDBBD4(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OnHit_When_Bleeding_Steal_PhysicalArmor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
