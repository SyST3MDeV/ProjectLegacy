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
	 * GameplayAbilityBlueprintGeneratedClass GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C
	 * Size -> 0x001C (FullSize[0x0A6C] - InheritedSize[0x0A50])
	 */
	class UGA_Gain5PerUnitHP_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      HPPercent;                                               // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F9TR[0x4];                                   // 0x0A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_ToApply;                                              // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NumTicks;                                                // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Gain5PerUnitHP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
