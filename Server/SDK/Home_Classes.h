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
	 * WidgetBlueprintGeneratedClass Home.Home_C
	 * Size -> 0x0050 (FullSize[0x0510] - InheritedSize[0x04C0])
	 */
	class UHome_C : public UOrionHomeScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UXP_Rewards_C*                                       AccountRewards;                                          // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    CraftIterationButton;                                    // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UXP_Rewards_C*                                       HeroRewards;                                             // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHomePlayButton_C*                                   PlayButton;                                              // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URewardsToday_C*                                     TodaysRewards;                                           // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTotalTakeDowns_C*                                   TotalTakeDowns;                                          // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWeeklyQuests_C*                                     WeeklyQuests;                                            // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UFrontEnd_C*                                         FrontEndBP;                                              // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool OnHandleBackAction();
		void OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18();
		void OnKilled_9B73DB17499BD4294FA6BCA78A58FA18();
		void OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18();
		void OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18();
		void Construct();
		void OnActivated();
		void BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnDeactivated();
		void BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Home(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
