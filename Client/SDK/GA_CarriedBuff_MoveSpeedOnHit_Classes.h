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
	 * BlueprintGeneratedClass GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C
	 * Size -> 0x0090 (FullSize[0x0AE0] - InheritedSize[0x0A50])
	 */
	class UGA_CarriedBuff_MoveSpeedOnHit_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x0A58(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0A98(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_RunSpeedOnHit;                                        // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnApplied_06FF9A3D4ECEBF76962748A14DD149EB(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_CarriedBuff_MoveSpeedOnHit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
