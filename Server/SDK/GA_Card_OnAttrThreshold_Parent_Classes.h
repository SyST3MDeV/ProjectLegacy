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
	 * BlueprintGeneratedClass GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C
	 * Size -> 0x0060 (FullSize[0x0AB0] - InheritedSize[0x0A50])
	 */
	class UGA_Card_OnAttrThreshold_Parent_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayAttribute                                  AttributeCurrent;                                        // 0x0A58(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayAttribute                                  AttributeMax;                                            // 0x0A78(0x0020) Edit, BlueprintVisible
		EWaitAttributeChangeComparison                             Comparison;                                              // 0x0A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MV6K[0x3];                                   // 0x0A99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ComparisonValue;                                         // 0x0A9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              GameplayEffect;                                          // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GE_Level;                                                // 0x0AA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    GE_Stacks;                                               // 0x0AAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_E7D361854EAB78E42679388FE63B9EFF();
		void OnStateEnded_E7D361854EAB78E42679388FE63B9EFF();
		void OnChange_B7C203274C3DB085B7FEEEAC791B1542(bool bMatchesComparison, float CurrentRatio);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Card_OnAttrThreshold_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
