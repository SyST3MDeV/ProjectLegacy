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
	 * BlueprintGeneratedClass GA_Buff_Red_PrimaryAttack.GA_Buff_Red_PrimaryAttack_C
	 * Size -> 0x0030 (FullSize[0x0A80] - InheritedSize[0x0A50])
	 */
	class UGA_Buff_Red_PrimaryAttack_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                NewVar_1;                                                // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Uppercut;                                                // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        BigSmash;                                                // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Attack2;                                                 // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        Attack1;                                                 // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_312C16D2459472D9C8AE11B9E8146D85(const class FName& NotifyName);
		void OnNotifyBegin_312C16D2459472D9C8AE11B9E8146D85(const class FName& NotifyName);
		void OnCancelled_312C16D2459472D9C8AE11B9E8146D85(const class FName& NotifyName);
		void OnInterrupted_312C16D2459472D9C8AE11B9E8146D85(const class FName& NotifyName);
		void OnBlendOut_312C16D2459472D9C8AE11B9E8146D85(const class FName& NotifyName);
		void OnCompleted_312C16D2459472D9C8AE11B9E8146D85(const class FName& NotifyName);
		void OnNotifyEnd_A7EC350E43DEB7B9D3D809B02BAA6E7C(const class FName& NotifyName);
		void OnNotifyBegin_A7EC350E43DEB7B9D3D809B02BAA6E7C(const class FName& NotifyName);
		void OnCancelled_A7EC350E43DEB7B9D3D809B02BAA6E7C(const class FName& NotifyName);
		void OnInterrupted_A7EC350E43DEB7B9D3D809B02BAA6E7C(const class FName& NotifyName);
		void OnBlendOut_A7EC350E43DEB7B9D3D809B02BAA6E7C(const class FName& NotifyName);
		void OnCompleted_A7EC350E43DEB7B9D3D809B02BAA6E7C(const class FName& NotifyName);
		void OnNotifyEnd_CB8233F548BE64B22B4288B726D3CBFD(const class FName& NotifyName);
		void OnNotifyBegin_CB8233F548BE64B22B4288B726D3CBFD(const class FName& NotifyName);
		void OnCancelled_CB8233F548BE64B22B4288B726D3CBFD(const class FName& NotifyName);
		void OnInterrupted_CB8233F548BE64B22B4288B726D3CBFD(const class FName& NotifyName);
		void OnBlendOut_CB8233F548BE64B22B4288B726D3CBFD(const class FName& NotifyName);
		void OnCompleted_CB8233F548BE64B22B4288B726D3CBFD(const class FName& NotifyName);
		void OnNotifyEnd_F2C5B4274F278F2F3D93A18C0A71D3A1(const class FName& NotifyName);
		void OnNotifyBegin_F2C5B4274F278F2F3D93A18C0A71D3A1(const class FName& NotifyName);
		void OnCancelled_F2C5B4274F278F2F3D93A18C0A71D3A1(const class FName& NotifyName);
		void OnInterrupted_F2C5B4274F278F2F3D93A18C0A71D3A1(const class FName& NotifyName);
		void OnBlendOut_F2C5B4274F278F2F3D93A18C0A71D3A1(const class FName& NotifyName);
		void OnCompleted_F2C5B4274F278F2F3D93A18C0A71D3A1(const class FName& NotifyName);
		void Cancelled_2EAD026045E93D20A19BB088C38760CB(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_2EAD026045E93D20A19BB088C38760CB(const struct FGameplayAbilityTargetDataHandle& Targets);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Buff_Red_PrimaryAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
