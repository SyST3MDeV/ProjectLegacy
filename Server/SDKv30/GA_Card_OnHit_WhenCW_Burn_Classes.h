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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C
	 * Size -> 0x0010 (FullSize[0x0A00] - InheritedSize[0x09F0])
	 */
	class UGA_Card_OnHit_WhenCW_Burn_C : public UOrionAbility
	{
	public:
		unsigned char                                              UnknownData_GW18[0x10];                                  // 0x09F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnApplied_F496FCFC47E7B1F67E5588BB80A651FD(class FSpecHandle* Target, const struct FActiveHandle& SpecHandle);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OnHit_WhenCW_Burn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
