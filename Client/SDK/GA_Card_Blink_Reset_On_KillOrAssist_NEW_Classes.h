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
	 * BlueprintGeneratedClass GA_Card_Blink_Reset_On_KillOrAssist_NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C
	 * Size -> 0x003C (FullSize[0x0A8C] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Blink_Reset_On_KillOrAssistNEW_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              BP_CameraModeToTeleport;                                 // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        GC_TeleportFX_Reappear;                                  // 0x0A60(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        GC_TeleportFX_TeleportForward;                           // 0x0A68(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_TimeToKill;                                           // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_Reset_CD_On_KillOrAssist;                             // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FActiveGameplayEffectHandle                         TimeToKill;                                              // 0x0A80(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TeleportLaunchMagnitude;                                 // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext);
		void InvalidHandle_D6838B7842C21942D41A9A865DD10D9F();
		void OnRemoved_D6838B7842C21942D41A9A865DD10D9F();
		void Cancelled_6174A304472985BFC017B6B145EAE20A(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_6174A304472985BFC017B6B145EAE20A(const struct FGameplayAbilityTargetDataHandle& Targets);
		void OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314();
		void OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssistNEW(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
