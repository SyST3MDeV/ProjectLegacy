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
	 * BlueprintGeneratedClass BP_AI_Spawner_Jungle_Red.BP_AI_Spawner_Jungle_Red_C
	 * Size -> 0x0013 (FullSize[0x0698] - InheritedSize[0x0685])
	 */
	class ABP_AI_Spawner_Jungle_Red_C : public ABP_OrionCharAISpawner_Jungle_C
	{
	public:
		unsigned char                                              UnknownData_EIRB[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionGameplayVolumeComponent*                       OrionGameplayVolume;                                     // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USphereComponent*                                    LocationOverlap;                                         // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
