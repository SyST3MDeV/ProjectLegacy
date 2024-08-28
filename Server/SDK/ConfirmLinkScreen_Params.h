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
	 * Function ConfirmLinkScreen.ConfirmLinkScreen_C.GetUserNameText
	 */
	struct UConfirmLinkScreen_C_GetUserNameText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ConfirmLinkScreen.ConfirmLinkScreen_C.BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_25_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UConfirmLinkScreen_C_BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_25_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConfirmLinkScreen.ConfirmLinkScreen_C.NavigateBack
	 */
	struct UConfirmLinkScreen_C_NavigateBack_Params
	{	};

	/**
	 * Function ConfirmLinkScreen.ConfirmLinkScreen_C.ExecuteUbergraph_ConfirmLinkScreen
	 */
	struct UConfirmLinkScreen_C_ExecuteUbergraph_ConfirmLinkScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S11P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
