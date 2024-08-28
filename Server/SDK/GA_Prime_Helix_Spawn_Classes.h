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
	 * BlueprintGeneratedClass GA_Prime_Helix_Spawn.GA_Prime_Helix_Spawn_C
	 * Size -> 0x0024 (FullSize[0x0A74] - InheritedSize[0x0A50])
	 */
	class UGA_Prime_Helix_Spawn_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAnimMontage*                                        LandingAnim;                                             // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FActiveGameplayEffectHandle                         InvulnerabilityGE;                                       // 0x0A60(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_Invulnerability;                                      // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallDuration;                                            // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_8595B1D147A59BB1C34C668824C421EE(const class FName& NotifyName);
		void OnNotifyBegin_8595B1D147A59BB1C34C668824C421EE(const class FName& NotifyName);
		void OnCancelled_8595B1D147A59BB1C34C668824C421EE(const class FName& NotifyName);
		void OnInterrupted_8595B1D147A59BB1C34C668824C421EE(const class FName& NotifyName);
		void OnBlendOut_8595B1D147A59BB1C34C668824C421EE(const class FName& NotifyName);
		void OnCompleted_8595B1D147A59BB1C34C668824C421EE(const class FName& NotifyName);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Prime_Helix_Spawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
