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
	 * BlueprintGeneratedClass GA_Sprint.GA_Sprint_C
	 * Size -> 0x0088 (FullSize[0x0AD8] - InheritedSize[0x0A50])
	 */
	class UGA_Sprint_C : public UOrionAbility_Sprint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            WaitAbilityTagRequirements;                              // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagRequirements                            WaitGameplayEffectTagRequirements;                       // 0x0A98(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void EndSprintHUD();
		void StartSprintHUD(float CastTime);
		void OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C();
		void OnStateEnded_D70BFB76427505AF993D609AC9934F2C();
		void OnApplied_A72AD8D04F3B3C97A2458FBE112A4790(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnCancel_8AE9FEA047AA7A870564CC93C44E1E24();
		void OnCancel_BD1837F2479F6C09633F78AD2862BAD2();
		void OnFinish_CE0FB0E74408B744FA5A7BB47046CB10();
		void InvalidHandle_711037F745707DCAFF2A8C86C95CC031();
		void OnRemoved_711037F745707DCAFF2A8C86C95CC031();
		void OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A(class UGameplayAbility* ActivatedAbility);
		void OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A();
		void OnStateEnded_CE0609CC454AB8343CE0618523CDB11A();
		void K2_ActivateAbility();
		void K2_OnEndAbility();
		void ExecuteUbergraph_GA_Sprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
