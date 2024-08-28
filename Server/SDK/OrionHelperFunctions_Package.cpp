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
	 * 		Name   -> Function OrionHelperFunctions.OrionHelperFunctions_C.GetExtraRandomInt
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SeedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxReturnValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UOrionHelperFunctions_C::STATIC_GetExtraRandomInt(float SeedValue, int32_t MaxReturnValue, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionHelperFunctions.OrionHelperFunctions_C.GetExtraRandomInt");
		
		UOrionHelperFunctions_C_GetExtraRandomInt_Params params {};
		params.SeedValue = SeedValue;
		params.MaxReturnValue = MaxReturnValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionHelperFunctions.OrionHelperFunctions_C.MakeLootDenominations
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumDrops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SmallDenominationThreshold                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SmallDrops                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MediumDrops                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LargeDrops                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOrionHelperFunctions_C::STATIC_MakeLootDenominations(int32_t NumDrops, int32_t SmallDenominationThreshold, class UObject* __WorldContext, int32_t* SmallDrops, int32_t* MediumDrops, int32_t* LargeDrops)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionHelperFunctions.OrionHelperFunctions_C.MakeLootDenominations");
		
		UOrionHelperFunctions_C_MakeLootDenominations_Params params {};
		params.NumDrops = NumDrops;
		params.SmallDenominationThreshold = SmallDenominationThreshold;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SmallDrops != nullptr)
			*SmallDrops = params.SmallDrops;
		if (MediumDrops != nullptr)
			*MediumDrops = params.MediumDrops;
		if (LargeDrops != nullptr)
			*LargeDrops = params.LargeDrops;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionHelperFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionHelperFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OrionHelperFunctions.OrionHelperFunctions_C");
		return ptr;
	}

}


