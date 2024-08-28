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
	 * 		Name   -> Function VictoryDefeatScreen.VictoryDefeatScreen_C.ShowVictory
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UVictoryDefeatScreen_C::ShowVictory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatScreen.VictoryDefeatScreen_C.ShowVictory");
		
		UVictoryDefeatScreen_C_ShowVictory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VictoryDefeatScreen.VictoryDefeatScreen_C.ShowDefeat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UVictoryDefeatScreen_C::ShowDefeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatScreen.VictoryDefeatScreen_C.ShowDefeat");
		
		UVictoryDefeatScreen_C_ShowDefeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VictoryDefeatScreen.VictoryDefeatScreen_C.ExecuteUbergraph_VictoryDefeatScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVictoryDefeatScreen_C::ExecuteUbergraph_VictoryDefeatScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatScreen.VictoryDefeatScreen_C.ExecuteUbergraph_VictoryDefeatScreen");
		
		UVictoryDefeatScreen_C_ExecuteUbergraph_VictoryDefeatScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VictoryDefeatScreen.VictoryDefeatScreen_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UVictoryDefeatScreen_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryDefeatScreen.VictoryDefeatScreen_C.NewEventDispatcher_0__DelegateSignature");
		
		UVictoryDefeatScreen_C_NewEventDispatcher_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryDefeatScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryDefeatScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VictoryDefeatScreen.VictoryDefeatScreen_C");
		return ptr;
	}

}


