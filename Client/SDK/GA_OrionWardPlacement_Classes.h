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
	 * BlueprintGeneratedClass GA_OrionWardPlacement.GA_OrionWardPlacement_C
	 * Size -> 0x0018 (FullSize[0x0A68] - InheritedSize[0x0A50])
	 */
	class UGA_OrionWardPlacement_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              WardClass;                                               // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              WardCameraClass;                                         // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Cancelled_29228A92469B41C80817C0B6EA29B720(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_29228A92469B41C80817C0B6EA29B720(const struct FGameplayAbilityTargetDataHandle& Targets);
		void FailedToSpawn_0164359A400FCE2709A82EA5FFE30436(class AOrionVisionWard* SpawnedWard);
		void NotAuthority_0164359A400FCE2709A82EA5FFE30436(class AOrionVisionWard* SpawnedWard);
		void Success_0164359A400FCE2709A82EA5FFE30436(class AOrionVisionWard* SpawnedWard);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_OrionWardPlacement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
