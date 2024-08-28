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
	 * Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
	 */
	struct UPurchaseFlowJSBridge_RequestClose_Params
	{
	public:
		class FString                                              CloseInfo;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
	 */
	struct UPurchaseFlowJSBridge_Receipt_Params
	{
	public:
		struct FPurchaseFlowReceiptParam                           Receipt;                                                 // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
