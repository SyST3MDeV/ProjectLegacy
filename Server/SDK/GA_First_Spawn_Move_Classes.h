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
	 * BlueprintGeneratedClass GA_First_Spawn_Move.GA_First_Spawn_Move_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_First_Spawn_Move_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_First_Spawn_Move;                           // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_28708DD64829120CD9B1BDA9A8409AA7();
		void OnStateEnded_28708DD64829120CD9B1BDA9A8409AA7();
		void Removed_914D4E904BF944CEBCCC019994B4F83A();
		void K2_ActivateAbility();
		void ShowTutorial();
		void ExecuteUbergraph_GA_First_Spawn_Move(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
