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
	 * Function EpicSignInScreen.EpicSignInScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature
	 */
	struct UEpicSignInScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Username;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                Password;                                                // 0x0018(0x0018)  (Parm)
		bool                                                       RememberMe;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EpicSignInScreen.EpicSignInScreen_C.BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature
	 */
	struct UEpicSignInScreen_C_BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function EpicSignInScreen.EpicSignInScreen_C.NavigateBack
	 */
	struct UEpicSignInScreen_C_NavigateBack_Params
	{	};

	/**
	 * Function EpicSignInScreen.EpicSignInScreen_C.ExecuteUbergraph_EpicSignInScreen
	 */
	struct UEpicSignInScreen_C_ExecuteUbergraph_EpicSignInScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YCU9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EpicSignInScreen.EpicSignInScreen_C.OnForgotPasswordRequest__DelegateSignature
	 */
	struct UEpicSignInScreen_C_OnForgotPasswordRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function EpicSignInScreen.EpicSignInScreen_C.OnLoginRequest__DelegateSignature
	 */
	struct UEpicSignInScreen_C_OnLoginRequest__DelegateSignature_Params
	{
	public:
		class FText                                                Username;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                Password;                                                // 0x0018(0x0018)  (Parm)
		bool                                                       RememberMe;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
