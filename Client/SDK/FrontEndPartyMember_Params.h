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
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.Get Quick Invite Menu
	 */
	struct UFrontEndPartyMember_C_GetQuickInviteMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.Refresh Widget
	 */
	struct UFrontEndPartyMember_C_RefreshWidget_Params
	{	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.CloseInviteMenu
	 */
	struct UFrontEndPartyMember_C_CloseInviteMenu_Params
	{	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.ClosePartyMemberMenu
	 */
	struct UFrontEndPartyMember_C_ClosePartyMemberMenu_Params
	{	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.GetPartyMemberContextMenu
	 */
	struct UFrontEndPartyMember_C_GetPartyMemberContextMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.UpdatePartyMember
	 */
	struct UFrontEndPartyMember_C_UpdatePartyMember_Params
	{
	public:
		class UOrionPersistentPartyMember*                         PartyMember;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__[Anchor] Party Member Options_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UFrontEndPartyMember_C_BndEvt__AnchorPartyMemberOptions_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__[Anchor] Invite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UFrontEndPartyMember_C_BndEvt__AnchorInvite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UFrontEndPartyMember_C_BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UFrontEndPartyMember_C_BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UFrontEndPartyMember_C_BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UFrontEndPartyMember_C_BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.Construct
	 */
	struct UFrontEndPartyMember_C_Construct_Params
	{	};

	/**
	 * Function FrontEndPartyMember.FrontEndPartyMember_C.ExecuteUbergraph_FrontEndPartyMember
	 */
	struct UFrontEndPartyMember_C_ExecuteUbergraph_FrontEndPartyMember_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U8OJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
