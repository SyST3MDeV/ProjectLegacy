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
	 * 		Name   -> Function SprintWidget.SprintWidget_C.OnSprintFull
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USprintWidget_C::OnSprintFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SprintWidget.SprintWidget_C.OnSprintFull");
		
		USprintWidget_C_OnSprintFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SprintWidget.SprintWidget_C.OnSprintEmpty
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USprintWidget_C::OnSprintEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SprintWidget.SprintWidget_C.OnSprintEmpty");
		
		USprintWidget_C_OnSprintEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SprintWidget.SprintWidget_C.ExecuteUbergraph_SprintWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USprintWidget_C::ExecuteUbergraph_SprintWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SprintWidget.SprintWidget_C.ExecuteUbergraph_SprintWidget");
		
		USprintWidget_C_ExecuteUbergraph_SprintWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USprintWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USprintWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SprintWidget.SprintWidget_C");
		return ptr;
	}

}


