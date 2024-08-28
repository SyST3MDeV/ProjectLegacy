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
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Get_OrionTextPlayerName_Text_1
	 */
	struct ULocalPlayerInfoCard_C_Get_OrionTextPlayerName_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.HandleProfileStatsUpdated
	 */
	struct ULocalPlayerInfoCard_C_HandleProfileStatsUpdated_Params
	{	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.HandlePartyChanged
	 */
	struct ULocalPlayerInfoCard_C_HandlePartyChanged_Params
	{	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Close Context Menu
	 */
	struct ULocalPlayerInfoCard_C_CloseContextMenu_Params
	{	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.GetMemberContextMenu
	 */
	struct ULocalPlayerInfoCard_C_GetMemberContextMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Construct
	 */
	struct ULocalPlayerInfoCard_C_Construct_Params
	{	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.BndEvt__[Menu] Actions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct ULocalPlayerInfoCard_C_BndEvt__MenuActions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.BP_OnClicked
	 */
	struct ULocalPlayerInfoCard_C_BP_OnClicked_Params
	{	};

	/**
	 * Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.ExecuteUbergraph_LocalPlayerInfoCard
	 */
	struct ULocalPlayerInfoCard_C_ExecuteUbergraph_LocalPlayerInfoCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
