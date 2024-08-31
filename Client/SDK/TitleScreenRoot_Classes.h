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
	 * WidgetBlueprintGeneratedClass TitleScreenRoot.TitleScreenRoot_C
	 * Size -> 0x00E7 (FullSize[0x038F] - InheritedSize[0x02A8])
	 */
	class UTitleScreenRoot_C : public UOrionUIStateWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PressAnyButton;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BuyAccessBgImage;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ChunkInstallUI;                                          // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCircularThrobber*                                   CircularThrobber_1;                                      // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        InstallProgressBar;                                      // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextPressAnyButton;                                 // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextRemainingText;                                  // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     PressAnyButtonOrSpinner;                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_4;                                              // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      SignInSpinner;                                           // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SignInUI;                                                // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SignInWizardBackground;                                  // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            SignInWizardUI;                                          // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SkipEpicBgImage;                                         // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     Text_ProductNotAvailable;                                // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        UseEpicBgImage;                                          // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVersionInfo_C*                                      VersionInfo_228;                                         // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		EOrionChunkId                                              ChunkBeingInstalled;                                     // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9ZQG[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        UpdateInstallProgressTimer;                              // 0x0348(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		class UTitleScreenBase_C*                                  CurrentSignInScreen;                                     // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                DisplayNameLinked;                                       // 0x0358(0x0018) Edit, BlueprintVisible
		class FText                                                ConsoleDisplayNameLinked;                                // 0x0370(0x0018) Edit, BlueprintVisible
		bool                                                       LoginPending;                                            // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AccountWasLinked;                                        // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasInviteToRedeem;                                       // 0x038A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasPurchaseToRedeem;                                     // 0x038B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsShowingError;                                          // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPurchaseRequired;                                      // 0x038D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELoginResult                                               LastLoginResult;                                         // 0x038E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateSignInBackground();
		void ShowBuyAccess();
		void HasAccessRedemption(bool* Result);
		bool IsReadyForNextState();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void IsShowingPressAnyKey(bool* Result);
		void ShowReturnToTitleError(bool* ShowedError);
		void ActivateScreen(class UClass* SignupScreen);
		void OnModalDialogClosed();
		void ShowEula(const class FText& EulaText);
		void EnableOrDisableAnalogCursor(bool ShouldEnable);
		void IsChunkDownloadComplete(bool* IsComplete);
		void OnChunkInstallComplete(EOrionChunkId CompletedChunk);
		void StartChunkUpdateProgress(EOrionChunkId InChunk);
		void UpdateChunkInstallProgress();
		void AllowAutoLogin(bool* Result);
		class FText GetStatusText();
		void ShowSignInSelect();
		void ShowPressAnyKey();
		void ShowWaitSpinner();
		void Construct();
		void OnInput();
		void OnEnterState(EOrionUIState PreviousState);
		void OnAutoLoginComplete(ELoginResult Result, const class FText& Message);
		void OnLoginComplete(ELoginResult Result, const class FText& Message);
		void OnCreateHeadlessComplete(ECreateAccountResult Result, const class FText& Message);
		void OnWebForgotPasswordComplete(bool bSuccess, const class FText& Message);
		void OnEulaAvailable(const class FText& EulaText);
		void RequestAutoLogin();
		void RequestHeadlessLogin();
		void RequestEpicLogin(const class FText& Username, const class FText& Password, bool RememberMe);
		void RequestForgotPassword(const class FText& Email);
		void RequestCreateAccount(const class FText& Email);
		void OnWebCreateEpicAccountComplete(bool bSuccess, const class FText& Message, const class FString& AuthCode);
		void OnLoginAuthCode(ELoginResult Result, const class FText& Message);
		void OnLinkedConsoleAccount(const class FText& DisplayName, const class FText& ConsoleDisplayName);
		void OnConfirmLink();
		void OnCheckRedeemForAccess(bool bHasInvite, bool bHasPurchase);
		void OnLinkedConsoleCreateLogin(const class FText& DisplayName, const class FText& ConsoleDisplayName);
		void ExecuteUbergraph_TitleScreenRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
