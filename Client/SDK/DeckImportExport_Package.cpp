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
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckImportExport.DeckImportExport_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_29_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckImportExport_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_29_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckImportExport.DeckImportExport_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_29_OrionBaseButtonClicked__DelegateSignature");
		
		UDeckImportExport_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_29_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckImportExport.DeckImportExport_C.ExecuteUbergraph_DeckImportExport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckImportExport_C::ExecuteUbergraph_DeckImportExport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckImportExport.DeckImportExport_C.ExecuteUbergraph_DeckImportExport");
		
		UDeckImportExport_C_ExecuteUbergraph_DeckImportExport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeckImportExport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeckImportExport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeckImportExport.DeckImportExport_C");
		return ptr;
	}

}


