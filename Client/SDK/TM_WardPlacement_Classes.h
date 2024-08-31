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
	 * BlueprintGeneratedClass TM_WardPlacement.TM_WardPlacement_C
	 * Size -> 0x0038 (FullSize[0x0898] - InheritedSize[0x0860])
	 */
	class ATM_WardPlacement_C : public ATM_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                RangeMesh;                                               // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialInterface*                                  M_ShadowPlaneShimmer;                                    // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TM_OverrideRadius;                                       // 0x0878(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLD5[0x4];                                   // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  M_Range;                                                 // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            DMI_Range;                                               // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnTargetingModeActivate();
		void OnTargetingModeCancel();
		void OnTargetingModeConfirm();
		void ExecuteUbergraph_TM_WardPlacement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
