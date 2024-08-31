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
	 * BlueprintGeneratedClass GA_First_Ability.GA_First_Ability_C
	 * Size -> 0x0018 (FullSize[0x0A68] - InheritedSize[0x0A50])
	 */
	class UGA_First_Ability_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_First_Ability;                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GE_FirstAbility_UseReminder;                             // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_A2D4CADF41808634FCDB4D80E7E142D4();
		void OnStateEnded_A2D4CADF41808634FCDB4D80E7E142D4();
		void OnLevelUp_B234BF71426C5ADF02D5D5A83DD63068(int32_t AbilityLevel);
		void K2_ActivateAbility();
		void OnStop_Bind();
		void FinishTutorial();
		void ExecuteUbergraph_GA_First_Ability(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
