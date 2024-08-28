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
	 * BlueprintGeneratedClass TM_Sector.TM_Sector_C
	 * Size -> 0x0020 (FullSize[0x0880] - InheritedSize[0x0860])
	 */
	class ATM_Sector_C : public ATM_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     RadiusDecal;                                             // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       UseDecal;                                                // 0x0870(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JY72[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            RadiusDecalMat;                                          // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnFacetSectorBuilt(float AngleHorizontal, float RadiusMin, float RadiusMax, float HeightMin, float HeightMax);
		void OnTargetingModeActivate();
		void OnTargetingModeCancel();
		void OnTargetingModeConfirm();
		void ExecuteUbergraph_TM_Sector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
