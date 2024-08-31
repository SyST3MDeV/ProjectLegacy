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
	 * Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Construct
	 */
	struct UEpicPurchaseFlowDisplay_C_Construct_Params
	{	};

	/**
	 * Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Display Widget
	 */
	struct UEpicPurchaseFlowDisplay_C_DisplayWidget_Params
	{
	public:
		class UWidget*                                             WebWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              OfferId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Dismiss Widget
	 */
	struct UEpicPurchaseFlowDisplay_C_DismissWidget_Params
	{	};

	/**
	 * Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UEpicPurchaseFlowDisplay_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Destruct
	 */
	struct UEpicPurchaseFlowDisplay_C_Destruct_Params
	{	};

	/**
	 * Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.ExecuteUbergraph_EpicPurchaseFlowDisplay
	 */
	struct UEpicPurchaseFlowDisplay_C_ExecuteUbergraph_EpicPurchaseFlowDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BQZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
