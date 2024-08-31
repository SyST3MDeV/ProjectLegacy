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
	 * Function FriendCodePS4.FriendCodePS4_C.Construct
	 */
	struct UFriendCodePS4_C_Construct_Params
	{	};

	/**
	 * Function FriendCodePS4.FriendCodePS4_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UFriendCodePS4_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendCodePS4.FriendCodePS4_C.OnSendFriendCodeMessageComplete
	 */
	struct UFriendCodePS4_C_OnSendFriendCodeMessageComplete_Params
	{
	public:
		bool                                                       bMessageSent;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendCodePS4.FriendCodePS4_C.ExecuteUbergraph_FriendCodePS4
	 */
	struct UFriendCodePS4_C_ExecuteUbergraph_FriendCodePS4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
