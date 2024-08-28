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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_OnHitPlayer_Shred_Energy_Armor.GA_Card_OnHitPlayer_Shred_Energy_Armor_C
	 * Size -> 0x00A0 (FullSize[0x0AF0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_OnHitPlayer_Shred_Energy_Armor_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_to_Apply_toTarget;                                    // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTagRequirements                            PrimaryDamage;                                           // 0x0A60(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagRequirements                            EnemyHero;                                               // 0x0AA0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DurationToLandHit;                                       // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UMK6[0x4];                                   // 0x0AE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        GameplayCue_Burst;                                       // 0x0AE8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnApplied_FBF0A7904A4FDC429F488CBCFA1C0AAE(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnFinish_FEB35DA74446F26949A7F29EDE6B89A3();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Energy_Armor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
