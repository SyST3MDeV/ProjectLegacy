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
	 * BlueprintGeneratedClass BP_CharSelect_Lights.BP_CharSelect_Lights_C
	 * Size -> 0x0038 (FullSize[0x03B8] - InheritedSize[0x0380])
	 */
	class ABP_CharSelect_Lights_C : public AActor
	{
	public:
		class USpotLightComponent*                                 LightComponent06;                                        // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 LightComponent05;                                        // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 LightComponent03;                                        // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 LightComponent02;                                        // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 LightComponent01;                                        // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 LightComponent0;                                         // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     SharedRoot;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
