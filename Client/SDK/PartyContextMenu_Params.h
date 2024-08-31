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
	 * Function PartyContextMenu.PartyContextMenu_C.Update Party Member
	 */
	struct UPartyContextMenu_C_UpdatePartyMember_Params
	{
	public:
		class UOrionPersistentPartyMember*                         PartyMember;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.PreConstruct
	 */
	struct UPartyContextMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonKick_K2Node_ComponentBoundEvent_1811_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonKick_K2Node_ComponentBoundEvent_1811_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonPromote_K2Node_ComponentBoundEvent_1826_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonPromote_K2Node_ComponentBoundEvent_1826_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonLeave_K2Node_ComponentBoundEvent_1840_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonLeave_K2Node_ComponentBoundEvent_1840_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonSendFriendRequest_K2Node_ComponentBoundEvent_1854_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonSendFriendRequest_K2Node_ComponentBoundEvent_1854_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonAcceptFriend_K2Node_ComponentBoundEvent_1869_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonAcceptFriend_K2Node_ComponentBoundEvent_1869_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonDeclineFriend_K2Node_ComponentBoundEvent_1885_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonDeclineFriend_K2Node_ComponentBoundEvent_1885_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.BndEvt__DefaultButtonWhisper_K2Node_ComponentBoundEvent_1902_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UPartyContextMenu_C_BndEvt__DefaultButtonWhisper_K2Node_ComponentBoundEvent_1902_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.Destruct
	 */
	struct UPartyContextMenu_C_Destruct_Params
	{	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.ExecuteUbergraph_PartyContextMenu
	 */
	struct UPartyContextMenu_C_ExecuteUbergraph_PartyContextMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1GFQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.OnCloseRequested__DelegateSignature
	 */
	struct UPartyContextMenu_C_OnCloseRequested__DelegateSignature_Params
	{	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.Whisper__DelegateSignature
	 */
	struct UPartyContextMenu_C_Whisper__DelegateSignature_Params
	{	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.Promote to Leader__DelegateSignature
	 */
	struct UPartyContextMenu_C_PromotetoLeader__DelegateSignature_Params
	{	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.Kick From Party__DelegateSignature
	 */
	struct UPartyContextMenu_C_KickFromParty__DelegateSignature_Params
	{	};

	/**
	 * Function PartyContextMenu.PartyContextMenu_C.Leave Party__DelegateSignature
	 */
	struct UPartyContextMenu_C_LeaveParty__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
