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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C
	 * Size -> 0x0014 (FullSize[0x0A64] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Ethereal_Gem_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_Card_Ethereal_Gem;                                    // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Duration;                                                // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnFinish_BF49B0B84F58C7406D7E02A63E40EB2B();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Ethereal_Gem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
