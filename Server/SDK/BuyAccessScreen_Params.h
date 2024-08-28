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
	 * Function BuyAccessScreen.BuyAccessScreen_C.Get_SignInForAccessButton_Visibility_1
	 */
	struct UBuyAccessScreen_C_Get_SignInForAccessButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CHHF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BuyAccessScreen.BuyAccessScreen_C.BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UBuyAccessScreen_C_BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuyAccessScreen.BuyAccessScreen_C.NavigateBack
	 */
	struct UBuyAccessScreen_C_NavigateBack_Params
	{	};

	/**
	 * Function BuyAccessScreen.BuyAccessScreen_C.BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UBuyAccessScreen_C_BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuyAccessScreen.BuyAccessScreen_C.OnStoreClosed
	 */
	struct UBuyAccessScreen_C_OnStoreClosed_Params
	{
	public:
		bool                                                       bPurchased;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuyAccessScreen.BuyAccessScreen_C.OnActivated
	 */
	struct UBuyAccessScreen_C_OnActivated_Params
	{	};

	/**
	 * Function BuyAccessScreen.BuyAccessScreen_C.ExecuteUbergraph_BuyAccessScreen
	 */
	struct UBuyAccessScreen_C_ExecuteUbergraph_BuyAccessScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FZ5L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
