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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_OnHitStealMoveSpeed.GA_Card_Passive_OnHitStealMoveSpeed_C
	 * Size -> 0x0018 (FullSize[0x0A68] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Passive_OnHitStealMoveSpeed_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_to_Apply_toTarget;                                    // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnApplied_FCEB4ECB4568A7FCFA08A391D989FB43(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Passive_OnHitStealMoveSpeed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
