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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C
	 * Size -> 0x001C (FullSize[0x0A6C] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Toggle_DMG_Armor_MRegen_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      DMGARMR;                                                 // 0x0A58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    Index;                                                   // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_13ED170945060F3DD0D44EAD5F84DBDD();
		void OnStateEnded_13ED170945060F3DD0D44EAD5F84DBDD();
		void OnPress_25CE4FFC463E8F6C06A604B78A885198(float TimeWaited);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Toggle_DMG_Armor_MRegen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
