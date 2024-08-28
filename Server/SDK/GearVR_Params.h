#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GearVR.GearVRFunctionLibrary.SetCPUAndGPULevels
	 */
	struct UGearVRFunctionLibrary_SetCPUAndGPULevels_Params
	{
	public:
		int32_t                                                    CPULevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GPULevel;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GearVR.GearVRFunctionLibrary.IsPowerLevelStateThrottled
	 */
	struct UGearVRFunctionLibrary_IsPowerLevelStateThrottled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GearVR.GearVRFunctionLibrary.IsPowerLevelStateMinimum
	 */
	struct UGearVRFunctionLibrary_IsPowerLevelStateMinimum_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GearVR.GearVRFunctionLibrary.GetTemperatureInCelsius
	 */
	struct UGearVRFunctionLibrary_GetTemperatureInCelsius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GearVR.GearVRFunctionLibrary.GetBatteryLevel
	 */
	struct UGearVRFunctionLibrary_GetBatteryLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GearVR.GearVRFunctionLibrary.AreHeadPhonesPluggedIn
	 */
	struct UGearVRFunctionLibrary_AreHeadPhonesPluggedIn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
