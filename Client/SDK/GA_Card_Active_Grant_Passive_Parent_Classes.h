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
	 * GameplayAbilityBlueprintGeneratedClass GA_Card_Active_Grant_Passive_Parent.GA_Card_Active_Grant_Passive_Parent_C
	 * Size -> 0x0024 (FullSize[0x0A74] - InheritedSize[0x0A50])
	 */
	class UGA_Card_Active_Grant_Passive_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              GE_ToApply;                                              // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    AbilityLevel;                                            // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOKY[0x4];                                   // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          CardActivateSound;                                       // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Stacks;                                                  // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_Active_Grant_Passive_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
