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
	 * 		Name   -> Function WeeklyPackInfo.WeeklyPackInfo_C.SetPackData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpCardPackItemDefinition*             CardPack                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyPackInfo_C::SetPackData(class UOrionMcpCardPackItemDefinition* CardPack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyPackInfo.WeeklyPackInfo_C.SetPackData");
		
		UWeeklyPackInfo_C_SetPackData_Params params {};
		params.CardPack = CardPack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyPackInfo.WeeklyPackInfo_C.OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyPackInfo_C::OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyPackInfo.WeeklyPackInfo_C.OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F");
		
		UWeeklyPackInfo_C_OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyPackInfo.WeeklyPackInfo_C.OnOfferSet
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FStoreOfferBP                               InOffer                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UWeeklyPackInfo_C::OnOfferSet(const struct FStoreOfferBP& InOffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyPackInfo.WeeklyPackInfo_C.OnOfferSet");
		
		UWeeklyPackInfo_C_OnOfferSet_Params params {};
		params.InOffer = InOffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyPackInfo.WeeklyPackInfo_C.ExecuteUbergraph_WeeklyPackInfo
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyPackInfo_C::ExecuteUbergraph_WeeklyPackInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyPackInfo.WeeklyPackInfo_C.ExecuteUbergraph_WeeklyPackInfo");
		
		UWeeklyPackInfo_C_ExecuteUbergraph_WeeklyPackInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeeklyPackInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeeklyPackInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeeklyPackInfo.WeeklyPackInfo_C");
		return ptr;
	}

}


