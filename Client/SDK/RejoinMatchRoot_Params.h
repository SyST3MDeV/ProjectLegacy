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
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.ShowRejoinButtons
	 */
	struct URejoinMatchRoot_C_ShowRejoinButtons_Params
	{	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.ShowRejoinInProgress
	 */
	struct URejoinMatchRoot_C_ShowRejoinInProgress_Params
	{	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1
	 */
	struct URejoinMatchRoot_C_OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1_Params
	{	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.OnKilled_C55C791C4783817F3A0C30A6E503F4C1
	 */
	struct URejoinMatchRoot_C_OnKilled_C55C791C4783817F3A0C30A6E503F4C1_Params
	{	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.OnDeclined_C55C791C4783817F3A0C30A6E503F4C1
	 */
	struct URejoinMatchRoot_C_OnDeclined_C55C791C4783817F3A0C30A6E503F4C1_Params
	{	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1
	 */
	struct URejoinMatchRoot_C_OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1_Params
	{	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature
	 */
	struct URejoinMatchRoot_C_BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature
	 */
	struct URejoinMatchRoot_C_BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.OnEnterState
	 */
	struct URejoinMatchRoot_C_OnEnterState_Params
	{
	public:
		EOrionUIState                                              PreviousState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.HideSpinner
	 */
	struct URejoinMatchRoot_C_HideSpinner_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RejoinMatchRoot.RejoinMatchRoot_C.ExecuteUbergraph_RejoinMatchRoot
	 */
	struct URejoinMatchRoot_C_ExecuteUbergraph_RejoinMatchRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
