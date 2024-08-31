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
	 * BlueprintGeneratedClass GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_EnemyHero_Introduction_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_Enemy_Hero_Introduction;                    // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_27ED586F4917CF1E251498BDA1DEFAAA();
		void OnStateEnded_27ED586F4917CF1E251498BDA1DEFAAA();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_EnemyHero_Introduction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
