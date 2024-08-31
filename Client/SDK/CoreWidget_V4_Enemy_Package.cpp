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
	 * 		Name   -> Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCoreWidgetV4_Enemy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.Construct");
		
		UCoreWidgetV4_Enemy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.OnCoreExposed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreWidgetV4_Enemy_C::OnCoreExposed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.OnCoreExposed");
		
		UCoreWidgetV4_Enemy_C_OnCoreExposed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.OnCoreDamaged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCoreWidgetV4_Enemy_C::OnCoreDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.OnCoreDamaged");
		
		UCoreWidgetV4_Enemy_C_OnCoreDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.ExecuteUbergraph_CoreWidget-V4_Enemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoreWidgetV4_Enemy_C::ExecuteUbergraph_CoreWidgetV4_Enemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreWidget-V4_Enemy.CoreWidget-V4_Enemy_C.ExecuteUbergraph_CoreWidget-V4_Enemy");
		
		UCoreWidgetV4_Enemy_C_ExecuteUbergraph_CoreWidgetV4_Enemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreWidgetV4_Enemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreWidgetV4_Enemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CoreWidget_V4_Enemy.CoreWidget-V4_Enemy_C");
		return ptr;
	}

}


