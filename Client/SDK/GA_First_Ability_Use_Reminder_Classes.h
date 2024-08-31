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
	 * BlueprintGeneratedClass GA_First_Ability_Use_Reminder.GA_First_Ability_Use_Reminder_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_First_Ability_Use_Reminder_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_First_Ability_Use_Reminder;                 // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_C8C0D6FD43180E4F9952D08AA5AC943C();
		void OnStateEnded_C8C0D6FD43180E4F9952D08AA5AC943C();
		void OnActivate_3332DBB94A4D9EC4C0D03B857B3A370F(class UGameplayAbility* ActivatedAbility);
		void K2_ActivateAbility();
		void ShowTutorial();
		void ExecuteUbergraph_GA_First_Ability_Use_Reminder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
