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
	 * BlueprintGeneratedClass GA_Ultimate_Ability.GA_Ultimate_Ability_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_Ultimate_Ability_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_Ultimate_Ability;                           // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_2DDE24D14603522E735F9FB31021578E();
		void OnStateEnded_2DDE24D14603522E735F9FB31021578E();
		void OnLevelUp_EAD29C0445DF8665121F95A3A9474107(int32_t AbilityLevel);
		void K2_ActivateAbility();
		void OnStop_Bind();
		void FinishTutorial();
		void ExecuteUbergraph_GA_Ultimate_Ability(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
