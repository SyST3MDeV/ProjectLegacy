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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_PBAOE_Parent.GA_Card_PBAOE_Parent_C
	 * Size -> 0x0020 (FullSize[0x0A70] - InheritedSize[0x0A50])
	 */
	class UGA_Card_PBAOE_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        GameplayCue;                                             // 0x0A60(0x0008) Edit, BlueprintVisible
		class UClass*                                              GE_ToSelf;                                               // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Cancelled_9D2735334D8E561227AF2792AE6E8A29(const struct FGameplayAbilityTargetDataHandle& Targets);
		void Confirmed_9D2735334D8E561227AF2792AE6E8A29(const struct FGameplayAbilityTargetDataHandle& Targets);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_PBAOE_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
