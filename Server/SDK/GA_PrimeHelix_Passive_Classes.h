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
	 * BlueprintGeneratedClass GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C
	 * Size -> 0x0008 (FullSize[0x0A58] - InheritedSize[0x0A50])
	 */
	class UGA_PrimeHelix_Passive_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Added_39751D1743CCD7A2462549A121C7F377();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_PrimeHelix_Passive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
