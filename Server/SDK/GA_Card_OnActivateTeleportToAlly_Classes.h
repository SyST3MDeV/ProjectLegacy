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
	 * BlueprintGeneratedClass GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C
	 * Size -> 0x0060 (FullSize[0x0AB0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_OnActivateTeleportToAlly_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             EndVelocity;                                             // 0x0A58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3SKN[0x4];                                   // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               CombatContainer;                                         // 0x0A68(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DelayBeforeTeleport;                                     // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TeleportSuccessful;                                      // 0x0A8C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_96BJ[0x3];                                   // 0x0A8D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CDR_Cancelled;                                           // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_AppliedToTarget;                                      // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FActiveGameplayEffectHandle                         GENoCarryPrime;                                          // 0x0AA0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FActiveGameplayEffectHandle                         GENoCardShop;                                            // 0x0AA8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Cancelled_60D8D42D40879602E11CF18A1484526C(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_60D8D42D40879602E11CF18A1484526C(const struct FGameplayAbilityTargetDataHandle& Targets);
		void OnStateInterrupted_2FDAF7A04FD1C83757CC05AA0098E312();
		void OnStateEnded_2FDAF7A04FD1C83757CC05AA0098E312();
		void OnFinish_1C404C1C45186EC1538B47B05493FBE4();
		void OnFinish_3796284B43837E226219BABDE9E129CE();
		void OnActivate_8B0D6D884CBBD4E111C9A0BBE8ED5DA7(class UGameplayAbility* ActivatedAbility);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OnActivateTeleportToAlly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
