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
	 * 		Name   -> Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.ShowLevelUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetColumnUltV4_C::ShowLevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.ShowLevelUp");
		
		UAbilityWidgetColumnUltV4_C_ShowLevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.HideLevelUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityWidgetColumnUltV4_C::HideLevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.HideLevelUp");
		
		UAbilityWidgetColumnUltV4_C_HideLevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityWidgetColumnUltV4_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.OnAnimationFinished");
		
		UAbilityWidgetColumnUltV4_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.ExecuteUbergraph_AbilityWidgetColumn-Ult-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityWidgetColumnUltV4_C::ExecuteUbergraph_AbilityWidgetColumnUltV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidgetColumn-Ult-V4.AbilityWidgetColumn-Ult-V4_C.ExecuteUbergraph_AbilityWidgetColumn-Ult-V4");
		
		UAbilityWidgetColumnUltV4_C_ExecuteUbergraph_AbilityWidgetColumnUltV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityWidgetColumnUltV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityWidgetColumnUltV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityWidgetColumn_Ult_V4.AbilityWidgetColumn-Ult-V4_C");
		return ptr;
	}

}


