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
	 * BlueprintGeneratedClass BP_CameraLensTimer_Countdown.BP_CameraLensTimer_Countdown_C
	 * Size -> 0x0004 (FullSize[0x0444] - InheritedSize[0x0440])
	 */
	class ABP_CameraLensTimer_Countdown_C : public AEmitterCameraLensEffectBase
	{
	public:
		float                                                      TimerDuration;                                           // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
