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
	 * BlueprintGeneratedClass BP_Prime_Helix_PrimaryFire_BeamVol.BP_Prime_Helix_PrimaryFire_BeamVol_C
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class ABP_Prime_Helix_PrimaryFire_BeamVol_C : public AOrionBaseActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Arrow;                                                   // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UOrionGameplayVolumeComponent*                       OrionGameplayVolume;                                     // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UBoxComponent*                                       BoxCollision;                                            // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void StopBeam();
		void FireBeam();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Prime_Helix_PrimaryFire_BeamVol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
