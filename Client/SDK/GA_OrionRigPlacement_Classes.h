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
	 * BlueprintGeneratedClass GA_OrionRigPlacement.GA_OrionRigPlacement_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_OrionRigPlacement_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              RigType;                                                 // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FailedToSpawn_31E0DE7D41D1CF73E2ECA78693214BEC(class AOrionRigs* SpawnedRig);
		void NotAuthority_31E0DE7D41D1CF73E2ECA78693214BEC(class AOrionRigs* SpawnedRig);
		void Success_31E0DE7D41D1CF73E2ECA78693214BEC(class AOrionRigs* SpawnedRig);
		void Cancelled_BDDE6C974BE1D6254E1C6ABC381235EC(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_BDDE6C974BE1D6254E1C6ABC381235EC(const struct FGameplayAbilityTargetDataHandle& Targets);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_OrionRigPlacement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
