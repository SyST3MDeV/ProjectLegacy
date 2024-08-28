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
	 * BlueprintGeneratedClass GA_Passive_CombatSlowAfterFall.GA_Passive_CombatSlowAfterFall_C
	 * Size -> 0x0070 (FullSize[0x0AC0] - InheritedSize[0x0A50])
	 */
	class UGA_Passive_CombatSlowAfterFall_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        AbilityType_Basic_Primary;                               // 0x0A58(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagContainer                               FallingTagContainer;                                     // 0x0A60(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        Status_Falling;                                          // 0x0A80(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_CombatSlow_Shooter;                                   // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FGameplayTag                                        AbilityRange_Melee;                                      // 0x0A90(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              GE_CombatSlow_Melee;                                     // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CachedIsMeleeAbility;                                    // 0x0AA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CachedWasFalling;                                        // 0x0AA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQCZ[0x6];                                   // 0x0AAA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        MeleeTag;                                                // 0x0AB0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        ShooterTag;                                              // 0x0AB8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Removed_0675F0E74A92822E06C88B9151B1B77A();
		void OnActivate_CA017181426241776E2A56B4842DE34D(class UGameplayAbility* ActivatedAbility);
		void Added_3EEF4DC74AA9B2D3CE8C3395C2432E47();
		void Added_57FA8CD9486AC00812E34FB86AE0B62D();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Passive_CombatSlowAfterFall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
