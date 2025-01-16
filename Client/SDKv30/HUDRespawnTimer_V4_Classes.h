#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * WidgetBlueprintGeneratedClass HUDRespawnTimer_V4.HUDRespawnTimer-V4_C
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class UHUDRespawnTimerV4_C : public UOrionHUDRespawnTimer
	{
	public:
		unsigned char                                              UnknownData_PQN5[0x20];                                  // 0x0300(0x0020) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void ShowWidget();
		void HideWidget();
		void ExecuteUbergraph_HUDRespawnTimerV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
