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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.UpdateSignInBackground
	 */
	struct UTitleScreenRoot_C_UpdateSignInBackground_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.Show Buy Access
	 */
	struct UTitleScreenRoot_C_ShowBuyAccess_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.HasAccessRedemption
	 */
	struct UTitleScreenRoot_C_HasAccessRedemption_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.IsReadyForNextState
	 */
	struct UTitleScreenRoot_C_IsReadyForNextState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnKeyDown
	 */
	struct UTitleScreenRoot_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R8DM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.IsShowingPressAnyKey
	 */
	struct UTitleScreenRoot_C_IsShowingPressAnyKey_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_31GC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ShowReturnToTitleError
	 */
	struct UTitleScreenRoot_C_ShowReturnToTitleError_Params
	{
	public:
		bool                                                       ShowedError;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AGGI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ActivateScreen
	 */
	struct UTitleScreenRoot_C_ActivateScreen_Params
	{
	public:
		class UClass*                                              SignupScreen;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnModalDialogClosed
	 */
	struct UTitleScreenRoot_C_OnModalDialogClosed_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ShowEula
	 */
	struct UTitleScreenRoot_C_ShowEula_Params
	{
	public:
		class FText                                                EulaText;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.EnableOrDisableAnalogCursor
	 */
	struct UTitleScreenRoot_C_EnableOrDisableAnalogCursor_Params
	{
	public:
		bool                                                       ShouldEnable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FW82[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.IsChunkDownloadComplete
	 */
	struct UTitleScreenRoot_C_IsChunkDownloadComplete_Params
	{
	public:
		bool                                                       IsComplete;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D92C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnChunkInstallComplete
	 */
	struct UTitleScreenRoot_C_OnChunkInstallComplete_Params
	{
	public:
		EOrionChunkId                                              CompletedChunk;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.StartChunkUpdateProgress
	 */
	struct UTitleScreenRoot_C_StartChunkUpdateProgress_Params
	{
	public:
		EOrionChunkId                                              InChunk;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSY1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.UpdateChunkInstallProgress
	 */
	struct UTitleScreenRoot_C_UpdateChunkInstallProgress_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.AllowAutoLogin
	 */
	struct UTitleScreenRoot_C_AllowAutoLogin_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUYX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.GetStatusText
	 */
	struct UTitleScreenRoot_C_GetStatusText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ShowSignInSelect
	 */
	struct UTitleScreenRoot_C_ShowSignInSelect_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ShowPressAnyKey
	 */
	struct UTitleScreenRoot_C_ShowPressAnyKey_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ShowWaitSpinner
	 */
	struct UTitleScreenRoot_C_ShowWaitSpinner_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.Construct
	 */
	struct UTitleScreenRoot_C_Construct_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.On Input
	 */
	struct UTitleScreenRoot_C_OnInput_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnEnterState
	 */
	struct UTitleScreenRoot_C_OnEnterState_Params
	{
	public:
		EOrionUIState                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnAutoLoginComplete
	 */
	struct UTitleScreenRoot_C_OnAutoLoginComplete_Params
	{
	public:
		ELoginResult                                               Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0M6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnLoginComplete
	 */
	struct UTitleScreenRoot_C_OnLoginComplete_Params
	{
	public:
		ELoginResult                                               Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GEKV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnCreateHeadlessComplete
	 */
	struct UTitleScreenRoot_C_OnCreateHeadlessComplete_Params
	{
	public:
		ECreateAccountResult                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QWBY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnWebForgotPasswordComplete
	 */
	struct UTitleScreenRoot_C_OnWebForgotPasswordComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GTQZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnEulaAvailable
	 */
	struct UTitleScreenRoot_C_OnEulaAvailable_Params
	{
	public:
		class FText                                                EulaText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.RequestAutoLogin
	 */
	struct UTitleScreenRoot_C_RequestAutoLogin_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.RequestHeadlessLogin
	 */
	struct UTitleScreenRoot_C_RequestHeadlessLogin_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.RequestEpicLogin
	 */
	struct UTitleScreenRoot_C_RequestEpicLogin_Params
	{
	public:
		class FText                                                Username;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                Password;                                                // 0x0018(0x0018)  (Parm)
		bool                                                       RememberMe;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.RequestForgotPassword
	 */
	struct UTitleScreenRoot_C_RequestForgotPassword_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.RequestCreateAccount
	 */
	struct UTitleScreenRoot_C_RequestCreateAccount_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnWebCreateEpicAccountComplete
	 */
	struct UTitleScreenRoot_C_OnWebCreateEpicAccountComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3T05[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FString                                              AuthCode;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnLoginAuthCode
	 */
	struct UTitleScreenRoot_C_OnLoginAuthCode_Params
	{
	public:
		ELoginResult                                               Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3BJR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnLinkedConsoleAccount
	 */
	struct UTitleScreenRoot_C_OnLinkedConsoleAccount_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FText                                                ConsoleDisplayName;                                      // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnConfirmLink
	 */
	struct UTitleScreenRoot_C_OnConfirmLink_Params
	{	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnCheckRedeemForAccess
	 */
	struct UTitleScreenRoot_C_OnCheckRedeemForAccess_Params
	{
	public:
		bool                                                       bHasInvite;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasPurchase;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.OnLinkedConsoleCreateLogin
	 */
	struct UTitleScreenRoot_C_OnLinkedConsoleCreateLogin_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FText                                                ConsoleDisplayName;                                      // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleScreenRoot.TitleScreenRoot_C.ExecuteUbergraph_TitleScreenRoot
	 */
	struct UTitleScreenRoot_C_ExecuteUbergraph_TitleScreenRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MEV3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
