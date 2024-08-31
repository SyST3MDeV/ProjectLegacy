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
	 * BlueprintGeneratedClass GA_Emote_Flavor.GA_Emote_Flavor_C
	 * Size -> 0x0008 (FullSize[0x0A78] - InheritedSize[0x0A70])
	 */
	class UGA_Emote_Flavor_C : public UGA_Emote_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A70(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Emote_Flavor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
