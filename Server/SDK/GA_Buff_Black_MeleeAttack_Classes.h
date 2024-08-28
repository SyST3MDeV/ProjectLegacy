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
	 * BlueprintGeneratedClass GA_Buff_Black_MeleeAttack.GA_Buff_Black_MeleeAttack_C
	 * Size -> 0x0028 (FullSize[0x0A78] - InheritedSize[0x0A50])
	 */
	class UGA_Buff_Black_MeleeAttack_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        MeleeAttack1;                                            // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MeleeAttack3;                                            // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        MeleeAttack2;                                            // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                DoDamage;                                                // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_90F9B1F045F76D5076A5C38EF46714A1(const class FName& NotifyName);
		void OnNotifyBegin_90F9B1F045F76D5076A5C38EF46714A1(const class FName& NotifyName);
		void OnCancelled_90F9B1F045F76D5076A5C38EF46714A1(const class FName& NotifyName);
		void OnInterrupted_90F9B1F045F76D5076A5C38EF46714A1(const class FName& NotifyName);
		void OnBlendOut_90F9B1F045F76D5076A5C38EF46714A1(const class FName& NotifyName);
		void OnCompleted_90F9B1F045F76D5076A5C38EF46714A1(const class FName& NotifyName);
		void Cancelled_6097B6A64D2690BAD88421811F88F028(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_6097B6A64D2690BAD88421811F88F028(const struct FGameplayAbilityTargetDataHandle& Targets);
		void OnNotifyEnd_7E7CA59C4642F2157BF4DDBDDFAF767C(const class FName& NotifyName);
		void OnNotifyBegin_7E7CA59C4642F2157BF4DDBDDFAF767C(const class FName& NotifyName);
		void OnCancelled_7E7CA59C4642F2157BF4DDBDDFAF767C(const class FName& NotifyName);
		void OnInterrupted_7E7CA59C4642F2157BF4DDBDDFAF767C(const class FName& NotifyName);
		void OnBlendOut_7E7CA59C4642F2157BF4DDBDDFAF767C(const class FName& NotifyName);
		void OnCompleted_7E7CA59C4642F2157BF4DDBDDFAF767C(const class FName& NotifyName);
		void OnNotifyEnd_75FEA4C04EAF9D2D479A37AE9B796247(const class FName& NotifyName);
		void OnNotifyBegin_75FEA4C04EAF9D2D479A37AE9B796247(const class FName& NotifyName);
		void OnCancelled_75FEA4C04EAF9D2D479A37AE9B796247(const class FName& NotifyName);
		void OnInterrupted_75FEA4C04EAF9D2D479A37AE9B796247(const class FName& NotifyName);
		void OnBlendOut_75FEA4C04EAF9D2D479A37AE9B796247(const class FName& NotifyName);
		void OnCompleted_75FEA4C04EAF9D2D479A37AE9B796247(const class FName& NotifyName);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Buff_Black_MeleeAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
