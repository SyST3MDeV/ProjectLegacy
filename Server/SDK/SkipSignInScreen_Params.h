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
	 * Function SkipSignInScreen.SkipSignInScreen_C.Get_ContinuePlayButton_bIsEnabled_1
	 */
	struct USkipSignInScreen_C_Get_ContinuePlayButton_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DO14[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USkipSignInScreen_C_BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USkipSignInScreen_C_BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.NavigateBack
	 */
	struct USkipSignInScreen_C_NavigateBack_Params
	{	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.OnActivated
	 */
	struct USkipSignInScreen_C_OnActivated_Params
	{	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.OnDoneWaiting
	 */
	struct USkipSignInScreen_C_OnDoneWaiting_Params
	{	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature
	 */
	struct USkipSignInScreen_C_BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkipSignInScreen.SkipSignInScreen_C.ExecuteUbergraph_SkipSignInScreen
	 */
	struct USkipSignInScreen_C_ExecuteUbergraph_SkipSignInScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GCZ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
