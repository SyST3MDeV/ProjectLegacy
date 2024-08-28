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
	 * 		RVA    -> 0x0343B1C0
	 * 		Name   -> Function GearVR.GearVRFunctionLibrary.SetCPUAndGPULevels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            CPULevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GPULevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGearVRFunctionLibrary::STATIC_SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GearVR.GearVRFunctionLibrary.SetCPUAndGPULevels");
		
		UGearVRFunctionLibrary_SetCPUAndGPULevels_Params params {};
		params.CPULevel = CPULevel;
		params.GPULevel = GPULevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A9B540
	 * 		Name   -> Function GearVR.GearVRFunctionLibrary.IsPowerLevelStateThrottled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UGearVRFunctionLibrary::STATIC_IsPowerLevelStateThrottled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GearVR.GearVRFunctionLibrary.IsPowerLevelStateThrottled");
		
		UGearVRFunctionLibrary_IsPowerLevelStateThrottled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A9B540
	 * 		Name   -> Function GearVR.GearVRFunctionLibrary.IsPowerLevelStateMinimum
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UGearVRFunctionLibrary::STATIC_IsPowerLevelStateMinimum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GearVR.GearVRFunctionLibrary.IsPowerLevelStateMinimum");
		
		UGearVRFunctionLibrary_IsPowerLevelStateMinimum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0343B190
	 * 		Name   -> Function GearVR.GearVRFunctionLibrary.GetTemperatureInCelsius
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UGearVRFunctionLibrary::STATIC_GetTemperatureInCelsius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GearVR.GearVRFunctionLibrary.GetTemperatureInCelsius");
		
		UGearVRFunctionLibrary_GetTemperatureInCelsius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0343B190
	 * 		Name   -> Function GearVR.GearVRFunctionLibrary.GetBatteryLevel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UGearVRFunctionLibrary::STATIC_GetBatteryLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GearVR.GearVRFunctionLibrary.GetBatteryLevel");
		
		UGearVRFunctionLibrary_GetBatteryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A9B540
	 * 		Name   -> Function GearVR.GearVRFunctionLibrary.AreHeadPhonesPluggedIn
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UGearVRFunctionLibrary::STATIC_AreHeadPhonesPluggedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GearVR.GearVRFunctionLibrary.AreHeadPhonesPluggedIn");
		
		UGearVRFunctionLibrary_AreHeadPhonesPluggedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGearVRFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGearVRFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GearVR.GearVRFunctionLibrary");
		return ptr;
	}

}


