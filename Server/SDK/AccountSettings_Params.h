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
	 * Function AccountSettings.AccountSettings_C.GetPSNOnlineIdText
	 */
	struct UAccountSettings_C_GetPSNOnlineIdText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.GetEpicAccountEmailText
	 */
	struct UAccountSettings_C_GetEpicAccountEmailText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.GetManageAccountEnabled
	 */
	struct UAccountSettings_C_GetManageAccountEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5QIH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AccountSettings.AccountSettings_C.GetUnlinkPSNVisibility
	 */
	struct UAccountSettings_C_GetUnlinkPSNVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GOZW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AccountSettings.AccountSettings_C.GetUnlinkingPSN
	 */
	struct UAccountSettings_C_GetUnlinkingPSN_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.GetUpgradeAccountVisibility
	 */
	struct UAccountSettings_C_GetUpgradeAccountVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.Refresh
	 */
	struct UAccountSettings_C_Refresh_Params
	{	};

	/**
	 * Function AccountSettings.AccountSettings_C.OnActivated
	 */
	struct UAccountSettings_C_OnActivated_Params
	{	};

	/**
	 * Function AccountSettings.AccountSettings_C.BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UAccountSettings_C_BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UAccountSettings_C_BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UAccountSettings_C_BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.OnUpgradeAccountComplete
	 */
	struct UAccountSettings_C_OnUpgradeAccountComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4ROB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.OnUnlinkConsoleAccountComplete
	 */
	struct UAccountSettings_C_OnUnlinkConsoleAccountComplete_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8EJX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AccountSettings.AccountSettings_C.ExecuteUbergraph_AccountSettings
	 */
	struct UAccountSettings_C_ExecuteUbergraph_AccountSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JRVN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AccountSettings.AccountSettings_C.CloseSettings__DelegateSignature
	 */
	struct UAccountSettings_C_CloseSettings__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
