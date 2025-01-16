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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_OnHit_Shred_Energy.GA_Card_Passive_OnHit_Shred_Energy_C
	 * Size -> 0x0010 (FullSize[0x0A00] - InheritedSize[0x09F0])
	 */
	class UGA_Card_Passive_OnHit_Shred_Energy_C : public UOrionAbility
	{
	public:
		unsigned char                                              UnknownData_2IFD[0x10];                                  // 0x09F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnApplied_06FF9A3D4ECEBF76962748A1D923877B(class FSpecHandle* Target, const struct FActiveHandle& SpecHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Passive_OnHit_Shred_Energy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
