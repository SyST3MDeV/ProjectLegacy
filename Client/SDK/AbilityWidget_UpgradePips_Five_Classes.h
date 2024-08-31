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
	 * WidgetBlueprintGeneratedClass AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C
	 * Size -> 0x0090 (FullSize[0x0390] - InheritedSize[0x0300])
	 */
	class UAbilityWidget_UpgradePips_Five_C : public UOrionAbilityPipsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Level_0_Upgrade;                                         // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_0_Idle;                                            // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_0_Enter;                                           // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    EnterExitAnim;                                           // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_4_Idle;                                            // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_3_Idle;                                            // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_2_Idle;                                            // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_1_Idle;                                            // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_4_Upgrade;                                         // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_3_Upgrade;                                         // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_2_Upgrade;                                         // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_1_Upgrade;                                         // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_4_Enter;                                           // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_3_Enter;                                           // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_2_Enter;                                           // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Level_1_Enter;                                           // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PipImage;                                                // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void SetNumOfPips(EAbilityPipType _NumOfPips);
		void ExecuteUbergraph_AbilityWidget_UpgradePips_Five(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
