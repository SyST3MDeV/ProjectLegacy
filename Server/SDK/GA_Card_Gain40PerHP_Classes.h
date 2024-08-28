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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C
	 * Size -> 0x0060 (FullSize[0x0AB0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Gain40PerHP_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      HPPercent;                                               // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VK5F[0x4];                                   // 0x0A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_ToApply;                                              // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NumTicks;                                                // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2DON[0x4];                                   // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagRequirements                            SourceTagReq;                                            // 0x0A70(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnMinionKill_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnMinionAssist_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerKill_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerAssist_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Gain40PerHP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
