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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GearVR.GearVRFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGearVRFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);
		bool STATIC_IsPowerLevelStateThrottled();
		bool STATIC_IsPowerLevelStateMinimum();
		float STATIC_GetTemperatureInCelsius();
		float STATIC_GetBatteryLevel();
		bool STATIC_AreHeadPhonesPluggedIn();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
