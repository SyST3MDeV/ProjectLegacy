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
	 * WidgetBlueprintGeneratedClass Notification.Notification_C
	 * Size -> 0x0210 (FullSize[0x0440] - InheritedSize[0x0230])
	 */
	class UNotification_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimateIn;                                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonLeft;                                       // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonRight;                                      // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBoxButtons;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageTypeIndicator;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextBody;                                           // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextTitle;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SwitcherIcon;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCircularThrobber*                                   Throbber;                                                // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_915;                                               // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		unsigned char                                              UnknownData_TR45[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionNotification                                  NotificationData;                                        // 0x0290(0x01A0) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             ExitAnimationFinished;                                   // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FOrionNotification GetNotification();
		void PlayExitAnimation();
		void PlayIntroAnimation();
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_919_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButton_C_63_K2Node_ComponentBoundEvent_927_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_Notification(int32_t EntryPoint);
		void ExitAnimationFinished__DelegateSignature(class UNotification_C* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
