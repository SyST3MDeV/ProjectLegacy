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
	 * BlueprintGeneratedClass BP_PortalFans.BP_PortalFans_C
	 * Size -> 0x00B0 (FullSize[0x0480] - InheritedSize[0x03D0])
	 */
	class ABP_PortalFans_C : public AOrionBaseActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     PortalFanLoopSound;                                      // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 SpotLight;                                               // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      PowerDownFanAudio_Pitch_0389C5644EE6EE55AF3118B8496D81B4; // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PowerDownFanAudio_Volume_0389C5644EE6EE55AF3118B8496D81B4; // 0x0404(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         PowerDownFanAudio__Direction_0389C5644EE6EE55AF3118B8496D81B4; // 0x0408(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W6Q6[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PowerDownFanAudio;                                       // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PowerUpFanAudio_Pitch_484E423F4B978DB1587ED88DBD955EEC;  // 0x0418(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PowerUpFanAudio_Volume_484E423F4B978DB1587ED88DBD955EEC; // 0x041C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         PowerUpFanAudio__Direction_484E423F4B978DB1587ED88DBD955EEC; // 0x0420(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0YSD[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PowerUpFanAudio;                                         // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_0_NewTrack_1_A20DF6864371C7961612D198FB3A64EC;  // 0x0430(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_A20DF6864371C7961612D198FB3A64EC;  // 0x0434(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YT1Z[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_GMM_BaseMOBA_C*                                  GameMode;                                                // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_GSM_BaseMOBA_C*                                  GameState;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinMaterialBrightness;                                   // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxMaterialBrightness;                                   // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxLightBrightness;                                      // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDead;                                                  // 0x045C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7MFU[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynaMat;                                                 // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                SM_1MeterDisc;                                           // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMatchStarted;                                           // 0x0470(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       bMatchEnded;                                             // 0x0471(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_2QN5[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            LightFunction;                                           // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_bMatchEnded();
		void OnRep_bMatchStarted();
		void HandleTeamColors();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void PowerUpFanAudio__FinishedFunc();
		void PowerUpFanAudio__UpdateFunc();
		void PowerDownFanAudio__FinishedFunc();
		void PowerDownFanAudio__UpdateFunc();
		void ReceiveBeginPlay();
		void SpinUpFans();
		void TurnOffFans();
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void MatchHasStarted();
		void MatchHasEnded();
		void StartFanAudio();
		void StopFanAudio();
		void ExecuteUbergraph_BP_PortalFans(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
