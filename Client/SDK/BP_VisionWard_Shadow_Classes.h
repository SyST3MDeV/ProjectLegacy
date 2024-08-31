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
	 * BlueprintGeneratedClass BP_VisionWard_Shadow.BP_VisionWard_Shadow_C
	 * Size -> 0x0018 (FullSize[0x05D0] - InheritedSize[0x05B8])
	 */
	class ABP_VisionWard_Shadow_C : public ABP_OrionVisionWard_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      DelayBeforeGoingToStealth;                               // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FActiveGameplayEffectHandle                         StealthGameplayEffectHandle;                             // 0x05C4(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DelayBeforeReturningToStealth;                           // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void ExecuteUbergraph_BP_VisionWard_Shadow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
