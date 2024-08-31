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
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.Construct
	 */
	struct UPurchaseConfirmation_C_Construct_Params
	{	};

	/**
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.OnBeginPurchase
	 */
	struct UPurchaseConfirmation_C_OnBeginPurchase_Params
	{	};

	/**
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.OnPurchaseComplete
	 */
	struct UPurchaseConfirmation_C_OnPurchaseComplete_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.OnActivated
	 */
	struct UPurchaseConfirmation_C_OnActivated_Params
	{	};

	/**
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UPurchaseConfirmation_C_BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.OnDeactivated
	 */
	struct UPurchaseConfirmation_C_OnDeactivated_Params
	{	};

	/**
	 * Function PurchaseConfirmation.PurchaseConfirmation_C.ExecuteUbergraph_PurchaseConfirmation
	 */
	struct UPurchaseConfirmation_C_ExecuteUbergraph_PurchaseConfirmation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
