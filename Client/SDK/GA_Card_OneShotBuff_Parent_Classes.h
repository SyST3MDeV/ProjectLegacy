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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C
	 * Size -> 0x0028 (FullSize[0x0A78] - InheritedSize[0x0A50])
	 */
	class UGA_Card_OneShotBuff_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GE_Level;                                                // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Stacks;                                                  // 0x0A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UsePlayerLevel;                                          // 0x0A68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1JSV[0x7];                                   // 0x0A69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        GameplayCueBurst;                                        // 0x0A70(0x0008) Edit, BlueprintVisible

	public:
		void GetPlayerLevel();
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OneShotBuff_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
