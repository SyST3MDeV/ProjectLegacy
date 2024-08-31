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
	 * Function FriendCodes.FriendCodes_C.SendFriendCodesComplete
	 */
	struct UFriendCodes_C_SendFriendCodesComplete_Params
	{
	public:
		bool                                                       bSent;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendCodes.FriendCodes_C.SendFriendCodes
	 */
	struct UFriendCodes_C_SendFriendCodes_Params
	{	};

	/**
	 * Function FriendCodes.FriendCodes_C.GetNumFriendCodes
	 */
	struct UFriendCodes_C_GetNumFriendCodes_Params
	{
	public:
		int32_t                                                    NumCodes;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WEJV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FriendCodes.FriendCodes_C.Get_NumFriendCodes_Text_1
	 */
	struct UFriendCodes_C_Get_NumFriendCodes_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FriendCodes.FriendCodes_C.Refresh
	 */
	struct UFriendCodes_C_Refresh_Params
	{	};

	/**
	 * Function FriendCodes.FriendCodes_C.Construct
	 */
	struct UFriendCodes_C_Construct_Params
	{	};

	/**
	 * Function FriendCodes.FriendCodes_C.OnQueryFriendCodes
	 */
	struct UFriendCodes_C_OnQueryFriendCodes_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8J0X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFriendCode>                                 FriendCodes;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function FriendCodes.FriendCodes_C.BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UFriendCodes_C_BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendCodes.FriendCodes_C.OnIssueFriendCode
	 */
	struct UFriendCodes_C_OnIssueFriendCode_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FE4C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_FE4E[0x20];
		//struct FFriendCode                                         FriendCode;                                              // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FriendCodes.FriendCodes_C.OnQueryUnredeemedAfterIssue
	 */
	struct UFriendCodes_C_OnQueryUnredeemedAfterIssue_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D6LG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFriendCode>                                 FriendCodes;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function FriendCodes.FriendCodes_C.ExecuteUbergraph_FriendCodes
	 */
	struct UFriendCodes_C_ExecuteUbergraph_FriendCodes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
