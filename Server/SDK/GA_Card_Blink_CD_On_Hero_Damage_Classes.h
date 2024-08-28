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
	 * BlueprintGeneratedClass GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C
	 * Size -> 0x0050 (FullSize[0x0AA0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Blink_CD_On_Hero_Damage_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            HeroDamageTag;                                           // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_Blink_CD_On_Hero_Damage;                              // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnApplied_54CB9E854E634D97223FB09F7A09EEE5(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Blink_CD_On_Hero_Damage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
