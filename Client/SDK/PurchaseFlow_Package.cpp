/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x032B6980
	 * 		Name   -> Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      CloseInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose");
		
		UPurchaseFlowJSBridge_RequestClose_Params params {};
		params.CloseInfo = CloseInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x032B68B0
	 * 		Name   -> Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FPurchaseFlowReceiptParam                   Receipt                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UPurchaseFlowJSBridge::Receipt(const struct FPurchaseFlowReceiptParam& Receipt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.Receipt");
		
		UPurchaseFlowJSBridge_Receipt_Params params {};
		params.Receipt = Receipt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPurchaseFlowJSBridge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPurchaseFlowJSBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PurchaseFlow.PurchaseFlowJSBridge");
		return ptr;
	}

}


