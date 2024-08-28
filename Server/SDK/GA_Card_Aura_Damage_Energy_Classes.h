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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Aura_Damage_Energy.GA_Card_Aura_Damage_Energy_C
	 * Size -> 0x0080 (FullSize[0x0AD0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Aura_Damage_Energy_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FOrionFilterAndEffectsContainer                     FilterAndEffects;                                        // 0x0A58(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FScalableFloat                                      AuraRadius;                                              // 0x0A78(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        Sprinting;                                               // 0x0AA0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FScalableFloat                                      DamageTickRate;                                          // 0x0AA8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnStateInterrupted_9BE6473A407D15B96DBD79837E345E2D();
		void OnStateEnded_9BE6473A407D15B96DBD79837E345E2D();
		void Removed_BC94577A4C7628D8FB38E48D0AA570D2();
		void Added_D4B95CBB4DB6B7B786BF05840FCCB58D();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Aura_Damage_Energy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
