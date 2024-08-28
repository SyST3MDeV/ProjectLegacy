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
	 * BlueprintGeneratedClass GA_Card_Blink_Targeting_Parent.GA_Card_Blink_Targeting_Parent_C
	 * Size -> 0x002C (FullSize[0x0A7C] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Blink_Targeting_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              BP_CameraModeToTeleport;                                 // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_IgnorePawnCollision;                                  // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        GC_TeleportFX_Reappear;                                  // 0x0A68(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        GC_TeleportFX_TeleportForward;                           // 0x0A70(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TeleportLaunchMagnitude;                                 // 0x0A78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Cancelled_D60ECDE24B5E29D3F691CB87E1C6A086(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_D60ECDE24B5E29D3F691CB87E1C6A086(const struct FGameplayAbilityTargetDataHandle& Targets);
		void OnStateInterrupted_6489E8BE439FDFF5B63112B312949256();
		void OnStateEnded_6489E8BE439FDFF5B63112B312949256();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Blink_Targeting_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
