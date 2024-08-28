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
	 * BlueprintGeneratedClass GA_RigExtraction.GA_RigExtraction_C
	 * Size -> 0x0008 (FullSize[0x0A58] - InheritedSize[0x0A50])
	 */
	class UGA_RigExtraction_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Cancelled_2395268F4C49BECCCD431FAC9723ED13(const struct FGameplayAbilityTargetDataHandle& Data);
		void ValidData_2395268F4C49BECCCD431FAC9723ED13(const struct FGameplayAbilityTargetDataHandle& Data);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_RigExtraction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
