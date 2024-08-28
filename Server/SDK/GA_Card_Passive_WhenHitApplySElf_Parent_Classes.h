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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_WhenHitApplySElf_Parent.GA_Card_Passive_WhenHitApplySelf_Parent_C
	 * Size -> 0x0030 (FullSize[0x0A80] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Passive_WhenHitApplySelf_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGameplayTagContainer                               SourceRequireTags;                                       // 0x0A60(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnApplied_D9B60F364036EF76204502B4884708B2(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnStateInterrupted_697D596641938BEC85A248A3A74FC664();
		void OnStateEnded_697D596641938BEC85A248A3A74FC664();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Passive_WhenHitApplySelf_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
