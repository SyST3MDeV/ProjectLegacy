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
	 * 		Name   -> Function DeckGraph.DeckGraph_C.Set Parent Sizes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UVerticalBoxSlot*>                    Slots                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget*                                     TextBox                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckGraph_C::SetParentSizes(TArray<class UVerticalBoxSlot*>* Slots, float Size, class UWidget* TextBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckGraph.DeckGraph_C.Set Parent Sizes");
		
		UDeckGraph_C_SetParentSizes_Params params {};
		params.Size = Size;
		params.TextBox = TextBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slots != nullptr)
			*Slots = params.Slots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckGraph.DeckGraph_C.Set Child Sizes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UImage*>                              Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      Sizes                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UDeckGraph_C::SetChildSizes(TArray<class UImage*>* Array, TArray<float>* Sizes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckGraph.DeckGraph_C.Set Child Sizes");
		
		UDeckGraph_C_SetChildSizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Sizes != nullptr)
			*Sizes = params.Sizes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckGraph.DeckGraph_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDeckGraph_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckGraph.DeckGraph_C.Construct");
		
		UDeckGraph_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckGraph.DeckGraph_C.Setup Bar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDeckTooltipColumns                                Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Overall                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Top                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Middle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Bottom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckGraph_C::SetupBar(EDeckTooltipColumns Category, float Overall, float Top, float Middle, float Bottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckGraph.DeckGraph_C.Setup Bar");
		
		UDeckGraph_C_SetupBar_Params params {};
		params.Category = Category;
		params.Overall = Overall;
		params.Top = Top;
		params.Middle = Middle;
		params.Bottom = Bottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeckGraph.DeckGraph_C.ExecuteUbergraph_DeckGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeckGraph_C::ExecuteUbergraph_DeckGraph(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeckGraph.DeckGraph_C.ExecuteUbergraph_DeckGraph");
		
		UDeckGraph_C_ExecuteUbergraph_DeckGraph_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeckGraph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeckGraph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeckGraph.DeckGraph_C");
		return ptr;
	}

}


