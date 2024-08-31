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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_Card_OnKillPlayer_Movespeed_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnMinionKill_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnMinionAssist_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerKill_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerAssist_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OnKillPlayer_Movespeed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
