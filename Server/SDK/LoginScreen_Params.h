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
	 * Function LoginScreen.LoginScreen_C.OnMouseButtonUp
	 */
	struct ULoginScreen_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6ZLR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnMouseButtonDown
	 */
	struct ULoginScreen_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZW4K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098
	 */
	struct ULoginScreen_C_OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098_Params
	{	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnKilled_9B4AE3274E2C73847AC4CD823BF8C098
	 */
	struct ULoginScreen_C_OnKilled_9B4AE3274E2C73847AC4CD823BF8C098_Params
	{	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098
	 */
	struct ULoginScreen_C_OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098_Params
	{	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098
	 */
	struct ULoginScreen_C_OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098_Params
	{	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnEnterState
	 */
	struct ULoginScreen_C_OnEnterState_Params
	{
	public:
		EOrionUIState                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnLoginComplete
	 */
	struct ULoginScreen_C_OnLoginComplete_Params
	{
	public:
		ELoginResult                                               Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ERA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature
	 */
	struct ULoginScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Username;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                Password;                                                // 0x0018(0x0018)  (Parm)
		bool                                                       RememberMe;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature
	 */
	struct ULoginScreen_C_BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature
	 */
	struct ULoginScreen_C_BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.Tick
	 */
	struct ULoginScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnWebCreateAccountComplete
	 */
	struct ULoginScreen_C_OnWebCreateAccountComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_58VN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FString                                              AuthCode;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnWebForgotPasswordComplete
	 */
	struct ULoginScreen_C_OnWebForgotPasswordComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QTMB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnLoginAuthCodeComplete
	 */
	struct ULoginScreen_C_OnLoginAuthCodeComplete_Params
	{
	public:
		ELoginResult                                               Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2GLO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature
	 */
	struct ULoginScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature
	 */
	struct ULoginScreen_C_BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginScreen.LoginScreen_C.Construct
	 */
	struct ULoginScreen_C_Construct_Params
	{	};

	/**
	 * Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
	 */
	struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ORJM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnAutoLoginFinished__DelegateSignature
	 */
	struct ULoginScreen_C_OnAutoLoginFinished__DelegateSignature_Params
	{	};

	/**
	 * Function LoginScreen.LoginScreen_C.OnAutoLoginStarted__DelegateSignature
	 */
	struct ULoginScreen_C_OnAutoLoginStarted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
