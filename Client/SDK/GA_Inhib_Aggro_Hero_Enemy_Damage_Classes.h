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
	 * BlueprintGeneratedClass GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_Inhib_Aggro_Hero_Enemy_Damage_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_Inhib_Aggro_Hero_Enemy_Damage;              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_4680361C44E069BC1F40D69501A253B1();
		void OnStateEnded_4680361C44E069BC1F40D69501A253B1();
		void K2_ActivateAbility();
		void OnStop_Bind();
		void ExecuteUbergraph_GA_Inhib_Aggro_Hero_Enemy_Damage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
