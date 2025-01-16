#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C
	 * Size -> 0x0010 (FullSize[0x0A00] - InheritedSize[0x09F0])
	 */
	class UGA_Card_Passive_OnAbilityHitPosion_C : public UOrionAbility
	{
	public:
		unsigned char                                              UnknownData_8EDX[0x10];                                  // 0x09F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnApplied_F8D8D1CF494908AE35A3279D5FB18D84(class FSpecHandle* Target, const struct FActiveHandle& SpecHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
