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
	 * WidgetBlueprintGeneratedClass TopLevelOptions.TopLevelOptions_C
	 * Size -> 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
	 */
	class UTopLevelOptions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    DefaultButtonExitGame;                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonSettings;                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    About;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCalloutMenu_C*                                      CalloutMenu;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    ControlsButton;                                          // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAnnouncement;                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonExitReplay;                                 // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonLeaveMatch;                                 // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonReportBug;                                  // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageIconCredits;                                        // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageIconExitGame;                                       // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageIconFeedback;                                       // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageIconSettings;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    Support;                                                 // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             RequestClose;                                            // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnTimedOut_D9428E1C4FD68BCA2D83C1BA1C1E2AC4();
		void OnKilled_D9428E1C4FD68BCA2D83C1BA1C1E2AC4();
		void OnDeclined_D9428E1C4FD68BCA2D83C1BA1C1E2AC4();
		void OnConfirmed_D9428E1C4FD68BCA2D83C1BA1C1E2AC4();
		void OnTimedOut_DCD80556441FB44B79F62A82D30EC49C();
		void OnKilled_DCD80556441FB44B79F62A82D30EC49C();
		void OnDeclined_DCD80556441FB44B79F62A82D30EC49C();
		void OnConfirmed_DCD80556441FB44B79F62A82D30EC49C();
		void OnTimedOut_2E8BE94044ECC88A4D86FE91C81137DA();
		void OnKilled_2E8BE94044ECC88A4D86FE91C81137DA();
		void OnDeclined_2E8BE94044ECC88A4D86FE91C81137DA();
		void OnConfirmed_2E8BE94044ECC88A4D86FE91C81137DA();
		void OnTimedOut_5D562E95456DFCC881BFC09C448010FA();
		void OnKilled_5D562E95456DFCC881BFC09C448010FA();
		void OnDeclined_5D562E95456DFCC881BFC09C448010FA();
		void OnConfirmed_5D562E95456DFCC881BFC09C448010FA();
		void BndEvt__DefaultButtonSettings_K2Node_ComponentBoundEvent_3431_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonExitGame_K2Node_ComponentBoundEvent_3437_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Construct();
		void BndEvt__DefaultButtonLeaveMatch_K2Node_ComponentBoundEvent_642_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__Feedback_K2Node_ComponentBoundEvent_259_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__About_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__ControlsButton_K2Node_ComponentBoundEvent_855_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButton_C_0_K2Node_ComponentBoundEvent_71_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonReportPlayer_K2Node_ComponentBoundEvent_146_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonAnnouncement_K2Node_ComponentBoundEvent_29_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonExitReplay_K2Node_ComponentBoundEvent_180_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_TopLevelOptions(int32_t EntryPoint);
		void RequestClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
