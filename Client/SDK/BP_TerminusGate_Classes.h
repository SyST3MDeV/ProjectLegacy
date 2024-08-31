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
	 * BlueprintGeneratedClass BP_TerminusGate.BP_TerminusGate_C
	 * Size -> 0x00E7 (FullSize[0x0538] - InheritedSize[0x0451])
	 */
	class ABP_TerminusGate_C : public ABP_TerminusEmissives_C
	{
	public:
		unsigned char                                              UnknownData_B2UW[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 Light_01Spot;                                            // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                SM_Terminus_Mesh_Mist;                                   // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     MoveMist;                                                // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_01;                                                // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_08;                                                // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 Light_08Spot;                                            // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_07;                                                // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_06;                                                // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_05;                                                // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_04;                                                // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_03;                                                // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                Light_02;                                                // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      Timeline_0_0_NewTrack_0_BC65AFB143CD4CABCD7B68867DAC7742; // 0x04C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0_0__Direction_BC65AFB143CD4CABCD7B68867DAC7742; // 0x04C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BMSR[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_0_1;                                            // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                TeamColorName;                                           // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_GSM_BaseMOBA_C*                                  GameState_1;                                             // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LightSaturationScalar;                                   // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseIntensity;                                           // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NumLights;                                               // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMNB[0x4];                                   // 0x04EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULightComponent*>                             LightsArray;                                             // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UStaticMesh*                                         Mesh;                                                    // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MistMID_01;                                              // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MistMID_02;                                              // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MistMID_03;                                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MistMID_04;                                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UStaticMesh*                                         MistMesh;                                                // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MeshMistVisibilty;                                       // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJSX[0x3];                                   // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpotlightBrightness;                                     // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HandleLightTeamColor(struct FLinearColor* TeamColor);
		void LightArrayMaker();
		void HandleLightBrightness(class ULightComponent* Light, float Fader);
		void UserConstructionScript();
		void Timeline_0_0__FinishedFunc();
		void Timeline_0_0__UpdateFunc();
		void ReceiveBeginPlay();
		void OscillateBack();
		void HeroHasRecalled(EOrionTeam HeroTeam);
		void FlareKeyhole();
		void WarmupUpdate();
		void HandleTeamColors();
		void ExecuteUbergraph_BP_TerminusGate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
