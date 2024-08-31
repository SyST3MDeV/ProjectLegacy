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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Damage_to_Shield_Shred_Armor.GA_Card_Damage_to_Shield_Shred_Armor_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Damage_to_Shield_Shred_Armor_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_to_Apply_toTarget;                                    // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnApplied_06FF9A3D4ECEBF76962748A17750DC0B(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Damage_to_Shield_Shred_Armor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
