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
	 * Function EcosystemRoot.EcosystemRoot_C.OnHandleBackAction
	 */
	struct UEcosystemRoot_C_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.CloseOptionsMenu
	 */
	struct UEcosystemRoot_C_CloseOptionsMenu_Params
	{	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.GetOptionsMenuContent
	 */
	struct UEcosystemRoot_C_GetOptionsMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.HandleMenuAnchorChanged
	 */
	struct UEcosystemRoot_C_HandleMenuAnchorChanged_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UF8D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOrionBaseButton*                                    Button;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.ClearActiveMenu
	 */
	struct UEcosystemRoot_C_ClearActiveMenu_Params
	{	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.HandleButtonClicked
	 */
	struct UEcosystemRoot_C_HandleButtonClicked_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UMenuAnchor*                                         Anchor;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.Construct
	 */
	struct UEcosystemRoot_C_Construct_Params
	{	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.BndEvt__[Anchor] Friends List_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UEcosystemRoot_C_BndEvt__AnchorFriendsList_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.BndEvt__[Anchor] Options_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UEcosystemRoot_C_BndEvt__AnchorOptions_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UEcosystemRoot_C_BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEcosystemRoot_C_BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature
	 */
	struct UEcosystemRoot_C_BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEcosystemRoot_C_BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.PreConstruct
	 */
	struct UEcosystemRoot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EcosystemRoot.EcosystemRoot_C.ExecuteUbergraph_EcosystemRoot
	 */
	struct UEcosystemRoot_C_ExecuteUbergraph_EcosystemRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
