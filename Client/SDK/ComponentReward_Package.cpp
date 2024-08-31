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
	 * 		Name   -> Function ComponentReward.ComponentReward_C.SetComponentData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionComponentItemDefinition*               CraftingComponent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UComponentReward_C::SetComponentData(class UOrionComponentItemDefinition* CraftingComponent, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentReward.ComponentReward_C.SetComponentData");
		
		UComponentReward_C_SetComponentData_Params params {};
		params.CraftingComponent = CraftingComponent;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComponentReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComponentReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ComponentReward.ComponentReward_C");
		return ptr;
	}

}


