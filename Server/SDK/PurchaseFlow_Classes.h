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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class PurchaseFlow.PurchaseFlowJSBridge
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPurchaseFlowJSBridge : public UObject
	{
	public:
		unsigned char                                              UnknownData_UPY6[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void RequestClose(const class FString& CloseInfo);
		void Receipt(const struct FPurchaseFlowReceiptParam& Receipt);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
