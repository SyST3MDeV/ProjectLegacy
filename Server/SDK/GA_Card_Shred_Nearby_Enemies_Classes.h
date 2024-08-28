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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Shred_Nearby_Enemies.GA_Card_Shred_Nearby_Enemies_C
	 * Size -> 0x001C (FullSize[0x0A6C] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Shred_Nearby_Enemies_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0A58(0x0008) Edit, BlueprintVisible
		class UClass*                                              GEToApply;                                               // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    MaxStacks;                                               // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Cancelled_75FE8E7B40CB7ACD5D969E92E72C83AA(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_75FE8E7B40CB7ACD5D969E92E72C83AA(const struct FGameplayAbilityTargetDataHandle& Targets);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Shred_Nearby_Enemies(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
