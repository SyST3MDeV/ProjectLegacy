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
	 * 		Name   -> Function KDAWidget-V4.KDAWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UKDAWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KDAWidget-V4.KDAWidget-V4_C.Construct");
		
		UKDAWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KDAWidget-V4.KDAWidget-V4_C.ExecuteUbergraph_KDAWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKDAWidgetV4_C::ExecuteUbergraph_KDAWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KDAWidget-V4.KDAWidget-V4_C.ExecuteUbergraph_KDAWidget-V4");
		
		UKDAWidgetV4_C_ExecuteUbergraph_KDAWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKDAWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKDAWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KDAWidget_V4.KDAWidget-V4_C");
		return ptr;
	}

}


